/*
 * ezsignfolder_reorder_v2_request.h
 *
 * Request for POST /2/object/ezsignfolder/{pkiEzsignfolderID}/reorder
 */

#ifndef _ezsignfolder_reorder_v2_request_H_
#define _ezsignfolder_reorder_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_reorder_v2_request_t ezsignfolder_reorder_v2_request_t;

#include "custom_ezsigndocument_request.h"
#include "field_e_ezsignfolder_documentdependency.h"

// Enum  for ezsignfolder_reorder_v2_request

typedef enum  { ezmax_api_definition__full_ezsignfolder_reorder_v2_request__NULL = 0, ezmax_api_definition__full_ezsignfolder_reorder_v2_request__All, ezmax_api_definition__full_ezsignfolder_reorder_v2_request__EzsignsignerOnly } ezmax_api_definition__full_ezsignfolder_reorder_v2_request__e;

char* ezsignfolder_reorder_v2_request_e_ezsignfolder_documentdependency_ToString(ezmax_api_definition__full_ezsignfolder_reorder_v2_request__e e_ezsignfolder_documentdependency);

ezmax_api_definition__full_ezsignfolder_reorder_v2_request__e ezsignfolder_reorder_v2_request_e_ezsignfolder_documentdependency_FromString(char* e_ezsignfolder_documentdependency);



typedef struct ezsignfolder_reorder_v2_request_t {
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency; // custom
    list_t *a_obj_ezsigndocument; //nonprimitive container

} ezsignfolder_reorder_v2_request_t;

ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_create(
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency,
    list_t *a_obj_ezsigndocument
);

void ezsignfolder_reorder_v2_request_free(ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request);

ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_parseFromJSON(cJSON *ezsignfolder_reorder_v2_requestJSON);

cJSON *ezsignfolder_reorder_v2_request_convertToJSON(ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request);

#endif /* _ezsignfolder_reorder_v2_request_H_ */

