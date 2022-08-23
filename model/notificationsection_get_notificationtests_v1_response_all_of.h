/*
 * notificationsection_get_notificationtests_v1_response_all_of.h
 *
 * 
 */

#ifndef _notificationsection_get_notificationtests_v1_response_all_of_H_
#define _notificationsection_get_notificationtests_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationsection_get_notificationtests_v1_response_all_of_t notificationsection_get_notificationtests_v1_response_all_of_t;

#include "notificationsection_get_notificationtests_v1_response_m_payload.h"



typedef struct notificationsection_get_notificationtests_v1_response_all_of_t {
    struct notificationsection_get_notificationtests_v1_response_m_payload_t *m_payload; //model

} notificationsection_get_notificationtests_v1_response_all_of_t;

notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of_create(
    notificationsection_get_notificationtests_v1_response_m_payload_t *m_payload
);

void notificationsection_get_notificationtests_v1_response_all_of_free(notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of);

notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of_parseFromJSON(cJSON *notificationsection_get_notificationtests_v1_response_all_ofJSON);

cJSON *notificationsection_get_notificationtests_v1_response_all_of_convertToJSON(notificationsection_get_notificationtests_v1_response_all_of_t *notificationsection_get_notificationtests_v1_response_all_of);

#endif /* _notificationsection_get_notificationtests_v1_response_all_of_H_ */
