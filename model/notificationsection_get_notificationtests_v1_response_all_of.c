#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationsection_get_notificationtests_v1_response_all_of.h"



notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of_create(
    notificationsection_get_notificationtests_v1_response_m_payload_t *m_payload
    ) {
    notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of_local_var = malloc(sizeof(notificationsection_get_notificationtests_v1_response_all_of_t));
    if (!notificationsection_get_notificationtests_v1_response_all_of_local_var) {
        return NULL;
    }
    notificationsection_get_notificationtests_v1_response_all_of_local_var->m_payload = m_payload;

    return notificationsection_get_notificationtests_v1_response_all_of_local_var;
}


void notificationsection_get_notificationtests_v1_response_all_of_free(notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of) {
    if(NULL == notificationsection_get_notificationtests_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (notificationsection_get_notificationtests_v1_response_all_of->m_payload) {
        notificationsection_get_notificationtests_v1_response_m_payload_free(notificationsection_get_notificationtests_v1_response_all_of->m_payload);
        notificationsection_get_notificationtests_v1_response_all_of->m_payload = NULL;
    }
    free(notificationsection_get_notificationtests_v1_response_all_of);
}

cJSON *notificationsection_get_notificationtests_v1_response_all_of_convertToJSON(notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // notificationsection_get_notificationtests_v1_response_all_of->m_payload
    if (!notificationsection_get_notificationtests_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = notificationsection_get_notificationtests_v1_response_m_payload_convertToJSON(notificationsection_get_notificationtests_v1_response_all_of->m_payload);
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

notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of_parseFromJSON(cJSON *notificationsection_get_notificationtests_v1_response_all_ofJSON){

    notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of_local_var = NULL;

    // define the local variable for notificationsection_get_notificationtests_v1_response_all_of->m_payload
    notificationsection_get_notificationtests_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // notificationsection_get_notificationtests_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(notificationsection_get_notificationtests_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = notificationsection_get_notificationtests_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    notificationsection_get_notificationtests_v1_response_all_of_local_var = notificationsection_get_notificationtests_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return notificationsection_get_notificationtests_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        notificationsection_get_notificationtests_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
