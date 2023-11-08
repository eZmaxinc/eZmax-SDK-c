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

// Enum  for communicationexternalrecipient_request

typedef enum  { ezmax_api_definition__full_communicationexternalrecipient_request__NULL = 0, ezmax_api_definition__full_communicationexternalrecipient_request__To, ezmax_api_definition__full_communicationexternalrecipient_request__Cc, ezmax_api_definition__full_communicationexternalrecipient_request__Bcc } ezmax_api_definition__full_communicationexternalrecipient_request__e;

char* communicationexternalrecipient_request_e_communicationexternalrecipient_type_ToString(ezmax_api_definition__full_communicationexternalrecipient_request__e e_communicationexternalrecipient_type);

ezmax_api_definition__full_communicationexternalrecipient_request__e communicationexternalrecipient_request_e_communicationexternalrecipient_type_FromString(char* e_communicationexternalrecipient_type);



typedef struct communicationexternalrecipient_request_t {
    int pki_communicationexternalrecipient_id; //numeric
    char *s_email_address; // string
    char *s_phone_e164; // string
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type; // custom
    char *s_communicationexternalrecipient_name; // string

} communicationexternalrecipient_request_t;

communicationexternalrecipient_request_t *communicationexternalrecipient_request_create(
    int pki_communicationexternalrecipient_id,
    char *s_email_address,
    char *s_phone_e164,
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type,
    char *s_communicationexternalrecipient_name
);

void communicationexternalrecipient_request_free(communicationexternalrecipient_request_t *communicationexternalrecipient_request);

communicationexternalrecipient_request_t *communicationexternalrecipient_request_parseFromJSON(cJSON *communicationexternalrecipient_requestJSON);

cJSON *communicationexternalrecipient_request_convertToJSON(communicationexternalrecipient_request_t *communicationexternalrecipient_request);

#endif /* _communicationexternalrecipient_request_H_ */

