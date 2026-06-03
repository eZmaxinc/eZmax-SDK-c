/*
 * ezmaxmaillinglist_get_list_v1_response.h
 *
 * Response for GET /1/object/ezmaxmaillinglist/getList
 */

#ifndef _ezmaxmaillinglist_get_list_v1_response_H_
#define _ezmaxmaillinglist_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxmaillinglist_get_list_v1_response_t ezmaxmaillinglist_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "ezmaxmaillinglist_get_list_v1_response_m_payload.h"



typedef struct ezmaxmaillinglist_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezmaxmaillinglist_get_list_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxmaillinglist_get_list_v1_response_t;

__attribute__((deprecated)) ezmaxmaillinglist_get_list_v1_response_t *ezmaxmaillinglist_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezmaxmaillinglist_get_list_v1_response_m_payload_t *m_payload
);

void ezmaxmaillinglist_get_list_v1_response_free(ezmaxmaillinglist_get_list_v1_response_t *ezmaxmaillinglist_get_list_v1_response);

ezmaxmaillinglist_get_list_v1_response_t *ezmaxmaillinglist_get_list_v1_response_parseFromJSON(cJSON *ezmaxmaillinglist_get_list_v1_responseJSON);

cJSON *ezmaxmaillinglist_get_list_v1_response_convertToJSON(ezmaxmaillinglist_get_list_v1_response_t *ezmaxmaillinglist_get_list_v1_response);

#endif /* _ezmaxmaillinglist_get_list_v1_response_H_ */

