#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload.h"



static ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_create_internal(
    char *s_login_url
    ) {
    ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var = malloc(sizeof(ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t));
    if (!ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var->s_login_url = s_login_url;

    ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_create(
    char *s_login_url
    ) {
    return ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_create_internal (
        s_login_url
        );
}

void ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_free(ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload) {
    if(NULL == ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload){
        return ;
    }
    if(ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->s_login_url) {
        free(ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->s_login_url);
        ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->s_login_url = NULL;
    }
    free(ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload);
}

cJSON *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->s_login_url
    if (!ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->s_login_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLoginUrl", ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->s_login_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payloadJSON){

    ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t *ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var = NULL;

    // ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload->s_login_url
    cJSON *s_login_url = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payloadJSON, "sLoginUrl");
    if (cJSON_IsNull(s_login_url)) {
        s_login_url = NULL;
    }
    if (!s_login_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_login_url))
    {
    goto end; //String
    }


    ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var = ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_create_internal (
        strdup(s_login_url->valuestring)
        );

    return ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_local_var;
end:
    return NULL;

}
