/*
 * folder_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/folder/{pkiFolderID}/getCommunicationCount
 */

#ifndef _folder_get_communication_count_v1_response_m_payload_H_
#define _folder_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct folder_get_communication_count_v1_response_m_payload_t folder_get_communication_count_v1_response_m_payload_t;




typedef struct folder_get_communication_count_v1_response_m_payload_t {
    int *i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} folder_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
);

void folder_get_communication_count_v1_response_m_payload_free(folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload);

folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *folder_get_communication_count_v1_response_m_payloadJSON);

cJSON *folder_get_communication_count_v1_response_m_payload_convertToJSON(folder_get_communication_count_v1_response_m_payload_t *folder_get_communication_count_v1_response_m_payload);

#endif /* _folder_get_communication_count_v1_response_m_payload_H_ */

