/*
 * otherincome_get_communicationsenders_v1_response_m_payload.h
 *
 * Response for GET /1/object/otherincome/{pkiOtherincomeID}/getCommunicationsenders
 */

#ifndef _otherincome_get_communicationsenders_v1_response_m_payload_H_
#define _otherincome_get_communicationsenders_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_get_communicationsenders_v1_response_m_payload_t otherincome_get_communicationsenders_v1_response_m_payload_t;

#include "custom_communicationsender_response.h"



typedef struct otherincome_get_communicationsenders_v1_response_m_payload_t {
    list_t *a_obj_communicationsenders; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} otherincome_get_communicationsenders_v1_response_m_payload_t;

__attribute__((deprecated)) otherincome_get_communicationsenders_v1_response_m_payload_t *otherincome_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
);

void otherincome_get_communicationsenders_v1_response_m_payload_free(otherincome_get_communicationsenders_v1_response_m_payload_t *otherincome_get_communicationsenders_v1_response_m_payload);

otherincome_get_communicationsenders_v1_response_m_payload_t *otherincome_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *otherincome_get_communicationsenders_v1_response_m_payloadJSON);

cJSON *otherincome_get_communicationsenders_v1_response_m_payload_convertToJSON(otherincome_get_communicationsenders_v1_response_m_payload_t *otherincome_get_communicationsenders_v1_response_m_payload);

#endif /* _otherincome_get_communicationsenders_v1_response_m_payload_H_ */

