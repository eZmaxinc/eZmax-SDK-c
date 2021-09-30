/*
 * ezsignformfield_response.h
 *
 * An Ezsignformfield Object
 */

#ifndef _ezsignformfield_response_H_
#define _ezsignformfield_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfield_response_t ezsignformfield_response_t;




typedef struct ezsignformfield_response_t {
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_value; // string

} ezsignformfield_response_t;

ezsignformfield_response_t *ezsignformfield_response_create(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
);

void ezsignformfield_response_free(ezsignformfield_response_t *ezsignformfield_response);

ezsignformfield_response_t *ezsignformfield_response_parseFromJSON(cJSON *ezsignformfield_responseJSON);

cJSON *ezsignformfield_response_convertToJSON(ezsignformfield_response_t *ezsignformfield_response);

#endif /* _ezsignformfield_response_H_ */

