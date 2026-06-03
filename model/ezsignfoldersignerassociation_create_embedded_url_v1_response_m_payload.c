#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload.h"



static ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_create_internal(
    char *s_embedded_url
    ) {
    ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t));
    if (!ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var, 0, sizeof(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t));
    ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var->s_embedded_url = s_embedded_url;
    return ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_create(
    char *s_embedded_url
    ) {
    ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *result = ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_create_internal (
        s_embedded_url
        );
    if (!result) {
    }
    return result;
}

void ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_free(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload) {
    if(NULL == ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload){
        return ;
    }
    if(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->s_embedded_url) {
        free(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->s_embedded_url);
        ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->s_embedded_url = NULL;
    }
    free(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload);
}

cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->s_embedded_url
    if (!ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->s_embedded_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmbeddedUrl", ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->s_embedded_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payloadJSON){

    ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var = NULL;

    char *s_embedded_url_local_str = NULL;

    // ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload->s_embedded_url
    cJSON *s_embedded_url = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payloadJSON, "sEmbeddedUrl");
    if (cJSON_IsNull(s_embedded_url)) {
        s_embedded_url = NULL;
    }
    if (!s_embedded_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_embedded_url))
    {
    goto end; //String
    }


    if (s_embedded_url && !cJSON_IsNull(s_embedded_url)) s_embedded_url_local_str = strdup(s_embedded_url->valuestring);

    ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var = ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_create_internal (
        s_embedded_url_local_str
        );

    if (!ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_local_var;
end:
    if (s_embedded_url_local_str) {
        free(s_embedded_url_local_str);
        s_embedded_url_local_str = NULL;
    }
    return NULL;

}
