/*
 * user_request_compound_v2.h
 *
 * A User Object and children
 */

#ifndef _user_request_compound_v2_H_
#define _user_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_request_compound_v2_t user_request_compound_v2_t;

#include "email_request.h"
#include "field_e_user_ezsignaccess.h"
#include "field_e_user_logintype.h"
#include "field_e_user_type.h"
#include "phone_request_v2.h"
#include "user_request_v2.h"

// Enum  for user_request_compound_v2

typedef enum  { ezmax_api_definition__full_user_request_compound_v2__NULL = 0, ezmax_api_definition__full_user_request_compound_v2__AgentBroker, ezmax_api_definition__full_user_request_compound_v2__Assistant, ezmax_api_definition__full_user_request_compound_v2__Employee, ezmax_api_definition__full_user_request_compound_v2__EzsignUser, ezmax_api_definition__full_user_request_compound_v2__Normal } ezmax_api_definition__full_user_request_compound_v2__e;

char* user_request_compound_v2_e_user_type_ToString(ezmax_api_definition__full_user_request_compound_v2__e e_user_type);

ezmax_api_definition__full_user_request_compound_v2__e user_request_compound_v2_e_user_type_FromString(char* e_user_type);

// Enum  for user_request_compound_v2

typedef enum  { ezmax_api_definition__full_user_request_compound_v2__NULL = 0, ezmax_api_definition__full_user_request_compound_v2__Password, ezmax_api_definition__full_user_request_compound_v2__PasswordPhone, ezmax_api_definition__full_user_request_compound_v2__PasswordQuestion } ezmax_api_definition__full_user_request_compound_v2__e;

char* user_request_compound_v2_e_user_logintype_ToString(ezmax_api_definition__full_user_request_compound_v2__e e_user_logintype);

ezmax_api_definition__full_user_request_compound_v2__e user_request_compound_v2_e_user_logintype_FromString(char* e_user_logintype);

// Enum  for user_request_compound_v2

typedef enum  { ezmax_api_definition__full_user_request_compound_v2__NULL = 0, ezmax_api_definition__full_user_request_compound_v2__No, ezmax_api_definition__full_user_request_compound_v2__PaidByOffice, ezmax_api_definition__full_user_request_compound_v2__PerDocument, ezmax_api_definition__full_user_request_compound_v2__Prepaid } ezmax_api_definition__full_user_request_compound_v2__e;

char* user_request_compound_v2_e_user_ezsignaccess_ToString(ezmax_api_definition__full_user_request_compound_v2__e e_user_ezsignaccess);

ezmax_api_definition__full_user_request_compound_v2__e user_request_compound_v2_e_user_ezsignaccess_FromString(char* e_user_ezsignaccess);



typedef struct user_request_compound_v2_t {
    int pki_user_id; //numeric
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int fki_assistant_id; //numeric
    int fki_employee_id; //numeric
    int fki_company_id_default; //numeric
    int fki_department_id_default; //numeric
    int fki_timezone_id; //numeric
    int fki_language_id; //numeric
    struct email_request_t *obj_email; //model
    int fki_billingentityinternal_id; //numeric
    struct phone_request_v2_t *obj_phone_home; //model
    struct phone_request_v2_t *obj_phone_sms; //model
    int fki_secretquestion_id; //numeric
    char *s_user_secretresponse; // string
    int fki_module_id_form; //numeric
    field_e_user_type_t *e_user_type; // custom
    field_e_user_logintype_t *e_user_logintype; // custom
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    char *s_user_jobtitle; // string
    field_e_user_ezsignaccess_t *e_user_ezsignaccess; // custom
    int b_user_isactive; //boolean
    int b_user_validatebyadministration; //boolean
    int b_user_validatebydirector; //boolean
    int b_user_attachmentautoverified; //boolean
    int b_user_changepassword; //boolean

} user_request_compound_v2_t;

user_request_compound_v2_t *user_request_compound_v2_create(
    int pki_user_id,
    int fki_agent_id,
    int fki_broker_id,
    int fki_assistant_id,
    int fki_employee_id,
    int fki_company_id_default,
    int fki_department_id_default,
    int fki_timezone_id,
    int fki_language_id,
    email_request_t *obj_email,
    int fki_billingentityinternal_id,
    phone_request_v2_t *obj_phone_home,
    phone_request_v2_t *obj_phone_sms,
    int fki_secretquestion_id,
    char *s_user_secretresponse,
    int fki_module_id_form,
    field_e_user_type_t *e_user_type,
    field_e_user_logintype_t *e_user_logintype,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_user_jobtitle,
    field_e_user_ezsignaccess_t *e_user_ezsignaccess,
    int b_user_isactive,
    int b_user_validatebyadministration,
    int b_user_validatebydirector,
    int b_user_attachmentautoverified,
    int b_user_changepassword
);

void user_request_compound_v2_free(user_request_compound_v2_t *user_request_compound_v2);

user_request_compound_v2_t *user_request_compound_v2_parseFromJSON(cJSON *user_request_compound_v2JSON);

cJSON *user_request_compound_v2_convertToJSON(user_request_compound_v2_t *user_request_compound_v2);

#endif /* _user_request_compound_v2_H_ */

