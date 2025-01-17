/*
 * variableexpense_response_compound.h
 *
 * A Variableexpense Object
 */

#ifndef _variableexpense_response_compound_H_
#define _variableexpense_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_response_compound_t variableexpense_response_compound_t;

#include "field_e_variableexpense_taxable.h"
#include "multilingual_variableexpense_description.h"
#include "variableexpense_response.h"

// Enum  for variableexpense_response_compound

typedef enum  { ezmax_api_definition__full_variableexpense_response_compound__NULL = 0, ezmax_api_definition__full_variableexpense_response_compound__Yes, ezmax_api_definition__full_variableexpense_response_compound__No, ezmax_api_definition__full_variableexpense_response_compound__Included } ezmax_api_definition__full_variableexpense_response_compound__e;

char* variableexpense_response_compound_e_variableexpense_taxable_ToString(ezmax_api_definition__full_variableexpense_response_compound__e e_variableexpense_taxable);

ezmax_api_definition__full_variableexpense_response_compound__e variableexpense_response_compound_e_variableexpense_taxable_FromString(char* e_variableexpense_taxable);



typedef struct variableexpense_response_compound_t {
    int pki_variableexpense_id; //numeric
    char *s_variableexpense_code; // string
    struct multilingual_variableexpense_description_t *obj_variableexpense_description; //model
    field_e_variableexpense_taxable_t *e_variableexpense_taxable; // custom
    int b_variableexpense_isactive; //boolean

} variableexpense_response_compound_t;

variableexpense_response_compound_t *variableexpense_response_compound_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    field_e_variableexpense_taxable_t *e_variableexpense_taxable,
    int b_variableexpense_isactive
);

void variableexpense_response_compound_free(variableexpense_response_compound_t *variableexpense_response_compound);

variableexpense_response_compound_t *variableexpense_response_compound_parseFromJSON(cJSON *variableexpense_response_compoundJSON);

cJSON *variableexpense_response_compound_convertToJSON(variableexpense_response_compound_t *variableexpense_response_compound);

#endif /* _variableexpense_response_compound_H_ */

