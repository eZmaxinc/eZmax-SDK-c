/*
 * franchisereferalincome_create_object_v2_response.h
 *
 * Response for POST /2/object/franchisereferalincome
 */

#ifndef _franchisereferalincome_create_object_v2_response_H_
#define _franchisereferalincome_create_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisereferalincome_create_object_v2_response_t franchisereferalincome_create_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "franchisereferalincome_create_object_v2_response_all_of.h"
#include "franchisereferalincome_create_object_v2_response_m_payload.h"



typedef struct franchisereferalincome_create_object_v2_response_t {
    struct franchisereferalincome_create_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} franchisereferalincome_create_object_v2_response_t;

franchisereferalincome_create_object_v2_response_t *franchisereferalincome_create_object_v2_response_create(
    franchisereferalincome_create_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void franchisereferalincome_create_object_v2_response_free(franchisereferalincome_create_object_v2_response_t *franchisereferalincome_create_object_v2_response);

franchisereferalincome_create_object_v2_response_t *franchisereferalincome_create_object_v2_response_parseFromJSON(cJSON *franchisereferalincome_create_object_v2_responseJSON);

cJSON *franchisereferalincome_create_object_v2_response_convertToJSON(franchisereferalincome_create_object_v2_response_t *franchisereferalincome_create_object_v2_response);

#endif /* _franchisereferalincome_create_object_v2_response_H_ */

