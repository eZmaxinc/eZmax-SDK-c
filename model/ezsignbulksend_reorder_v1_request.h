/*
 * ezsignbulksend_reorder_v1_request.h
 *
 * Request for POST /1/object/ezsignbulksend/{pkiEzsignbulksendID}/reorder
 */

#ifndef _ezsignbulksend_reorder_v1_request_H_
#define _ezsignbulksend_reorder_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_reorder_v1_request_t ezsignbulksend_reorder_v1_request_t;




typedef struct ezsignbulksend_reorder_v1_request_t {
    list_t *a_pki_ezsignbulksenddocumentmapping_id; //primitive container

} ezsignbulksend_reorder_v1_request_t;

ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request_create(
    list_t *a_pki_ezsignbulksenddocumentmapping_id
);

void ezsignbulksend_reorder_v1_request_free(ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request);

ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request_parseFromJSON(cJSON *ezsignbulksend_reorder_v1_requestJSON);

cJSON *ezsignbulksend_reorder_v1_request_convertToJSON(ezsignbulksend_reorder_v1_request_t *ezsignbulksend_reorder_v1_request);

#endif /* _ezsignbulksend_reorder_v1_request_H_ */

