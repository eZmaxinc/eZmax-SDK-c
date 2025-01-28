/*
 * notificationsection_get_notificationtests_v1_response.h
 *
 * Response for GET /1/object/notificationsection/{pkiNotificationsectionID}/getNotificationtests
 */

#ifndef _notificationsection_get_notificationtests_v1_response_H_
#define _notificationsection_get_notificationtests_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationsection_get_notificationtests_v1_response_t notificationsection_get_notificationtests_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "notificationsection_get_notificationtests_v1_response_m_payload.h"



typedef struct notificationsection_get_notificationtests_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct notificationsection_get_notificationtests_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} notificationsection_get_notificationtests_v1_response_t;

__attribute__((deprecated)) notificationsection_get_notificationtests_v1_response_t *notificationsection_get_notificationtests_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    notificationsection_get_notificationtests_v1_response_m_payload_t *m_payload
);

void notificationsection_get_notificationtests_v1_response_free(notificationsection_get_notificationtests_v1_response_t *notificationsection_get_notificationtests_v1_response);

notificationsection_get_notificationtests_v1_response_t *notificationsection_get_notificationtests_v1_response_parseFromJSON(cJSON *notificationsection_get_notificationtests_v1_responseJSON);

cJSON *notificationsection_get_notificationtests_v1_response_convertToJSON(notificationsection_get_notificationtests_v1_response_t *notificationsection_get_notificationtests_v1_response);

#endif /* _notificationsection_get_notificationtests_v1_response_H_ */

