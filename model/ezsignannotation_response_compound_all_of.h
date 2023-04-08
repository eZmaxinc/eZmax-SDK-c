/*
 * ezsignannotation_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignannotation_response_compound_all_of_H_
#define _ezsignannotation_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_response_compound_all_of_t ezsignannotation_response_compound_all_of_t;

#include "textstylestatic_response_compound.h"



typedef struct ezsignannotation_response_compound_all_of_t {
    struct textstylestatic_response_compound_t *obj_textstylestatic; //model

} ezsignannotation_response_compound_all_of_t;

ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of_create(
    textstylestatic_response_compound_t *obj_textstylestatic
);

void ezsignannotation_response_compound_all_of_free(ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of);

ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of_parseFromJSON(cJSON *ezsignannotation_response_compound_all_ofJSON);

cJSON *ezsignannotation_response_compound_all_of_convertToJSON(ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of);

#endif /* _ezsignannotation_response_compound_all_of_H_ */

