/*
 * notificationtest_get_elements_v2_response_m_payload.h
 *
 * Payload for GET /2/object/notificationtest/{pkiNotificationtestID}/getElements
 */

#ifndef _notificationtest_get_elements_v2_response_m_payload_H_
#define _notificationtest_get_elements_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationtest_get_elements_v2_response_m_payload_t notificationtest_get_elements_v2_response_m_payload_t;

#include "custom_notificationtestgetelements_response.h"



typedef struct notificationtest_get_elements_v2_response_m_payload_t {
    struct custom_notificationtestgetelements_response_t *obj_notificationtest; //model

    int _library_owned; // Is the library responsible for freeing this object?
} notificationtest_get_elements_v2_response_m_payload_t;

__attribute__((deprecated)) notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload_create(
    custom_notificationtestgetelements_response_t *obj_notificationtest
);

void notificationtest_get_elements_v2_response_m_payload_free(notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload);

notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload_parseFromJSON(cJSON *notificationtest_get_elements_v2_response_m_payloadJSON);

cJSON *notificationtest_get_elements_v2_response_m_payload_convertToJSON(notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload);

#endif /* _notificationtest_get_elements_v2_response_m_payload_H_ */

