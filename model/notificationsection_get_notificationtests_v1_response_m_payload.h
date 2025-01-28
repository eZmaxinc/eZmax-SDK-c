/*
 * notificationsection_get_notificationtests_v1_response_m_payload.h
 *
 * Payload for GET /1/object/notificationsection/{pkiNotificationsectionID}/getNotificationtests
 */

#ifndef _notificationsection_get_notificationtests_v1_response_m_payload_H_
#define _notificationsection_get_notificationtests_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationsection_get_notificationtests_v1_response_m_payload_t notificationsection_get_notificationtests_v1_response_m_payload_t;

#include "custom_notificationsubsectiongetnotificationtests_response.h"



typedef struct notificationsection_get_notificationtests_v1_response_m_payload_t {
    list_t *a_obj_notificationsubsection; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} notificationsection_get_notificationtests_v1_response_m_payload_t;

__attribute__((deprecated)) notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload_create(
    list_t *a_obj_notificationsubsection
);

void notificationsection_get_notificationtests_v1_response_m_payload_free(notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload);

notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload_parseFromJSON(cJSON *notificationsection_get_notificationtests_v1_response_m_payloadJSON);

cJSON *notificationsection_get_notificationtests_v1_response_m_payload_convertToJSON(notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload);

#endif /* _notificationsection_get_notificationtests_v1_response_m_payload_H_ */

