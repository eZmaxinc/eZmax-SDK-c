/*
 * ezsigntemplatedocumentpagerecognition_response.h
 *
 * A Ezsigntemplatedocumentpagerecognition Object
 */

#ifndef _ezsigntemplatedocumentpagerecognition_response_H_
#define _ezsigntemplatedocumentpagerecognition_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpagerecognition_response_t ezsigntemplatedocumentpagerecognition_response_t;

#include "field_e_ezsigntemplatedocumentpagerecognition_operator.h"
#include "field_e_ezsigntemplatedocumentpagerecognition_section.h"



typedef struct ezsigntemplatedocumentpagerecognition_response_t {
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
} ezsigntemplatedocumentpagerecognition_response_t;

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response_create(
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

void ezsigntemplatedocumentpagerecognition_response_free(ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response);

ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_responseJSON);

cJSON *ezsigntemplatedocumentpagerecognition_response_convertToJSON(ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response);

#endif /* _ezsigntemplatedocumentpagerecognition_response_H_ */

