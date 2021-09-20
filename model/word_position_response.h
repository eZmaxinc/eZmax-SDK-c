/*
 * word_position_response.h
 *
 * A Word Position Object
 */

#ifndef _word_position_response_H_
#define _word_position_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct word_position_response_t word_position_response_t;




typedef struct word_position_response_t {
    int i_page; //numeric
    int i_x; //numeric
    int i_y; //numeric

} word_position_response_t;

word_position_response_t *word_position_response_create(
    int i_page,
    int i_x,
    int i_y
);

void word_position_response_free(word_position_response_t *word_position_response);

word_position_response_t *word_position_response_parseFromJSON(cJSON *word_position_responseJSON);

cJSON *word_position_response_convertToJSON(word_position_response_t *word_position_response);

#endif /* _word_position_response_H_ */

