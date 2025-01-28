/*
 * variableexpense_response.h
 *
 * A Variableexpense Object
 */

#ifndef _variableexpense_response_H_
#define _variableexpense_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_response_t variableexpense_response_t;

#include "field_e_variableexpense_taxable.h"
#include "multilingual_variableexpense_description.h"



typedef struct variableexpense_response_t {
    int pki_variableexpense_id; //numeric
    char *s_variableexpense_code; // string
    struct multilingual_variableexpense_description_t *obj_variableexpense_description; //model
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable; //referenced enum
    int b_variableexpense_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_response_t;

__attribute__((deprecated)) variableexpense_response_t *variableexpense_response_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int b_variableexpense_isactive
);

void variableexpense_response_free(variableexpense_response_t *variableexpense_response);

variableexpense_response_t *variableexpense_response_parseFromJSON(cJSON *variableexpense_responseJSON);

cJSON *variableexpense_response_convertToJSON(variableexpense_response_t *variableexpense_response);

#endif /* _variableexpense_response_H_ */

