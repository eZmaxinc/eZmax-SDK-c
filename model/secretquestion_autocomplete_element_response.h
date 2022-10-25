/*
 * secretquestion_autocomplete_element_response.h
 *
 * A Secretquestion AutocompleteElement Response
 */

#ifndef _secretquestion_autocomplete_element_response_H_
#define _secretquestion_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct secretquestion_autocomplete_element_response_t secretquestion_autocomplete_element_response_t;




typedef struct secretquestion_autocomplete_element_response_t {
    char *s_secretquestion_text_x; // string
    int pki_secretquestion_id; //numeric
    int b_secretquestion_isactive; //boolean

} secretquestion_autocomplete_element_response_t;

secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response_create(
    char *s_secretquestion_text_x,
    int pki_secretquestion_id,
    int b_secretquestion_isactive
);

void secretquestion_autocomplete_element_response_free(secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response);

secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response_parseFromJSON(cJSON *secretquestion_autocomplete_element_responseJSON);

cJSON *secretquestion_autocomplete_element_response_convertToJSON(secretquestion_autocomplete_element_response_t *secretquestion_autocomplete_element_response);

#endif /* _secretquestion_autocomplete_element_response_H_ */

