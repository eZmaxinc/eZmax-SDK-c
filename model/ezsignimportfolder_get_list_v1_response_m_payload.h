/*
 * ezsignimportfolder_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignimportfolder/getList
 */

#ifndef _ezsignimportfolder_get_list_v1_response_m_payload_H_
#define _ezsignimportfolder_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignimportfolder_get_list_v1_response_m_payload_t ezsignimportfolder_get_list_v1_response_m_payload_t;

#include "ezsignimportfolder_list_element.h"



typedef struct ezsignimportfolder_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_ezsignimportfolder; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignimportfolder_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezsignimportfolder
);

void ezsignimportfolder_get_list_v1_response_m_payload_free(ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload);

ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignimportfolder_get_list_v1_response_m_payloadJSON);

cJSON *ezsignimportfolder_get_list_v1_response_m_payload_convertToJSON(ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload);

#endif /* _ezsignimportfolder_get_list_v1_response_m_payload_H_ */

