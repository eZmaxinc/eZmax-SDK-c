#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfolder_ezsignsignatures_automatic_response.h"



static custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response_create_internal(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_ezsigndocument
    ) {
    custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response_local_var = malloc(sizeof(custom_ezsignfolder_ezsignsignatures_automatic_response_t));
    if (!custom_ezsignfolder_ezsignsignatures_automatic_response_local_var) {
        return NULL;
    }
    custom_ezsignfolder_ezsignsignatures_automatic_response_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    custom_ezsignfolder_ezsignsignatures_automatic_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_ezsignfolder_ezsignsignatures_automatic_response_local_var->a_obj_ezsigndocument = a_obj_ezsigndocument;

    custom_ezsignfolder_ezsignsignatures_automatic_response_local_var->_library_owned = 1;
    return custom_ezsignfolder_ezsignsignatures_automatic_response_local_var;
}

__attribute__((deprecated)) custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_ezsigndocument
    ) {
    return custom_ezsignfolder_ezsignsignatures_automatic_response_create_internal (
        pki_ezsignfolder_id,
        s_ezsignfolder_description,
        a_obj_ezsigndocument
        );
}

void custom_ezsignfolder_ezsignsignatures_automatic_response_free(custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response) {
    if(NULL == custom_ezsignfolder_ezsignsignatures_automatic_response){
        return ;
    }
    if(custom_ezsignfolder_ezsignsignatures_automatic_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfolder_ezsignsignatures_automatic_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfolder_ezsignsignatures_automatic_response->s_ezsignfolder_description) {
        free(custom_ezsignfolder_ezsignsignatures_automatic_response->s_ezsignfolder_description);
        custom_ezsignfolder_ezsignsignatures_automatic_response->s_ezsignfolder_description = NULL;
    }
    if (custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument) {
        list_ForEach(listEntry, custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument) {
            custom_ezsigndocument_ezsignsignatures_automatic_response_free(listEntry->data);
        }
        list_freeList(custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument);
        custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument = NULL;
    }
    free(custom_ezsignfolder_ezsignsignatures_automatic_response);
}

cJSON *custom_ezsignfolder_ezsignsignatures_automatic_response_convertToJSON(custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfolder_ezsignsignatures_automatic_response->pki_ezsignfolder_id
    if (!custom_ezsignfolder_ezsignsignatures_automatic_response->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", custom_ezsignfolder_ezsignsignatures_automatic_response->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfolder_ezsignsignatures_automatic_response->s_ezsignfolder_description
    if (!custom_ezsignfolder_ezsignsignatures_automatic_response->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_ezsignfolder_ezsignsignatures_automatic_response->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument
    if (!custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument) {
        goto fail;
    }
    cJSON *a_obj_ezsigndocument = cJSON_AddArrayToObject(item, "a_objEzsigndocument");
    if(a_obj_ezsigndocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndocumentListEntry;
    if (custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument) {
    list_ForEach(a_obj_ezsigndocumentListEntry, custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument) {
    cJSON *itemLocal = custom_ezsigndocument_ezsignsignatures_automatic_response_convertToJSON(a_obj_ezsigndocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndocument, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response_parseFromJSON(cJSON *custom_ezsignfolder_ezsignsignatures_automatic_responseJSON){

    custom_ezsignfolder_ezsignsignatures_automatic_response_t *custom_ezsignfolder_ezsignsignatures_automatic_response_local_var = NULL;

    // define the local list for custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument
    list_t *a_obj_ezsigndocumentList = NULL;

    // custom_ezsignfolder_ezsignsignatures_automatic_response->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolder_ezsignsignatures_automatic_responseJSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfolder_ezsignsignatures_automatic_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolder_ezsignsignatures_automatic_responseJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_ezsignfolder_ezsignsignatures_automatic_response->a_obj_ezsigndocument
    cJSON *a_obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolder_ezsignsignatures_automatic_responseJSON, "a_objEzsigndocument");
    if (cJSON_IsNull(a_obj_ezsigndocument)) {
        a_obj_ezsigndocument = NULL;
    }
    if (!a_obj_ezsigndocument) {
        goto end;
    }

    
    cJSON *a_obj_ezsigndocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigndocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndocument_local_nonprimitive,a_obj_ezsigndocument )
    {
        if(!cJSON_IsObject(a_obj_ezsigndocument_local_nonprimitive)){
            goto end;
        }
        custom_ezsigndocument_ezsignsignatures_automatic_response_t *a_obj_ezsigndocumentItem = custom_ezsigndocument_ezsignsignatures_automatic_response_parseFromJSON(a_obj_ezsigndocument_local_nonprimitive);

        list_addElement(a_obj_ezsigndocumentList, a_obj_ezsigndocumentItem);
    }


    custom_ezsignfolder_ezsignsignatures_automatic_response_local_var = custom_ezsignfolder_ezsignsignatures_automatic_response_create_internal (
        pki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        a_obj_ezsigndocumentList
        );

    return custom_ezsignfolder_ezsignsignatures_automatic_response_local_var;
end:
    if (a_obj_ezsigndocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndocumentList) {
            custom_ezsigndocument_ezsignsignatures_automatic_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndocumentList);
        a_obj_ezsigndocumentList = NULL;
    }
    return NULL;

}
