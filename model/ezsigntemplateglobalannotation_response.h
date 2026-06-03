/*
 * ezsigntemplateglobalannotation_response.h
 *
 * A Ezsigntemplateglobalannotation Object
 */

#ifndef _ezsigntemplateglobalannotation_response_H_
#define _ezsigntemplateglobalannotation_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobalannotation_response_t ezsigntemplateglobalannotation_response_t;

#include "field_e_ezsigntemplateglobalannotation_horizontalalignment.h"
#include "field_e_ezsigntemplateglobalannotation_type.h"
#include "field_e_ezsigntemplateglobalannotation_verticalalignment.h"
#include "textstylestatic_request_compound.h"



typedef struct ezsigntemplateglobalannotation_response_t {
    int *pki_ezsigntemplateglobalannotation_id; //numeric
    int *fki_textstylestatic_id; //numeric
    struct textstylestatic_request_compound_t *obj_textstylestatic; //model
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type; //referenced enum
    int *i_ezsigntemplateglobalannotation_x; //numeric
    int *i_ezsigntemplateglobalannotation_y; //numeric
    int *i_ezsigntemplateglobalannotation_width; //numeric
    int *i_ezsigntemplateglobalannotation_height; //numeric
    int *i_ezsigntemplateglobaldocumentpage_pagenumber; //numeric
    char *s_ezsigntemplateglobalannotation_description; // string
    char *s_ezsigntemplateglobalannotation_defaulttext; // string
    char *s_ezsigntemplateglobalannotation_dropdownvalues; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateglobalannotation_response_t;

__attribute__((deprecated)) ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response_create(
    int *pki_ezsigntemplateglobalannotation_id,
    int *fki_textstylestatic_id,
    textstylestatic_request_compound_t *obj_textstylestatic,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_horizontalalignment__e e_ezsigntemplateglobalannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_verticalalignment__e e_ezsigntemplateglobalannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateglobalannotation_type__e e_ezsigntemplateglobalannotation_type,
    int *i_ezsigntemplateglobalannotation_x,
    int *i_ezsigntemplateglobalannotation_y,
    int *i_ezsigntemplateglobalannotation_width,
    int *i_ezsigntemplateglobalannotation_height,
    int *i_ezsigntemplateglobaldocumentpage_pagenumber,
    char *s_ezsigntemplateglobalannotation_description,
    char *s_ezsigntemplateglobalannotation_defaulttext,
    char *s_ezsigntemplateglobalannotation_dropdownvalues
);

void ezsigntemplateglobalannotation_response_free(ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response);

ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response_parseFromJSON(cJSON *ezsigntemplateglobalannotation_responseJSON);

cJSON *ezsigntemplateglobalannotation_response_convertToJSON(ezsigntemplateglobalannotation_response_t *ezsigntemplateglobalannotation_response);

#endif /* _ezsigntemplateglobalannotation_response_H_ */

