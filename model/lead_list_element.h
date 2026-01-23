/*
 * lead_list_element.h
 *
 * A Lead List Element
 */

#ifndef _lead_list_element_H_
#define _lead_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_list_element_t lead_list_element_t;

#include "field_e_lead_status.h"



typedef struct lead_list_element_t {
    int pki_lead_id; //numeric
    int fki_leadsource_id; //numeric
    char *s_leadsource_name_x; // string
    ezmax_api_definition__full_field_e_lead_status__e e_lead_status; //referenced enum
    char *dt_lead_expiration; // string
    int b_lead_isactive; //boolean
    char *s_lead_code; // string
    char *s_lead_contacts; // string

    int _library_owned; // Is the library responsible for freeing this object?
} lead_list_element_t;

__attribute__((deprecated)) lead_list_element_t *lead_list_element_create(
    int pki_lead_id,
    int fki_leadsource_id,
    char *s_leadsource_name_x,
    ezmax_api_definition__full_field_e_lead_status__e e_lead_status,
    char *dt_lead_expiration,
    int b_lead_isactive,
    char *s_lead_code,
    char *s_lead_contacts
);

void lead_list_element_free(lead_list_element_t *lead_list_element);

lead_list_element_t *lead_list_element_parseFromJSON(cJSON *lead_list_elementJSON);

cJSON *lead_list_element_convertToJSON(lead_list_element_t *lead_list_element);

#endif /* _lead_list_element_H_ */

