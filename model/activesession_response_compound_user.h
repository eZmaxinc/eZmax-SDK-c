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

// Enum  for activesession_response_compound_user

typedef enum  { ezmax_api_definition__full_activesession_response_compound_user__NULL = 0, ezmax_api_definition__full_activesession_response_compound_user__None, ezmax_api_definition__full_activesession_response_compound_user__Daily, ezmax_api_definition__full_activesession_response_compound_user__Weekly } ezmax_api_definition__full_activesession_response_compound_user__e;

char* activesession_response_compound_user_e_user_ezsignsendreminderfrequency_ToString(ezmax_api_definition__full_activesession_response_compound_user__e e_user_ezsignsendreminderfrequency);

ezmax_api_definition__full_activesession_response_compound_user__e activesession_response_compound_user_e_user_ezsignsendreminderfrequency_FromString(char* e_user_ezsignsendreminderfrequency);



typedef struct activesession_response_compound_user_t {
    int pki_user_id; //numeric
    int fki_timezone_id; //numeric
    char *s_avatar_url; // string
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_email_address; // string
    field_e_user_ezsignsendreminderfrequency_t *e_user_ezsignsendreminderfrequency; // custom
    int i_user_interfacecolor; //numeric
    int b_user_interfacedark; //boolean
    int i_user_listresult; //numeric

} activesession_response_compound_user_t;

activesession_response_compound_user_t *activesession_response_compound_user_create(
    int pki_user_id,
    int fki_timezone_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    field_e_user_ezsignsendreminderfrequency_t *e_user_ezsignsendreminderfrequency,
    int i_user_interfacecolor,
    int b_user_interfacedark,
    int i_user_listresult
);

void activesession_response_compound_user_free(activesession_response_compound_user_t *activesession_response_compound_user);

activesession_response_compound_user_t *activesession_response_compound_user_parseFromJSON(cJSON *activesession_response_compound_userJSON);

cJSON *activesession_response_compound_user_convertToJSON(activesession_response_compound_user_t *activesession_response_compound_user);

#endif /* _activesession_response_compound_user_H_ */

