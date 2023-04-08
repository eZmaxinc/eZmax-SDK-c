/*
 * ezmaxproduct_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _ezmaxproduct_get_autocomplete_v2_response_all_of_H_
#define _ezmaxproduct_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxproduct_get_autocomplete_v2_response_all_of_t ezmaxproduct_get_autocomplete_v2_response_all_of_t;

#include "ezmaxproduct_get_autocomplete_v2_response_m_payload.h"



typedef struct ezmaxproduct_get_autocomplete_v2_response_all_of_t {
    struct ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} ezmaxproduct_get_autocomplete_v2_response_all_of_t;

ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of_create(
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezmaxproduct_get_autocomplete_v2_response_all_of_free(ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of);

ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *ezmaxproduct_get_autocomplete_v2_response_all_ofJSON);

cJSON *ezmaxproduct_get_autocomplete_v2_response_all_of_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of);

#endif /* _ezmaxproduct_get_autocomplete_v2_response_all_of_H_ */

