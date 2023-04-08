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

#include "common_audit.h"
#include "communicationattachment_response_compound.h"
#include "communicationexternalrecipient_response_compound.h"
#include "communicationrecipient_response_compound.h"
#include "computed_e_communication_direction.h"
#include "descriptionstatic_response.h"
#include "emailstatic_response.h"
#include "field_e_communication_importance.h"
#include "field_e_communication_type.h"
#include "phonestatic_response.h"

// Enum  for communication_response_compound

typedef enum  { ezmax_api_definition__full_communication_response_compound__NULL = 0, ezmax_api_definition__full_communication_response_compound__High, ezmax_api_definition__full_communication_response_compound__Normal, ezmax_api_definition__full_communication_response_compound__Low } ezmax_api_definition__full_communication_response_compound__e;

char* communication_response_compound_e_communication_importance_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_importance);

ezmax_api_definition__full_communication_response_compound__e communication_response_compound_e_communication_importance_FromString(char* e_communication_importance);

// Enum  for communication_response_compound

typedef enum  { ezmax_api_definition__full_communication_response_compound__NULL = 0, ezmax_api_definition__full_communication_response_compound__Email, ezmax_api_definition__full_communication_response_compound__Fax, ezmax_api_definition__full_communication_response_compound__Sms } ezmax_api_definition__full_communication_response_compound__e;

char* communication_response_compound_e_communication_type_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_type);

ezmax_api_definition__full_communication_response_compound__e communication_response_compound_e_communication_type_FromString(char* e_communication_type);

// Enum  for communication_response_compound

typedef enum  { ezmax_api_definition__full_communication_response_compound__NULL = 0, ezmax_api_definition__full_communication_response_compound__Outbound, ezmax_api_definition__full_communication_response_compound__Inbound } ezmax_api_definition__full_communication_response_compound__e;

char* communication_response_compound_e_communication_direction_ToString(ezmax_api_definition__full_communication_response_compound__e e_communication_direction);

ezmax_api_definition__full_communication_response_compound__e communication_response_compound_e_communication_direction_FromString(char* e_communication_direction);



typedef struct communication_response_compound_t {
    int pki_communication_id; //numeric
    field_e_communication_importance_t *e_communication_importance; // custom
    field_e_communication_type_t *e_communication_type; // custom
    char *s_communication_subject; // string
    char *s_communication_bodyurl; // string
    computed_e_communication_direction_t *e_communication_direction; // custom
    int i_communicationrecipient_count; //numeric
    struct descriptionstatic_response_t *obj_descriptionstatic_sender; //model
    struct emailstatic_response_t *obj_emailstatic_sender; //model
    struct phonestatic_response_t *obj_phonestatic_sender; //model
    struct common_audit_t *obj_audit; //model
    list_t *a_obj_communicationattachment; //nonprimitive container
    list_t *a_obj_communicationrecipient; //nonprimitive container
    list_t *a_obj_communicationexternalrecipient; //nonprimitive container

} communication_response_compound_t;

communication_response_compound_t *communication_response_compound_create(
    int pki_communication_id,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    char *s_communication_bodyurl,
    computed_e_communication_direction_t *e_communication_direction,
    int i_communicationrecipient_count,
    descriptionstatic_response_t *obj_descriptionstatic_sender,
    emailstatic_response_t *obj_emailstatic_sender,
    phonestatic_response_t *obj_phonestatic_sender,
    common_audit_t *obj_audit,
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationexternalrecipient
);

void communication_response_compound_free(communication_response_compound_t *communication_response_compound);

communication_response_compound_t *communication_response_compound_parseFromJSON(cJSON *communication_response_compoundJSON);

cJSON *communication_response_compound_convertToJSON(communication_response_compound_t *communication_response_compound);

#endif /* _communication_response_compound_H_ */

