#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationtest_get_elements_v1_response_all_of.h"



notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of_create(
    notificationtest_get_elements_v1_response_m_payload_t *m_payload
    ) {
    notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of_local_var = malloc(sizeof(notificationtest_get_elements_v1_response_all_of_t));
    if (!notificationtest_get_elements_v1_response_all_of_local_var) {
        return NULL;
    }
    notificationtest_get_elements_v1_response_all_of_local_var->m_payload = m_payload;

    return notificationtest_get_elements_v1_response_all_of_local_var;
}


void notificationtest_get_elements_v1_response_all_of_free(notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of) {
    if(NULL == notificationtest_get_elements_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (notificationtest_get_elements_v1_response_all_of->m_payload) {
        notificationtest_get_elements_v1_response_m_payload_free(notificationtest_get_elements_v1_response_all_of->m_payload);
        notificationtest_get_elements_v1_response_all_of->m_payload = NULL;
    }
    free(notificationtest_get_elements_v1_response_all_of);
}

cJSON *notificationtest_get_elements_v1_response_all_of_convertToJSON(notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // notificationtest_get_elements_v1_response_all_of->m_payload
    if (!notificationtest_get_elements_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = notificationtest_get_elements_v1_response_m_payload_convertToJSON(notificationtest_get_elements_v1_response_all_of->m_payload);
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

notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of_parseFromJSON(cJSON *notificationtest_get_elements_v1_response_all_ofJSON){

    notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of_local_var = NULL;

    // define the local variable for notificationtest_get_elements_v1_response_all_of->m_payload
    notificationtest_get_elements_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // notificationtest_get_elements_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(notificationtest_get_elements_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = notificationtest_get_elements_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    notificationtest_get_elements_v1_response_all_of_local_var = notificationtest_get_elements_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return notificationtest_get_elements_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        notificationtest_get_elements_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
