/*
 * communication_response.h
 *
 * A Communication Object
 */

#ifndef _communication_response_H_
#define _communication_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_response_t communication_response_t;

#include "common_audit.h"
#include "computed_e_communication_direction.h"
#include "custom_contact_name_response.h"
#include "field_e_communication_importance.h"
#include "field_e_communication_type.h"

// Enum  for communication_response

typedef enum  { ezmax_api_definition__full_communication_response__NULL = 0, ezmax_api_definition__full_communication_response__High, ezmax_api_definition__full_communication_response__Normal, ezmax_api_definition__full_communication_response__Low } ezmax_api_definition__full_communication_response__e;

char* communication_response_e_communication_importance_ToString(ezmax_api_definition__full_communication_response__e e_communication_importance);

ezmax_api_definition__full_communication_response__e communication_response_e_communication_importance_FromString(char* e_communication_importance);

// Enum  for communication_response

typedef enum  { ezmax_api_definition__full_communication_response__NULL = 0, ezmax_api_definition__full_communication_response__Email, ezmax_api_definition__full_communication_response__Fax, ezmax_api_definition__full_communication_response__Sms } ezmax_api_definition__full_communication_response__e;

char* communication_response_e_communication_type_ToString(ezmax_api_definition__full_communication_response__e e_communication_type);

ezmax_api_definition__full_communication_response__e communication_response_e_communication_type_FromString(char* e_communication_type);

// Enum  for communication_response

typedef enum  { ezmax_api_definition__full_communication_response__NULL = 0, ezmax_api_definition__full_communication_response__Outbound, ezmax_api_definition__full_communication_response__Inbound } ezmax_api_definition__full_communication_response__e;

char* communication_response_e_communication_direction_ToString(ezmax_api_definition__full_communication_response__e e_communication_direction);

ezmax_api_definition__full_communication_response__e communication_response_e_communication_direction_FromString(char* e_communication_direction);



typedef struct communication_response_t {
    int pki_communication_id; //numeric
    field_e_communication_importance_t *e_communication_importance; // custom
    field_e_communication_type_t *e_communication_type; // custom
    char *s_communication_subject; // string
    computed_e_communication_direction_t *e_communication_direction; // custom
    int i_communicationrecipient_count; //numeric
    struct custom_contact_name_response_t *obj_contact_from; //model
    struct common_audit_t *obj_audit; //model

} communication_response_t;

communication_response_t *communication_response_create(
    int pki_communication_id,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    computed_e_communication_direction_t *e_communication_direction,
    int i_communicationrecipient_count,
    custom_contact_name_response_t *obj_contact_from,
    common_audit_t *obj_audit
);

void communication_response_free(communication_response_t *communication_response);

communication_response_t *communication_response_parseFromJSON(cJSON *communication_responseJSON);

cJSON *communication_response_convertToJSON(communication_response_t *communication_response);

#endif /* _communication_response_H_ */

