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

#include "custom_contact_name_response.h"
#include "field_e_communication_emailimportance.h"
#include "field_e_communication_type.h"

// Enum  for communication_response

typedef enum  { ezmax_api_definition__full_communication_response__NULL = 0, ezmax_api_definition__full_communication_response__High, ezmax_api_definition__full_communication_response__Normal, ezmax_api_definition__full_communication_response__Low } ezmax_api_definition__full_communication_response__e;

char* communication_response_e_communication_emailimportance_ToString(ezmax_api_definition__full_communication_response__e e_communication_emailimportance);

ezmax_api_definition__full_communication_response__e communication_response_e_communication_emailimportance_FromString(char* e_communication_emailimportance);

// Enum  for communication_response

typedef enum  { ezmax_api_definition__full_communication_response__NULL = 0, ezmax_api_definition__full_communication_response__Email, ezmax_api_definition__full_communication_response__Fax, ezmax_api_definition__full_communication_response__Sms } ezmax_api_definition__full_communication_response__e;

char* communication_response_e_communication_type_ToString(ezmax_api_definition__full_communication_response__e e_communication_type);

ezmax_api_definition__full_communication_response__e communication_response_e_communication_type_FromString(char* e_communication_type);



typedef struct communication_response_t {
    int pki_communication_id; //numeric
    field_e_communication_emailimportance_t *e_communication_emailimportance; // custom
    field_e_communication_type_t *e_communication_type; // custom
    char *s_communication_subject; // string
    char *dt_communication_sentdate; // string
    struct custom_contact_name_response_t *obj_contact_from; //model

} communication_response_t;

communication_response_t *communication_response_create(
    int pki_communication_id,
    field_e_communication_emailimportance_t *e_communication_emailimportance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    char *dt_communication_sentdate,
    custom_contact_name_response_t *obj_contact_from
);

void communication_response_free(communication_response_t *communication_response);

communication_response_t *communication_response_parseFromJSON(cJSON *communication_responseJSON);

cJSON *communication_response_convertToJSON(communication_response_t *communication_response);

#endif /* _communication_response_H_ */

