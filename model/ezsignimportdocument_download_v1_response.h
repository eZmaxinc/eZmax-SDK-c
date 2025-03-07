/*
 * ezsignimportdocument_download_v1_response.h
 *
 * Response for GET /1/object/ezsignimportdocument/{pkiEzsignimportdocumentID}/download
 */

#ifndef _ezsignimportdocument_download_v1_response_H_
#define _ezsignimportdocument_download_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignimportdocument_download_v1_response_t ezsignimportdocument_download_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "object.h"



typedef struct ezsignimportdocument_download_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    object_t *m_payload; //object

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignimportdocument_download_v1_response_t;

__attribute__((deprecated)) ezsignimportdocument_download_v1_response_t *ezsignimportdocument_download_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    object_t *m_payload
);

void ezsignimportdocument_download_v1_response_free(ezsignimportdocument_download_v1_response_t *ezsignimportdocument_download_v1_response);

ezsignimportdocument_download_v1_response_t *ezsignimportdocument_download_v1_response_parseFromJSON(cJSON *ezsignimportdocument_download_v1_responseJSON);

cJSON *ezsignimportdocument_download_v1_response_convertToJSON(ezsignimportdocument_download_v1_response_t *ezsignimportdocument_download_v1_response);

#endif /* _ezsignimportdocument_download_v1_response_H_ */

