#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldersignerassociationstatus_response.h"



custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_create(
    int fki_ezsignfoldersignerassociation_id,
    char *s_ezsignfoldersignerassociationstatus_lastname,
    char *s_ezsignfoldersignerassociationstatus_firstname,
    list_t *a_obj_ezsignsignaturestatus
    ) {
    custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_local_var = malloc(sizeof(custom_ezsignfoldersignerassociationstatus_response_t));
    if (!custom_ezsignfoldersignerassociationstatus_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldersignerassociationstatus_response_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    custom_ezsignfoldersignerassociationstatus_response_local_var->s_ezsignfoldersignerassociationstatus_lastname = s_ezsignfoldersignerassociationstatus_lastname;
    custom_ezsignfoldersignerassociationstatus_response_local_var->s_ezsignfoldersignerassociationstatus_firstname = s_ezsignfoldersignerassociationstatus_firstname;
    custom_ezsignfoldersignerassociationstatus_response_local_var->a_obj_ezsignsignaturestatus = a_obj_ezsignsignaturestatus;

    return custom_ezsignfoldersignerassociationstatus_response_local_var;
}


void custom_ezsignfoldersignerassociationstatus_response_free(custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response) {
    if(NULL == custom_ezsignfoldersignerassociationstatus_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname) {
        free(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname);
        custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname = NULL;
    }
    if (custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname) {
        free(custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname);
        custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname = NULL;
    }
    if (custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
        list_ForEach(listEntry, custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
            custom_ezsignsignaturestatus_response_free(listEntry->data);
        }
        list_freeList(custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus);
        custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus = NULL;
    }
    free(custom_ezsignfoldersignerassociationstatus_response);
}

cJSON *custom_ezsignfoldersignerassociationstatus_response_convertToJSON(custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id
    if (!custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname
    if (!custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfoldersignerassociationstatusLastname", custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname
    if (!custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfoldersignerassociationstatusFirstname", custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus
    if (!custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignsignaturestatus = cJSON_AddArrayToObject(item, "a_objEzsignsignaturestatus");
    if(a_obj_ezsignsignaturestatus == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturestatusListEntry;
    if (custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
    list_ForEach(a_obj_ezsignsignaturestatusListEntry, custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus) {
    cJSON *itemLocal = custom_ezsignsignaturestatus_response_convertToJSON(a_obj_ezsignsignaturestatusListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturestatus, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_parseFromJSON(cJSON *custom_ezsignfoldersignerassociationstatus_responseJSON){

    custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_local_var = NULL;

    // custom_ezsignfoldersignerassociationstatus_response->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_lastname
    cJSON *s_ezsignfoldersignerassociationstatus_lastname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "sEzsignfoldersignerassociationstatusLastname");
    if (!s_ezsignfoldersignerassociationstatus_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldersignerassociationstatus_lastname))
    {
    goto end; //String
    }

    // custom_ezsignfoldersignerassociationstatus_response->s_ezsignfoldersignerassociationstatus_firstname
    cJSON *s_ezsignfoldersignerassociationstatus_firstname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "sEzsignfoldersignerassociationstatusFirstname");
    if (!s_ezsignfoldersignerassociationstatus_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldersignerassociationstatus_firstname))
    {
    goto end; //String
    }

    // custom_ezsignfoldersignerassociationstatus_response->a_obj_ezsignsignaturestatus
    cJSON *a_obj_ezsignsignaturestatus = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationstatus_responseJSON, "a_objEzsignsignaturestatus");
    if (!a_obj_ezsignsignaturestatus) {
        goto end;
    }

    list_t *a_obj_ezsignsignaturestatusList;
    
    cJSON *a_obj_ezsignsignaturestatus_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignsignaturestatus)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturestatusList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturestatus_local_nonprimitive,a_obj_ezsignsignaturestatus )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturestatus_local_nonprimitive)){
            goto end;
        }
        custom_ezsignsignaturestatus_response_t *a_obj_ezsignsignaturestatusItem = custom_ezsignsignaturestatus_response_parseFromJSON(a_obj_ezsignsignaturestatus_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturestatusList, a_obj_ezsignsignaturestatusItem);
    }


    custom_ezsignfoldersignerassociationstatus_response_local_var = custom_ezsignfoldersignerassociationstatus_response_create (
        fki_ezsignfoldersignerassociation_id->valuedouble,
        strdup(s_ezsignfoldersignerassociationstatus_lastname->valuestring),
        strdup(s_ezsignfoldersignerassociationstatus_firstname->valuestring),
        a_obj_ezsignsignaturestatusList
        );

    return custom_ezsignfoldersignerassociationstatus_response_local_var;
end:
    return NULL;

}
