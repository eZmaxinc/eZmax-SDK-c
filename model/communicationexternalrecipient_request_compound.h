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

// Enum  for communicationexternalrecipient_request_compound

typedef enum  { ezmax_api_definition__full_communicationexternalrecipient_request_compound__NULL = 0, ezmax_api_definition__full_communicationexternalrecipient_request_compound__To, ezmax_api_definition__full_communicationexternalrecipient_request_compound__Cc, ezmax_api_definition__full_communicationexternalrecipient_request_compound__Bcc } ezmax_api_definition__full_communicationexternalrecipient_request_compound__e;

char* communicationexternalrecipient_request_compound_e_communicationexternalrecipient_type_ToString(ezmax_api_definition__full_communicationexternalrecipient_request_compound__e e_communicationexternalrecipient_type);

ezmax_api_definition__full_communicationexternalrecipient_request_compound__e communicationexternalrecipient_request_compound_e_communicationexternalrecipient_type_FromString(char* e_communicationexternalrecipient_type);



typedef struct communicationexternalrecipient_request_compound_t {
    int pki_communicationexternalrecipient_id; //numeric
    char *s_email_address; // string
    char *s_phone_e164; // string
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type; // custom
    char *s_communicationexternalrecipient_name; // string

} communicationexternalrecipient_request_compound_t;

communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_create(
    int pki_communicationexternalrecipient_id,
    char *s_email_address,
    char *s_phone_e164,
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type,
    char *s_communicationexternalrecipient_name
);

void communicationexternalrecipient_request_compound_free(communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound);

communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound_parseFromJSON(cJSON *communicationexternalrecipient_request_compoundJSON);

cJSON *communicationexternalrecipient_request_compound_convertToJSON(communicationexternalrecipient_request_compound_t *communicationexternalrecipient_request_compound);

#endif /* _communicationexternalrecipient_request_compound_H_ */

