#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_signer_response.h"



custom_form_data_signer_response_t *custom_form_data_signer_response_create(
    int fki_ezsignfoldersignerassociation_id,
    int fki_user_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    list_t *a_obj_ezsignformfieldgroup_compound
    ) {
    custom_form_data_signer_response_t *custom_form_data_signer_response_local_var = malloc(sizeof(custom_form_data_signer_response_t));
    if (!custom_form_data_signer_response_local_var) {
        return NULL;
    }
    custom_form_data_signer_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    custom_form_data_signer_response_local_var->fki_user_id = fki_user_id;
    custom_form_data_signer_response_local_var->s_contact_firstname = s_contact_firstname;
    custom_form_data_signer_response_local_var->s_contact_lastname = s_contact_lastname;
    custom_form_data_signer_response_local_var->a_obj_ezsignformfieldgroup_compound = a_obj_ezsignformfieldgroup_compound;

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
    if (custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound) {
        list_ForEach(listEntry, custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound) {
            ezsignformfieldgroup_response_compound_free(listEntry->data);
        }
        list_freeList(custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound);
        custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound = NULL;
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


    // custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound
    if (!custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignformfieldgroup_compound = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroupCompound");
    if(a_obj_ezsignformfieldgroup_compound == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroup_compoundListEntry;
    if (custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound) {
    list_ForEach(a_obj_ezsignformfieldgroup_compoundListEntry, custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound) {
    cJSON *itemLocal = ezsignformfieldgroup_response_compound_convertToJSON(a_obj_ezsignformfieldgroup_compoundListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroup_compound, itemLocal);
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

    // custom_form_data_signer_response->a_obj_ezsignformfieldgroup_compound
    cJSON *a_obj_ezsignformfieldgroup_compound = cJSON_GetObjectItemCaseSensitive(custom_form_data_signer_responseJSON, "a_objEzsignformfieldgroupCompound");
    if (!a_obj_ezsignformfieldgroup_compound) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldgroup_compoundList;
    
    cJSON *a_obj_ezsignformfieldgroup_compound_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroup_compound)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroup_compoundList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroup_compound_local_nonprimitive,a_obj_ezsignformfieldgroup_compound )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroup_compound_local_nonprimitive)){
            goto end;
        }
        ezsignformfieldgroup_response_compound_t *a_obj_ezsignformfieldgroup_compoundItem = ezsignformfieldgroup_response_compound_parseFromJSON(a_obj_ezsignformfieldgroup_compound_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroup_compoundList, a_obj_ezsignformfieldgroup_compoundItem);
    }


    custom_form_data_signer_response_local_var = custom_form_data_signer_response_create (
        fki_ezsignfoldersignerassociation_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        a_obj_ezsignformfieldgroup_compoundList
        );

    return custom_form_data_signer_response_local_var;
end:
    return NULL;

}
