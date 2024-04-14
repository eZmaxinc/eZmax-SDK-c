/*
 * creditcardtype_autocomplete_element_response.h
 *
 * Creditcardtype AutocompleteElement Response
 */

#ifndef _creditcardtype_autocomplete_element_response_H_
#define _creditcardtype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardtype_autocomplete_element_response_t creditcardtype_autocomplete_element_response_t;

#include "field_e_creditcardtype_codename.h"

// Enum  for creditcardtype_autocomplete_element_response

typedef enum  { ezmax_api_definition__full_creditcardtype_autocomplete_element_response__NULL = 0, ezmax_api_definition__full_creditcardtype_autocomplete_element_response__Amex, ezmax_api_definition__full_creditcardtype_autocomplete_element_response__Mastercard, ezmax_api_definition__full_creditcardtype_autocomplete_element_response__Visa } ezmax_api_definition__full_creditcardtype_autocomplete_element_response__e;

char* creditcardtype_autocomplete_element_response_e_creditcardtype_codename_ToString(ezmax_api_definition__full_creditcardtype_autocomplete_element_response__e e_creditcardtype_codename);

ezmax_api_definition__full_creditcardtype_autocomplete_element_response__e creditcardtype_autocomplete_element_response_e_creditcardtype_codename_FromString(char* e_creditcardtype_codename);



typedef struct creditcardtype_autocomplete_element_response_t {
    char *s_creditcardtype_name; // string
    int pki_creditcardtype_id; //numeric
    field_e_creditcardtype_codename_t *e_creditcardtype_codename; // custom

} creditcardtype_autocomplete_element_response_t;

creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_create(
    char *s_creditcardtype_name,
    int pki_creditcardtype_id,
    field_e_creditcardtype_codename_t *e_creditcardtype_codename
);

void creditcardtype_autocomplete_element_response_free(creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response);

creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_parseFromJSON(cJSON *creditcardtype_autocomplete_element_responseJSON);

cJSON *creditcardtype_autocomplete_element_response_convertToJSON(creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response);

#endif /* _creditcardtype_autocomplete_element_response_H_ */

