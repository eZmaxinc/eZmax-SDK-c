/*
 * custom_word_position_word_response.h
 *
 * A Word Position Object
 */

#ifndef _custom_word_position_word_response_H_
#define _custom_word_position_word_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_word_position_word_response_t custom_word_position_word_response_t;

#include "custom_word_position_occurence_response.h"



typedef struct custom_word_position_word_response_t {
    char *s_word; // string
    list_t *a_obj_word_position_occurence; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_word_position_word_response_t;

__attribute__((deprecated)) custom_word_position_word_response_t *custom_word_position_word_response_create(
    char *s_word,
    list_t *a_obj_word_position_occurence
);

void custom_word_position_word_response_free(custom_word_position_word_response_t *custom_word_position_word_response);

custom_word_position_word_response_t *custom_word_position_word_response_parseFromJSON(cJSON *custom_word_position_word_responseJSON);

cJSON *custom_word_position_word_response_convertToJSON(custom_word_position_word_response_t *custom_word_position_word_response);

#endif /* _custom_word_position_word_response_H_ */

