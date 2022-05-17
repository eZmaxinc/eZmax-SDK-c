/*
 * ezsignbulksendsignermapping_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignbulksendsignermapping_create_object_v1_response_all_of_H_
#define _ezsignbulksendsignermapping_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_create_object_v1_response_all_of_t ezsignbulksendsignermapping_create_object_v1_response_all_of_t;

#include "ezsignbulksendsignermapping_create_object_v1_response_m_payload.h"



typedef struct ezsignbulksendsignermapping_create_object_v1_response_all_of_t {
    struct ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *m_payload; //model

} ezsignbulksendsignermapping_create_object_v1_response_all_of_t;

ezsignbulksendsignermapping_create_object_v1_response_all_of_t *ezsignbulksendsignermapping_create_object_v1_response_all_of_create(
    ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *m_payload
);

void ezsignbulksendsignermapping_create_object_v1_response_all_of_free(ezsignbulksendsignermapping_create_object_v1_response_all_of_t *ezsignbulksendsignermapping_create_object_v1_response_all_of);

ezsignbulksendsignermapping_create_object_v1_response_all_of_t *ezsignbulksendsignermapping_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignbulksendsignermapping_create_object_v1_response_all_ofJSON);

cJSON *ezsignbulksendsignermapping_create_object_v1_response_all_of_convertToJSON(ezsignbulksendsignermapping_create_object_v1_response_all_of_t *ezsignbulksendsignermapping_create_object_v1_response_all_of);

#endif /* _ezsignbulksendsignermapping_create_object_v1_response_all_of_H_ */

