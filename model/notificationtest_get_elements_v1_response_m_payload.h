/*
 * notificationtest_get_elements_v1_response_m_payload.h
 *
 * Payload for GET /1/object/notificationtest/{pkiNotificationtestID}/getElements
 */

#ifndef _notificationtest_get_elements_v1_response_m_payload_H_
#define _notificationtest_get_elements_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationtest_get_elements_v1_response_m_payload_t notificationtest_get_elements_v1_response_m_payload_t;

#include "any_type.h"



typedef struct notificationtest_get_elements_v1_response_m_payload_t {
    int pki_notificationtest_id; //numeric
    char *s_notificationtest_function; // string
    list_t *a_s_variableobject_property; //primitive container
    list_t *a_obj_variableobject; //primitive container

} notificationtest_get_elements_v1_response_m_payload_t;

notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload_create(
    int pki_notificationtest_id,
    char *s_notificationtest_function,
    list_t *a_s_variableobject_property,
    list_t *a_obj_variableobject
);

void notificationtest_get_elements_v1_response_m_payload_free(notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload);

notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload_parseFromJSON(cJSON *notificationtest_get_elements_v1_response_m_payloadJSON);

cJSON *notificationtest_get_elements_v1_response_m_payload_convertToJSON(notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload);

#endif /* _notificationtest_get_elements_v1_response_m_payload_H_ */

