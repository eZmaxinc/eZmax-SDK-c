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



typedef struct variableexpense_list_element_t {
    int pki_variableexpense_id; //numeric
    char *s_variableexpense_code; // string
    char *s_variableexpense_description_x; // string
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable; //referenced enum
    int b_variableexpense_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_list_element_t;

__attribute__((deprecated)) variableexpense_list_element_t *variableexpense_list_element_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    char *s_variableexpense_description_x,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int b_variableexpense_isactive
);

void variableexpense_list_element_free(variableexpense_list_element_t *variableexpense_list_element);

variableexpense_list_element_t *variableexpense_list_element_parseFromJSON(cJSON *variableexpense_list_elementJSON);

cJSON *variableexpense_list_element_convertToJSON(variableexpense_list_element_t *variableexpense_list_element);

#endif /* _variableexpense_list_element_H_ */

