/*
 * ezsignimportfolder_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignimportfolder/{pkiEzsignimportfolderID}
 */

#ifndef _ezsignimportfolder_get_object_v2_response_m_payload_H_
#define _ezsignimportfolder_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignimportfolder_get_object_v2_response_m_payload_t ezsignimportfolder_get_object_v2_response_m_payload_t;

#include "ezsignimportfolder_response_compound.h"



typedef struct ezsignimportfolder_get_object_v2_response_m_payload_t {
    struct ezsignimportfolder_response_compound_t *obj_ezsignimportfolder; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignimportfolder_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload_create(
    ezsignimportfolder_response_compound_t *obj_ezsignimportfolder
);

void ezsignimportfolder_get_object_v2_response_m_payload_free(ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload);

ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignimportfolder_get_object_v2_response_m_payloadJSON);

cJSON *ezsignimportfolder_get_object_v2_response_m_payload_convertToJSON(ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload);

#endif /* _ezsignimportfolder_get_object_v2_response_m_payload_H_ */

