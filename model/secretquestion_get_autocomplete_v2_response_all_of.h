/*
 * secretquestion_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _secretquestion_get_autocomplete_v2_response_all_of_H_
#define _secretquestion_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct secretquestion_get_autocomplete_v2_response_all_of_t secretquestion_get_autocomplete_v2_response_all_of_t;

#include "secretquestion_get_autocomplete_v2_response_m_payload.h"



typedef struct secretquestion_get_autocomplete_v2_response_all_of_t {
    struct secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} secretquestion_get_autocomplete_v2_response_all_of_t;

secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of_create(
    secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload
);

void secretquestion_get_autocomplete_v2_response_all_of_free(secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of);

secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *secretquestion_get_autocomplete_v2_response_all_ofJSON);

cJSON *secretquestion_get_autocomplete_v2_response_all_of_convertToJSON(secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of);

#endif /* _secretquestion_get_autocomplete_v2_response_all_of_H_ */

