/*
 * ezmaxinvoicing_get_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezmaxinvoicing_get_object_v1_response_all_of_H_
#define _ezmaxinvoicing_get_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_get_object_v1_response_all_of_t ezmaxinvoicing_get_object_v1_response_all_of_t;

#include "ezmaxinvoicing_get_object_v1_response_m_payload.h"



typedef struct ezmaxinvoicing_get_object_v1_response_all_of_t {
    struct ezmaxinvoicing_get_object_v1_response_m_payload_t *m_payload; //model

} ezmaxinvoicing_get_object_v1_response_all_of_t;

ezmaxinvoicing_get_object_v1_response_all_of_t *ezmaxinvoicing_get_object_v1_response_all_of_create(
    ezmaxinvoicing_get_object_v1_response_m_payload_t *m_payload
);

void ezmaxinvoicing_get_object_v1_response_all_of_free(ezmaxinvoicing_get_object_v1_response_all_of_t *ezmaxinvoicing_get_object_v1_response_all_of);

ezmaxinvoicing_get_object_v1_response_all_of_t *ezmaxinvoicing_get_object_v1_response_all_of_parseFromJSON(cJSON *ezmaxinvoicing_get_object_v1_response_all_ofJSON);

cJSON *ezmaxinvoicing_get_object_v1_response_all_of_convertToJSON(ezmaxinvoicing_get_object_v1_response_all_of_t *ezmaxinvoicing_get_object_v1_response_all_of);

#endif /* _ezmaxinvoicing_get_object_v1_response_all_of_H_ */

