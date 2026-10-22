/*
 * documenttype_autocomplete_element_response.h
 *
 * A Documenttype AutocompleteElement Response
 */

#ifndef _documenttype_autocomplete_element_response_H_
#define _documenttype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_autocomplete_element_response_t documenttype_autocomplete_element_response_t;




typedef struct documenttype_autocomplete_element_response_t {
    int *pki_documenttype_id; //numeric
    char *s_documenttype_name_x; // string
    int *b_documenttype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_autocomplete_element_response_t;

__attribute__((deprecated)) documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response_create(
    int *pki_documenttype_id,
    char *s_documenttype_name_x,
    int *b_documenttype_isactive
);

void documenttype_autocomplete_element_response_free(documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response);

documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response_parseFromJSON(cJSON *documenttype_autocomplete_element_responseJSON);

cJSON *documenttype_autocomplete_element_response_convertToJSON(documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response);

#endif /* _documenttype_autocomplete_element_response_H_ */

