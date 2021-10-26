/*
 * common_response_error_s_temporary_file_url_all_of.h
 *
 * 
 */

#ifndef _common_response_error_s_temporary_file_url_all_of_H_
#define _common_response_error_s_temporary_file_url_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_s_temporary_file_url_all_of_t common_response_error_s_temporary_file_url_all_of_t;




typedef struct common_response_error_s_temporary_file_url_all_of_t {
    char *s_temporary_file_url; // string

} common_response_error_s_temporary_file_url_all_of_t;

common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of_create(
    char *s_temporary_file_url
);

void common_response_error_s_temporary_file_url_all_of_free(common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of);

common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of_parseFromJSON(cJSON *common_response_error_s_temporary_file_url_all_ofJSON);

cJSON *common_response_error_s_temporary_file_url_all_of_convertToJSON(common_response_error_s_temporary_file_url_all_of_t *common_response_error_s_temporary_file_url_all_of);

#endif /* _common_response_error_s_temporary_file_url_all_of_H_ */

