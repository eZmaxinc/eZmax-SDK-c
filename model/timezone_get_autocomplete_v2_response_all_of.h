/*
 * timezone_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _timezone_get_autocomplete_v2_response_all_of_H_
#define _timezone_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_get_autocomplete_v2_response_all_of_t timezone_get_autocomplete_v2_response_all_of_t;

#include "timezone_get_autocomplete_v2_response_m_payload.h"



typedef struct timezone_get_autocomplete_v2_response_all_of_t {
    struct timezone_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} timezone_get_autocomplete_v2_response_all_of_t;

timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of_create(
    timezone_get_autocomplete_v2_response_m_payload_t *m_payload
);

void timezone_get_autocomplete_v2_response_all_of_free(timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of);

timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *timezone_get_autocomplete_v2_response_all_ofJSON);

cJSON *timezone_get_autocomplete_v2_response_all_of_convertToJSON(timezone_get_autocomplete_v2_response_all_of_t *timezone_get_autocomplete_v2_response_all_of);

#endif /* _timezone_get_autocomplete_v2_response_all_of_H_ */

