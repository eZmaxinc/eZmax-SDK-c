/*
 * common_response_error_s_temporary_file_url.h
 *
 * Generic Error Message
 */

#ifndef _common_response_error_s_temporary_file_url_H_
#define _common_response_error_s_temporary_file_url_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_s_temporary_file_url_t common_response_error_s_temporary_file_url_t;

#include "field_e_error_code.h"



typedef struct common_response_error_s_temporary_file_url_t {
    char *s_error_message; // string
    ezmax_api_definition__full_field_e_error_code__e e_error_code; //referenced enum
    list_t *a_s_error_messagedetail; //primitive container
    char *s_temporary_file_url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_error_s_temporary_file_url_t;

__attribute__((deprecated)) common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    char *s_temporary_file_url
);

void common_response_error_s_temporary_file_url_free(common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url);

common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_parseFromJSON(cJSON *common_response_error_s_temporary_file_urlJSON);

cJSON *common_response_error_s_temporary_file_url_convertToJSON(common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url);

#endif /* _common_response_error_s_temporary_file_url_H_ */

