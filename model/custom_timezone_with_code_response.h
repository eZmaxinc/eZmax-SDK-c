/*
 * custom_timezone_with_code_response.h
 *
 * Generic AutocompleteElement Response
 */

#ifndef _custom_timezone_with_code_response_H_
#define _custom_timezone_with_code_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_timezone_with_code_response_t custom_timezone_with_code_response_t;




typedef struct custom_timezone_with_code_response_t {
    char *s_timezone_name; // string
    char *s_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_timezone_with_code_response_t;

__attribute__((deprecated)) custom_timezone_with_code_response_t *custom_timezone_with_code_response_create(
    char *s_timezone_name,
    char *s_code
);

void custom_timezone_with_code_response_free(custom_timezone_with_code_response_t *custom_timezone_with_code_response);

custom_timezone_with_code_response_t *custom_timezone_with_code_response_parseFromJSON(cJSON *custom_timezone_with_code_responseJSON);

cJSON *custom_timezone_with_code_response_convertToJSON(custom_timezone_with_code_response_t *custom_timezone_with_code_response);

#endif /* _custom_timezone_with_code_response_H_ */

