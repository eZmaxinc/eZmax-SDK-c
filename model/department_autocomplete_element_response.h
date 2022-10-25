/*
 * department_autocomplete_element_response.h
 *
 * A Department AutocompleteElement Response
 */

#ifndef _department_autocomplete_element_response_H_
#define _department_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct department_autocomplete_element_response_t department_autocomplete_element_response_t;




typedef struct department_autocomplete_element_response_t {
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int pki_department_id; //numeric
    int b_department_isactive; //boolean

} department_autocomplete_element_response_t;

department_autocomplete_element_response_t *department_autocomplete_element_response_create(
    char *s_company_name_x,
    char *s_department_name_x,
    int pki_department_id,
    int b_department_isactive
);

void department_autocomplete_element_response_free(department_autocomplete_element_response_t *department_autocomplete_element_response);

department_autocomplete_element_response_t *department_autocomplete_element_response_parseFromJSON(cJSON *department_autocomplete_element_responseJSON);

cJSON *department_autocomplete_element_response_convertToJSON(department_autocomplete_element_response_t *department_autocomplete_element_response);

#endif /* _department_autocomplete_element_response_H_ */

