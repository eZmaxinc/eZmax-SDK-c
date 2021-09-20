/*
 * activesession_get_current_v1_response_all_of.h
 *
 * 
 */

#ifndef _activesession_get_current_v1_response_all_of_H_
#define _activesession_get_current_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_get_current_v1_response_all_of_t activesession_get_current_v1_response_all_of_t;

#include "activesession_get_current_v1_response_m_payload.h"



typedef struct activesession_get_current_v1_response_all_of_t {
    struct activesession_get_current_v1_response_m_payload_t *m_payload; //model

} activesession_get_current_v1_response_all_of_t;

activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of_create(
    activesession_get_current_v1_response_m_payload_t *m_payload
);

void activesession_get_current_v1_response_all_of_free(activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of);

activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of_parseFromJSON(cJSON *activesession_get_current_v1_response_all_ofJSON);

cJSON *activesession_get_current_v1_response_all_of_convertToJSON(activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of);

#endif /* _activesession_get_current_v1_response_all_of_H_ */

