#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsigndocument_get_ezsignannotations_response.h"



static custom_ezsigndocument_get_ezsignannotations_response_t *custom_ezsigndocument_get_ezsignannotations_response_create_internal(
    int *pki_ezsigndocument_id,
    char *s_ezsigndocument_name,
    list_t *a_obj_ezsignannotation
    ) {
    custom_ezsigndocument_get_ezsignannotations_response_t *custom_ezsigndocument_get_ezsignannotations_response_local_var = malloc(sizeof(custom_ezsigndocument_get_ezsignannotations_response_t));
    if (!custom_ezsigndocument_get_ezsignannotations_response_local_var) {
        return NULL;
    }
    memset(custom_ezsigndocument_get_ezsignannotations_response_local_var, 0, sizeof(custom_ezsigndocument_get_ezsignannotations_response_t));
    custom_ezsigndocument_get_ezsignannotations_response_local_var->_library_owned = 1;
    custom_ezsigndocument_get_ezsignannotations_response_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    custom_ezsigndocument_get_ezsignannotations_response_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    custom_ezsigndocument_get_ezsignannotations_response_local_var->a_obj_ezsignannotation = a_obj_ezsignannotation;
    return custom_ezsigndocument_get_ezsignannotations_response_local_var;
}

__attribute__((deprecated)) custom_ezsigndocument_get_ezsignannotations_response_t *custom_ezsigndocument_get_ezsignannotations_response_create(
    int *pki_ezsigndocument_id,
    char *s_ezsigndocument_name,
    list_t *a_obj_ezsignannotation
    ) {
    int *pki_ezsigndocument_id_copy = NULL;
    if (pki_ezsigndocument_id) {
        pki_ezsigndocument_id_copy = malloc(sizeof(int));
        if (pki_ezsigndocument_id_copy) *pki_ezsigndocument_id_copy = *pki_ezsigndocument_id;
    }
    custom_ezsigndocument_get_ezsignannotations_response_t *result = custom_ezsigndocument_get_ezsignannotations_response_create_internal (
        pki_ezsigndocument_id_copy,
        s_ezsigndocument_name,
        a_obj_ezsignannotation
        );
    if (!result) {
        free(pki_ezsigndocument_id_copy);
    }
    return result;
}

void custom_ezsigndocument_get_ezsignannotations_response_free(custom_ezsigndocument_get_ezsignannotations_response_t *custom_ezsigndocument_get_ezsignannotations_response) {
    if(NULL == custom_ezsigndocument_get_ezsignannotations_response){
        return ;
    }
    if(custom_ezsigndocument_get_ezsignannotations_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsigndocument_get_ezsignannotations_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id) {
        free(custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id);
        custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id = NULL;
    }
    if (custom_ezsigndocument_get_ezsignannotations_response->s_ezsigndocument_name) {
        free(custom_ezsigndocument_get_ezsignannotations_response->s_ezsigndocument_name);
        custom_ezsigndocument_get_ezsignannotations_response->s_ezsigndocument_name = NULL;
    }
    if (custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation) {
        list_ForEach(listEntry, custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation) {
            ezsignannotation_response_compound_free(listEntry->data);
        }
        list_freeList(custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation);
        custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation = NULL;
    }
    free(custom_ezsigndocument_get_ezsignannotations_response);
}

cJSON *custom_ezsigndocument_get_ezsignannotations_response_convertToJSON(custom_ezsigndocument_get_ezsignannotations_response_t *custom_ezsigndocument_get_ezsignannotations_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id
    if (!custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", *custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsigndocument_get_ezsignannotations_response->s_ezsigndocument_name
    if (!custom_ezsigndocument_get_ezsignannotations_response->s_ezsigndocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", custom_ezsigndocument_get_ezsignannotations_response->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation
    if (!custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation) {
        goto fail;
    }
    cJSON *a_obj_ezsignannotation = cJSON_AddArrayToObject(item, "a_objEzsignannotation");
    if(a_obj_ezsignannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignannotationListEntry;
    if (custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation) {
    list_ForEach(a_obj_ezsignannotationListEntry, custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation) {
    cJSON *itemLocal = ezsignannotation_response_compound_convertToJSON(a_obj_ezsignannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignannotation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsigndocument_get_ezsignannotations_response_t *custom_ezsigndocument_get_ezsignannotations_response_parseFromJSON(cJSON *custom_ezsigndocument_get_ezsignannotations_responseJSON){

    custom_ezsigndocument_get_ezsignannotations_response_t *custom_ezsigndocument_get_ezsignannotations_response_local_var = NULL;

    // define the local variable for custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id
    int *pki_ezsigndocument_id_local_var = NULL;

    char *s_ezsigndocument_name_local_str = NULL;

    // define the local list for custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation
    list_t *a_obj_ezsignannotationList = NULL;

    // custom_ezsigndocument_get_ezsignannotations_response->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_get_ezsignannotations_responseJSON, "pkiEzsigndocumentID");
    if (cJSON_IsNull(pki_ezsigndocument_id)) {
        pki_ezsigndocument_id = NULL;
    }
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    pki_ezsigndocument_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigndocument_id_local_var)
    {
        goto end;
    }
    *pki_ezsigndocument_id_local_var = pki_ezsigndocument_id->valuedouble;

    // custom_ezsigndocument_get_ezsignannotations_response->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_get_ezsignannotations_responseJSON, "sEzsigndocumentName");
    if (cJSON_IsNull(s_ezsigndocument_name)) {
        s_ezsigndocument_name = NULL;
    }
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // custom_ezsigndocument_get_ezsignannotations_response->a_obj_ezsignannotation
    cJSON *a_obj_ezsignannotation = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_get_ezsignannotations_responseJSON, "a_objEzsignannotation");
    if (cJSON_IsNull(a_obj_ezsignannotation)) {
        a_obj_ezsignannotation = NULL;
    }
    if (!a_obj_ezsignannotation) {
        goto end;
    }

    
    cJSON *a_obj_ezsignannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignannotation_local_nonprimitive,a_obj_ezsignannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsignannotation_local_nonprimitive)){
            goto end;
        }
        ezsignannotation_response_compound_t *a_obj_ezsignannotationItem = ezsignannotation_response_compound_parseFromJSON(a_obj_ezsignannotation_local_nonprimitive);

        list_addElement(a_obj_ezsignannotationList, a_obj_ezsignannotationItem);
    }


    if (s_ezsigndocument_name && !cJSON_IsNull(s_ezsigndocument_name)) s_ezsigndocument_name_local_str = strdup(s_ezsigndocument_name->valuestring);

    custom_ezsigndocument_get_ezsignannotations_response_local_var = custom_ezsigndocument_get_ezsignannotations_response_create_internal (
        pki_ezsigndocument_id_local_var,
        s_ezsigndocument_name_local_str,
        a_obj_ezsignannotationList
        );

    if (!custom_ezsigndocument_get_ezsignannotations_response_local_var) {
        goto end;
    }

    return custom_ezsigndocument_get_ezsignannotations_response_local_var;
end:
    if (pki_ezsigndocument_id_local_var) {
        free(pki_ezsigndocument_id_local_var);
        pki_ezsigndocument_id_local_var = NULL;
    }
    if (s_ezsigndocument_name_local_str) {
        free(s_ezsigndocument_name_local_str);
        s_ezsigndocument_name_local_str = NULL;
    }
    if (a_obj_ezsignannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignannotationList) {
            ezsignannotation_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignannotationList);
        a_obj_ezsignannotationList = NULL;
    }
    return NULL;

}
