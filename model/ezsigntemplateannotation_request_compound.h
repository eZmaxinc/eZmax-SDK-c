/*
 * ezsigntemplateannotation_request_compound.h
 *
 * A Ezsigntemplateannotation Object and children
 */

#ifndef _ezsigntemplateannotation_request_compound_H_
#define _ezsigntemplateannotation_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_request_compound_t ezsigntemplateannotation_request_compound_t;

#include "field_e_ezsigntemplateannotation_horizontalalignment.h"
#include "field_e_ezsigntemplateannotation_type.h"
#include "field_e_ezsigntemplateannotation_verticalalignment.h"
#include "textstylestatic_request_compound.h"



typedef struct ezsigntemplateannotation_request_compound_t {
    int *pki_ezsigntemplateannotation_id; //numeric
    int *fki_ezsigntemplatedocument_id; //numeric
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
    struct textstylestatic_request_compound_t *obj_textstylestatic; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_request_compound_t;

__attribute__((deprecated)) ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound_create(
    int *pki_ezsigntemplateannotation_id,
    int *fki_ezsigntemplatedocument_id,
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
    char *s_ezsigntemplateannotation_dropdownvalues,
    textstylestatic_request_compound_t *obj_textstylestatic
);

void ezsigntemplateannotation_request_compound_free(ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound);

ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound_parseFromJSON(cJSON *ezsigntemplateannotation_request_compoundJSON);

cJSON *ezsigntemplateannotation_request_compound_convertToJSON(ezsigntemplateannotation_request_compound_t *ezsigntemplateannotation_request_compound);

#endif /* _ezsigntemplateannotation_request_compound_H_ */

