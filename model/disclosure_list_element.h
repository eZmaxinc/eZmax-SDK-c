/*
 * disclosure_list_element.h
 *
 * A Disclosure List Element
 */

#ifndef _disclosure_list_element_H_
#define _disclosure_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_list_element_t disclosure_list_element_t;

#include "field_e_disclosure_interesttype.h"



typedef struct disclosure_list_element_t {
    int *pki_disclosure_id; //numeric
    int *fki_agent_id; //numeric
    int *fki_broker_id; //numeric
    ezmax_api_definition__full_field_e_disclosure_interesttype__e e_disclosure_interesttype; //referenced enum
    char *s_disclosure_relation; // string
    char *dt_disclosure_redactiondate; // string
    char *dt_disclosure_acceptationdate; // string
    char *dt_disclosure_receptiondate; // string
    int *b_disclosure_isactive; //boolean
    char *s_disclosure_number; // string
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_broker_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_list_element_t;

__attribute__((deprecated)) disclosure_list_element_t *disclosure_list_element_create(
    int *pki_disclosure_id,
    int *fki_agent_id,
    int *fki_broker_id,
    ezmax_api_definition__full_field_e_disclosure_interesttype__e e_disclosure_interesttype,
    char *s_disclosure_relation,
    char *dt_disclosure_redactiondate,
    char *dt_disclosure_acceptationdate,
    char *dt_disclosure_receptiondate,
    int *b_disclosure_isactive,
    char *s_disclosure_number,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_broker_name
);

void disclosure_list_element_free(disclosure_list_element_t *disclosure_list_element);

disclosure_list_element_t *disclosure_list_element_parseFromJSON(cJSON *disclosure_list_elementJSON);

cJSON *disclosure_list_element_convertToJSON(disclosure_list_element_t *disclosure_list_element);

#endif /* _disclosure_list_element_H_ */

