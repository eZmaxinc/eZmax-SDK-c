#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsigndocument_ezsignsignatures_automatic_response.h"



custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response_create(
    int pki_ezsigndocument_id,
    char *s_ezsigndocument_name,
    list_t *a_obj_ezsignsignature
    ) {
    custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response_local_var = malloc(sizeof(custom_ezsigndocument_ezsignsignatures_automatic_response_t));
    if (!custom_ezsigndocument_ezsignsignatures_automatic_response_local_var) {
        return NULL;
    }
    custom_ezsigndocument_ezsignsignatures_automatic_response_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    custom_ezsigndocument_ezsignsignatures_automatic_response_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    custom_ezsigndocument_ezsignsignatures_automatic_response_local_var->a_obj_ezsignsignature = a_obj_ezsignsignature;

    return custom_ezsigndocument_ezsignsignatures_automatic_response_local_var;
}


void custom_ezsigndocument_ezsignsignatures_automatic_response_free(custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response) {
    if(NULL == custom_ezsigndocument_ezsignsignatures_automatic_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsigndocument_ezsignsignatures_automatic_response->s_ezsigndocument_name) {
        free(custom_ezsigndocument_ezsignsignatures_automatic_response->s_ezsigndocument_name);
        custom_ezsigndocument_ezsignsignatures_automatic_response->s_ezsigndocument_name = NULL;
    }
    if (custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature) {
        list_ForEach(listEntry, custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature) {
            custom_ezsignsignature_ezsignsignatures_automatic_response_free(listEntry->data);
        }
        list_freeList(custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature);
        custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature = NULL;
    }
    free(custom_ezsigndocument_ezsignsignatures_automatic_response);
}

cJSON *custom_ezsigndocument_ezsignsignatures_automatic_response_convertToJSON(custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsigndocument_ezsignsignatures_automatic_response->pki_ezsigndocument_id
    if (!custom_ezsigndocument_ezsignsignatures_automatic_response->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", custom_ezsigndocument_ezsignsignatures_automatic_response->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsigndocument_ezsignsignatures_automatic_response->s_ezsigndocument_name
    if (!custom_ezsigndocument_ezsignsignatures_automatic_response->s_ezsigndocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", custom_ezsigndocument_ezsignsignatures_automatic_response->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature
    if (!custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignature = cJSON_AddArrayToObject(item, "a_objEzsignsignature");
    if(a_obj_ezsignsignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignatureListEntry;
    if (custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature) {
    list_ForEach(a_obj_ezsignsignatureListEntry, custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature) {
    cJSON *itemLocal = custom_ezsignsignature_ezsignsignatures_automatic_response_convertToJSON(a_obj_ezsignsignatureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignature, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response_parseFromJSON(cJSON *custom_ezsigndocument_ezsignsignatures_automatic_responseJSON){

    custom_ezsigndocument_ezsignsignatures_automatic_response_t *custom_ezsigndocument_ezsignsignatures_automatic_response_local_var = NULL;

    // define the local list for custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature
    list_t *a_obj_ezsignsignatureList = NULL;

    // custom_ezsigndocument_ezsignsignatures_automatic_response->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_ezsignsignatures_automatic_responseJSON, "pkiEzsigndocumentID");
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // custom_ezsigndocument_ezsignsignatures_automatic_response->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_ezsignsignatures_automatic_responseJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // custom_ezsigndocument_ezsignsignatures_automatic_response->a_obj_ezsignsignature
    cJSON *a_obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_ezsignsignatures_automatic_responseJSON, "a_objEzsignsignature");
    if (!a_obj_ezsignsignature) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsignature_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignature)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignatureList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignature_local_nonprimitive,a_obj_ezsignsignature )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignature_local_nonprimitive)){
            goto end;
        }
        custom_ezsignsignature_ezsignsignatures_automatic_response_t *a_obj_ezsignsignatureItem = custom_ezsignsignature_ezsignsignatures_automatic_response_parseFromJSON(a_obj_ezsignsignature_local_nonprimitive);

        list_addElement(a_obj_ezsignsignatureList, a_obj_ezsignsignatureItem);
    }


    custom_ezsigndocument_ezsignsignatures_automatic_response_local_var = custom_ezsigndocument_ezsignsignatures_automatic_response_create (
        pki_ezsigndocument_id->valuedouble,
        strdup(s_ezsigndocument_name->valuestring),
        a_obj_ezsignsignatureList
        );

    return custom_ezsigndocument_ezsignsignatures_automatic_response_local_var;
end:
    if (a_obj_ezsignsignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignatureList) {
            custom_ezsignsignature_ezsignsignatures_automatic_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignatureList);
        a_obj_ezsignsignatureList = NULL;
    }
    return NULL;

}
