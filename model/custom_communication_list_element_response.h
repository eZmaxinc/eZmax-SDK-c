/*
 * custom_communication_list_element_response.h
 *
 * A Communication List Element
 */

#ifndef _custom_communication_list_element_response_H_
#define _custom_communication_list_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_communication_list_element_response_t custom_communication_list_element_response_t;

#include "computed_e_communication_direction.h"
#include "field_e_communication_importance.h"
#include "field_e_communication_type.h"



typedef struct custom_communication_list_element_response_t {
    int pki_communication_id; //numeric
    char *dt_created_date; // string
    ezmax_api_definition__full_computed_e_communication_direction__e e_communication_direction; //referenced enum
    ezmax_api_definition__full_field_e_communication_importance__e e_communication_importance; //referenced enum
    ezmax_api_definition__full_field_e_communication_type__e e_communication_type; //referenced enum
    int i_communicationrecipient_count; //numeric
    char *s_communication_subject; // string
    char *s_communication_sender; // string
    char *s_communication_recipient; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_communication_list_element_response_t;

__attribute__((deprecated)) custom_communication_list_element_response_t *custom_communication_list_element_response_create(
    int pki_communication_id,
    char *dt_created_date,
    ezmax_api_definition__full_computed_e_communication_direction__e e_communication_direction,
    ezmax_api_definition__full_field_e_communication_importance__e e_communication_importance,
    ezmax_api_definition__full_field_e_communication_type__e e_communication_type,
    int i_communicationrecipient_count,
    char *s_communication_subject,
    char *s_communication_sender,
    char *s_communication_recipient
);

void custom_communication_list_element_response_free(custom_communication_list_element_response_t *custom_communication_list_element_response);

custom_communication_list_element_response_t *custom_communication_list_element_response_parseFromJSON(cJSON *custom_communication_list_element_responseJSON);

cJSON *custom_communication_list_element_response_convertToJSON(custom_communication_list_element_response_t *custom_communication_list_element_response);

#endif /* _custom_communication_list_element_response_H_ */

