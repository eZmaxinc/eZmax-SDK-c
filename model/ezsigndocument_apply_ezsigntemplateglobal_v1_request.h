/*
 * ezsigndocument_apply_ezsigntemplateglobal_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplateglobal
 */

#ifndef _ezsigndocument_apply_ezsigntemplateglobal_v1_request_H_
#define _ezsigndocument_apply_ezsigntemplateglobal_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_apply_ezsigntemplateglobal_v1_request_t ezsigndocument_apply_ezsigntemplateglobal_v1_request_t;




typedef struct ezsigndocument_apply_ezsigntemplateglobal_v1_request_t {
    int fki_ezsigntemplateglobal_id; //numeric
    list_t *a_s_ezsigntemplateglobalsigner; //primitive container
    list_t *a_pki_ezsignfoldersignerassociation_id; //primitive container

} ezsigndocument_apply_ezsigntemplateglobal_v1_request_t;

ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request_create(
    int fki_ezsigntemplateglobal_id,
    list_t *a_s_ezsigntemplateglobalsigner,
    list_t *a_pki_ezsignfoldersignerassociation_id
);

void ezsigndocument_apply_ezsigntemplateglobal_v1_request_free(ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request);

ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplateglobal_v1_requestJSON);

cJSON *ezsigndocument_apply_ezsigntemplateglobal_v1_request_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request);

#endif /* _ezsigndocument_apply_ezsigntemplateglobal_v1_request_H_ */

