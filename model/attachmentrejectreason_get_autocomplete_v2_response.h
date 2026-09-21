/*
 * attachmentrejectreason_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/attachmentrejectreason/getAutocomplete
 */

#ifndef _attachmentrejectreason_get_autocomplete_v2_response_H_
#define _attachmentrejectreason_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachmentrejectreason_get_autocomplete_v2_response_t attachmentrejectreason_get_autocomplete_v2_response_t;

#include "attachmentrejectreason_get_autocomplete_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct attachmentrejectreason_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} attachmentrejectreason_get_autocomplete_v2_response_t;

__attribute__((deprecated)) attachmentrejectreason_get_autocomplete_v2_response_t *attachmentrejectreason_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *m_payload
);

void attachmentrejectreason_get_autocomplete_v2_response_free(attachmentrejectreason_get_autocomplete_v2_response_t *attachmentrejectreason_get_autocomplete_v2_response);

attachmentrejectreason_get_autocomplete_v2_response_t *attachmentrejectreason_get_autocomplete_v2_response_parseFromJSON(cJSON *attachmentrejectreason_get_autocomplete_v2_responseJSON);

cJSON *attachmentrejectreason_get_autocomplete_v2_response_convertToJSON(attachmentrejectreason_get_autocomplete_v2_response_t *attachmentrejectreason_get_autocomplete_v2_response);

#endif /* _attachmentrejectreason_get_autocomplete_v2_response_H_ */

