/*
 * authenticate_authenticate_v2_response_all_of.h
 *
 * 
 */

#ifndef _authenticate_authenticate_v2_response_all_of_H_
#define _authenticate_authenticate_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticate_authenticate_v2_response_all_of_t authenticate_authenticate_v2_response_all_of_t;

#include "authenticate_authenticate_v2_response_m_payload.h"



typedef struct authenticate_authenticate_v2_response_all_of_t {
    struct authenticate_authenticate_v2_response_m_payload_t *m_payload; //model

} authenticate_authenticate_v2_response_all_of_t;

authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of_create(
    authenticate_authenticate_v2_response_m_payload_t *m_payload
);

void authenticate_authenticate_v2_response_all_of_free(authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of);

authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of_parseFromJSON(cJSON *authenticate_authenticate_v2_response_all_ofJSON);

cJSON *authenticate_authenticate_v2_response_all_of_convertToJSON(authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of);

#endif /* _authenticate_authenticate_v2_response_all_of_H_ */

