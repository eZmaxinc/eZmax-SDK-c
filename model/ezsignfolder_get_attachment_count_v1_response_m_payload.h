/*
 * ezsignfolder_get_attachment_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/ezsignfolder/{pkiEzsignfolderID}/getAttachmentCount
 */

#ifndef _ezsignfolder_get_attachment_count_v1_response_m_payload_H_
#define _ezsignfolder_get_attachment_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_attachment_count_v1_response_m_payload_t ezsignfolder_get_attachment_count_v1_response_m_payload_t;




typedef struct ezsignfolder_get_attachment_count_v1_response_m_payload_t {
    int i_attachment_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_get_attachment_count_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload_create(
    int i_attachment_count
);

void ezsignfolder_get_attachment_count_v1_response_m_payload_free(ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload);

ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_attachment_count_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_attachment_count_v1_response_m_payload_convertToJSON(ezsignfolder_get_attachment_count_v1_response_m_payload_t *ezsignfolder_get_attachment_count_v1_response_m_payload);

#endif /* _ezsignfolder_get_attachment_count_v1_response_m_payload_H_ */

