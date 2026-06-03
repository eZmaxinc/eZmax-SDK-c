/*
 * ezsigntemplateannotation_response_compound.h
 *
 * A Ezsigntemplateannotation Object
 */

#ifndef _ezsigntemplateannotation_response_compound_H_
#define _ezsigntemplateannotation_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_response_compound_t ezsigntemplateannotation_response_compound_t;

#include "field_e_ezsigntemplateannotation_horizontalalignment.h"
#include "field_e_ezsigntemplateannotation_type.h"
#include "field_e_ezsigntemplateannotation_verticalalignment.h"
#include "textstylestatic_request_compound.h"



typedef struct ezsigntemplateannotation_response_compound_t {
    int *pki_ezsigntemplateannotation_id; //numeric
    int *fki_textstylestatic_id; //numeric
    struct textstylestatic_request_compound_t *obj_textstylestatic; //model
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type; //referenced enum
    int *i_ezsigntemplateannotation_x; //numeric
    int *i_ezsigntemplateannotation_y; //numeric
    int *i_ezsigntemplateannotation_width; //numeric
    int *i_ezsigntemplateannotation_height; //numeric
    int *i_ezsigntemplatedocumentpage_pagenumber; //numeric
    char *s_ezsigntemplateannotation_description; // string
    char *s_ezsigntemplateannotation_defaulttext; // string
    char *s_ezsigntemplateannotation_dropdownvalues; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_response_compound_t;

__attribute__((deprecated)) ezsigntemplateannotation_response_compound_t *ezsigntemplateannotation_response_compound_create(
    int *pki_ezsigntemplateannotation_id,
    int *fki_textstylestatic_id,
    textstylestatic_request_compound_t *obj_textstylestatic,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_horizontalalignment__e e_ezsigntemplateannotation_horizontalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e e_ezsigntemplateannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsigntemplateannotation_type__e e_ezsigntemplateannotation_type,
    int *i_ezsigntemplateannotation_x,
    int *i_ezsigntemplateannotation_y,
    int *i_ezsigntemplateannotation_width,
    int *i_ezsigntemplateannotation_height,
    int *i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateannotation_description,
    char *s_ezsigntemplateannotation_defaulttext,
    char *s_ezsigntemplateannotation_dropdownvalues
);

void ezsigntemplateannotation_response_compound_free(ezsigntemplateannotation_response_compound_t *ezsigntemplateannotation_response_compound);

ezsigntemplateannotation_response_compound_t *ezsigntemplateannotation_response_compound_parseFromJSON(cJSON *ezsigntemplateannotation_response_compoundJSON);

cJSON *ezsigntemplateannotation_response_compound_convertToJSON(ezsigntemplateannotation_response_compound_t *ezsigntemplateannotation_response_compound);

#endif /* _ezsigntemplateannotation_response_compound_H_ */

