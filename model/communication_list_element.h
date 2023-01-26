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

#include "computed_e_communication_direction.h"
#include "field_e_communication_importance.h"
#include "field_e_communication_type.h"

// Enum  for communication_list_element

typedef enum  { ezmax_api_definition__full_communication_list_element__NULL = 0, ezmax_api_definition__full_communication_list_element__Outbound, ezmax_api_definition__full_communication_list_element__Inbound } ezmax_api_definition__full_communication_list_element__e;

char* communication_list_element_e_communication_direction_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_direction);

ezmax_api_definition__full_communication_list_element__e communication_list_element_e_communication_direction_FromString(char* e_communication_direction);

// Enum  for communication_list_element

typedef enum  { ezmax_api_definition__full_communication_list_element__NULL = 0, ezmax_api_definition__full_communication_list_element__High, ezmax_api_definition__full_communication_list_element__Normal, ezmax_api_definition__full_communication_list_element__Low } ezmax_api_definition__full_communication_list_element__e;

char* communication_list_element_e_communication_importance_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_importance);

ezmax_api_definition__full_communication_list_element__e communication_list_element_e_communication_importance_FromString(char* e_communication_importance);

// Enum  for communication_list_element

typedef enum  { ezmax_api_definition__full_communication_list_element__NULL = 0, ezmax_api_definition__full_communication_list_element__Email, ezmax_api_definition__full_communication_list_element__Fax, ezmax_api_definition__full_communication_list_element__Sms } ezmax_api_definition__full_communication_list_element__e;

char* communication_list_element_e_communication_type_ToString(ezmax_api_definition__full_communication_list_element__e e_communication_type);

ezmax_api_definition__full_communication_list_element__e communication_list_element_e_communication_type_FromString(char* e_communication_type);



typedef struct communication_list_element_t {
    int pki_communication_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int fki_inscription_id; //numeric
    int fki_inscriptionnotauthenticated_id; //numeric
    char *dt_created_date; // string
    computed_e_communication_direction_t *e_communication_direction; // custom
    field_e_communication_importance_t *e_communication_importance; // custom
    field_e_communication_type_t *e_communication_type; // custom
    int i_communicationrecipient_count; //numeric
    char *s_communication_subject; // string
    char *s_communication_sender; // string
    char *s_communication_recipient; // string

} communication_list_element_t;

communication_list_element_t *communication_list_element_create(
    int pki_communication_id,
    int fki_ezsignfolder_id,
    int fki_inscription_id,
    int fki_inscriptionnotauthenticated_id,
    char *dt_created_date,
    computed_e_communication_direction_t *e_communication_direction,
    field_e_communication_importance_t *e_communication_importance,
    field_e_communication_type_t *e_communication_type,
    int i_communicationrecipient_count,
    char *s_communication_subject,
    char *s_communication_sender,
    char *s_communication_recipient
);

void communication_list_element_free(communication_list_element_t *communication_list_element);

communication_list_element_t *communication_list_element_parseFromJSON(cJSON *communication_list_elementJSON);

cJSON *communication_list_element_convertToJSON(communication_list_element_t *communication_list_element);

#endif /* _communication_list_element_H_ */

