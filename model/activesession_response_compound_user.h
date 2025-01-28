/*
 * activesession_response_compound_user.h
 *
 * An Activesession-&gt;User Object and children to create a complete structure
 */

#ifndef _activesession_response_compound_user_H_
#define _activesession_response_compound_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_response_compound_user_t activesession_response_compound_user_t;

#include "field_e_user_ezsignsendreminderfrequency.h"



typedef struct activesession_response_compound_user_t {
    int pki_user_id; //numeric
    int fki_timezone_id; //numeric
    char *s_avatar_url; // string
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_email_address; // string
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency; //referenced enum
    int i_user_interfacecolor; //numeric
    int b_user_interfacedark; //boolean
    int i_user_listresult; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} activesession_response_compound_user_t;

__attribute__((deprecated)) activesession_response_compound_user_t *activesession_response_compound_user_create(
    int pki_user_id,
    int fki_timezone_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency,
    int i_user_interfacecolor,
    int b_user_interfacedark,
    int i_user_listresult
);

void activesession_response_compound_user_free(activesession_response_compound_user_t *activesession_response_compound_user);

activesession_response_compound_user_t *activesession_response_compound_user_parseFromJSON(cJSON *activesession_response_compound_userJSON);

cJSON *activesession_response_compound_user_convertToJSON(activesession_response_compound_user_t *activesession_response_compound_user);

#endif /* _activesession_response_compound_user_H_ */

