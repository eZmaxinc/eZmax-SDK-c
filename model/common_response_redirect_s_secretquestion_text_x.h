/*
 * common_response_redirect_s_secretquestion_text_x.h
 *
 * 352 Redirect Message containing secret question
 */

#ifndef _common_response_redirect_s_secretquestion_text_x_H_
#define _common_response_redirect_s_secretquestion_text_x_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_redirect_s_secretquestion_text_x_t common_response_redirect_s_secretquestion_text_x_t;




typedef struct common_response_redirect_s_secretquestion_text_x_t {
    char *s_secretquestion_text_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_redirect_s_secretquestion_text_x_t;

__attribute__((deprecated)) common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_create(
    char *s_secretquestion_text_x
);

void common_response_redirect_s_secretquestion_text_x_free(common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x);

common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_parseFromJSON(cJSON *common_response_redirect_s_secretquestion_text_xJSON);

cJSON *common_response_redirect_s_secretquestion_text_x_convertToJSON(common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x);

#endif /* _common_response_redirect_s_secretquestion_text_x_H_ */

