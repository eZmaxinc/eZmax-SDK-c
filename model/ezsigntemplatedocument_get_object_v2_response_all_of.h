/*
 * ezsigntemplatedocument_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatedocument_get_object_v2_response_all_of_H_
#define _ezsigntemplatedocument_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_get_object_v2_response_all_of_t ezsigntemplatedocument_get_object_v2_response_all_of_t;

#include "ezsigntemplatedocument_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatedocument_get_object_v2_response_all_of_t {
    struct ezsigntemplatedocument_get_object_v2_response_m_payload_t *m_payload; //model

} ezsigntemplatedocument_get_object_v2_response_all_of_t;

ezsigntemplatedocument_get_object_v2_response_all_of_t *ezsigntemplatedocument_get_object_v2_response_all_of_create(
    ezsigntemplatedocument_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplatedocument_get_object_v2_response_all_of_free(ezsigntemplatedocument_get_object_v2_response_all_of_t *ezsigntemplatedocument_get_object_v2_response_all_of);

ezsigntemplatedocument_get_object_v2_response_all_of_t *ezsigntemplatedocument_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsigntemplatedocument_get_object_v2_response_all_ofJSON);

cJSON *ezsigntemplatedocument_get_object_v2_response_all_of_convertToJSON(ezsigntemplatedocument_get_object_v2_response_all_of_t *ezsigntemplatedocument_get_object_v2_response_all_of);

#endif /* _ezsigntemplatedocument_get_object_v2_response_all_of_H_ */

