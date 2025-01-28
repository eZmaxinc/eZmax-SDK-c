/*
 * variableexpense_request.h
 *
 * A Variableexpense Object
 */

#ifndef _variableexpense_request_H_
#define _variableexpense_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_request_t variableexpense_request_t;

#include "field_e_variableexpense_taxable.h"
#include "multilingual_variableexpense_description.h"



typedef struct variableexpense_request_t {
    int pki_variableexpense_id; //numeric
    char *s_variableexpense_code; // string
    struct multilingual_variableexpense_description_t *obj_variableexpense_description; //model
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable; //referenced enum
    int b_variableexpense_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_request_t;

__attribute__((deprecated)) variableexpense_request_t *variableexpense_request_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int b_variableexpense_isactive
);

void variableexpense_request_free(variableexpense_request_t *variableexpense_request);

variableexpense_request_t *variableexpense_request_parseFromJSON(cJSON *variableexpense_requestJSON);

cJSON *variableexpense_request_convertToJSON(variableexpense_request_t *variableexpense_request);

#endif /* _variableexpense_request_H_ */

