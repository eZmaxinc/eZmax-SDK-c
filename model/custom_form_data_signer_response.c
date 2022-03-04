#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_signer_response.h"



custom_form_data_signer_response_t *custom_form_data_signer_response_create(
    int fki_ezsignfoldersignerassociation_id,
    int fki_user_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    custom_form_data_signer_response_t *custom_form_data_signer_response_local_var = malloc(sizeof(custom_form_data_signer_response_t));
    if (!custom_form_data_signer_response_local_var) {
        return NULL;
    }
    custom_form_data_signer_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    custom_form_data_signer_response_local_var->fki_user_id = fki_user_id;
    custom_form_data_signer_response_local_var->s_contact_firstname = s_contact_firstname;
    custom_form_data_signer_response_local_var->s_contact_lastname = s_contact_lastname;
    custom_form_data_signer_response_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;

    return custom_form_data_signer_response_local_var;
}


void custom_form_data_signer_response_free(custom_form_data_signer_response_t *custom_form_data_signer_response) {
    if(NULL == custom_form_data_signer_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_form_data_signer_response->s_contact_firstname) {
        free(custom_form_data_signer_response->s_contact_firstname);
        custom_form_data_signer_response->s_contact_firstname = NULL;
    }
    if (custom_form_data_signer_response->s_contact_lastname) {
        free(custom_form_data_signer_response->s_contact_lastname);
        custom_form_data_signer_response->s_contact_lastname = NULL;
    }
    if (custom_form_data_signer_response->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, custom_form_data_signer_response->a_obj_ezsignformfieldgroup) {
            custom_form_data_ezsignformfieldgroup_response_free(listEntry->data);
        }
        list_freeList(custom_form_data_signer_response->a_obj_ezsignformfieldgroup);
        custom_form_data_signer_response->a_obj_ezsignformfieldgroup = NULL;
    }
    free(custom_form_data_signer_response);
}

cJSON *custom_form_data_signer_response_convertToJSON(custom_form_data_signer_response_t *custom_form_data_signer_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_form_data_signer_response->fki_ezsignfoldersignerassociation_id
    if (!custom_form_data_signer_response->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", custom_form_data_signer_response->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_form_data_signer_response->fki_user_id
    if(custom_form_data_signer_response->fki_user_id) { 
    if(cJSON_AddNumberToObject(item, "fkiUserID", custom_form_data_signer_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // custom_form_data_signer_response->s_contact_firstname
    if (!custom_form_data_signer_response->s_contact_firstname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sContactFirstname", custom_form_data_signer_response->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // custom_form_data_signer_response->s_contact_lastname
    if (!custom_form_data_signer_response->s_contact_lastname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sContactLastname", custom_form_data_signer_response->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // custom_form_data_signer_response->a_obj_ezsignformfieldgroup
    if (!custom_form_data_signer_response->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (custom_form_data_signer_response->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, custom_form_data_signer_response->a_obj_ezsignformfieldgroup) {
    cJSON *itemLocal = custom_form_data_ezsignformfieldgroup_response_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_form_data_signer_response_t *custom_form_data_signer_response_parseFromJSON(cJSON *custom_form_data_signer_responseJSON){

    custom_form_data_signer_response_t *custom_form_data_signer_response_local_var = NULL;

    // custom_form_data_signer_response->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_form_data_signer_responseJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_form_data_signer_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_form_data_signer_responseJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // custom_form_data_signer_response->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(custom_form_data_signer_responseJSON, "sContactFirstname");
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // custom_form_data_signer_response->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(custom_form_data_signer_responseJSON, "sContactLastname");
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // custom_form_data_signer_response->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(custom_form_data_signer_responseJSON, "a_objEzsignformfieldgroup");
    if (!a_obj_ezsignformfieldgroup) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldgroupList;
    
    cJSON *a_obj_ezsignformfieldgroup_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroup_local_nonprimitive,a_obj_ezsignformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroup_local_nonprimitive)){
            goto end;
        }
        custom_form_data_ezsignformfieldgroup_response_t *a_obj_ezsignformfieldgroupItem = custom_form_data_ezsignformfieldgroup_response_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }


    custom_form_data_signer_response_local_var = custom_form_data_signer_response_create (
        fki_ezsignfoldersignerassociation_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        a_obj_ezsignformfieldgroupList
        );

    return custom_form_data_signer_response_local_var;
end:
    return NULL;

}
