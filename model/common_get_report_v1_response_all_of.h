/*
 * common_get_report_v1_response_all_of.h
 *
 * 
 */

#ifndef _common_get_report_v1_response_all_of_H_
#define _common_get_report_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_get_report_v1_response_all_of_t common_get_report_v1_response_all_of_t;

#include "common_get_report_v1_response_m_payload.h"



typedef struct common_get_report_v1_response_all_of_t {
    struct common_get_report_v1_response_m_payload_t *m_payload; //model

} common_get_report_v1_response_all_of_t;

common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of_create(
    common_get_report_v1_response_m_payload_t *m_payload
);

void common_get_report_v1_response_all_of_free(common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of);

common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of_parseFromJSON(cJSON *common_get_report_v1_response_all_ofJSON);

cJSON *common_get_report_v1_response_all_of_convertToJSON(common_get_report_v1_response_all_of_t *common_get_report_v1_response_all_of);

#endif /* _common_get_report_v1_response_all_of_H_ */

