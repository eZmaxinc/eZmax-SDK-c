/*
 * ezsignfolder_get_ezsignfoldersignerassociations_v1_response.h
 *
 * Response for the /1/object/ezsignfolder/{pkiEzsignfolder}/getEzsignfoldersignerassociations API Request
 */

#ifndef _ezsignfolder_get_ezsignfoldersignerassociations_v1_response_H_
#define _ezsignfolder_get_ezsignfoldersignerassociations_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfolder_get_ezsignfoldersignerassociations_v1_response_all_of.h"
#include "ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload.h"



typedef struct ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t {
    struct ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t;

ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_create(
    ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfolder_get_ezsignfoldersignerassociations_v1_response_free(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response);

ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_parseFromJSON(cJSON *ezsignfolder_get_ezsignfoldersignerassociations_v1_responseJSON);

cJSON *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_convertToJSON(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response);

#endif /* _ezsignfolder_get_ezsignfoldersignerassociations_v1_response_H_ */

