/*
 * ezsigntemplatedocumentpagerecognition_request.h
 *
 * A Ezsigntemplatedocumentpagerecognition Object
 */

#ifndef _ezsigntemplatedocumentpagerecognition_request_H_
#define _ezsigntemplatedocumentpagerecognition_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpagerecognition_request_t ezsigntemplatedocumentpagerecognition_request_t;

#include "field_e_ezsigntemplatedocumentpagerecognition_operator.h"
#include "field_e_ezsigntemplatedocumentpagerecognition_section.h"



typedef struct ezsigntemplatedocumentpagerecognition_request_t {
    int pki_ezsigntemplatedocumentpagerecognition_id; //numeric
    int fki_ezsigntemplatedocumentpage_id; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__e e_ezsigntemplatedocumentpagerecognition_operator; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e e_ezsigntemplatedocumentpagerecognition_section; //referenced enum
    int i_ezsigntemplatedocumentpagerecognition_similarpercentage; //numeric
    int i_ezsigntemplatedocumentpagerecognition_x; //numeric
    int i_ezsigntemplatedocumentpagerecognition_y; //numeric
    int i_ezsigntemplatedocumentpagerecognition_width; //numeric
    int i_ezsigntemplatedocumentpagerecognition_height; //numeric
    char *t_ezsigntemplatedocumentpagerecognition_text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocumentpagerecognition_request_t;

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request_create(
    int pki_ezsigntemplatedocumentpagerecognition_id,
    int fki_ezsigntemplatedocumentpage_id,
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__e e_ezsigntemplatedocumentpagerecognition_operator,
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e e_ezsigntemplatedocumentpagerecognition_section,
    int i_ezsigntemplatedocumentpagerecognition_similarpercentage,
    int i_ezsigntemplatedocumentpagerecognition_x,
    int i_ezsigntemplatedocumentpagerecognition_y,
    int i_ezsigntemplatedocumentpagerecognition_width,
    int i_ezsigntemplatedocumentpagerecognition_height,
    char *t_ezsigntemplatedocumentpagerecognition_text
);

void ezsigntemplatedocumentpagerecognition_request_free(ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request);

ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_requestJSON);

cJSON *ezsigntemplatedocumentpagerecognition_request_convertToJSON(ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request);

#endif /* _ezsigntemplatedocumentpagerecognition_request_H_ */

