/*
 * ezsignfoldersignerassociation_create_object_v2_response.h
 *
 * Response for POST /2/object/ezsignfoldersignerassociation
 */

#ifndef _ezsignfoldersignerassociation_create_object_v2_response_H_
#define _ezsignfoldersignerassociation_create_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_create_object_v2_response_t ezsignfoldersignerassociation_create_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfoldersignerassociation_create_object_v2_response_all_of.h"
#include "ezsignfoldersignerassociation_create_object_v2_response_m_payload.h"



typedef struct ezsignfoldersignerassociation_create_object_v2_response_t {
    struct ezsignfoldersignerassociation_create_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfoldersignerassociation_create_object_v2_response_t;

ezsignfoldersignerassociation_create_object_v2_response_t *ezsignfoldersignerassociation_create_object_v2_response_create(
    ezsignfoldersignerassociation_create_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfoldersignerassociation_create_object_v2_response_free(ezsignfoldersignerassociation_create_object_v2_response_t *ezsignfoldersignerassociation_create_object_v2_response);

ezsignfoldersignerassociation_create_object_v2_response_t *ezsignfoldersignerassociation_create_object_v2_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v2_responseJSON);

cJSON *ezsignfoldersignerassociation_create_object_v2_response_convertToJSON(ezsignfoldersignerassociation_create_object_v2_response_t *ezsignfoldersignerassociation_create_object_v2_response);

#endif /* _ezsignfoldersignerassociation_create_object_v2_response_H_ */

