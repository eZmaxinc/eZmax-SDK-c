/*
 * documenttypechecklist_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/documenttypechecklist/{pkiDocumenttypechecklistID}
 */

#ifndef _documenttypechecklist_get_object_v2_response_m_payload_H_
#define _documenttypechecklist_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_get_object_v2_response_m_payload_t documenttypechecklist_get_object_v2_response_m_payload_t;

#include "documenttypechecklist_response_compound.h"



typedef struct documenttypechecklist_get_object_v2_response_m_payload_t {
    struct documenttypechecklist_response_compound_t *obj_documenttypechecklist; //model

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload_create(
    documenttypechecklist_response_compound_t *obj_documenttypechecklist
);

void documenttypechecklist_get_object_v2_response_m_payload_free(documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload);

documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload_parseFromJSON(cJSON *documenttypechecklist_get_object_v2_response_m_payloadJSON);

cJSON *documenttypechecklist_get_object_v2_response_m_payload_convertToJSON(documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload);

#endif /* _documenttypechecklist_get_object_v2_response_m_payload_H_ */

