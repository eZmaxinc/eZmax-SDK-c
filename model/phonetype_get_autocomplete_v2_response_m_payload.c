#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phonetype_get_autocomplete_v2_response_m_payload.h"



phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_phonetype
    ) {
    phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(phonetype_get_autocomplete_v2_response_m_payload_t));
    if (!phonetype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    phonetype_get_autocomplete_v2_response_m_payload_local_var->a_obj_phonetype = a_obj_phonetype;

    return phonetype_get_autocomplete_v2_response_m_payload_local_var;
}


void phonetype_get_autocomplete_v2_response_m_payload_free(phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload) {
    if(NULL == phonetype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype) {
        list_ForEach(listEntry, phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype) {
            phonetype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype);
        phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype = NULL;
    }
    free(phonetype_get_autocomplete_v2_response_m_payload);
}

cJSON *phonetype_get_autocomplete_v2_response_m_payload_convertToJSON(phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype
    if(phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype) {
    cJSON *a_obj_phonetype = cJSON_AddArrayToObject(item, "a_objPhonetype");
    if(a_obj_phonetype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_phonetypeListEntry;
    if (phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype) {
    list_ForEach(a_obj_phonetypeListEntry, phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype) {
    cJSON *itemLocal = phonetype_autocomplete_element_response_convertToJSON(a_obj_phonetypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_phonetype, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *phonetype_get_autocomplete_v2_response_m_payloadJSON){

    phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype
    list_t *a_obj_phonetypeList = NULL;

    // phonetype_get_autocomplete_v2_response_m_payload->a_obj_phonetype
    cJSON *a_obj_phonetype = cJSON_GetObjectItemCaseSensitive(phonetype_get_autocomplete_v2_response_m_payloadJSON, "a_objPhonetype");
    if (a_obj_phonetype) { 
    cJSON *a_obj_phonetype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_phonetype)){
        goto end; //nonprimitive container
    }

    a_obj_phonetypeList = list_createList();

    cJSON_ArrayForEach(a_obj_phonetype_local_nonprimitive,a_obj_phonetype )
    {
        if(!cJSON_IsObject(a_obj_phonetype_local_nonprimitive)){
            goto end;
        }
        phonetype_autocomplete_element_response_t *a_obj_phonetypeItem = phonetype_autocomplete_element_response_parseFromJSON(a_obj_phonetype_local_nonprimitive);

        list_addElement(a_obj_phonetypeList, a_obj_phonetypeItem);
    }
    }


    phonetype_get_autocomplete_v2_response_m_payload_local_var = phonetype_get_autocomplete_v2_response_m_payload_create (
        a_obj_phonetype ? a_obj_phonetypeList : NULL
        );

    return phonetype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_phonetypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_phonetypeList) {
            phonetype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_phonetypeList);
        a_obj_phonetypeList = NULL;
    }
    return NULL;

}
