/*
 * ezsignformfieldgroupsigner_request.h
 *
 * A Ezsignformfieldgroupsigner Object
 */

#ifndef _ezsignformfieldgroupsigner_request_H_
#define _ezsignformfieldgroupsigner_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroupsigner_request_t ezsignformfieldgroupsigner_request_t;




typedef struct ezsignformfieldgroupsigner_request_t {
    int pki_ezsignformfieldgroupsigner_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric

} ezsignformfieldgroupsigner_request_t;

ezsignformfieldgroupsigner_request_t *ezsignformfieldgroupsigner_request_create(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
);

void ezsignformfieldgroupsigner_request_free(ezsignformfieldgroupsigner_request_t *ezsignformfieldgroupsigner_request);

ezsignformfieldgroupsigner_request_t *ezsignformfieldgroupsigner_request_parseFromJSON(cJSON *ezsignformfieldgroupsigner_requestJSON);

cJSON *ezsignformfieldgroupsigner_request_convertToJSON(ezsignformfieldgroupsigner_request_t *ezsignformfieldgroupsigner_request);

#endif /* _ezsignformfieldgroupsigner_request_H_ */

