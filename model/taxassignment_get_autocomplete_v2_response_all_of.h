/*
 * taxassignment_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _taxassignment_get_autocomplete_v2_response_all_of_H_
#define _taxassignment_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct taxassignment_get_autocomplete_v2_response_all_of_t taxassignment_get_autocomplete_v2_response_all_of_t;

#include "taxassignment_get_autocomplete_v2_response_m_payload.h"



typedef struct taxassignment_get_autocomplete_v2_response_all_of_t {
    struct taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} taxassignment_get_autocomplete_v2_response_all_of_t;

taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of_create(
    taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload
);

void taxassignment_get_autocomplete_v2_response_all_of_free(taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of);

taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *taxassignment_get_autocomplete_v2_response_all_ofJSON);

cJSON *taxassignment_get_autocomplete_v2_response_all_of_convertToJSON(taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of);

#endif /* _taxassignment_get_autocomplete_v2_response_all_of_H_ */

