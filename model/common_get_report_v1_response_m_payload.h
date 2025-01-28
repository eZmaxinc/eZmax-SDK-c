/*
 * common_get_report_v1_response_m_payload.h
 *
 * Payload for POST /1/report/xxx/xxx and and /1/module/report/getReportFromCache
 */

#ifndef _common_get_report_v1_response_m_payload_H_
#define _common_get_report_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_get_report_v1_response_m_payload_t common_get_report_v1_response_m_payload_t;

#include "common_reportgroup.h"



typedef struct common_get_report_v1_response_m_payload_t {
    struct common_reportgroup_t *obj_reportgroup; //model

    int _library_owned; // Is the library responsible for freeing this object?
} common_get_report_v1_response_m_payload_t;

__attribute__((deprecated)) common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload_create(
    common_reportgroup_t *obj_reportgroup
);

void common_get_report_v1_response_m_payload_free(common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload);

common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload_parseFromJSON(cJSON *common_get_report_v1_response_m_payloadJSON);

cJSON *common_get_report_v1_response_m_payload_convertToJSON(common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload);

#endif /* _common_get_report_v1_response_m_payload_H_ */

