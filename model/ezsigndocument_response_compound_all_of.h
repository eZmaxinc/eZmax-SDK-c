/*
 * ezsigndocument_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsigndocument_response_compound_all_of_H_
#define _ezsigndocument_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_response_compound_all_of_t ezsigndocument_response_compound_all_of_t;

#include "custom_ezsignfoldersignerassociationstatus_response.h"



typedef struct ezsigndocument_response_compound_all_of_t {
    int i_ezsigndocument_stepformtotal; //numeric
    int i_ezsigndocument_stepformcurrent; //numeric
    int i_ezsigndocument_stepsignaturetotal; //numeric
    int i_ezsigndocument_stepsignature_current; //numeric
    list_t *a_obj_ezsignfoldersignerassociationstatus; //nonprimitive container

} ezsigndocument_response_compound_all_of_t;

ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of_create(
    int i_ezsigndocument_stepformtotal,
    int i_ezsigndocument_stepformcurrent,
    int i_ezsigndocument_stepsignaturetotal,
    int i_ezsigndocument_stepsignature_current,
    list_t *a_obj_ezsignfoldersignerassociationstatus
);

void ezsigndocument_response_compound_all_of_free(ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of);

ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of_parseFromJSON(cJSON *ezsigndocument_response_compound_all_ofJSON);

cJSON *ezsigndocument_response_compound_all_of_convertToJSON(ezsigndocument_response_compound_all_of_t *ezsigndocument_response_compound_all_of);

#endif /* _ezsigndocument_response_compound_all_of_H_ */

