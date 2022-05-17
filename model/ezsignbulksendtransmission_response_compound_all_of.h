/*
 * ezsignbulksendtransmission_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignbulksendtransmission_response_compound_all_of_H_
#define _ezsignbulksendtransmission_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendtransmission_response_compound_all_of_t ezsignbulksendtransmission_response_compound_all_of_t;

#include "custom_ezsignfoldertransmission_response.h"



typedef struct ezsignbulksendtransmission_response_compound_all_of_t {
    list_t *a_obj_ezsignfoldertransmission; //nonprimitive container

} ezsignbulksendtransmission_response_compound_all_of_t;

ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of_create(
    list_t *a_obj_ezsignfoldertransmission
);

void ezsignbulksendtransmission_response_compound_all_of_free(ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of);

ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of_parseFromJSON(cJSON *ezsignbulksendtransmission_response_compound_all_ofJSON);

cJSON *ezsignbulksendtransmission_response_compound_all_of_convertToJSON(ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of);

#endif /* _ezsignbulksendtransmission_response_compound_all_of_H_ */

