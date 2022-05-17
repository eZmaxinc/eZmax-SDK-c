/*
 * ezsignbulksend_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignbulksend_create_object_v1_response_all_of_H_
#define _ezsignbulksend_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_create_object_v1_response_all_of_t ezsignbulksend_create_object_v1_response_all_of_t;

#include "ezsignbulksend_create_object_v1_response_m_payload.h"



typedef struct ezsignbulksend_create_object_v1_response_all_of_t {
    struct ezsignbulksend_create_object_v1_response_m_payload_t *m_payload; //model

} ezsignbulksend_create_object_v1_response_all_of_t;

ezsignbulksend_create_object_v1_response_all_of_t *ezsignbulksend_create_object_v1_response_all_of_create(
    ezsignbulksend_create_object_v1_response_m_payload_t *m_payload
);

void ezsignbulksend_create_object_v1_response_all_of_free(ezsignbulksend_create_object_v1_response_all_of_t *ezsignbulksend_create_object_v1_response_all_of);

ezsignbulksend_create_object_v1_response_all_of_t *ezsignbulksend_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignbulksend_create_object_v1_response_all_ofJSON);

cJSON *ezsignbulksend_create_object_v1_response_all_of_convertToJSON(ezsignbulksend_create_object_v1_response_all_of_t *ezsignbulksend_create_object_v1_response_all_of);

#endif /* _ezsignbulksend_create_object_v1_response_all_of_H_ */

