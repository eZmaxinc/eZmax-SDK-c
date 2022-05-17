/*
 * ezsigntemplatepackage_get_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatepackage_get_object_v1_response_all_of_H_
#define _ezsigntemplatepackage_get_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_get_object_v1_response_all_of_t ezsigntemplatepackage_get_object_v1_response_all_of_t;

#include "ezsigntemplatepackage_get_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackage_get_object_v1_response_all_of_t {
    struct ezsigntemplatepackage_get_object_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatepackage_get_object_v1_response_all_of_t;

ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of_create(
    ezsigntemplatepackage_get_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackage_get_object_v1_response_all_of_free(ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of);

ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatepackage_get_object_v1_response_all_ofJSON);

cJSON *ezsigntemplatepackage_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of);

#endif /* _ezsigntemplatepackage_get_object_v1_response_all_of_H_ */

