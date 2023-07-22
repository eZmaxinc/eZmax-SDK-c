/*
 * company_autocomplete_element_response.h
 *
 * A Company AutocompleteElement Response
 */

#ifndef _company_autocomplete_element_response_H_
#define _company_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct company_autocomplete_element_response_t company_autocomplete_element_response_t;




typedef struct company_autocomplete_element_response_t {
    int pki_company_id; //numeric
    char *s_company_name_x; // string
    int b_company_isactive; //boolean

} company_autocomplete_element_response_t;

company_autocomplete_element_response_t *company_autocomplete_element_response_create(
    int pki_company_id,
    char *s_company_name_x,
    int b_company_isactive
);

void company_autocomplete_element_response_free(company_autocomplete_element_response_t *company_autocomplete_element_response);

company_autocomplete_element_response_t *company_autocomplete_element_response_parseFromJSON(cJSON *company_autocomplete_element_responseJSON);

cJSON *company_autocomplete_element_response_convertToJSON(company_autocomplete_element_response_t *company_autocomplete_element_response);

#endif /* _company_autocomplete_element_response_H_ */

