/*
 * attachmentrejectreason_autocomplete_element_response.h
 *
 * A Attachmentrejectreason AutocompleteElement Response
 */

#ifndef _attachmentrejectreason_autocomplete_element_response_H_
#define _attachmentrejectreason_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachmentrejectreason_autocomplete_element_response_t attachmentrejectreason_autocomplete_element_response_t;




typedef struct attachmentrejectreason_autocomplete_element_response_t {
    int *pki_attachmentrejectreason_id; //numeric
    char *s_attachmentrejectreasonname_x; // string
    int *b_attachmentrejectreason_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} attachmentrejectreason_autocomplete_element_response_t;

__attribute__((deprecated)) attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response_create(
    int *pki_attachmentrejectreason_id,
    char *s_attachmentrejectreasonname_x,
    int *b_attachmentrejectreason_isactive
);

void attachmentrejectreason_autocomplete_element_response_free(attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response);

attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response_parseFromJSON(cJSON *attachmentrejectreason_autocomplete_element_responseJSON);

cJSON *attachmentrejectreason_autocomplete_element_response_convertToJSON(attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response);

#endif /* _attachmentrejectreason_autocomplete_element_response_H_ */

