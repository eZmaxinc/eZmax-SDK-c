#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_get_autocomplete_v2_response_all_of.h"



timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of_create(
    timezone_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(timezone_get_autocomplete_v2_response_all_of_t));
    if (!timezone_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    timezone_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return timezone_get_autocomplete_v2_response_all_of_local_var;
}


void timezone_get_autocomplete_v2_response_all_of_free(timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of) {
    if(NULL == timezone_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_get_autocomplete_v2_response_all_of->m_payload) {
        timezone_get_autocomplete_v2_response_m_payload_free(timezone_get_autocomplete_v2_response_all_of->m_payload);
        timezone_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(timezone_get_autocomplete_v2_response_all_of);
}

cJSON *timezone_get_autocomplete_v2_response_all_of_convertToJSON(timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // timezone_get_autocomplete_v2_response_all_of->m_payload
    if (!timezone_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = timezone_get_autocomplete_v2_response_m_payload_convertToJSON(timezone_get_autocomplete_v2_response_all_of->m_payload);
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

timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *timezone_get_autocomplete_v2_response_all_ofJSON){

    timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for timezone_get_autocomplete_v2_response_all_of->m_payload
    timezone_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // timezone_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(timezone_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = timezone_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    timezone_get_autocomplete_v2_response_all_of_local_var = timezone_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return timezone_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        timezone_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
