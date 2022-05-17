#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_words_positions_v1_response_all_of.h"



ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of_create(
    list_t *m_payload
    ) {
    ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of_local_var = malloc(sizeof(ezsigndocument_get_words_positions_v1_response_all_of_t));
    if (!ezsigndocument_get_words_positions_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigndocument_get_words_positions_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigndocument_get_words_positions_v1_response_all_of_local_var;
}


void ezsigndocument_get_words_positions_v1_response_all_of_free(ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of) {
    if(NULL == ezsigndocument_get_words_positions_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_words_positions_v1_response_all_of->m_payload) {
        list_ForEach(listEntry, ezsigndocument_get_words_positions_v1_response_all_of->m_payload) {
            custom_word_position_word_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_words_positions_v1_response_all_of->m_payload);
        ezsigndocument_get_words_positions_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigndocument_get_words_positions_v1_response_all_of);
}

cJSON *ezsigndocument_get_words_positions_v1_response_all_of_convertToJSON(ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_words_positions_v1_response_all_of->m_payload
    if (!ezsigndocument_get_words_positions_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload = cJSON_AddArrayToObject(item, "mPayload");
    if(m_payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *m_payloadListEntry;
    if (ezsigndocument_get_words_positions_v1_response_all_of->m_payload) {
    list_ForEach(m_payloadListEntry, ezsigndocument_get_words_positions_v1_response_all_of->m_payload) {
    cJSON *itemLocal = custom_word_position_word_response_convertToJSON(m_payloadListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(m_payload, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_response_all_ofJSON){

    ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of_local_var = NULL;

    // define the local list for ezsigndocument_get_words_positions_v1_response_all_of->m_payload
    list_t *m_payloadList = NULL;

    // ezsigndocument_get_words_positions_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_words_positions_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    cJSON *m_payload_local_nonprimitive = NULL;
    if(!cJSON_IsArray(m_payload)){
        goto end; //nonprimitive container
    }

    m_payloadList = list_createList();

    cJSON_ArrayForEach(m_payload_local_nonprimitive,m_payload )
    {
        if(!cJSON_IsObject(m_payload_local_nonprimitive)){
            goto end;
        }
        custom_word_position_word_response_t *m_payloadItem = custom_word_position_word_response_parseFromJSON(m_payload_local_nonprimitive);

        list_addElement(m_payloadList, m_payloadItem);
    }


    ezsigndocument_get_words_positions_v1_response_all_of_local_var = ezsigndocument_get_words_positions_v1_response_all_of_create (
        m_payloadList
        );

    return ezsigndocument_get_words_positions_v1_response_all_of_local_var;
end:
    if (m_payloadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, m_payloadList) {
            custom_word_position_word_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(m_payloadList);
        m_payloadList = NULL;
    }
    return NULL;

}
