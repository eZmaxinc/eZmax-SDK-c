/*
 * common_get_autocomplete_v1_response_m_payload.h
 *
 * Generic Autocomplete Response
 */

#ifndef _common_get_autocomplete_v1_response_m_payload_H_
#define _common_get_autocomplete_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_get_autocomplete_v1_response_m_payload_t common_get_autocomplete_v1_response_m_payload_t;




typedef struct common_get_autocomplete_v1_response_m_payload_t {
    char *group; // string
    char *id; // string
    char *option; // string

} common_get_autocomplete_v1_response_m_payload_t;

common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload_create(
    char *group,
    char *id,
    char *option
);

void common_get_autocomplete_v1_response_m_payload_free(common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload);

common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload_parseFromJSON(cJSON *common_get_autocomplete_v1_response_m_payloadJSON);

cJSON *common_get_autocomplete_v1_response_m_payload_convertToJSON(common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload);

#endif /* _common_get_autocomplete_v1_response_m_payload_H_ */

