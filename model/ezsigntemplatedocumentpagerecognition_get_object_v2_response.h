/*
 * ezsigntemplatedocumentpagerecognition_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID}
 */

#ifndef _ezsigntemplatedocumentpagerecognition_get_object_v2_response_H_
#define _ezsigntemplatedocumentpagerecognition_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpagerecognition_get_object_v2_response_t ezsigntemplatedocumentpagerecognition_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatedocumentpagerecognition_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *m_payload; //model

} ezsigntemplatedocumentpagerecognition_get_object_v2_response_t;

ezsigntemplatedocumentpagerecognition_get_object_v2_response_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplatedocumentpagerecognition_get_object_v2_response_free(ezsigntemplatedocumentpagerecognition_get_object_v2_response_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response);

ezsigntemplatedocumentpagerecognition_get_object_v2_response_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_get_object_v2_responseJSON);

cJSON *ezsigntemplatedocumentpagerecognition_get_object_v2_response_convertToJSON(ezsigntemplatedocumentpagerecognition_get_object_v2_response_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response);

#endif /* _ezsigntemplatedocumentpagerecognition_get_object_v2_response_H_ */

