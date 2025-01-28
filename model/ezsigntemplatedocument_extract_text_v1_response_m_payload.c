#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_extract_text_v1_response_m_payload.h"



static ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload_create_internal(
    char *s_text
    ) {
    ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_extract_text_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var->s_text = s_text;

    ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload_create(
    char *s_text
    ) {
    return ezsigntemplatedocument_extract_text_v1_response_m_payload_create_internal (
        s_text
        );
}

void ezsigntemplatedocument_extract_text_v1_response_m_payload_free(ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_extract_text_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatedocument_extract_text_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_extract_text_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_extract_text_v1_response_m_payload->s_text) {
        free(ezsigntemplatedocument_extract_text_v1_response_m_payload->s_text);
        ezsigntemplatedocument_extract_text_v1_response_m_payload->s_text = NULL;
    }
    free(ezsigntemplatedocument_extract_text_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_extract_text_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_extract_text_v1_response_m_payload->s_text
    if (!ezsigntemplatedocument_extract_text_v1_response_m_payload->s_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sText", ezsigntemplatedocument_extract_text_v1_response_m_payload->s_text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_extract_text_v1_response_m_payloadJSON){

    ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatedocument_extract_text_v1_response_m_payload->s_text
    cJSON *s_text = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_extract_text_v1_response_m_payloadJSON, "sText");
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


    ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var = ezsigntemplatedocument_extract_text_v1_response_m_payload_create_internal (
        strdup(s_text->valuestring)
        );

    return ezsigntemplatedocument_extract_text_v1_response_m_payload_local_var;
end:
    return NULL;

}
