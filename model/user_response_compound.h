/*
 * user_response_compound.h
 *
 * A User Object and children to create a complete structure
 */

#ifndef _user_response_compound_H_
#define _user_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_response_compound_t user_response_compound_t;

#include "common_audit.h"
#include "email_response_compound.h"
#include "field_e_user_ezsignaccess.h"
#include "field_e_user_logintype.h"
#include "field_e_user_origin.h"
#include "field_e_user_type.h"
#include "phone_response_compound.h"



typedef struct user_response_compound_t {
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
    ezmax_api_definition__full_field_e_user_origin__e e_user_origin; //referenced enum
    ezmax_api_definition__full_field_e_user_type__e e_user_type; //referenced enum
    ezmax_api_definition__full_field_e_user_logintype__e e_user_logintype; //referenced enum
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    char *s_user_jobtitle; // string
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess; //referenced enum
    char *dt_user_lastlogondate; // string
    char *dt_user_passwordchanged; // string
    char *dt_user_ezsignprepaidexpiration; // string
    int b_user_isactive; //boolean
    int b_user_validatebyadministration; //boolean
    int b_user_validatebydirector; //boolean
    int b_user_attachmentautoverified; //boolean
    int b_user_changepassword; //boolean
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} user_response_compound_t;

__attribute__((deprecated)) user_response_compound_t *user_response_compound_create(
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
    ezmax_api_definition__full_field_e_user_origin__e e_user_origin,
    ezmax_api_definition__full_field_e_user_type__e e_user_type,
    ezmax_api_definition__full_field_e_user_logintype__e e_user_logintype,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_user_jobtitle,
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess,
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

void user_response_compound_free(user_response_compound_t *user_response_compound);

user_response_compound_t *user_response_compound_parseFromJSON(cJSON *user_response_compoundJSON);

cJSON *user_response_compound_convertToJSON(user_response_compound_t *user_response_compound);

#endif /* _user_response_compound_H_ */

