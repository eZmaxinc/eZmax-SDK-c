/*
 * communicationexternalrecipient_response.h
 *
 * A Communicationexternalrecipient Object
 */

#ifndef _communicationexternalrecipient_response_H_
#define _communicationexternalrecipient_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationexternalrecipient_response_t communicationexternalrecipient_response_t;

#include "descriptionstatic_response_compound.h"
#include "emailstatic_response_compound.h"
#include "field_e_communicationexternalrecipient_type.h"
#include "phonestatic_response_compound.h"

// Enum  for communicationexternalrecipient_response

typedef enum  { ezmax_api_definition__full_communicationexternalrecipient_response__NULL = 0, ezmax_api_definition__full_communicationexternalrecipient_response__To, ezmax_api_definition__full_communicationexternalrecipient_response__Cc, ezmax_api_definition__full_communicationexternalrecipient_response__Bcc } ezmax_api_definition__full_communicationexternalrecipient_response__e;

char* communicationexternalrecipient_response_e_communicationexternalrecipient_type_ToString(ezmax_api_definition__full_communicationexternalrecipient_response__e e_communicationexternalrecipient_type);

ezmax_api_definition__full_communicationexternalrecipient_response__e communicationexternalrecipient_response_e_communicationexternalrecipient_type_FromString(char* e_communicationexternalrecipient_type);



typedef struct communicationexternalrecipient_response_t {
    int pki_communicationexternalrecipient_id; //numeric
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type; // custom
    struct descriptionstatic_response_compound_t *obj_descriptionstatic; //model
    struct emailstatic_response_compound_t *obj_emailstatic; //model
    struct phonestatic_response_compound_t *obj_phonestatic; //model

} communicationexternalrecipient_response_t;

communicationexternalrecipient_response_t *communicationexternalrecipient_response_create(
    int pki_communicationexternalrecipient_id,
    field_e_communicationexternalrecipient_type_t *e_communicationexternalrecipient_type,
    descriptionstatic_response_compound_t *obj_descriptionstatic,
    emailstatic_response_compound_t *obj_emailstatic,
    phonestatic_response_compound_t *obj_phonestatic
);

void communicationexternalrecipient_response_free(communicationexternalrecipient_response_t *communicationexternalrecipient_response);

communicationexternalrecipient_response_t *communicationexternalrecipient_response_parseFromJSON(cJSON *communicationexternalrecipient_responseJSON);

cJSON *communicationexternalrecipient_response_convertToJSON(communicationexternalrecipient_response_t *communicationexternalrecipient_response);

#endif /* _communicationexternalrecipient_response_H_ */

