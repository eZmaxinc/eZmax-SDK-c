/*
 * ezsigntemplatepackagemembership_get_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatepackagemembership_get_object_v1_response_all_of_H_
#define _ezsigntemplatepackagemembership_get_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_get_object_v1_response_all_of_t ezsigntemplatepackagemembership_get_object_v1_response_all_of_t;

#include "ezsigntemplatepackagemembership_get_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackagemembership_get_object_v1_response_all_of_t {
    struct ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatepackagemembership_get_object_v1_response_all_of_t;

ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of_create(
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackagemembership_get_object_v1_response_all_of_free(ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of);

ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatepackagemembership_get_object_v1_response_all_ofJSON);

cJSON *ezsigntemplatepackagemembership_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of);

#endif /* _ezsigntemplatepackagemembership_get_object_v1_response_all_of_H_ */
