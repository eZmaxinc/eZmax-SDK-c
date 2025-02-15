/*
 * ezsigndocument_create_ezsignelements_positioned_by_word_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/createEzsignelementsPositionedByWord
 */

#ifndef _ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_H_
#define _ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t;

#include "custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request.h"
#include "custom_ezsignsignature_create_ezsignelements_positioned_by_word_request.h"



typedef struct ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t {
    list_t *a_obj_ezsignformfieldgroup; //nonprimitive container
    list_t *a_obj_ezsignsignature; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t;

__attribute__((deprecated)) ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_create(
    list_t *a_obj_ezsignformfieldgroup,
    list_t *a_obj_ezsignsignature
);

void ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_free(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request);

ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_parseFromJSON(cJSON *ezsigndocument_create_ezsignelements_positioned_by_word_v1_requestJSON);

cJSON *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_convertToJSON(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request);

#endif /* _ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_H_ */

