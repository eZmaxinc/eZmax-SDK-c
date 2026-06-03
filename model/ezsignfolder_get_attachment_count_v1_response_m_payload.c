#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_attachment_count_v1_response_m_payload.h"



static ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload_create_internal(
    int *i_attachment_count
    ) {
    ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_attachment_count_v1_response_m_payload_t));
    if (!ezsignfolder_get_attachment_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsignfolder_get_attachment_count_v1_response_m_payload_local_var, 0, sizeof(ezsignfolder_get_attachment_count_v1_response_m_payload_t));
    ezsignfolder_get_attachment_count_v1_response_m_payload_local_var->_library_owned = 1;
    ezsignfolder_get_attachment_count_v1_response_m_payload_local_var->i_attachment_count = i_attachment_count;
    return ezsignfolder_get_attachment_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload_create(
    int *i_attachment_count
    ) {
    int *i_attachment_count_copy = NULL;
    if (i_attachment_count) {
        i_attachment_count_copy = malloc(sizeof(int));
        if (i_attachment_count_copy) *i_attachment_count_copy = *i_attachment_count;
    }
    ezsignfolder_get_attachment_count_v1_response_m_payload_t *result = ezsignfolder_get_attachment_count_v1_response_m_payload_create_internal (
        i_attachment_count_copy
        );
    if (!result) {
        free(i_attachment_count_copy);
    }
    return result;
}

void ezsignfolder_get_attachment_count_v1_response_m_payload_free(ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_attachment_count_v1_response_m_payload){
        return ;
    }
    if(ezsignfolder_get_attachment_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_get_attachment_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count) {
        free(ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count);
        ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count = NULL;
    }
    free(ezsignfolder_get_attachment_count_v1_response_m_payload);
}

cJSON *ezsignfolder_get_attachment_count_v1_response_m_payload_convertToJSON(ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count
    if (!ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAttachmentCount", *ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_attachment_count_v1_response_m_payloadJSON){

    ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count
    int *i_attachment_count_local_var = NULL;

    // ezsignfolder_get_attachment_count_v1_response_m_payload->i_attachment_count
    cJSON *i_attachment_count = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_attachment_count_v1_response_m_payloadJSON, "iAttachmentCount");
    if (cJSON_IsNull(i_attachment_count)) {
        i_attachment_count = NULL;
    }
    if (!i_attachment_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_attachment_count))
    {
    goto end; //Numeric
    }
    i_attachment_count_local_var = malloc(sizeof(int));
    if(!i_attachment_count_local_var)
    {
        goto end;
    }
    *i_attachment_count_local_var = i_attachment_count->valuedouble;



    ezsignfolder_get_attachment_count_v1_response_m_payload_local_var = ezsignfolder_get_attachment_count_v1_response_m_payload_create_internal (
        i_attachment_count_local_var
        );

    if (!ezsignfolder_get_attachment_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsignfolder_get_attachment_count_v1_response_m_payload_local_var;
end:
    if (i_attachment_count_local_var) {
        free(i_attachment_count_local_var);
        i_attachment_count_local_var = NULL;
    }
    return NULL;

}
