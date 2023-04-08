/*
 * variableexpense_list_element.h
 *
 * A Variableexpense List Element
 */

#ifndef _variableexpense_list_element_H_
#define _variableexpense_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_list_element_t variableexpense_list_element_t;

#include "field_e_variableexpense_taxable.h"

// Enum  for variableexpense_list_element

typedef enum  { ezmax_api_definition__full_variableexpense_list_element__NULL = 0, ezmax_api_definition__full_variableexpense_list_element__Yes, ezmax_api_definition__full_variableexpense_list_element__No, ezmax_api_definition__full_variableexpense_list_element__Included } ezmax_api_definition__full_variableexpense_list_element__e;

char* variableexpense_list_element_e_variableexpense_taxable_ToString(ezmax_api_definition__full_variableexpense_list_element__e e_variableexpense_taxable);

ezmax_api_definition__full_variableexpense_list_element__e variableexpense_list_element_e_variableexpense_taxable_FromString(char* e_variableexpense_taxable);



typedef struct variableexpense_list_element_t {
    int pki_variableexpense_id; //numeric
    char *s_variableexpense_code; // string
    char *s_variableexpense_description_x; // string
    field_e_variableexpense_taxable_t *e_variableexpense_taxable; // custom
    int b_variableexpense_isactive; //boolean

} variableexpense_list_element_t;

variableexpense_list_element_t *variableexpense_list_element_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    char *s_variableexpense_description_x,
    field_e_variableexpense_taxable_t *e_variableexpense_taxable,
    int b_variableexpense_isactive
);

void variableexpense_list_element_free(variableexpense_list_element_t *variableexpense_list_element);

variableexpense_list_element_t *variableexpense_list_element_parseFromJSON(cJSON *variableexpense_list_elementJSON);

cJSON *variableexpense_list_element_convertToJSON(variableexpense_list_element_t *variableexpense_list_element);

#endif /* _variableexpense_list_element_H_ */

