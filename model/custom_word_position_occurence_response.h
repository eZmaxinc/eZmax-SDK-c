/*
 * custom_word_position_occurence_response.h
 *
 * A Word Position Object
 */

#ifndef _custom_word_position_occurence_response_H_
#define _custom_word_position_occurence_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_word_position_occurence_response_t custom_word_position_occurence_response_t;




typedef struct custom_word_position_occurence_response_t {
    int i_page; //numeric
    int i_x; //numeric
    int i_y; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} custom_word_position_occurence_response_t;

__attribute__((deprecated)) custom_word_position_occurence_response_t *custom_word_position_occurence_response_create(
    int i_page,
    int i_x,
    int i_y
);

void custom_word_position_occurence_response_free(custom_word_position_occurence_response_t *custom_word_position_occurence_response);

custom_word_position_occurence_response_t *custom_word_position_occurence_response_parseFromJSON(cJSON *custom_word_position_occurence_responseJSON);

cJSON *custom_word_position_occurence_response_convertToJSON(custom_word_position_occurence_response_t *custom_word_position_occurence_response);

#endif /* _custom_word_position_occurence_response_H_ */

