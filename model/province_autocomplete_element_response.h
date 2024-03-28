/*
 * province_autocomplete_element_response.h
 *
 * A Province AutocompleteElement Response
 */

#ifndef _province_autocomplete_element_response_H_
#define _province_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct province_autocomplete_element_response_t province_autocomplete_element_response_t;




typedef struct province_autocomplete_element_response_t {
    int pki_province_id; //numeric
    int fki_country_id; //numeric
    char *s_province_name_x; // string
    char *s_province_shortname; // string
    int b_province_isactive; //boolean

} province_autocomplete_element_response_t;

province_autocomplete_element_response_t *province_autocomplete_element_response_create(
    int pki_province_id,
    int fki_country_id,
    char *s_province_name_x,
    char *s_province_shortname,
    int b_province_isactive
);

void province_autocomplete_element_response_free(province_autocomplete_element_response_t *province_autocomplete_element_response);

province_autocomplete_element_response_t *province_autocomplete_element_response_parseFromJSON(cJSON *province_autocomplete_element_responseJSON);

cJSON *province_autocomplete_element_response_convertToJSON(province_autocomplete_element_response_t *province_autocomplete_element_response);

#endif /* _province_autocomplete_element_response_H_ */

