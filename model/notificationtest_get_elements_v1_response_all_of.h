/*
 * notificationtest_get_elements_v1_response_all_of.h
 *
 * 
 */

#ifndef _notificationtest_get_elements_v1_response_all_of_H_
#define _notificationtest_get_elements_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationtest_get_elements_v1_response_all_of_t notificationtest_get_elements_v1_response_all_of_t;

#include "notificationtest_get_elements_v1_response_m_payload.h"



typedef struct notificationtest_get_elements_v1_response_all_of_t {
    struct notificationtest_get_elements_v1_response_m_payload_t *m_payload; //model

} notificationtest_get_elements_v1_response_all_of_t;

notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of_create(
    notificationtest_get_elements_v1_response_m_payload_t *m_payload
);

void notificationtest_get_elements_v1_response_all_of_free(notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of);

notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of_parseFromJSON(cJSON *notificationtest_get_elements_v1_response_all_ofJSON);

cJSON *notificationtest_get_elements_v1_response_all_of_convertToJSON(notificationtest_get_elements_v1_response_all_of_t *notificationtest_get_elements_v1_response_all_of);

#endif /* _notificationtest_get_elements_v1_response_all_of_H_ */

