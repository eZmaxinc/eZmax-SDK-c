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




typedef struct common_response_error_s_temporary_file_url_t {
    char *s_temporary_file_url; // string
    char *s_error_message; // string
    char *e_error_code; // string

} common_response_error_s_temporary_file_url_t;

common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_create(
    char *s_temporary_file_url,
    char *s_error_message,
    char *e_error_code
);

void common_response_error_s_temporary_file_url_free(common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url);

common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_parseFromJSON(cJSON *common_response_error_s_temporary_file_urlJSON);

cJSON *common_response_error_s_temporary_file_url_convertToJSON(common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url);

#endif /* _common_response_error_s_temporary_file_url_H_ */

