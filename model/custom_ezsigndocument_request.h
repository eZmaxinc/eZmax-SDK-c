/*
 * custom_ezsigndocument_request.h
 *
 * Request for POST /2/object/ezsignfolder/{pkiEzsignfolderID}/reorder
 */

#ifndef _custom_ezsigndocument_request_H_
#define _custom_ezsigndocument_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsigndocument_request_t custom_ezsigndocument_request_t;

#include "ezsigndocumentdependency_request_compound.h"



typedef struct custom_ezsigndocument_request_t {
    int pki_ezsigndocument_id; //numeric
    list_t *a_obj_ezsigndocumentdependency; //nonprimitive container

} custom_ezsigndocument_request_t;

custom_ezsigndocument_request_t *custom_ezsigndocument_request_create(
    int pki_ezsigndocument_id,
    list_t *a_obj_ezsigndocumentdependency
);

void custom_ezsigndocument_request_free(custom_ezsigndocument_request_t *custom_ezsigndocument_request);

custom_ezsigndocument_request_t *custom_ezsigndocument_request_parseFromJSON(cJSON *custom_ezsigndocument_requestJSON);

cJSON *custom_ezsigndocument_request_convertToJSON(custom_ezsigndocument_request_t *custom_ezsigndocument_request);

#endif /* _custom_ezsigndocument_request_H_ */

