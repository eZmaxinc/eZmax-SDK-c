#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_extract_text_v1_response_m_payload.h"



ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_create(
    char *s_text
    ) {
    ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_extract_text_v1_response_m_payload_t));
    if (!ezsigndocument_extract_text_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_extract_text_v1_response_m_payload_local_var->s_text = s_text;

    return ezsigndocument_extract_text_v1_response_m_payload_local_var;
}


void ezsigndocument_extract_text_v1_response_m_payload_free(ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload) {
    if(NULL == ezsigndocument_extract_text_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_extract_text_v1_response_m_payload->s_text) {
        free(ezsigndocument_extract_text_v1_response_m_payload->s_text);
        ezsigndocument_extract_text_v1_response_m_payload->s_text = NULL;
    }
    free(ezsigndocument_extract_text_v1_response_m_payload);
}

cJSON *ezsigndocument_extract_text_v1_response_m_payload_convertToJSON(ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_extract_text_v1_response_m_payload->s_text
    if (!ezsigndocument_extract_text_v1_response_m_payload->s_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sText", ezsigndocument_extract_text_v1_response_m_payload->s_text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_extract_text_v1_response_m_payloadJSON){

    ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_local_var = NULL;

    // ezsigndocument_extract_text_v1_response_m_payload->s_text
    cJSON *s_text = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_response_m_payloadJSON, "sText");
    if (!s_text) {
        goto end;
    }

    
    if(!cJSON_IsString(s_text))
    {
    goto end; //String
    }


    ezsigndocument_extract_text_v1_response_m_payload_local_var = ezsigndocument_extract_text_v1_response_m_payload_create (
        strdup(s_text->valuestring)
        );

    return ezsigndocument_extract_text_v1_response_m_payload_local_var;
end:
    return NULL;

}
