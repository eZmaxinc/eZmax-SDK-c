/*
 * ezsignfolder_reorder_v1_request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/reorder
 */

#ifndef _ezsignfolder_reorder_v1_request_H_
#define _ezsignfolder_reorder_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_reorder_v1_request_t ezsignfolder_reorder_v1_request_t;




typedef struct ezsignfolder_reorder_v1_request_t {
    list_t *a_pki_ezsigndocument_id; //primitive container

} ezsignfolder_reorder_v1_request_t;

ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request_create(
    list_t *a_pki_ezsigndocument_id
);

void ezsignfolder_reorder_v1_request_free(ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request);

ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request_parseFromJSON(cJSON *ezsignfolder_reorder_v1_requestJSON);

cJSON *ezsignfolder_reorder_v1_request_convertToJSON(ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request);

#endif /* _ezsignfolder_reorder_v1_request_H_ */

