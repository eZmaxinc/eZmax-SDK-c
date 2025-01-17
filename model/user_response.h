/*
 * user_response.h
 *
 * A User Object
 */

#ifndef _user_response_H_
#define _user_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_response_t user_response_t;

#include "common_audit.h"
#include "email_response_compound.h"
#include "field_e_user_ezsignaccess.h"
#include "field_e_user_logintype.h"
#include "field_e_user_origin.h"
#include "field_e_user_type.h"
#include "phone_response_compound.h"

// Enum  for user_response

typedef enum  { ezmax_api_definition__full_user_response__NULL = 0, ezmax_api_definition__full_user_response__BuiltIn, ezmax_api_definition__full_user_response__External } ezmax_api_definition__full_user_response__e;

char* user_response_e_user_origin_ToString(ezmax_api_definition__full_user_response__e e_user_origin);

ezmax_api_definition__full_user_response__e user_response_e_user_origin_FromString(char* e_user_origin);

// Enum  for user_response

typedef enum  { ezmax_api_definition__full_user_response__NULL = 0, ezmax_api_definition__full_user_response__AgentBroker, ezmax_api_definition__full_user_response__Assistant, ezmax_api_definition__full_user_response__Employee, ezmax_api_definition__full_user_response__EzsignUser, ezmax_api_definition__full_user_response__Normal } ezmax_api_definition__full_user_response__e;

char* user_response_e_user_type_ToString(ezmax_api_definition__full_user_response__e e_user_type);

ezmax_api_definition__full_user_response__e user_response_e_user_type_FromString(char* e_user_type);

// Enum  for user_response

typedef enum  { ezmax_api_definition__full_user_response__NULL = 0, ezmax_api_definition__full_user_response__Password, ezmax_api_definition__full_user_response__PasswordPhone, ezmax_api_definition__full_user_response__PasswordQuestion } ezmax_api_definition__full_user_response__e;

char* user_response_e_user_logintype_ToString(ezmax_api_definition__full_user_response__e e_user_logintype);

ezmax_api_definition__full_user_response__e user_response_e_user_logintype_FromString(char* e_user_logintype);

// Enum  for user_response

typedef enum  { ezmax_api_definition__full_user_response__NULL = 0, ezmax_api_definition__full_user_response__No, ezmax_api_definition__full_user_response__PaidByOffice, ezmax_api_definition__full_user_response__PerDocument, ezmax_api_definition__full_user_response__Prepaid } ezmax_api_definition__full_user_response__e;

char* user_response_e_user_ezsignaccess_ToString(ezmax_api_definition__full_user_response__e e_user_ezsignaccess);

ezmax_api_definition__full_user_response__e user_response_e_user_ezsignaccess_FromString(char* e_user_ezsignaccess);



typedef struct user_response_t {
    int pki_user_id; //numeric
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int fki_assistant_id; //numeric
    int fki_employee_id; //numeric
    int fki_company_id_default; //numeric
    char *s_company_name_x; // string
    int fki_department_id_default; //numeric
    char *s_department_name_x; // string
    int fki_timezone_id; //numeric
    char *s_timezone_name; // string
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    struct email_response_compound_t *obj_email; //model
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    struct phone_response_compound_t *obj_phone_home; //model
    struct phone_response_compound_t *obj_phone_sms; //model
    int fki_secretquestion_id; //numeric
    int fki_module_id_form; //numeric
    char *s_module_name_x; // string
    field_e_user_origin_t *e_user_origin; // custom
    field_e_user_type_t *e_user_type; // custom
    field_e_user_logintype_t *e_user_logintype; // custom
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    char *s_user_jobtitle; // string
    field_e_user_ezsignaccess_t *e_user_ezsignaccess; // custom
    char *dt_user_lastlogondate; // string
    char *dt_user_passwordchanged; // string
    char *dt_user_ezsignprepaidexpiration; // string
    int b_user_isactive; //boolean
    int b_user_validatebyadministration; //boolean
    int b_user_validatebydirector; //boolean
    int b_user_attachmentautoverified; //boolean
    int b_user_changepassword; //boolean
    struct common_audit_t *obj_audit; //model

} user_response_t;

user_response_t *user_response_create(
    int pki_user_id,
    int fki_agent_id,
    int fki_broker_id,
    int fki_assistant_id,
    int fki_employee_id,
    int fki_company_id_default,
    char *s_company_name_x,
    int fki_department_id_default,
    char *s_department_name_x,
    int fki_timezone_id,
    char *s_timezone_name,
    int fki_language_id,
    char *s_language_name_x,
    email_response_compound_t *obj_email,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    phone_response_compound_t *obj_phone_home,
    phone_response_compound_t *obj_phone_sms,
    int fki_secretquestion_id,
    int fki_module_id_form,
    char *s_module_name_x,
    field_e_user_origin_t *e_user_origin,
    field_e_user_type_t *e_user_type,
    field_e_user_logintype_t *e_user_logintype,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_user_jobtitle,
    field_e_user_ezsignaccess_t *e_user_ezsignaccess,
    char *dt_user_lastlogondate,
    char *dt_user_passwordchanged,
    char *dt_user_ezsignprepaidexpiration,
    int b_user_isactive,
    int b_user_validatebyadministration,
    int b_user_validatebydirector,
    int b_user_attachmentautoverified,
    int b_user_changepassword,
    common_audit_t *obj_audit
);

void user_response_free(user_response_t *user_response);

user_response_t *user_response_parseFromJSON(cJSON *user_responseJSON);

cJSON *user_response_convertToJSON(user_response_t *user_response);

#endif /* _user_response_H_ */

