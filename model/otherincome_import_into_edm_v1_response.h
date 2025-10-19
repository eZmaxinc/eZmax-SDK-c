/*
 * otherincome_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/otherincome/{pkiOtherincomeID}/importIntoEDM
 */

#ifndef _otherincome_import_into_edm_v1_response_H_
#define _otherincome_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_import_into_edm_v1_response_t otherincome_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "otherincome_import_into_edm_v1_response_m_payload.h"



typedef struct otherincome_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct otherincome_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} otherincome_import_into_edm_v1_response_t;

__attribute__((deprecated)) otherincome_import_into_edm_v1_response_t *otherincome_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    otherincome_import_into_edm_v1_response_m_payload_t *m_payload
);

void otherincome_import_into_edm_v1_response_free(otherincome_import_into_edm_v1_response_t *otherincome_import_into_edm_v1_response);

otherincome_import_into_edm_v1_response_t *otherincome_import_into_edm_v1_response_parseFromJSON(cJSON *otherincome_import_into_edm_v1_responseJSON);

cJSON *otherincome_import_into_edm_v1_response_convertToJSON(otherincome_import_into_edm_v1_response_t *otherincome_import_into_edm_v1_response);

#endif /* _otherincome_import_into_edm_v1_response_H_ */

