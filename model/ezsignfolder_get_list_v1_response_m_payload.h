/*
 * ezsignfolder_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignfolder/getList
 */

#ifndef _ezsignfolder_get_list_v1_response_m_payload_H_
#define _ezsignfolder_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_list_v1_response_m_payload_t ezsignfolder_get_list_v1_response_m_payload_t;

#include "ezsignfolder_list_element.h"



typedef struct ezsignfolder_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_ezsignfolder; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsignfolder
);

void ezsignfolder_get_list_v1_response_m_payload_free(ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload);

ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_list_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_list_v1_response_m_payload_convertToJSON(ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload);

#endif /* _ezsignfolder_get_list_v1_response_m_payload_H_ */

