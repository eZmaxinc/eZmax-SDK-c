#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "folder_get_communication_count_v1_response_m_payload.h"



static folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(folder_get_communication_count_v1_response_m_payload_t));
    if (!folder_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(folder_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(folder_get_communication_count_v1_response_m_payload_t));
    folder_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    folder_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return folder_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    folder_get_communication_count_v1_response_m_payload_t *result = folder_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void folder_get_communication_count_v1_response_m_payload_free(folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload) {
    if(NULL == folder_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(folder_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "folder_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (folder_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(folder_get_communication_count_v1_response_m_payload->i_communication_count);
        folder_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(folder_get_communication_count_v1_response_m_payload);
}

cJSON *folder_get_communication_count_v1_response_m_payload_convertToJSON(folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // folder_get_communication_count_v1_response_m_payload->i_communication_count
    if (!folder_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *folder_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *folder_get_communication_count_v1_response_m_payloadJSON){

    folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for folder_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // folder_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(folder_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (cJSON_IsNull(i_communication_count)) {
        i_communication_count = NULL;
    }
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }
    i_communication_count_local_var = malloc(sizeof(int));
    if(!i_communication_count_local_var)
    {
        goto end;
    }
    *i_communication_count_local_var = i_communication_count->valuedouble;



    folder_get_communication_count_v1_response_m_payload_local_var = folder_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!folder_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return folder_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
