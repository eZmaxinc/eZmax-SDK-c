/*
 * custom_ezsignformfieldgroup_request_all_of.h
 *
 * 
 */

#ifndef _custom_ezsignformfieldgroup_request_all_of_H_
#define _custom_ezsignformfieldgroup_request_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfieldgroup_request_all_of_t custom_ezsignformfieldgroup_request_all_of_t;

#include "custom_ezsignformfield_request.h"



typedef struct custom_ezsignformfieldgroup_request_all_of_t {
    int pki_ezsignformfieldgroup_id; //numeric
    char *s_ezsignformfieldgroup_label; // string
    list_t *a_obj_ezsignformfield; //nonprimitive container

} custom_ezsignformfieldgroup_request_all_of_t;

custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of_create(
    int pki_ezsignformfieldgroup_id,
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
);

void custom_ezsignformfieldgroup_request_all_of_free(custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of);

custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of_parseFromJSON(cJSON *custom_ezsignformfieldgroup_request_all_ofJSON);

cJSON *custom_ezsignformfieldgroup_request_all_of_convertToJSON(custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of);

#endif /* _custom_ezsignformfieldgroup_request_all_of_H_ */

