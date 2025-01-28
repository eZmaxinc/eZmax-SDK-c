/*
 * ezsignannotation_response.h
 *
 * A Ezsignannotation Object
 */

#ifndef _ezsignannotation_response_H_
#define _ezsignannotation_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_response_t ezsignannotation_response_t;

#include "enum_horizontalalignment.h"
#include "enum_verticalalignment.h"
#include "field_e_ezsignannotation_type.h"



typedef struct ezsignannotation_response_t {
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

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignannotation_response_t;

__attribute__((deprecated)) ezsignannotation_response_t *ezsignannotation_response_create(
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
    int i_ezsignpage_pagenumber
);

void ezsignannotation_response_free(ezsignannotation_response_t *ezsignannotation_response);

ezsignannotation_response_t *ezsignannotation_response_parseFromJSON(cJSON *ezsignannotation_responseJSON);

cJSON *ezsignannotation_response_convertToJSON(ezsignannotation_response_t *ezsignannotation_response);

#endif /* _ezsignannotation_response_H_ */

