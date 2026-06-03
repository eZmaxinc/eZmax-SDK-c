/*
 * otherincome_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/otherincome/getList
 */

#ifndef _otherincome_get_list_v1_response_m_payload_H_
#define _otherincome_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_get_list_v1_response_m_payload_t otherincome_get_list_v1_response_m_payload_t;

#include "otherincome_list_element.h"



typedef struct otherincome_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_otherincome; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} otherincome_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_otherincome
);

void otherincome_get_list_v1_response_m_payload_free(otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload);

otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload_parseFromJSON(cJSON *otherincome_get_list_v1_response_m_payloadJSON);

cJSON *otherincome_get_list_v1_response_m_payload_convertToJSON(otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload);

#endif /* _otherincome_get_list_v1_response_m_payload_H_ */

