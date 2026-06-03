#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_extract_text_v1_response_m_payload.h"



static ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_create_internal(
    char *s_text
    ) {
    ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_extract_text_v1_response_m_payload_t));
    if (!ezsigndocument_extract_text_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsigndocument_extract_text_v1_response_m_payload_local_var, 0, sizeof(ezsigndocument_extract_text_v1_response_m_payload_t));
    ezsigndocument_extract_text_v1_response_m_payload_local_var->_library_owned = 1;
    ezsigndocument_extract_text_v1_response_m_payload_local_var->s_text = s_text;
    return ezsigndocument_extract_text_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_create(
    char *s_text
    ) {
    ezsigndocument_extract_text_v1_response_m_payload_t *result = ezsigndocument_extract_text_v1_response_m_payload_create_internal (
        s_text
        );
    if (!result) {
    }
    return result;
}

void ezsigndocument_extract_text_v1_response_m_payload_free(ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload) {
    if(NULL == ezsigndocument_extract_text_v1_response_m_payload){
        return ;
    }
    if(ezsigndocument_extract_text_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_extract_text_v1_response_m_payload_free");
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

    char *s_text_local_str = NULL;

    // ezsigndocument_extract_text_v1_response_m_payload->s_text
    cJSON *s_text = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_response_m_payloadJSON, "sText");
    if (cJSON_IsNull(s_text)) {
        s_text = NULL;
    }
    if (!s_text) {
        goto end;
    }

    
    if(!cJSON_IsString(s_text))
    {
    goto end; //String
    }


    if (s_text && !cJSON_IsNull(s_text)) s_text_local_str = strdup(s_text->valuestring);

    ezsigndocument_extract_text_v1_response_m_payload_local_var = ezsigndocument_extract_text_v1_response_m_payload_create_internal (
        s_text_local_str
        );

    if (!ezsigndocument_extract_text_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsigndocument_extract_text_v1_response_m_payload_local_var;
end:
    if (s_text_local_str) {
        free(s_text_local_str);
        s_text_local_str = NULL;
    }
    return NULL;

}
