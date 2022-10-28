/*
 * ezsignsignature_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _ezsignsignature_get_object_v2_response_all_of_H_
#define _ezsignsignature_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_get_object_v2_response_all_of_t ezsignsignature_get_object_v2_response_all_of_t;

#include "ezsignsignature_get_object_v2_response_m_payload.h"



typedef struct ezsignsignature_get_object_v2_response_all_of_t {
    struct ezsignsignature_get_object_v2_response_m_payload_t *m_payload; //model

} ezsignsignature_get_object_v2_response_all_of_t;

ezsignsignature_get_object_v2_response_all_of_t *ezsignsignature_get_object_v2_response_all_of_create(
    ezsignsignature_get_object_v2_response_m_payload_t *m_payload
);

void ezsignsignature_get_object_v2_response_all_of_free(ezsignsignature_get_object_v2_response_all_of_t *ezsignsignature_get_object_v2_response_all_of);

ezsignsignature_get_object_v2_response_all_of_t *ezsignsignature_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsignsignature_get_object_v2_response_all_ofJSON);

cJSON *ezsignsignature_get_object_v2_response_all_of_convertToJSON(ezsignsignature_get_object_v2_response_all_of_t *ezsignsignature_get_object_v2_response_all_of);

#endif /* _ezsignsignature_get_object_v2_response_all_of_H_ */

