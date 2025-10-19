/*
 * brokertype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/brokertype/getAutocomplete
 */

#ifndef _brokertype_get_autocomplete_v2_response_H_
#define _brokertype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct brokertype_get_autocomplete_v2_response_t brokertype_get_autocomplete_v2_response_t;

#include "brokertype_get_autocomplete_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct brokertype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct brokertype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} brokertype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) brokertype_get_autocomplete_v2_response_t *brokertype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    brokertype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void brokertype_get_autocomplete_v2_response_free(brokertype_get_autocomplete_v2_response_t *brokertype_get_autocomplete_v2_response);

brokertype_get_autocomplete_v2_response_t *brokertype_get_autocomplete_v2_response_parseFromJSON(cJSON *brokertype_get_autocomplete_v2_responseJSON);

cJSON *brokertype_get_autocomplete_v2_response_convertToJSON(brokertype_get_autocomplete_v2_response_t *brokertype_get_autocomplete_v2_response);

#endif /* _brokertype_get_autocomplete_v2_response_H_ */

