/*
 * ezsigntemplateglobalannotation_response_compound.h
 *
 * A Ezsigntemplateglobalannotation Object
 */

#ifndef _ezsigntemplateglobalannotation_response_compound_H_
#define _ezsigntemplateglobalannotation_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobalannotation_response_compound_t ezsigntemplateglobalannotation_response_compound_t;

#include "field_e_ezsigntemplateglobalannotation_horizontalalignment.h"
#include "field_e_ezsigntemplateglobalannotation_type.h"
#include "field_e_ezsigntemplateglobalannotation_verticalalignment.h"



typedef struct ezsigntemplateglobalannotation_response_compound_t {
    int pki_ezsigntemplateglobalannotation_id; //numeric
    int fki_ezsigntemplateglobaldocumentpage_id; //numeric
    int fki_textstylestatic_id; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type; //referenced enum
    int i_ezsigntemplateglobalannotation_x; //numeric
    int i_ezsigntemplateglobalannotation_y; //numeric
    int i_ezsigntemplateglobalannotation_width; //numeric
    int i_ezsigntemplateglobalannotation_height; //numeric
    char *s_ezsigntemplateglobalannotation_description; // string
    char *s_ezsigntemplateglobalannotation_defaulttext; // string
    char *s_ezsigntemplateglobalannotation_dropdownvalues; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateglobalannotation_response_compound_t;

__attribute__((deprecated)) ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound_create(
    int pki_ezsigntemplateglobalannotation_id,
    int fki_ezsigntemplateglobaldocumentpage_id,
    int fki_textstylestatic_id,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type,
    int i_ezsigntemplateglobalannotation_x,
    int i_ezsigntemplateglobalannotation_y,
    int i_ezsigntemplateglobalannotation_width,
    int i_ezsigntemplateglobalannotation_height,
    char *s_ezsigntemplateglobalannotation_description,
    char *s_ezsigntemplateglobalannotation_defaulttext,
    char *s_ezsigntemplateglobalannotation_dropdownvalues
);

void ezsigntemplateglobalannotation_response_compound_free(ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound);

ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound_parseFromJSON(cJSON *ezsigntemplateglobalannotation_response_compoundJSON);

cJSON *ezsigntemplateglobalannotation_response_compound_convertToJSON(ezsigntemplateglobalannotation_response_compound_t *ezsigntemplateglobalannotation_response_compound);

#endif /* _ezsigntemplateglobalannotation_response_compound_H_ */

