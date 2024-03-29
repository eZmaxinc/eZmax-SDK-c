/*
 * ezmaxinvoicing_get_provisional_v1_response.h
 *
 * Response for GET /1/object/ezmaxinvoicing/getProvisional
 */

#ifndef _ezmaxinvoicing_get_provisional_v1_response_H_
#define _ezmaxinvoicing_get_provisional_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_get_provisional_v1_response_t ezmaxinvoicing_get_provisional_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezmaxinvoicing_get_provisional_v1_response_m_payload.h"



typedef struct ezmaxinvoicing_get_provisional_v1_response_t {
    struct ezmaxinvoicing_get_provisional_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezmaxinvoicing_get_provisional_v1_response_t;

ezmaxinvoicing_get_provisional_v1_response_t *ezmaxinvoicing_get_provisional_v1_response_create(
    ezmaxinvoicing_get_provisional_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezmaxinvoicing_get_provisional_v1_response_free(ezmaxinvoicing_get_provisional_v1_response_t *ezmaxinvoicing_get_provisional_v1_response);

ezmaxinvoicing_get_provisional_v1_response_t *ezmaxinvoicing_get_provisional_v1_response_parseFromJSON(cJSON *ezmaxinvoicing_get_provisional_v1_responseJSON);

cJSON *ezmaxinvoicing_get_provisional_v1_response_convertToJSON(ezmaxinvoicing_get_provisional_v1_response_t *ezmaxinvoicing_get_provisional_v1_response);

#endif /* _ezmaxinvoicing_get_provisional_v1_response_H_ */

