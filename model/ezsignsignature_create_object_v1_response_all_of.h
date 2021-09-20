/*
 * ezsignsignature_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignsignature_create_object_v1_response_all_of_H_
#define _ezsignsignature_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_create_object_v1_response_all_of_t ezsignsignature_create_object_v1_response_all_of_t;

#include "ezsignsignature_create_object_v1_response_m_payload.h"



typedef struct ezsignsignature_create_object_v1_response_all_of_t {
    struct ezsignsignature_create_object_v1_response_m_payload_t *m_payload; //model

} ezsignsignature_create_object_v1_response_all_of_t;

ezsignsignature_create_object_v1_response_all_of_t *ezsignsignature_create_object_v1_response_all_of_create(
    ezsignsignature_create_object_v1_response_m_payload_t *m_payload
);

void ezsignsignature_create_object_v1_response_all_of_free(ezsignsignature_create_object_v1_response_all_of_t *ezsignsignature_create_object_v1_response_all_of);

ezsignsignature_create_object_v1_response_all_of_t *ezsignsignature_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignsignature_create_object_v1_response_all_ofJSON);

cJSON *ezsignsignature_create_object_v1_response_all_of_convertToJSON(ezsignsignature_create_object_v1_response_all_of_t *ezsignsignature_create_object_v1_response_all_of);

#endif /* _ezsignsignature_create_object_v1_response_all_of_H_ */

