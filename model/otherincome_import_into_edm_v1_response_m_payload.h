/*
 * otherincome_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/otherincome/{pkiOtherincomeID}/importIntoEDM
 */

#ifndef _otherincome_import_into_edm_v1_response_m_payload_H_
#define _otherincome_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_import_into_edm_v1_response_m_payload_t otherincome_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct otherincome_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} otherincome_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) otherincome_import_into_edm_v1_response_m_payload_t *otherincome_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void otherincome_import_into_edm_v1_response_m_payload_free(otherincome_import_into_edm_v1_response_m_payload_t *otherincome_import_into_edm_v1_response_m_payload);

otherincome_import_into_edm_v1_response_m_payload_t *otherincome_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *otherincome_import_into_edm_v1_response_m_payloadJSON);

cJSON *otherincome_import_into_edm_v1_response_m_payload_convertToJSON(otherincome_import_into_edm_v1_response_m_payload_t *otherincome_import_into_edm_v1_response_m_payload);

#endif /* _otherincome_import_into_edm_v1_response_m_payload_H_ */

