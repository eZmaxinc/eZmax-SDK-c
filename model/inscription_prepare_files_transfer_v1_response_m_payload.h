/*
 * inscription_prepare_files_transfer_v1_response_m_payload.h
 *
 * Payload for POST /1/object/inscription/{pkiInscriptionID}/prepareFilesTransfer
 */

#ifndef _inscription_prepare_files_transfer_v1_response_m_payload_H_
#define _inscription_prepare_files_transfer_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_prepare_files_transfer_v1_response_m_payload_t inscription_prepare_files_transfer_v1_response_m_payload_t;

#include "custom_attachment_prepare_files_transfer_response.h"



typedef struct inscription_prepare_files_transfer_v1_response_m_payload_t {
    struct custom_attachment_prepare_files_transfer_response_t *a_obj_attachment; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_prepare_files_transfer_v1_response_m_payload_t;

__attribute__((deprecated)) inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload_create(
    custom_attachment_prepare_files_transfer_response_t *a_obj_attachment
);

void inscription_prepare_files_transfer_v1_response_m_payload_free(inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload);

inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload_parseFromJSON(cJSON *inscription_prepare_files_transfer_v1_response_m_payloadJSON);

cJSON *inscription_prepare_files_transfer_v1_response_m_payload_convertToJSON(inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload);

#endif /* _inscription_prepare_files_transfer_v1_response_m_payload_H_ */

