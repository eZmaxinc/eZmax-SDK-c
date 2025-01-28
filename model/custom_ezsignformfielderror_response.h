/*
 * custom_ezsignformfielderror_response.h
 *
 * A Custom Ezsignformfield Object to contain an error list
 */

#ifndef _custom_ezsignformfielderror_response_H_
#define _custom_ezsignformfielderror_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfielderror_response_t custom_ezsignformfielderror_response_t;

#include "custom_ezsignformfielderrortest_response.h"



typedef struct custom_ezsignformfielderror_response_t {
    char *s_ezsignformfield_label; // string
    list_t *a_obj_ezsignformfielderrortest; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignformfielderror_response_t;

__attribute__((deprecated)) custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response_create(
    char *s_ezsignformfield_label,
    list_t *a_obj_ezsignformfielderrortest
);

void custom_ezsignformfielderror_response_free(custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response);

custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response_parseFromJSON(cJSON *custom_ezsignformfielderror_responseJSON);

cJSON *custom_ezsignformfielderror_response_convertToJSON(custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response);

#endif /* _custom_ezsignformfielderror_response_H_ */

