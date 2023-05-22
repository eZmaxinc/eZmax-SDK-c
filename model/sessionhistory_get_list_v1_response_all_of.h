/*
 * sessionhistory_get_list_v1_response_all_of.h
 *
 * 
 */

#ifndef _sessionhistory_get_list_v1_response_all_of_H_
#define _sessionhistory_get_list_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sessionhistory_get_list_v1_response_all_of_t sessionhistory_get_list_v1_response_all_of_t;

#include "sessionhistory_get_list_v1_response_m_payload.h"



typedef struct sessionhistory_get_list_v1_response_all_of_t {
    struct sessionhistory_get_list_v1_response_m_payload_t *m_payload; //model

} sessionhistory_get_list_v1_response_all_of_t;

sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of_create(
    sessionhistory_get_list_v1_response_m_payload_t *m_payload
);

void sessionhistory_get_list_v1_response_all_of_free(sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of);

sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of_parseFromJSON(cJSON *sessionhistory_get_list_v1_response_all_ofJSON);

cJSON *sessionhistory_get_list_v1_response_all_of_convertToJSON(sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of);

#endif /* _sessionhistory_get_list_v1_response_all_of_H_ */

