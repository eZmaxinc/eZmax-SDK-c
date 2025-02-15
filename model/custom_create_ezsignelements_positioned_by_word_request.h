/*
 * custom_create_ezsignelements_positioned_by_word_request.h
 *
 * A CreateEzsignelementsPositionedByWord object
 */

#ifndef _custom_create_ezsignelements_positioned_by_word_request_H_
#define _custom_create_ezsignelements_positioned_by_word_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_create_ezsignelements_positioned_by_word_request_t custom_create_ezsignelements_positioned_by_word_request_t;


// Enum ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE for custom_create_ezsignelements_positioned_by_word_request

typedef enum  { ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_NULL = 0, ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_All, ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_First, ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_Last } ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e;

char* custom_create_ezsignelements_positioned_by_word_request_e_createezsignelementspositionedbyword_occurance_ToString(ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e e_createezsignelementspositionedbyword_occurance);

ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e custom_create_ezsignelements_positioned_by_word_request_e_createezsignelementspositionedbyword_occurance_FromString(char* e_createezsignelementspositionedbyword_occurance);



typedef struct custom_create_ezsignelements_positioned_by_word_request_t {
    char *s_createezsignelementspositionedbyword_pattern; // string
    int i_createezsignelementspositionedbyword_offsetx; //numeric
    int i_createezsignelementspositionedbyword_offsety; //numeric
    ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e e_createezsignelementspositionedbyword_occurance; //enum

    int _library_owned; // Is the library responsible for freeing this object?
} custom_create_ezsignelements_positioned_by_word_request_t;

__attribute__((deprecated)) custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request_create(
    char *s_createezsignelementspositionedbyword_pattern,
    int i_createezsignelementspositionedbyword_offsetx,
    int i_createezsignelementspositionedbyword_offsety,
    ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e e_createezsignelementspositionedbyword_occurance
);

void custom_create_ezsignelements_positioned_by_word_request_free(custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request);

custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request_parseFromJSON(cJSON *custom_create_ezsignelements_positioned_by_word_requestJSON);

cJSON *custom_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request);

#endif /* _custom_create_ezsignelements_positioned_by_word_request_H_ */

