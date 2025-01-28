#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "language_get_autocomplete_v2_response_m_payload.h"



static language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_language
    ) {
    language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(language_get_autocomplete_v2_response_m_payload_t));
    if (!language_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    language_get_autocomplete_v2_response_m_payload_local_var->a_obj_language = a_obj_language;

    language_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return language_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_language
    ) {
    return language_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_language
        );
}

void language_get_autocomplete_v2_response_m_payload_free(language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload) {
    if(NULL == language_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(language_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "language_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (language_get_autocomplete_v2_response_m_payload->a_obj_language) {
        list_ForEach(listEntry, language_get_autocomplete_v2_response_m_payload->a_obj_language) {
            language_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(language_get_autocomplete_v2_response_m_payload->a_obj_language);
        language_get_autocomplete_v2_response_m_payload->a_obj_language = NULL;
    }
    free(language_get_autocomplete_v2_response_m_payload);
}

cJSON *language_get_autocomplete_v2_response_m_payload_convertToJSON(language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // language_get_autocomplete_v2_response_m_payload->a_obj_language
    if (!language_get_autocomplete_v2_response_m_payload->a_obj_language) {
        goto fail;
    }
    cJSON *a_obj_language = cJSON_AddArrayToObject(item, "a_objLanguage");
    if(a_obj_language == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_languageListEntry;
    if (language_get_autocomplete_v2_response_m_payload->a_obj_language) {
    list_ForEach(a_obj_languageListEntry, language_get_autocomplete_v2_response_m_payload->a_obj_language) {
    cJSON *itemLocal = language_autocomplete_element_response_convertToJSON(a_obj_languageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_language, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *language_get_autocomplete_v2_response_m_payloadJSON){

    language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for language_get_autocomplete_v2_response_m_payload->a_obj_language
    list_t *a_obj_languageList = NULL;

    // language_get_autocomplete_v2_response_m_payload->a_obj_language
    cJSON *a_obj_language = cJSON_GetObjectItemCaseSensitive(language_get_autocomplete_v2_response_m_payloadJSON, "a_objLanguage");
    if (cJSON_IsNull(a_obj_language)) {
        a_obj_language = NULL;
    }
    if (!a_obj_language) {
        goto end;
    }

    
    cJSON *a_obj_language_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_language)){
        goto end; //nonprimitive container
    }

    a_obj_languageList = list_createList();

    cJSON_ArrayForEach(a_obj_language_local_nonprimitive,a_obj_language )
    {
        if(!cJSON_IsObject(a_obj_language_local_nonprimitive)){
            goto end;
        }
        language_autocomplete_element_response_t *a_obj_languageItem = language_autocomplete_element_response_parseFromJSON(a_obj_language_local_nonprimitive);

        list_addElement(a_obj_languageList, a_obj_languageItem);
    }


    language_get_autocomplete_v2_response_m_payload_local_var = language_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_languageList
        );

    return language_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_languageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_languageList) {
            language_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_languageList);
        a_obj_languageList = NULL;
    }
    return NULL;

}
