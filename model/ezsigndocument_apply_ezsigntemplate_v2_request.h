/*
 * ezsigndocument_apply_ezsigntemplate_v2_request.h
 *
 * Request for the /2/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate API Request
 */

#ifndef _ezsigndocument_apply_ezsigntemplate_v2_request_H_
#define _ezsigndocument_apply_ezsigntemplate_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_apply_ezsigntemplate_v2_request_t ezsigndocument_apply_ezsigntemplate_v2_request_t;




typedef struct ezsigndocument_apply_ezsigntemplate_v2_request_t {
    int fki_ezsigntemplate_id; //numeric
    list_t *a_s_ezsigntemplatesigner; //primitive container
    list_t *a_pki_ezsignfoldersignerassociation_id; //primitive container

} ezsigndocument_apply_ezsigntemplate_v2_request_t;

ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request_create(
    int fki_ezsigntemplate_id,
    list_t *a_s_ezsigntemplatesigner,
    list_t *a_pki_ezsignfoldersignerassociation_id
);

void ezsigndocument_apply_ezsigntemplate_v2_request_free(ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request);

ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplate_v2_requestJSON);

cJSON *ezsigndocument_apply_ezsigntemplate_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request);

#endif /* _ezsigndocument_apply_ezsigntemplate_v2_request_H_ */

