/*
 * broker_autocomplete_element_response.h
 *
 * A Broker AutocompleteElement Response
 */

#ifndef _broker_autocomplete_element_response_H_
#define _broker_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_autocomplete_element_response_t broker_autocomplete_element_response_t;




typedef struct broker_autocomplete_element_response_t {
    int *pki_broker_id; //numeric
    int *fki_department_id; //numeric
    char *s_broker_name; // string
    int *b_broker_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} broker_autocomplete_element_response_t;

__attribute__((deprecated)) broker_autocomplete_element_response_t *broker_autocomplete_element_response_create(
    int *pki_broker_id,
    int *fki_department_id,
    char *s_broker_name,
    int *b_broker_isactive
);

void broker_autocomplete_element_response_free(broker_autocomplete_element_response_t *broker_autocomplete_element_response);

broker_autocomplete_element_response_t *broker_autocomplete_element_response_parseFromJSON(cJSON *broker_autocomplete_element_responseJSON);

cJSON *broker_autocomplete_element_response_convertToJSON(broker_autocomplete_element_response_t *broker_autocomplete_element_response);

#endif /* _broker_autocomplete_element_response_H_ */

