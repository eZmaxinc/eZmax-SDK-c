/*
 * ezsignfolder_import_ezsignfoldersignerassociations_v1_response.h
 *
 * Response for POST /1/object/ezsignfolder/{pkiEzsignfolder}/importEzsignfoldersignerassociations
 */

#ifndef _ezsignfolder_import_ezsignfoldersignerassociations_v1_response_H_
#define _ezsignfolder_import_ezsignfoldersignerassociations_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfolder_import_ezsignfoldersignerassociations_v1_response_m_payload.h"



typedef struct ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignfolder_import_ezsignfoldersignerassociations_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t;

__attribute__((deprecated)) ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfolder_import_ezsignfoldersignerassociations_v1_response_m_payload_t *m_payload
);

void ezsignfolder_import_ezsignfoldersignerassociations_v1_response_free(ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_response);

ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_response_parseFromJSON(cJSON *ezsignfolder_import_ezsignfoldersignerassociations_v1_responseJSON);

cJSON *ezsignfolder_import_ezsignfoldersignerassociations_v1_response_convertToJSON(ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_response);

#endif /* _ezsignfolder_import_ezsignfoldersignerassociations_v1_response_H_ */

