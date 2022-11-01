/*
 * franchiseoffice_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _franchiseoffice_get_autocomplete_v2_response_all_of_H_
#define _franchiseoffice_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchiseoffice_get_autocomplete_v2_response_all_of_t franchiseoffice_get_autocomplete_v2_response_all_of_t;

#include "franchiseoffice_get_autocomplete_v2_response_m_payload.h"



typedef struct franchiseoffice_get_autocomplete_v2_response_all_of_t {
    struct franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} franchiseoffice_get_autocomplete_v2_response_all_of_t;

franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of_create(
    franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload
);

void franchiseoffice_get_autocomplete_v2_response_all_of_free(franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of);

franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *franchiseoffice_get_autocomplete_v2_response_all_ofJSON);

cJSON *franchiseoffice_get_autocomplete_v2_response_all_of_convertToJSON(franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of);

#endif /* _franchiseoffice_get_autocomplete_v2_response_all_of_H_ */

