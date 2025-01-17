/*
 * variableexpense_request_compound.h
 *
 * A Variableexpense Object and children
 */

#ifndef _variableexpense_request_compound_H_
#define _variableexpense_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_request_compound_t variableexpense_request_compound_t;

#include "field_e_variableexpense_taxable.h"
#include "multilingual_variableexpense_description.h"
#include "variableexpense_request.h"

// Enum  for variableexpense_request_compound

typedef enum  { ezmax_api_definition__full_variableexpense_request_compound__NULL = 0, ezmax_api_definition__full_variableexpense_request_compound__Yes, ezmax_api_definition__full_variableexpense_request_compound__No, ezmax_api_definition__full_variableexpense_request_compound__Included } ezmax_api_definition__full_variableexpense_request_compound__e;

char* variableexpense_request_compound_e_variableexpense_taxable_ToString(ezmax_api_definition__full_variableexpense_request_compound__e e_variableexpense_taxable);

ezmax_api_definition__full_variableexpense_request_compound__e variableexpense_request_compound_e_variableexpense_taxable_FromString(char* e_variableexpense_taxable);



typedef struct variableexpense_request_compound_t {
    int pki_variableexpense_id; //numeric
    char *s_variableexpense_code; // string
    struct multilingual_variableexpense_description_t *obj_variableexpense_description; //model
    field_e_variableexpense_taxable_t *e_variableexpense_taxable; // custom
    int b_variableexpense_isactive; //boolean

} variableexpense_request_compound_t;

variableexpense_request_compound_t *variableexpense_request_compound_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    field_e_variableexpense_taxable_t *e_variableexpense_taxable,
    int b_variableexpense_isactive
);

void variableexpense_request_compound_free(variableexpense_request_compound_t *variableexpense_request_compound);

variableexpense_request_compound_t *variableexpense_request_compound_parseFromJSON(cJSON *variableexpense_request_compoundJSON);

cJSON *variableexpense_request_compound_convertToJSON(variableexpense_request_compound_t *variableexpense_request_compound);

#endif /* _variableexpense_request_compound_H_ */

