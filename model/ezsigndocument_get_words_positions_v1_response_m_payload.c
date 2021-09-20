#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_words_positions_v1_response_m_payload.h"



ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_create(
    list_t *a_s_words
    ) {
    ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_words_positions_v1_response_m_payload_t));
    if (!ezsigndocument_get_words_positions_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_words_positions_v1_response_m_payload_local_var->a_s_words = a_s_words;

    return ezsigndocument_get_words_positions_v1_response_m_payload_local_var;
}


void ezsigndocument_get_words_positions_v1_response_m_payload_free(ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_words_positions_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words) {
        list_ForEach(listEntry, ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words) {
            word_position_response_free(listEntry->data);
        }
        list_free(ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words);
        ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words = NULL;
    }
    free(ezsigndocument_get_words_positions_v1_response_m_payload);
}

cJSON *ezsigndocument_get_words_positions_v1_response_m_payload_convertToJSON(ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words
    if (!ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words) {
        goto fail;
    }
    
    cJSON *a_s_words = cJSON_AddArrayToObject(item, "a_sWords");
    if(a_s_words == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_s_wordsListEntry;
    if (ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words) {
    list_ForEach(a_s_wordsListEntry, ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words) {
    cJSON *itemLocal = word_position_response_convertToJSON(a_s_wordsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_s_words, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_response_m_payloadJSON){

    ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_local_var = NULL;

    // ezsigndocument_get_words_positions_v1_response_m_payload->a_s_words
    cJSON *a_s_words = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_words_positions_v1_response_m_payloadJSON, "a_sWords");
    if (!a_s_words) {
        goto end;
    }

    list_t *a_s_wordsList;
    
    cJSON *a_s_words_local_nonprimitive;
    if(!cJSON_IsArray(a_s_words)){
        goto end; //nonprimitive container
    }

    a_s_wordsList = list_create();

    cJSON_ArrayForEach(a_s_words_local_nonprimitive,a_s_words )
    {
        if(!cJSON_IsObject(a_s_words_local_nonprimitive)){
            goto end;
        }
        word_position_response_t *a_s_wordsItem = word_position_response_parseFromJSON(a_s_words_local_nonprimitive);

        list_addElement(a_s_wordsList, a_s_wordsItem);
    }


    ezsigndocument_get_words_positions_v1_response_m_payload_local_var = ezsigndocument_get_words_positions_v1_response_m_payload_create (
        a_s_wordsList
        );

    return ezsigndocument_get_words_positions_v1_response_m_payload_local_var;
end:
    return NULL;

}
