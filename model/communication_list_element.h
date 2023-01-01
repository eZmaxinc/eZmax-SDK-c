/*
 * communication_list_element.h
 *
 * A Communication List Element
 */

#ifndef _communication_list_element_H_
#define _communication_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_list_element_t communication_list_element_t;

#include "custom_contact_name_response.h"
#include "field_e_communication_emailimportance.h"
#include "field_e_communication_type.h"

// Enum  for communication_list_element

typedef enum  { ezmax_api_definition__full_communication_list_element__NULL = 0, ezmax_api_definition__full_communication_list_element__High, ezmax_api_definition__full_communication_list_element__Normal, ezmax_api_definition__full_communication_list_element__Low } ezmax_api_definition__full_communication_list_element__e;

char* communication_list_element_e_communication_emailimportance_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_emailimportance);

ezmax_api_definition__full_communication_list_element__e communication_list_element_e_communication_emailimportance_FromString(char* e_communication_emailimportance);

// Enum  for communication_list_element

typedef enum  { ezmax_api_definition__full_communication_list_element__NULL = 0, ezmax_api_definition__full_communication_list_element__Email, ezmax_api_definition__full_communication_list_element__Fax, ezmax_api_definition__full_communication_list_element__Sms } ezmax_api_definition__full_communication_list_element__e;

char* communication_list_element_e_communication_type_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_type);

ezmax_api_definition__full_communication_list_element__e communication_list_element_e_communication_type_FromString(char* e_communication_type);



typedef struct communication_list_element_t {
    int pki_communication_id; //numeric
    field_e_communication_emailimportance_t *e_communication_emailimportance; // custom
    field_e_communication_type_t *e_communication_type; // custom
    char *s_communication_subject; // string
    char *dt_communication_sentdate; // string
    struct custom_contact_name_response_t *obj_contact_from; //model

} communication_list_element_t;

communication_list_element_t *communication_list_element_create(
    int pki_communication_id,
    field_e_communication_emailimportance_t *e_communication_emailimportance,
    field_e_communication_type_t *e_communication_type,
    char *s_communication_subject,
    char *dt_communication_sentdate,
    custom_contact_name_response_t *obj_contact_from
);

void communication_list_element_free(communication_list_element_t *communication_list_element);

communication_list_element_t *communication_list_element_parseFromJSON(cJSON *communication_list_elementJSON);

cJSON *communication_list_element_convertToJSON(communication_list_element_t *communication_list_element);

#endif /* _communication_list_element_H_ */

