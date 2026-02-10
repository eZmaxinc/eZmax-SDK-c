/*
 * ezsignfoldersignerassociation_create_embedded_url_v1_response.h
 *
 * Response for POST /1/object/ezsignfoldersignerassociation/createEmbeddedUrl
 */

#ifndef _ezsignfoldersignerassociation_create_embedded_url_v1_response_H_
#define _ezsignfoldersignerassociation_create_embedded_url_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_create_embedded_url_v1_response_t ezsignfoldersignerassociation_create_embedded_url_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload.h"



typedef struct ezsignfoldersignerassociation_create_embedded_url_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_create_embedded_url_v1_response_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_create_embedded_url_v1_response_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldersignerassociation_create_embedded_url_v1_response_m_payload_t *m_payload
);

void ezsignfoldersignerassociation_create_embedded_url_v1_response_free(ezsignfoldersignerassociation_create_embedded_url_v1_response_t *ezsignfoldersignerassociation_create_embedded_url_v1_response);

ezsignfoldersignerassociation_create_embedded_url_v1_response_t *ezsignfoldersignerassociation_create_embedded_url_v1_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_responseJSON);

cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_response_convertToJSON(ezsignfoldersignerassociation_create_embedded_url_v1_response_t *ezsignfoldersignerassociation_create_embedded_url_v1_response);

#endif /* _ezsignfoldersignerassociation_create_embedded_url_v1_response_H_ */

