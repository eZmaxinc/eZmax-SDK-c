#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_duplicate_v1_response_m_payload.h"



static ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload_create_internal(
    int *pki_ezsignfolder_id
    ) {
    ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_duplicate_v1_response_m_payload_t));
    if (!ezsignfolder_duplicate_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsignfolder_duplicate_v1_response_m_payload_local_var, 0, sizeof(ezsignfolder_duplicate_v1_response_m_payload_t));
    ezsignfolder_duplicate_v1_response_m_payload_local_var->_library_owned = 1;
    ezsignfolder_duplicate_v1_response_m_payload_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    return ezsignfolder_duplicate_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload_create(
    int *pki_ezsignfolder_id
    ) {
    int *pki_ezsignfolder_id_copy = NULL;
    if (pki_ezsignfolder_id) {
        pki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (pki_ezsignfolder_id_copy) *pki_ezsignfolder_id_copy = *pki_ezsignfolder_id;
    }
    ezsignfolder_duplicate_v1_response_m_payload_t *result = ezsignfolder_duplicate_v1_response_m_payload_create_internal (
        pki_ezsignfolder_id_copy
        );
    if (!result) {
        free(pki_ezsignfolder_id_copy);
    }
    return result;
}

void ezsignfolder_duplicate_v1_response_m_payload_free(ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload) {
    if(NULL == ezsignfolder_duplicate_v1_response_m_payload){
        return ;
    }
    if(ezsignfolder_duplicate_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_duplicate_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id) {
        free(ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id);
        ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id = NULL;
    }
    free(ezsignfolder_duplicate_v1_response_m_payload);
}

cJSON *ezsignfolder_duplicate_v1_response_m_payload_convertToJSON(ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id
    if (!ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", *ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_duplicate_v1_response_m_payloadJSON){

    ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id
    int *pki_ezsignfolder_id_local_var = NULL;

    // ezsignfolder_duplicate_v1_response_m_payload->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_duplicate_v1_response_m_payloadJSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    pki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfolder_id_local_var = pki_ezsignfolder_id->valuedouble;



    ezsignfolder_duplicate_v1_response_m_payload_local_var = ezsignfolder_duplicate_v1_response_m_payload_create_internal (
        pki_ezsignfolder_id_local_var
        );

    if (!ezsignfolder_duplicate_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsignfolder_duplicate_v1_response_m_payload_local_var;
end:
    if (pki_ezsignfolder_id_local_var) {
        free(pki_ezsignfolder_id_local_var);
        pki_ezsignfolder_id_local_var = NULL;
    }
    return NULL;

}
