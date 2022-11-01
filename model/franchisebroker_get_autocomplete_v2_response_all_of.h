/*
 * franchisebroker_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _franchisebroker_get_autocomplete_v2_response_all_of_H_
#define _franchisebroker_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisebroker_get_autocomplete_v2_response_all_of_t franchisebroker_get_autocomplete_v2_response_all_of_t;

#include "franchisebroker_get_autocomplete_v2_response_m_payload.h"



typedef struct franchisebroker_get_autocomplete_v2_response_all_of_t {
    struct franchisebroker_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} franchisebroker_get_autocomplete_v2_response_all_of_t;

franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of_create(
    franchisebroker_get_autocomplete_v2_response_m_payload_t *m_payload
);

void franchisebroker_get_autocomplete_v2_response_all_of_free(franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of);

franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *franchisebroker_get_autocomplete_v2_response_all_ofJSON);

cJSON *franchisebroker_get_autocomplete_v2_response_all_of_convertToJSON(franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of);

#endif /* _franchisebroker_get_autocomplete_v2_response_all_of_H_ */

