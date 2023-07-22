/*
 * user_list_element.h
 *
 * A User List Element
 */

#ifndef _user_list_element_H_
#define _user_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_list_element_t user_list_element_t;

#include "field_e_user_ezsignaccess.h"
#include "field_e_user_origin.h"
#include "field_e_user_type.h"

// Enum  for user_list_element

typedef enum  { ezmax_api_definition__full_user_list_element__NULL = 0, ezmax_api_definition__full_user_list_element__AgentBroker, ezmax_api_definition__full_user_list_element__Assistant, ezmax_api_definition__full_user_list_element__Employee, ezmax_api_definition__full_user_list_element__EzsignUser, ezmax_api_definition__full_user_list_element__Normal } ezmax_api_definition__full_user_list_element__e;

char* user_list_element_e_user_type_ToString(ezmax_api_definition__full_user_list_element__e e_user_type);

ezmax_api_definition__full_user_list_element__e user_list_element_e_user_type_FromString(char* e_user_type);

// Enum  for user_list_element

typedef enum  { ezmax_api_definition__full_user_list_element__NULL = 0, ezmax_api_definition__full_user_list_element__BuiltIn, ezmax_api_definition__full_user_list_element__External } ezmax_api_definition__full_user_list_element__e;

char* user_list_element_e_user_origin_ToString(ezmax_api_definition__full_user_list_element__e e_user_origin);

ezmax_api_definition__full_user_list_element__e user_list_element_e_user_origin_FromString(char* e_user_origin);

// Enum  for user_list_element

typedef enum  { ezmax_api_definition__full_user_list_element__NULL = 0, ezmax_api_definition__full_user_list_element__No, ezmax_api_definition__full_user_list_element__PaidByOffice, ezmax_api_definition__full_user_list_element__PerDocument, ezmax_api_definition__full_user_list_element__Prepaid } ezmax_api_definition__full_user_list_element__e;

char* user_list_element_e_user_ezsignaccess_ToString(ezmax_api_definition__full_user_list_element__e e_user_ezsignaccess);

ezmax_api_definition__full_user_list_element__e user_list_element_e_user_ezsignaccess_FromString(char* e_user_ezsignaccess);



typedef struct user_list_element_t {
    int pki_user_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    int b_user_isactive; //boolean
    field_e_user_type_t *e_user_type; // custom
    field_e_user_origin_t *e_user_origin; // custom
    field_e_user_ezsignaccess_t *e_user_ezsignaccess; // custom
    char *dt_user_ezsignprepaidexpiration; // string
    char *s_email_address; // string

} user_list_element_t;

user_list_element_t *user_list_element_create(
    int pki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    int b_user_isactive,
    field_e_user_type_t *e_user_type,
    field_e_user_origin_t *e_user_origin,
    field_e_user_ezsignaccess_t *e_user_ezsignaccess,
    char *dt_user_ezsignprepaidexpiration,
    char *s_email_address
);

void user_list_element_free(user_list_element_t *user_list_element);

user_list_element_t *user_list_element_parseFromJSON(cJSON *user_list_elementJSON);

cJSON *user_list_element_convertToJSON(user_list_element_t *user_list_element);

#endif /* _user_list_element_H_ */

