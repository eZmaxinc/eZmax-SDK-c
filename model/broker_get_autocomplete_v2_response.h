/*
 * broker_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/broker/getAutocomplete
 */

#ifndef _broker_get_autocomplete_v2_response_H_
#define _broker_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_get_autocomplete_v2_response_t broker_get_autocomplete_v2_response_t;

#include "broker_get_autocomplete_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct broker_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct broker_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} broker_get_autocomplete_v2_response_t;

__attribute__((deprecated)) broker_get_autocomplete_v2_response_t *broker_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    broker_get_autocomplete_v2_response_m_payload_t *m_payload
);

void broker_get_autocomplete_v2_response_free(broker_get_autocomplete_v2_response_t *broker_get_autocomplete_v2_response);

broker_get_autocomplete_v2_response_t *broker_get_autocomplete_v2_response_parseFromJSON(cJSON *broker_get_autocomplete_v2_responseJSON);

cJSON *broker_get_autocomplete_v2_response_convertToJSON(broker_get_autocomplete_v2_response_t *broker_get_autocomplete_v2_response);

#endif /* _broker_get_autocomplete_v2_response_H_ */

