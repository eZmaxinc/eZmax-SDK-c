/*
 * ezsigndocument_get_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsigndocument_get_object_v1_response_all_of_H_
#define _ezsigndocument_get_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_object_v1_response_all_of_t ezsigndocument_get_object_v1_response_all_of_t;

#include "ezsigndocument_get_object_v1_response_m_payload.h"



typedef struct ezsigndocument_get_object_v1_response_all_of_t {
    struct ezsigndocument_get_object_v1_response_m_payload_t *m_payload; //model

} ezsigndocument_get_object_v1_response_all_of_t;

ezsigndocument_get_object_v1_response_all_of_t *ezsigndocument_get_object_v1_response_all_of_create(
    ezsigndocument_get_object_v1_response_m_payload_t *m_payload
);

void ezsigndocument_get_object_v1_response_all_of_free(ezsigndocument_get_object_v1_response_all_of_t *ezsigndocument_get_object_v1_response_all_of);

ezsigndocument_get_object_v1_response_all_of_t *ezsigndocument_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsigndocument_get_object_v1_response_all_ofJSON);

cJSON *ezsigndocument_get_object_v1_response_all_of_convertToJSON(ezsigndocument_get_object_v1_response_all_of_t *ezsigndocument_get_object_v1_response_all_of);

#endif /* _ezsigndocument_get_object_v1_response_all_of_H_ */

