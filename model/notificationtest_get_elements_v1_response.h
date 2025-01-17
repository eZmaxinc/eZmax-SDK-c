/*
 * notificationtest_get_elements_v1_response.h
 *
 * Response for GET /1/object/notificationtest/{pkiNotificationtestID}/getElements
 */

#ifndef _notificationtest_get_elements_v1_response_H_
#define _notificationtest_get_elements_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationtest_get_elements_v1_response_t notificationtest_get_elements_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "notificationtest_get_elements_v1_response_m_payload.h"



typedef struct notificationtest_get_elements_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct notificationtest_get_elements_v1_response_m_payload_t *m_payload; //model

} notificationtest_get_elements_v1_response_t;

notificationtest_get_elements_v1_response_t *notificationtest_get_elements_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    notificationtest_get_elements_v1_response_m_payload_t *m_payload
);

void notificationtest_get_elements_v1_response_free(notificationtest_get_elements_v1_response_t *notificationtest_get_elements_v1_response);

notificationtest_get_elements_v1_response_t *notificationtest_get_elements_v1_response_parseFromJSON(cJSON *notificationtest_get_elements_v1_responseJSON);

cJSON *notificationtest_get_elements_v1_response_convertToJSON(notificationtest_get_elements_v1_response_t *notificationtest_get_elements_v1_response);

#endif /* _notificationtest_get_elements_v1_response_H_ */

