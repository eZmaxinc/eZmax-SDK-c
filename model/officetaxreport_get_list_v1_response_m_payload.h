/*
 * officetaxreport_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/officetaxreport/getList
 */

#ifndef _officetaxreport_get_list_v1_response_m_payload_H_
#define _officetaxreport_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct officetaxreport_get_list_v1_response_m_payload_t officetaxreport_get_list_v1_response_m_payload_t;

#include "officetaxreport_list_element.h"



typedef struct officetaxreport_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_officetaxreport; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} officetaxreport_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_officetaxreport
);

void officetaxreport_get_list_v1_response_m_payload_free(officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload);

officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload_parseFromJSON(cJSON *officetaxreport_get_list_v1_response_m_payloadJSON);

cJSON *officetaxreport_get_list_v1_response_m_payload_convertToJSON(officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload);

#endif /* _officetaxreport_get_list_v1_response_m_payload_H_ */

