/*
 * ezsignformfield_response_compound.h
 *
 * An Ezsignformfield Object and children to create a complete structure
 */

#ifndef _ezsignformfield_response_compound_H_
#define _ezsignformfield_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfield_response_compound_t ezsignformfield_response_compound_t;

#include "ezsignformfield_response.h"



typedef struct ezsignformfield_response_compound_t {
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_value; // string

} ezsignformfield_response_compound_t;

ezsignformfield_response_compound_t *ezsignformfield_response_compound_create(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
);

void ezsignformfield_response_compound_free(ezsignformfield_response_compound_t *ezsignformfield_response_compound);

ezsignformfield_response_compound_t *ezsignformfield_response_compound_parseFromJSON(cJSON *ezsignformfield_response_compoundJSON);

cJSON *ezsignformfield_response_compound_convertToJSON(ezsignformfield_response_compound_t *ezsignformfield_response_compound);

#endif /* _ezsignformfield_response_compound_H_ */

