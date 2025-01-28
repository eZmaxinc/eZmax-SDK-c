/*
 * common_response_warning.h
 *
 * Generic Warning Message
 */

#ifndef _common_response_warning_H_
#define _common_response_warning_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_warning_t common_response_warning_t;




typedef struct common_response_warning_t {
    char *s_warning_message; // string
    char *e_warning_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_warning_t;

__attribute__((deprecated)) common_response_warning_t *common_response_warning_create(
    char *s_warning_message,
    char *e_warning_code
);

void common_response_warning_free(common_response_warning_t *common_response_warning);

common_response_warning_t *common_response_warning_parseFromJSON(cJSON *common_response_warningJSON);

cJSON *common_response_warning_convertToJSON(common_response_warning_t *common_response_warning);

#endif /* _common_response_warning_H_ */

