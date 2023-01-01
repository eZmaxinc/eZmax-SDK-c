/*
 * communication_response_compound.h
 *
 * A Communication Object
 */

#ifndef _communication_response_compound_H_
#define _communication_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_response_compound_t communication_response_compound_t;

#include "communicationattachment_response_compound.h"
#include "communicationexternalimage_response_compound.h"
#include "communicationexternalrecipient_response_compound.h"
#include "communicationimage_response_compound.h"
#include "communicationrecipient_response_compound.h"
#include "custom_contact_name_response.h"
#include "field_e_communication_emailimportance.h"
#include "field_e_communication_type.h"

// Enum  for communication_response_compound

typedef enum  { ezmax_api_definition__full_communication_response_compound__NULL = 0, ezmax_api_definition__full_communication_response_compound__High, ezmax_api_definition__full_communication_response_compound__Normal, ezmax_api_definition__full_communication_response_compound__Low } ezmax_api_definition__full_communication_response_compound__e;

char* communication_response_compound_e_communication_emailimportance_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_emailimportance);

ezmax_api_definition__full_communication_response_compound__e communication_response_compound_e_communication_emailimportance_FromString(char* e_communication_emailimportance);

// Enum  for communication_response_compound

typedef enum  { ezmax_api_definition__full_communication_response_compound__NULL = 0, ezmax_api_definition__full_communication_response_compound__Email, ezmax_api_definition__full_communication_response_compound__Fax, ezmax_api_definition__full_communication_response_compound__Sms } ezmax_api_definition__full_communication_response_compound__e;

char* communication_response_compound_e_communication_type_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_type);

ezmax_api_definition__full_communication_response_compound__e communication_response_compound_e_communication_type_FromString(char* e_communication_type);



typedef struct communication_response_compound_t {
    int pki_communication_id; //numeric
    field_e_communication_emailimportance_t *e_communication_emailimportance; // custom
    field_e_communication_type_t *e_communication_type; // custom
    char *s_communication_subject; // string
    char *dt_communication_sentdate; // string
    struct custom_contact_name_response_t *obj_contact_from; //model
    list_t *a_obj_communicationattachment; //nonprimitive container
    list_t *a_obj_communicationrecipient; //nonprimitive container
    list_t *a_obj_communicationexternalrecipient; //nonprimitive container
    list_t *a_obj_communicationimage; //nonprimitive container
    list_t *a_obj_communicationexternalimage; //nonprimitive container

} communication_response_compound_t;

communication_response_compound_t *communication_response_compound_create(
    int pki_communication_id,
    field_e_communication_emailimportance_t *e_communication_emailimportance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    char *dt_communication_sentdate,
    custom_contact_name_response_t *obj_contact_from,
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationexternalrecipient,
    list_t *a_obj_communicationimage,
    list_t *a_obj_communicationexternalimage
);

void communication_response_compound_free(communication_response_compound_t *communication_response_compound);

communication_response_compound_t *communication_response_compound_parseFromJSON(cJSON *communication_response_compoundJSON);

cJSON *communication_response_compound_convertToJSON(communication_response_compound_t *communication_response_compound);

#endif /* _communication_response_compound_H_ */

