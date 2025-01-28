/*
 * ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage
 */

#ifndef _ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_H_
#define _ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t;

#include "ezsigndocument_response_compound.h"



typedef struct ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t {
    list_t *a_obj_ezsigndocument; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t *ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_create(
    list_t *a_obj_ezsigndocument
);

void ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_free(ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t *ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload);

ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t *ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payloadJSON);

cJSON *ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_convertToJSON(ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_t *ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload);

#endif /* _ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload_H_ */

