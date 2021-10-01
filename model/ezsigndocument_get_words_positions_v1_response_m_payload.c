#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_words_positions_v1_response_m_payload.h"



ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_create(
    ) {
    ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_words_positions_v1_response_m_payload_t));
    if (!ezsigndocument_get_words_positions_v1_response_m_payload_local_var) {
        return NULL;
    }

    return ezsigndocument_get_words_positions_v1_response_m_payload_local_var;
}


void ezsigndocument_get_words_positions_v1_response_m_payload_free(ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_words_positions_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigndocument_get_words_positions_v1_response_m_payload);
}

cJSON *ezsigndocument_get_words_positions_v1_response_m_payload_convertToJSON(ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_response_m_payloadJSON){

    ezsigndocument_get_words_positions_v1_response_m_payload_t *ezsigndocument_get_words_positions_v1_response_m_payload_local_var = NULL;


    ezsigndocument_get_words_positions_v1_response_m_payload_local_var = ezsigndocument_get_words_positions_v1_response_m_payload_create (
        );

    return ezsigndocument_get_words_positions_v1_response_m_payload_local_var;
end:
    return NULL;

}
