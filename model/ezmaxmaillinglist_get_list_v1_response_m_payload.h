/*
 * ezmaxmaillinglist_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezmaxmaillinglist/getList
 */

#ifndef _ezmaxmaillinglist_get_list_v1_response_m_payload_H_
#define _ezmaxmaillinglist_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxmaillinglist_get_list_v1_response_m_payload_t ezmaxmaillinglist_get_list_v1_response_m_payload_t;

#include "ezmaxmaillinglist_list_element.h"



typedef struct ezmaxmaillinglist_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_ezmaxmaillinglist; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxmaillinglist_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezmaxmaillinglist
);

void ezmaxmaillinglist_get_list_v1_response_m_payload_free(ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload);

ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezmaxmaillinglist_get_list_v1_response_m_payloadJSON);

cJSON *ezmaxmaillinglist_get_list_v1_response_m_payload_convertToJSON(ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload);

#endif /* _ezmaxmaillinglist_get_list_v1_response_m_payload_H_ */

