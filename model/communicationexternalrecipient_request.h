/*
 * communicationexternalrecipient_request.h
 *
 * A Communicationexternalrecipient Object
 */

#ifndef _communicationexternalrecipient_request_H_
#define _communicationexternalrecipient_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationexternalrecipient_request_t communicationexternalrecipient_request_t;

#include "field_e_communicationexternalrecipient_type.h"



typedef struct communicationexternalrecipient_request_t {
    int pki_communicationexternalrecipient_id; //numeric
    char *s_email_address; // string
    char *s_phone_e164; // string
    ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e e_communicationexternalrecipient_type; //referenced enum
    char *s_communicationexternalrecipient_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} communicationexternalrecipient_request_t;

__attribute__((deprecated)) communicationexternalrecipient_request_t *communicationexternalrecipient_request_create(
    int pki_communicationexternalrecipient_id,
    char *s_email_address,
    char *s_phone_e164,
    ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e e_communicationexternalrecipient_type,
    char *s_communicationexternalrecipient_name
);

void communicationexternalrecipient_request_free(communicationexternalrecipient_request_t *communicationexternalrecipient_request);

communicationexternalrecipient_request_t *communicationexternalrecipient_request_parseFromJSON(cJSON *communicationexternalrecipient_requestJSON);

cJSON *communicationexternalrecipient_request_convertToJSON(communicationexternalrecipient_request_t *communicationexternalrecipient_request);

#endif /* _communicationexternalrecipient_request_H_ */

