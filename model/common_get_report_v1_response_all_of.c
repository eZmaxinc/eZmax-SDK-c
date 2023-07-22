#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_get_report_v1_response_all_of.h"



common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of_create(
    common_get_report_v1_response_m_payload_t *m_payload
    ) {
    common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of_local_var = malloc(sizeof(common_get_report_v1_response_all_of_t));
    if (!common_get_report_v1_response_all_of_local_var) {
        return NULL;
    }
    common_get_report_v1_response_all_of_local_var->m_payload = m_payload;

    return common_get_report_v1_response_all_of_local_var;
}


void common_get_report_v1_response_all_of_free(common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of) {
    if(NULL == common_get_report_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (common_get_report_v1_response_all_of->m_payload) {
        common_get_report_v1_response_m_payload_free(common_get_report_v1_response_all_of->m_payload);
        common_get_report_v1_response_all_of->m_payload = NULL;
    }
    free(common_get_report_v1_response_all_of);
}

cJSON *common_get_report_v1_response_all_of_convertToJSON(common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // common_get_report_v1_response_all_of->m_payload
    if (!common_get_report_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = common_get_report_v1_response_m_payload_convertToJSON(common_get_report_v1_response_all_of->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of_parseFromJSON(cJSON *common_get_report_v1_response_all_ofJSON){

    common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of_local_var = NULL;

    // define the local variable for common_get_report_v1_response_all_of->m_payload
    common_get_report_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // common_get_report_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(common_get_report_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = common_get_report_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    common_get_report_v1_response_all_of_local_var = common_get_report_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return common_get_report_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        common_get_report_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
