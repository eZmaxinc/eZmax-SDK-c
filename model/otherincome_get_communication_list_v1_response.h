/*
 * otherincome_get_communication_list_v1_response.h
 *
 * Response for GET /1/object/otherincome/{pkiOtherincomeID}/getCommunicationList
 */

#ifndef _otherincome_get_communication_list_v1_response_H_
#define _otherincome_get_communication_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_get_communication_list_v1_response_t otherincome_get_communication_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "otherincome_get_communication_list_v1_response_m_payload.h"



typedef struct otherincome_get_communication_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct otherincome_get_communication_list_v1_response_m_payload_t *m_payload; //model

} otherincome_get_communication_list_v1_response_t;

otherincome_get_communication_list_v1_response_t *otherincome_get_communication_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    otherincome_get_communication_list_v1_response_m_payload_t *m_payload
);

void otherincome_get_communication_list_v1_response_free(otherincome_get_communication_list_v1_response_t *otherincome_get_communication_list_v1_response);

otherincome_get_communication_list_v1_response_t *otherincome_get_communication_list_v1_response_parseFromJSON(cJSON *otherincome_get_communication_list_v1_responseJSON);

cJSON *otherincome_get_communication_list_v1_response_convertToJSON(otherincome_get_communication_list_v1_response_t *otherincome_get_communication_list_v1_response);

#endif /* _otherincome_get_communication_list_v1_response_H_ */
