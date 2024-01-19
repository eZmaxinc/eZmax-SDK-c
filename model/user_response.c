#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_response.h"


char* e_user_originuser_response_ToString(ezmax_api_definition__full_user_response__e e_user_origin) {
    char* e_user_originArray[] =  { "NULL", "BuiltIn", "External" };
    return e_user_originArray[e_user_origin];
}

ezmax_api_definition__full_user_response__e e_user_originuser_response_FromString(char* e_user_origin){
    int stringToReturn = 0;
    char *e_user_originArray[] =  { "NULL", "BuiltIn", "External" };
    size_t sizeofArray = sizeof(e_user_originArray) / sizeof(e_user_originArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_origin, e_user_originArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_user_typeuser_response_ToString(ezmax_api_definition__full_user_response__e e_user_type) {
    char* e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Employee", "EzsignUser", "Normal" };
    return e_user_typeArray[e_user_type];
}

ezmax_api_definition__full_user_response__e e_user_typeuser_response_FromString(char* e_user_type){
    int stringToReturn = 0;
    char *e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Employee", "EzsignUser", "Normal" };
    size_t sizeofArray = sizeof(e_user_typeArray) / sizeof(e_user_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_type, e_user_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_user_logintypeuser_response_ToString(ezmax_api_definition__full_user_response__e e_user_logintype) {
    char* e_user_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion" };
    return e_user_logintypeArray[e_user_logintype];
}

ezmax_api_definition__full_user_response__e e_user_logintypeuser_response_FromString(char* e_user_logintype){
    int stringToReturn = 0;
    char *e_user_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion" };
    size_t sizeofArray = sizeof(e_user_logintypeArray) / sizeof(e_user_logintypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_logintype, e_user_logintypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_user_ezsignaccessuser_response_ToString(ezmax_api_definition__full_user_response__e e_user_ezsignaccess) {
    char* e_user_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    return e_user_ezsignaccessArray[e_user_ezsignaccess];
}

ezmax_api_definition__full_user_response__e e_user_ezsignaccessuser_response_FromString(char* e_user_ezsignaccess){
    int stringToReturn = 0;
    char *e_user_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    size_t sizeofArray = sizeof(e_user_ezsignaccessArray) / sizeof(e_user_ezsignaccessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_ezsignaccess, e_user_ezsignaccessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    user_response_t *user_response_local_var = malloc(sizeof(user_response_t));
    if (!user_response_local_var) {
        return NULL;
    }
    user_response_local_var->pki_user_id = pki_user_id;
    user_response_local_var->fki_agent_id = fki_agent_id;
    user_response_local_var->fki_broker_id = fki_broker_id;
    user_response_local_var->fki_assistant_id = fki_assistant_id;
    user_response_local_var->fki_employee_id = fki_employee_id;
    user_response_local_var->fki_company_id_default = fki_company_id_default;
    user_response_local_var->s_company_name_x = s_company_name_x;
    user_response_local_var->fki_department_id_default = fki_department_id_default;
    user_response_local_var->s_department_name_x = s_department_name_x;
    user_response_local_var->fki_timezone_id = fki_timezone_id;
    user_response_local_var->s_timezone_name = s_timezone_name;
    user_response_local_var->fki_language_id = fki_language_id;
    user_response_local_var->s_language_name_x = s_language_name_x;
    user_response_local_var->obj_email = obj_email;
    user_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    user_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    user_response_local_var->obj_phone_home = obj_phone_home;
    user_response_local_var->obj_phone_sms = obj_phone_sms;
    user_response_local_var->fki_secretquestion_id = fki_secretquestion_id;
    user_response_local_var->fki_module_id_form = fki_module_id_form;
    user_response_local_var->s_module_name_x = s_module_name_x;
    user_response_local_var->e_user_origin = e_user_origin;
    user_response_local_var->e_user_type = e_user_type;
    user_response_local_var->e_user_logintype = e_user_logintype;
    user_response_local_var->s_user_firstname = s_user_firstname;
    user_response_local_var->s_user_lastname = s_user_lastname;
    user_response_local_var->s_user_loginname = s_user_loginname;
    user_response_local_var->s_user_jobtitle = s_user_jobtitle;
    user_response_local_var->e_user_ezsignaccess = e_user_ezsignaccess;
    user_response_local_var->dt_user_lastlogondate = dt_user_lastlogondate;
    user_response_local_var->dt_user_passwordchanged = dt_user_passwordchanged;
    user_response_local_var->dt_user_ezsignprepaidexpiration = dt_user_ezsignprepaidexpiration;
    user_response_local_var->b_user_isactive = b_user_isactive;
    user_response_local_var->b_user_validatebyadministration = b_user_validatebyadministration;
    user_response_local_var->b_user_validatebydirector = b_user_validatebydirector;
    user_response_local_var->b_user_attachmentautoverified = b_user_attachmentautoverified;
    user_response_local_var->b_user_changepassword = b_user_changepassword;
    user_response_local_var->obj_audit = obj_audit;

    return user_response_local_var;
}


void user_response_free(user_response_t *user_response) {
    if(NULL == user_response){
        return ;
    }
    listEntry_t *listEntry;
    if (user_response->s_company_name_x) {
        free(user_response->s_company_name_x);
        user_response->s_company_name_x = NULL;
    }
    if (user_response->s_department_name_x) {
        free(user_response->s_department_name_x);
        user_response->s_department_name_x = NULL;
    }
    if (user_response->s_timezone_name) {
        free(user_response->s_timezone_name);
        user_response->s_timezone_name = NULL;
    }
    if (user_response->s_language_name_x) {
        free(user_response->s_language_name_x);
        user_response->s_language_name_x = NULL;
    }
    if (user_response->obj_email) {
        email_response_compound_free(user_response->obj_email);
        user_response->obj_email = NULL;
    }
    if (user_response->s_billingentityinternal_description_x) {
        free(user_response->s_billingentityinternal_description_x);
        user_response->s_billingentityinternal_description_x = NULL;
    }
    if (user_response->obj_phone_home) {
        phone_response_compound_free(user_response->obj_phone_home);
        user_response->obj_phone_home = NULL;
    }
    if (user_response->obj_phone_sms) {
        phone_response_compound_free(user_response->obj_phone_sms);
        user_response->obj_phone_sms = NULL;
    }
    if (user_response->s_module_name_x) {
        free(user_response->s_module_name_x);
        user_response->s_module_name_x = NULL;
    }
    if (user_response->e_user_origin) {
        field_e_user_origin_free(user_response->e_user_origin);
        user_response->e_user_origin = NULL;
    }
    if (user_response->e_user_type) {
        field_e_user_type_free(user_response->e_user_type);
        user_response->e_user_type = NULL;
    }
    if (user_response->e_user_logintype) {
        field_e_user_logintype_free(user_response->e_user_logintype);
        user_response->e_user_logintype = NULL;
    }
    if (user_response->s_user_firstname) {
        free(user_response->s_user_firstname);
        user_response->s_user_firstname = NULL;
    }
    if (user_response->s_user_lastname) {
        free(user_response->s_user_lastname);
        user_response->s_user_lastname = NULL;
    }
    if (user_response->s_user_loginname) {
        free(user_response->s_user_loginname);
        user_response->s_user_loginname = NULL;
    }
    if (user_response->s_user_jobtitle) {
        free(user_response->s_user_jobtitle);
        user_response->s_user_jobtitle = NULL;
    }
    if (user_response->e_user_ezsignaccess) {
        field_e_user_ezsignaccess_free(user_response->e_user_ezsignaccess);
        user_response->e_user_ezsignaccess = NULL;
    }
    if (user_response->dt_user_lastlogondate) {
        free(user_response->dt_user_lastlogondate);
        user_response->dt_user_lastlogondate = NULL;
    }
    if (user_response->dt_user_passwordchanged) {
        free(user_response->dt_user_passwordchanged);
        user_response->dt_user_passwordchanged = NULL;
    }
    if (user_response->dt_user_ezsignprepaidexpiration) {
        free(user_response->dt_user_ezsignprepaidexpiration);
        user_response->dt_user_ezsignprepaidexpiration = NULL;
    }
    if (user_response->obj_audit) {
        common_audit_free(user_response->obj_audit);
        user_response->obj_audit = NULL;
    }
    free(user_response);
}

cJSON *user_response_convertToJSON(user_response_t *user_response) {
    cJSON *item = cJSON_CreateObject();

    // user_response->pki_user_id
    if (!user_response->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", user_response->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response->fki_agent_id
    if(user_response->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", user_response->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_response->fki_broker_id
    if(user_response->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", user_response->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_response->fki_assistant_id
    if(user_response->fki_assistant_id) {
    if(cJSON_AddNumberToObject(item, "fkiAssistantID", user_response->fki_assistant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_response->fki_employee_id
    if(user_response->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", user_response->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_response->fki_company_id_default
    if (!user_response->fki_company_id_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCompanyIDDefault", user_response->fki_company_id_default) == NULL) {
    goto fail; //Numeric
    }


    // user_response->s_company_name_x
    if (!user_response->s_company_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCompanyNameX", user_response->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // user_response->fki_department_id_default
    if (!user_response->fki_department_id_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentIDDefault", user_response->fki_department_id_default) == NULL) {
    goto fail; //Numeric
    }


    // user_response->s_department_name_x
    if (!user_response->s_department_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", user_response->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // user_response->fki_timezone_id
    if (!user_response->fki_timezone_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", user_response->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response->s_timezone_name
    if (!user_response->s_timezone_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sTimezoneName", user_response->s_timezone_name) == NULL) {
    goto fail; //String
    }


    // user_response->fki_language_id
    if (!user_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", user_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response->s_language_name_x
    if (!user_response->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", user_response->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // user_response->obj_email
    if (!user_response->obj_email) {
        goto fail;
    }
    cJSON *obj_email_local_JSON = email_response_compound_convertToJSON(user_response->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // user_response->fki_billingentityinternal_id
    if (!user_response->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", user_response->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response->s_billingentityinternal_description_x
    if (!user_response->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", user_response->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // user_response->obj_phone_home
    if(user_response->obj_phone_home) {
    cJSON *obj_phone_home_local_JSON = phone_response_compound_convertToJSON(user_response->obj_phone_home);
    if(obj_phone_home_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneHome", obj_phone_home_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // user_response->obj_phone_sms
    if(user_response->obj_phone_sms) {
    cJSON *obj_phone_sms_local_JSON = phone_response_compound_convertToJSON(user_response->obj_phone_sms);
    if(obj_phone_sms_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneSMS", obj_phone_sms_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // user_response->fki_secretquestion_id
    if(user_response->fki_secretquestion_id) {
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", user_response->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_response->fki_module_id_form
    if(user_response->fki_module_id_form) {
    if(cJSON_AddNumberToObject(item, "fkiModuleIDForm", user_response->fki_module_id_form) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_response->s_module_name_x
    if(user_response->s_module_name_x) {
    if(cJSON_AddStringToObject(item, "sModuleNameX", user_response->s_module_name_x) == NULL) {
    goto fail; //String
    }
    }


    // user_response->e_user_origin
    if (ezmax_api_definition__full_user_response__NULL == user_response->e_user_origin) {
        goto fail;
    }
    cJSON *e_user_origin_local_JSON = field_e_user_origin_convertToJSON(user_response->e_user_origin);
    if(e_user_origin_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserOrigin", e_user_origin_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_response->e_user_type
    if (ezmax_api_definition__full_user_response__NULL == user_response->e_user_type) {
        goto fail;
    }
    cJSON *e_user_type_local_JSON = field_e_user_type_convertToJSON(user_response->e_user_type);
    if(e_user_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserType", e_user_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_response->e_user_logintype
    if (ezmax_api_definition__full_user_response__NULL == user_response->e_user_logintype) {
        goto fail;
    }
    cJSON *e_user_logintype_local_JSON = field_e_user_logintype_convertToJSON(user_response->e_user_logintype);
    if(e_user_logintype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserLogintype", e_user_logintype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_response->s_user_firstname
    if (!user_response->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", user_response->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // user_response->s_user_lastname
    if (!user_response->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", user_response->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // user_response->s_user_loginname
    if (!user_response->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", user_response->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // user_response->s_user_jobtitle
    if(user_response->s_user_jobtitle) {
    if(cJSON_AddStringToObject(item, "sUserJobtitle", user_response->s_user_jobtitle) == NULL) {
    goto fail; //String
    }
    }


    // user_response->e_user_ezsignaccess
    if (ezmax_api_definition__full_user_response__NULL == user_response->e_user_ezsignaccess) {
        goto fail;
    }
    cJSON *e_user_ezsignaccess_local_JSON = field_e_user_ezsignaccess_convertToJSON(user_response->e_user_ezsignaccess);
    if(e_user_ezsignaccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserEzsignaccess", e_user_ezsignaccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_response->dt_user_lastlogondate
    if(user_response->dt_user_lastlogondate) {
    if(cJSON_AddStringToObject(item, "dtUserLastlogondate", user_response->dt_user_lastlogondate) == NULL) {
    goto fail; //String
    }
    }


    // user_response->dt_user_passwordchanged
    if(user_response->dt_user_passwordchanged) {
    if(cJSON_AddStringToObject(item, "dtUserPasswordchanged", user_response->dt_user_passwordchanged) == NULL) {
    goto fail; //String
    }
    }


    // user_response->dt_user_ezsignprepaidexpiration
    if(user_response->dt_user_ezsignprepaidexpiration) {
    if(cJSON_AddStringToObject(item, "dtUserEzsignprepaidexpiration", user_response->dt_user_ezsignprepaidexpiration) == NULL) {
    goto fail; //String
    }
    }


    // user_response->b_user_isactive
    if (!user_response->b_user_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserIsactive", user_response->b_user_isactive) == NULL) {
    goto fail; //Bool
    }


    // user_response->b_user_validatebyadministration
    if(user_response->b_user_validatebyadministration) {
    if(cJSON_AddBoolToObject(item, "bUserValidatebyadministration", user_response->b_user_validatebyadministration) == NULL) {
    goto fail; //Bool
    }
    }


    // user_response->b_user_validatebydirector
    if(user_response->b_user_validatebydirector) {
    if(cJSON_AddBoolToObject(item, "bUserValidatebydirector", user_response->b_user_validatebydirector) == NULL) {
    goto fail; //Bool
    }
    }


    // user_response->b_user_attachmentautoverified
    if(user_response->b_user_attachmentautoverified) {
    if(cJSON_AddBoolToObject(item, "bUserAttachmentautoverified", user_response->b_user_attachmentautoverified) == NULL) {
    goto fail; //Bool
    }
    }


    // user_response->b_user_changepassword
    if (!user_response->b_user_changepassword) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserChangepassword", user_response->b_user_changepassword) == NULL) {
    goto fail; //Bool
    }


    // user_response->obj_audit
    if (!user_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(user_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_response_t *user_response_parseFromJSON(cJSON *user_responseJSON){

    user_response_t *user_response_local_var = NULL;

    // define the local variable for user_response->obj_email
    email_response_compound_t *obj_email_local_nonprim = NULL;

    // define the local variable for user_response->obj_phone_home
    phone_response_compound_t *obj_phone_home_local_nonprim = NULL;

    // define the local variable for user_response->obj_phone_sms
    phone_response_compound_t *obj_phone_sms_local_nonprim = NULL;

    // define the local variable for user_response->e_user_origin
    field_e_user_origin_t *e_user_origin_local_nonprim = NULL;

    // define the local variable for user_response->e_user_type
    field_e_user_type_t *e_user_type_local_nonprim = NULL;

    // define the local variable for user_response->e_user_logintype
    field_e_user_logintype_t *e_user_logintype_local_nonprim = NULL;

    // define the local variable for user_response->e_user_ezsignaccess
    field_e_user_ezsignaccess_t *e_user_ezsignaccess_local_nonprim = NULL;

    // define the local variable for user_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // user_response->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // user_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiAgentID");
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // user_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiBrokerID");
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // user_response->fki_assistant_id
    cJSON *fki_assistant_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiAssistantID");
    if (fki_assistant_id) { 
    if(!cJSON_IsNumber(fki_assistant_id))
    {
    goto end; //Numeric
    }
    }

    // user_response->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiEmployeeID");
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    }

    // user_response->fki_company_id_default
    cJSON *fki_company_id_default = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiCompanyIDDefault");
    if (!fki_company_id_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_company_id_default))
    {
    goto end; //Numeric
    }

    // user_response->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sCompanyNameX");
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // user_response->fki_department_id_default
    cJSON *fki_department_id_default = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiDepartmentIDDefault");
    if (!fki_department_id_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_department_id_default))
    {
    goto end; //Numeric
    }

    // user_response->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sDepartmentNameX");
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // user_response->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiTimezoneID");
    if (!fki_timezone_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }

    // user_response->s_timezone_name
    cJSON *s_timezone_name = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sTimezoneName");
    if (!s_timezone_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_timezone_name))
    {
    goto end; //String
    }

    // user_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // user_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // user_response->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "objEmail");
    if (!obj_email) {
        goto end;
    }

    
    obj_email_local_nonprim = email_response_compound_parseFromJSON(obj_email); //nonprimitive

    // user_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiBillingentityinternalID");
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // user_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sBillingentityinternalDescriptionX");
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }

    // user_response->obj_phone_home
    cJSON *obj_phone_home = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "objPhoneHome");
    if (obj_phone_home) { 
    obj_phone_home_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_home); //nonprimitive
    }

    // user_response->obj_phone_sms
    cJSON *obj_phone_sms = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "objPhoneSMS");
    if (obj_phone_sms) { 
    obj_phone_sms_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_sms); //nonprimitive
    }

    // user_response->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiSecretquestionID");
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    }

    // user_response->fki_module_id_form
    cJSON *fki_module_id_form = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "fkiModuleIDForm");
    if (fki_module_id_form) { 
    if(!cJSON_IsNumber(fki_module_id_form))
    {
    goto end; //Numeric
    }
    }

    // user_response->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sModuleNameX");
    if (s_module_name_x) { 
    if(!cJSON_IsString(s_module_name_x) && !cJSON_IsNull(s_module_name_x))
    {
    goto end; //String
    }
    }

    // user_response->e_user_origin
    cJSON *e_user_origin = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "eUserOrigin");
    if (!e_user_origin) {
        goto end;
    }

    
    e_user_origin_local_nonprim = field_e_user_origin_parseFromJSON(e_user_origin); //custom

    // user_response->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "eUserType");
    if (!e_user_type) {
        goto end;
    }

    
    e_user_type_local_nonprim = field_e_user_type_parseFromJSON(e_user_type); //custom

    // user_response->e_user_logintype
    cJSON *e_user_logintype = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "eUserLogintype");
    if (!e_user_logintype) {
        goto end;
    }

    
    e_user_logintype_local_nonprim = field_e_user_logintype_parseFromJSON(e_user_logintype); //custom

    // user_response->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // user_response->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // user_response->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // user_response->s_user_jobtitle
    cJSON *s_user_jobtitle = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "sUserJobtitle");
    if (s_user_jobtitle) { 
    if(!cJSON_IsString(s_user_jobtitle) && !cJSON_IsNull(s_user_jobtitle))
    {
    goto end; //String
    }
    }

    // user_response->e_user_ezsignaccess
    cJSON *e_user_ezsignaccess = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "eUserEzsignaccess");
    if (!e_user_ezsignaccess) {
        goto end;
    }

    
    e_user_ezsignaccess_local_nonprim = field_e_user_ezsignaccess_parseFromJSON(e_user_ezsignaccess); //custom

    // user_response->dt_user_lastlogondate
    cJSON *dt_user_lastlogondate = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "dtUserLastlogondate");
    if (dt_user_lastlogondate) { 
    if(!cJSON_IsString(dt_user_lastlogondate) && !cJSON_IsNull(dt_user_lastlogondate))
    {
    goto end; //String
    }
    }

    // user_response->dt_user_passwordchanged
    cJSON *dt_user_passwordchanged = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "dtUserPasswordchanged");
    if (dt_user_passwordchanged) { 
    if(!cJSON_IsString(dt_user_passwordchanged) && !cJSON_IsNull(dt_user_passwordchanged))
    {
    goto end; //String
    }
    }

    // user_response->dt_user_ezsignprepaidexpiration
    cJSON *dt_user_ezsignprepaidexpiration = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "dtUserEzsignprepaidexpiration");
    if (dt_user_ezsignprepaidexpiration) { 
    if(!cJSON_IsString(dt_user_ezsignprepaidexpiration) && !cJSON_IsNull(dt_user_ezsignprepaidexpiration))
    {
    goto end; //String
    }
    }

    // user_response->b_user_isactive
    cJSON *b_user_isactive = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "bUserIsactive");
    if (!b_user_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_isactive))
    {
    goto end; //Bool
    }

    // user_response->b_user_validatebyadministration
    cJSON *b_user_validatebyadministration = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "bUserValidatebyadministration");
    if (b_user_validatebyadministration) { 
    if(!cJSON_IsBool(b_user_validatebyadministration))
    {
    goto end; //Bool
    }
    }

    // user_response->b_user_validatebydirector
    cJSON *b_user_validatebydirector = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "bUserValidatebydirector");
    if (b_user_validatebydirector) { 
    if(!cJSON_IsBool(b_user_validatebydirector))
    {
    goto end; //Bool
    }
    }

    // user_response->b_user_attachmentautoverified
    cJSON *b_user_attachmentautoverified = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "bUserAttachmentautoverified");
    if (b_user_attachmentautoverified) { 
    if(!cJSON_IsBool(b_user_attachmentautoverified))
    {
    goto end; //Bool
    }
    }

    // user_response->b_user_changepassword
    cJSON *b_user_changepassword = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "bUserChangepassword");
    if (!b_user_changepassword) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_changepassword))
    {
    goto end; //Bool
    }

    // user_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(user_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    user_response_local_var = user_response_create (
        pki_user_id->valuedouble,
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_assistant_id ? fki_assistant_id->valuedouble : 0,
        fki_employee_id ? fki_employee_id->valuedouble : 0,
        fki_company_id_default->valuedouble,
        strdup(s_company_name_x->valuestring),
        fki_department_id_default->valuedouble,
        strdup(s_department_name_x->valuestring),
        fki_timezone_id->valuedouble,
        strdup(s_timezone_name->valuestring),
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        obj_email_local_nonprim,
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        obj_phone_home ? obj_phone_home_local_nonprim : NULL,
        obj_phone_sms ? obj_phone_sms_local_nonprim : NULL,
        fki_secretquestion_id ? fki_secretquestion_id->valuedouble : 0,
        fki_module_id_form ? fki_module_id_form->valuedouble : 0,
        s_module_name_x && !cJSON_IsNull(s_module_name_x) ? strdup(s_module_name_x->valuestring) : NULL,
        e_user_origin_local_nonprim,
        e_user_type_local_nonprim,
        e_user_logintype_local_nonprim,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        s_user_jobtitle && !cJSON_IsNull(s_user_jobtitle) ? strdup(s_user_jobtitle->valuestring) : NULL,
        e_user_ezsignaccess_local_nonprim,
        dt_user_lastlogondate && !cJSON_IsNull(dt_user_lastlogondate) ? strdup(dt_user_lastlogondate->valuestring) : NULL,
        dt_user_passwordchanged && !cJSON_IsNull(dt_user_passwordchanged) ? strdup(dt_user_passwordchanged->valuestring) : NULL,
        dt_user_ezsignprepaidexpiration && !cJSON_IsNull(dt_user_ezsignprepaidexpiration) ? strdup(dt_user_ezsignprepaidexpiration->valuestring) : NULL,
        b_user_isactive->valueint,
        b_user_validatebyadministration ? b_user_validatebyadministration->valueint : 0,
        b_user_validatebydirector ? b_user_validatebydirector->valueint : 0,
        b_user_attachmentautoverified ? b_user_attachmentautoverified->valueint : 0,
        b_user_changepassword->valueint,
        obj_audit_local_nonprim
        );

    return user_response_local_var;
end:
    if (obj_email_local_nonprim) {
        email_response_compound_free(obj_email_local_nonprim);
        obj_email_local_nonprim = NULL;
    }
    if (obj_phone_home_local_nonprim) {
        phone_response_compound_free(obj_phone_home_local_nonprim);
        obj_phone_home_local_nonprim = NULL;
    }
    if (obj_phone_sms_local_nonprim) {
        phone_response_compound_free(obj_phone_sms_local_nonprim);
        obj_phone_sms_local_nonprim = NULL;
    }
    if (e_user_origin_local_nonprim) {
        field_e_user_origin_free(e_user_origin_local_nonprim);
        e_user_origin_local_nonprim = NULL;
    }
    if (e_user_type_local_nonprim) {
        field_e_user_type_free(e_user_type_local_nonprim);
        e_user_type_local_nonprim = NULL;
    }
    if (e_user_logintype_local_nonprim) {
        field_e_user_logintype_free(e_user_logintype_local_nonprim);
        e_user_logintype_local_nonprim = NULL;
    }
    if (e_user_ezsignaccess_local_nonprim) {
        field_e_user_ezsignaccess_free(e_user_ezsignaccess_local_nonprim);
        e_user_ezsignaccess_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
