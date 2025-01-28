/*
 * communicationexternalrecipient_request_compound.h
 *
 * A Communicationexternalrecipient Object and children
 */

#ifndef _communicationexternalrecipient_request_compound_H_
#define _communicationexternalrecipient_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationexternalrecipient_request_compound_t communicationexternalrecipient_request_compound_t;

#include "field_e_communicationexternalrecipient_type.h"



typedef struct communicationexternalrecipient_request_compound_t {
    int pki_communicationexternalrecipient_id; //numeric
    char *s_email_address; // string
    char *s_phone_e164; // string
    ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e e_communicationexternalrecipient_type; //referenced enum
    char *s_communicationexternalrecipient_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} communicationexternalrecipient_request_compound_t;

__attribute__((deprecated)) communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_create(
    int pki_communicationexternalrecipient_id,
    char *s_email_address,
    char *s_phone_e164,
    ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e e_communicationexternalrecipient_type,
    char *s_communicationexternalrecipient_name
);

void communicationexternalrecipient_request_compound_free(communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound);

communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_parseFromJSON(cJSON *communicationexternalrecipient_request_compoundJSON);

cJSON *communicationexternalrecipient_request_compound_convertToJSON(communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound);

#endif /* _communicationexternalrecipient_request_compound_H_ */

