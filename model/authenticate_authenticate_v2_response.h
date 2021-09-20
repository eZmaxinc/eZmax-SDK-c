/*
 * authenticate_authenticate_v2_response.h
 *
 * Response for the /2/module/authenticate/authenticate API Request
 */

#ifndef _authenticate_authenticate_v2_response_H_
#define _authenticate_authenticate_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticate_authenticate_v2_response_t authenticate_authenticate_v2_response_t;

#include "authenticate_authenticate_v2_response_all_of.h"
#include "authenticate_authenticate_v2_response_m_payload.h"
#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct authenticate_authenticate_v2_response_t {
    struct authenticate_authenticate_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} authenticate_authenticate_v2_response_t;

authenticate_authenticate_v2_response_t *authenticate_authenticate_v2_response_create(
    authenticate_authenticate_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void authenticate_authenticate_v2_response_free(authenticate_authenticate_v2_response_t *authenticate_authenticate_v2_response);

authenticate_authenticate_v2_response_t *authenticate_authenticate_v2_response_parseFromJSON(cJSON *authenticate_authenticate_v2_responseJSON);

cJSON *authenticate_authenticate_v2_response_convertToJSON(authenticate_authenticate_v2_response_t *authenticate_authenticate_v2_response);

#endif /* _authenticate_authenticate_v2_response_H_ */

