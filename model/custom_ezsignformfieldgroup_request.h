/*
 * custom_ezsignformfieldgroup_request.h
 *
 * A Custom Ezsignformfieldgroup Object to fill an Ezsignform using submitForm
 */

#ifndef _custom_ezsignformfieldgroup_request_H_
#define _custom_ezsignformfieldgroup_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfieldgroup_request_t custom_ezsignformfieldgroup_request_t;

#include "custom_ezsignformfield_request.h"



typedef struct custom_ezsignformfieldgroup_request_t {
    int pki_ezsignformfieldgroup_id; //numeric
    char *s_ezsignformfieldgroup_label; // string
    list_t *a_obj_ezsignformfield; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignformfieldgroup_request_t;

__attribute__((deprecated)) custom_ezsignformfieldgroup_request_t *custom_ezsignformfieldgroup_request_create(
    int pki_ezsignformfieldgroup_id,
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
);

void custom_ezsignformfieldgroup_request_free(custom_ezsignformfieldgroup_request_t *custom_ezsignformfieldgroup_request);

custom_ezsignformfieldgroup_request_t *custom_ezsignformfieldgroup_request_parseFromJSON(cJSON *custom_ezsignformfieldgroup_requestJSON);

cJSON *custom_ezsignformfieldgroup_request_convertToJSON(custom_ezsignformfieldgroup_request_t *custom_ezsignformfieldgroup_request);

#endif /* _custom_ezsignformfieldgroup_request_H_ */

