/*
 * sessionhistory_list_element.h
 *
 * A Sessionhistory List Element
 */

#ifndef _sessionhistory_list_element_H_
#define _sessionhistory_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sessionhistory_list_element_t sessionhistory_list_element_t;

#include "field_e_sessionhistory_endby.h"

// Enum  for sessionhistory_list_element

typedef enum  { ezmax_api_definition__full_sessionhistory_list_element__NULL = 0, ezmax_api_definition__full_sessionhistory_list_element__Decryption, ezmax_api_definition__full_sessionhistory_list_element__Hack, ezmax_api_definition__full_sessionhistory_list_element__Expired, ezmax_api_definition__full_sessionhistory_list_element__Hijack, ezmax_api_definition__full_sessionhistory_list_element__DoubleLogon, ezmax_api_definition__full_sessionhistory_list_element__Garbage, ezmax_api_definition__full_sessionhistory_list_element__Logoff, ezmax_api_definition__full_sessionhistory_list_element__BadAuth, ezmax_api_definition__full_sessionhistory_list_element__Locked, ezmax_api_definition__full_sessionhistory_list_element__Inactive, ezmax_api_definition__full_sessionhistory_list_element__InvalidUser, ezmax_api_definition__full_sessionhistory_list_element__BadUserType, ezmax_api_definition__full_sessionhistory_list_element__BadIP } ezmax_api_definition__full_sessionhistory_list_element__e;

char* sessionhistory_list_element_e_sessionhistory_endby_ToString(ezmax_api_definition__full_sessionhistory_list_element__e e_sessionhistory_endby);

ezmax_api_definition__full_sessionhistory_list_element__e sessionhistory_list_element_e_sessionhistory_endby_FromString(char* e_sessionhistory_endby);



typedef struct sessionhistory_list_element_t {
    int pki_sessionhistory_id; //numeric
    int fki_computer_id; //numeric
    int fki_user_id; //numeric
    char *dt_sessionhistory_firsthit; // string
    char *dt_sessionhistory_lasthit; // string
    field_e_sessionhistory_endby_t *e_sessionhistory_endby; // custom
    char *s_computer_description; // string
    char *s_sessionhistory_duration; // string
    char *s_sessionhistory_ip; // string
    char *s_user_loginname; // string

} sessionhistory_list_element_t;

sessionhistory_list_element_t *sessionhistory_list_element_create(
    int pki_sessionhistory_id,
    int fki_computer_id,
    int fki_user_id,
    char *dt_sessionhistory_firsthit,
    char *dt_sessionhistory_lasthit,
    field_e_sessionhistory_endby_t *e_sessionhistory_endby,
    char *s_computer_description,
    char *s_sessionhistory_duration,
    char *s_sessionhistory_ip,
    char *s_user_loginname
);

void sessionhistory_list_element_free(sessionhistory_list_element_t *sessionhistory_list_element);

sessionhistory_list_element_t *sessionhistory_list_element_parseFromJSON(cJSON *sessionhistory_list_elementJSON);

cJSON *sessionhistory_list_element_convertToJSON(sessionhistory_list_element_t *sessionhistory_list_element);

#endif /* _sessionhistory_list_element_H_ */

