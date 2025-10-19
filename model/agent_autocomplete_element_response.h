/*
 * agent_autocomplete_element_response.h
 *
 * A Agent AutocompleteElement Response
 */

#ifndef _agent_autocomplete_element_response_H_
#define _agent_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_autocomplete_element_response_t agent_autocomplete_element_response_t;




typedef struct agent_autocomplete_element_response_t {
    int pki_agent_id; //numeric
    int fki_department_id; //numeric
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    int b_agent_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} agent_autocomplete_element_response_t;

__attribute__((deprecated)) agent_autocomplete_element_response_t *agent_autocomplete_element_response_create(
    int pki_agent_id,
    int fki_department_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    int b_agent_isactive
);

void agent_autocomplete_element_response_free(agent_autocomplete_element_response_t *agent_autocomplete_element_response);

agent_autocomplete_element_response_t *agent_autocomplete_element_response_parseFromJSON(cJSON *agent_autocomplete_element_responseJSON);

cJSON *agent_autocomplete_element_response_convertToJSON(agent_autocomplete_element_response_t *agent_autocomplete_element_response);

#endif /* _agent_autocomplete_element_response_H_ */

