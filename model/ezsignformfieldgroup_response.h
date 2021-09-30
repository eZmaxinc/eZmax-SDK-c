/*
 * ezsignformfieldgroup_response.h
 *
 * An Ezsignformfieldgroup Object
 */

#ifndef _ezsignformfieldgroup_response_H_
#define _ezsignformfieldgroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_response_t ezsignformfieldgroup_response_t;




typedef struct ezsignformfieldgroup_response_t {
    char *s_ezsignformfieldgroup_label; // string

} ezsignformfieldgroup_response_t;

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_create(
    char *s_ezsignformfieldgroup_label
);

void ezsignformfieldgroup_response_free(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response);

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_parseFromJSON(cJSON *ezsignformfieldgroup_responseJSON);

cJSON *ezsignformfieldgroup_response_convertToJSON(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response);

#endif /* _ezsignformfieldgroup_response_H_ */

