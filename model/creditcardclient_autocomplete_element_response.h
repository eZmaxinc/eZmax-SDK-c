/*
 * creditcardclient_autocomplete_element_response.h
 *
 * A Creditcardclient AutocompleteElement Response
 */

#ifndef _creditcardclient_autocomplete_element_response_H_
#define _creditcardclient_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_autocomplete_element_response_t creditcardclient_autocomplete_element_response_t;




typedef struct creditcardclient_autocomplete_element_response_t {
    int pki_creditcardclient_id; //numeric
    char *s_creditcardclient_description; // string

} creditcardclient_autocomplete_element_response_t;

creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response_create(
    int pki_creditcardclient_id,
    char *s_creditcardclient_description
);

void creditcardclient_autocomplete_element_response_free(creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response);

creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response_parseFromJSON(cJSON *creditcardclient_autocomplete_element_responseJSON);

cJSON *creditcardclient_autocomplete_element_response_convertToJSON(creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response);

#endif /* _creditcardclient_autocomplete_element_response_H_ */

