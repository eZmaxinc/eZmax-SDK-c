/*
 * ezsignannotation_request_compound.h
 *
 * A Ezsignannotation Object and children
 */

#ifndef _ezsignannotation_request_compound_H_
#define _ezsignannotation_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_request_compound_t ezsignannotation_request_compound_t;

#include "enum_horizontalalignment.h"
#include "enum_verticalalignment.h"
#include "field_e_ezsignannotation_type.h"
#include "textstylestatic_request_compound.h"



typedef struct ezsignannotation_request_compound_t {
    int pki_ezsignannotation_id; //numeric
    int fki_ezsigndocument_id; //numeric
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment; //referenced enum
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment; //referenced enum
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type; //referenced enum
    int i_ezsignannotation_x; //numeric
    int i_ezsignannotation_y; //numeric
    int i_ezsignannotation_width; //numeric
    int i_ezsignannotation_height; //numeric
    char *s_ezsignannotation_text; // string
    int i_ezsignpage_pagenumber; //numeric
    struct textstylestatic_request_compound_t *obj_textstylestatic; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignannotation_request_compound_t;

__attribute__((deprecated)) ezsignannotation_request_compound_t *ezsignannotation_request_compound_create(
    int pki_ezsignannotation_id,
    int fki_ezsigndocument_id,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignannotation_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_ezsignannotation_verticalalignment,
    ezmax_api_definition__full_field_e_ezsignannotation_type__e e_ezsignannotation_type,
    int i_ezsignannotation_x,
    int i_ezsignannotation_y,
    int i_ezsignannotation_width,
    int i_ezsignannotation_height,
    char *s_ezsignannotation_text,
    int i_ezsignpage_pagenumber,
    textstylestatic_request_compound_t *obj_textstylestatic
);

void ezsignannotation_request_compound_free(ezsignannotation_request_compound_t *ezsignannotation_request_compound);

ezsignannotation_request_compound_t *ezsignannotation_request_compound_parseFromJSON(cJSON *ezsignannotation_request_compoundJSON);

cJSON *ezsignannotation_request_compound_convertToJSON(ezsignannotation_request_compound_t *ezsignannotation_request_compound);

#endif /* _ezsignannotation_request_compound_H_ */

