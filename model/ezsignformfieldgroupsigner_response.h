/*
 * ezsignformfieldgroupsigner_response.h
 *
 * A Ezsignformfieldgroupsigner Object
 */

#ifndef _ezsignformfieldgroupsigner_response_H_
#define _ezsignformfieldgroupsigner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroupsigner_response_t ezsignformfieldgroupsigner_response_t;




typedef struct ezsignformfieldgroupsigner_response_t {
    int pki_ezsignformfieldgroupsigner_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric

} ezsignformfieldgroupsigner_response_t;

ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_create(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
);

void ezsignformfieldgroupsigner_response_free(ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response);

ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response_parseFromJSON(cJSON *ezsignformfieldgroupsigner_responseJSON);

cJSON *ezsignformfieldgroupsigner_response_convertToJSON(ezsignformfieldgroupsigner_response_t *ezsignformfieldgroupsigner_response);

#endif /* _ezsignformfieldgroupsigner_response_H_ */

