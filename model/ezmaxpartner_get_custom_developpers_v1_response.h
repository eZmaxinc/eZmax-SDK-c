/*
 * ezmaxpartner_get_custom_developpers_v1_response.h
 *
 * Response for GET /1/object/ezmaxpartner/getCustomDeveloppers
 */

#ifndef _ezmaxpartner_get_custom_developpers_v1_response_H_
#define _ezmaxpartner_get_custom_developpers_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxpartner_get_custom_developpers_v1_response_t ezmaxpartner_get_custom_developpers_v1_response_t;

#include "ezmaxpartner_get_custom_developpers_v1_response_m_payload.h"



typedef struct ezmaxpartner_get_custom_developpers_v1_response_t {
    struct ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxpartner_get_custom_developpers_v1_response_t;

__attribute__((deprecated)) ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response_create(
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *m_payload
);

void ezmaxpartner_get_custom_developpers_v1_response_free(ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response);

ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response_parseFromJSON(cJSON *ezmaxpartner_get_custom_developpers_v1_responseJSON);

cJSON *ezmaxpartner_get_custom_developpers_v1_response_convertToJSON(ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response);

#endif /* _ezmaxpartner_get_custom_developpers_v1_response_H_ */

