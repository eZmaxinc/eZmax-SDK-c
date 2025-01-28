/*
 * ezsignannotation_request.h
 *
 * A Ezsignannotation Object
 */

#ifndef _ezsignannotation_request_H_
#define _ezsignannotation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_request_t ezsignannotation_request_t;

#include "enum_horizontalalignment.h"
#include "enum_verticalalignment.h"
#include "field_e_ezsignannotation_type.h"



typedef struct ezsignannotation_request_t {
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
} ezsignannotation_request_t;

__attribute__((deprecated)) ezsignannotation_request_t *ezsignannotation_request_create(
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

void ezsignannotation_request_free(ezsignannotation_request_t *ezsignannotation_request);

ezsignannotation_request_t *ezsignannotation_request_parseFromJSON(cJSON *ezsignannotation_requestJSON);

cJSON *ezsignannotation_request_convertToJSON(ezsignannotation_request_t *ezsignannotation_request);

#endif /* _ezsignannotation_request_H_ */

