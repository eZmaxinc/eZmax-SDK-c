#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_request_compound.h"


char* e_user_typeuser_request_compound_ToString(ezmax_api_definition__full_user_request_compound__e e_user_type) {
    char* e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Employee", "EzsignUser", "Normal" };
	return e_user_typeArray[e_user_type];
}

ezmax_api_definition__full_user_request_compound__e e_user_typeuser_request_compound_FromString(char* e_user_type){
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
char* e_user_logintypeuser_request_compound_ToString(ezmax_api_definition__full_user_request_compound__e e_user_logintype) {
    char* e_user_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion" };
	return e_user_logintypeArray[e_user_logintype];
}

ezmax_api_definition__full_user_request_compound__e e_user_logintypeuser_request_compound_FromString(char* e_user_logintype){
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
char* e_user_ezsignaccessuser_request_compound_ToString(ezmax_api_definition__full_user_request_compound__e e_user_ezsignaccess) {
    char* e_user_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
	return e_user_ezsignaccessArray[e_user_ezsignaccess];
}

ezmax_api_definition__full_user_request_compound__e e_user_ezsignaccessuser_request_compound_FromString(char* e_user_ezsignaccess){
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

user_request_compound_t *user_request_compound_create(
    int pki_user_id,
    int fki_agent_id,
    int fki_broker_id,
    int fki_assistant_id,
    int fki_employee_id,
    int fki_company_id_default,
    int fki_department_id_default,
    int fki_timezone_id,
    int fki_language_id,
    email_request_compound_t *obj_email,
    int fki_billingentityinternal_id,
    phone_request_compound_t *obj_phone_home,
    phone_request_compound_t *obj_phone_sms,
    int fki_secretquestion_id,
    char *s_user_secretresponse,
    int fki_module_id_form,
    field_e_user_type_t *e_user_type,
    field_e_user_logintype_t *e_user_logintype,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    field_e_user_ezsignaccess_t *e_user_ezsignaccess,
    int b_user_isactive,
    int b_user_validatebyadministration,
    int b_user_validatebydirector,
    int b_user_attachmentautoverified,
    int b_user_changepassword
    ) {
    user_request_compound_t *user_request_compound_local_var = malloc(sizeof(user_request_compound_t));
    if (!user_request_compound_local_var) {
        return NULL;
    }
    user_request_compound_local_var->pki_user_id = pki_user_id;
    user_request_compound_local_var->fki_agent_id = fki_agent_id;
    user_request_compound_local_var->fki_broker_id = fki_broker_id;
    user_request_compound_local_var->fki_assistant_id = fki_assistant_id;
    user_request_compound_local_var->fki_employee_id = fki_employee_id;
    user_request_compound_local_var->fki_company_id_default = fki_company_id_default;
    user_request_compound_local_var->fki_department_id_default = fki_department_id_default;
    user_request_compound_local_var->fki_timezone_id = fki_timezone_id;
    user_request_compound_local_var->fki_language_id = fki_language_id;
    user_request_compound_local_var->obj_email = obj_email;
    user_request_compound_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    user_request_compound_local_var->obj_phone_home = obj_phone_home;
    user_request_compound_local_var->obj_phone_sms = obj_phone_sms;
    user_request_compound_local_var->fki_secretquestion_id = fki_secretquestion_id;
    user_request_compound_local_var->s_user_secretresponse = s_user_secretresponse;
    user_request_compound_local_var->fki_module_id_form = fki_module_id_form;
    user_request_compound_local_var->e_user_type = e_user_type;
    user_request_compound_local_var->e_user_logintype = e_user_logintype;
    user_request_compound_local_var->s_user_firstname = s_user_firstname;
    user_request_compound_local_var->s_user_lastname = s_user_lastname;
    user_request_compound_local_var->s_user_loginname = s_user_loginname;
    user_request_compound_local_var->e_user_ezsignaccess = e_user_ezsignaccess;
    user_request_compound_local_var->b_user_isactive = b_user_isactive;
    user_request_compound_local_var->b_user_validatebyadministration = b_user_validatebyadministration;
    user_request_compound_local_var->b_user_validatebydirector = b_user_validatebydirector;
    user_request_compound_local_var->b_user_attachmentautoverified = b_user_attachmentautoverified;
    user_request_compound_local_var->b_user_changepassword = b_user_changepassword;

    return user_request_compound_local_var;
}


void user_request_compound_free(user_request_compound_t *user_request_compound) {
    if(NULL == user_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (user_request_compound->obj_email) {
        email_request_compound_free(user_request_compound->obj_email);
        user_request_compound->obj_email = NULL;
    }
    if (user_request_compound->obj_phone_home) {
        phone_request_compound_free(user_request_compound->obj_phone_home);
        user_request_compound->obj_phone_home = NULL;
    }
    if (user_request_compound->obj_phone_sms) {
        phone_request_compound_free(user_request_compound->obj_phone_sms);
        user_request_compound->obj_phone_sms = NULL;
    }
    if (user_request_compound->s_user_secretresponse) {
        free(user_request_compound->s_user_secretresponse);
        user_request_compound->s_user_secretresponse = NULL;
    }
    if (user_request_compound->e_user_type) {
        field_e_user_type_free(user_request_compound->e_user_type);
        user_request_compound->e_user_type = NULL;
    }
    if (user_request_compound->e_user_logintype) {
        field_e_user_logintype_free(user_request_compound->e_user_logintype);
        user_request_compound->e_user_logintype = NULL;
    }
    if (user_request_compound->s_user_firstname) {
        free(user_request_compound->s_user_firstname);
        user_request_compound->s_user_firstname = NULL;
    }
    if (user_request_compound->s_user_lastname) {
        free(user_request_compound->s_user_lastname);
        user_request_compound->s_user_lastname = NULL;
    }
    if (user_request_compound->s_user_loginname) {
        free(user_request_compound->s_user_loginname);
        user_request_compound->s_user_loginname = NULL;
    }
    if (user_request_compound->e_user_ezsignaccess) {
        field_e_user_ezsignaccess_free(user_request_compound->e_user_ezsignaccess);
        user_request_compound->e_user_ezsignaccess = NULL;
    }
    free(user_request_compound);
}

cJSON *user_request_compound_convertToJSON(user_request_compound_t *user_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // user_request_compound->pki_user_id
    if(user_request_compound->pki_user_id) {
    if(cJSON_AddNumberToObject(item, "pkiUserID", user_request_compound->pki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_request_compound->fki_agent_id
    if(user_request_compound->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", user_request_compound->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_request_compound->fki_broker_id
    if(user_request_compound->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", user_request_compound->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_request_compound->fki_assistant_id
    if(user_request_compound->fki_assistant_id) {
    if(cJSON_AddNumberToObject(item, "fkiAssistantID", user_request_compound->fki_assistant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_request_compound->fki_employee_id
    if(user_request_compound->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", user_request_compound->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_request_compound->fki_company_id_default
    if (!user_request_compound->fki_company_id_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCompanyIDDefault", user_request_compound->fki_company_id_default) == NULL) {
    goto fail; //Numeric
    }


    // user_request_compound->fki_department_id_default
    if (!user_request_compound->fki_department_id_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentIDDefault", user_request_compound->fki_department_id_default) == NULL) {
    goto fail; //Numeric
    }


    // user_request_compound->fki_timezone_id
    if (!user_request_compound->fki_timezone_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", user_request_compound->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }


    // user_request_compound->fki_language_id
    if (!user_request_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", user_request_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // user_request_compound->obj_email
    if (!user_request_compound->obj_email) {
        goto fail;
    }
    cJSON *obj_email_local_JSON = email_request_compound_convertToJSON(user_request_compound->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // user_request_compound->fki_billingentityinternal_id
    if (!user_request_compound->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", user_request_compound->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // user_request_compound->obj_phone_home
    if(user_request_compound->obj_phone_home) {
    cJSON *obj_phone_home_local_JSON = phone_request_compound_convertToJSON(user_request_compound->obj_phone_home);
    if(obj_phone_home_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneHome", obj_phone_home_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // user_request_compound->obj_phone_sms
    if(user_request_compound->obj_phone_sms) {
    cJSON *obj_phone_sms_local_JSON = phone_request_compound_convertToJSON(user_request_compound->obj_phone_sms);
    if(obj_phone_sms_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneSMS", obj_phone_sms_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // user_request_compound->fki_secretquestion_id
    if(user_request_compound->fki_secretquestion_id) {
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", user_request_compound->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_request_compound->s_user_secretresponse
    if(user_request_compound->s_user_secretresponse) {
    if(cJSON_AddStringToObject(item, "sUserSecretresponse", user_request_compound->s_user_secretresponse) == NULL) {
    goto fail; //String
    }
    }


    // user_request_compound->fki_module_id_form
    if(user_request_compound->fki_module_id_form) {
    if(cJSON_AddNumberToObject(item, "fkiModuleIDForm", user_request_compound->fki_module_id_form) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_request_compound->e_user_type
    if (ezmax_api_definition__full_user_request_compound__NULL == user_request_compound->e_user_type) {
        goto fail;
    }
    cJSON *e_user_type_local_JSON = field_e_user_type_convertToJSON(user_request_compound->e_user_type);
    if(e_user_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserType", e_user_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_request_compound->e_user_logintype
    if (ezmax_api_definition__full_user_request_compound__NULL == user_request_compound->e_user_logintype) {
        goto fail;
    }
    cJSON *e_user_logintype_local_JSON = field_e_user_logintype_convertToJSON(user_request_compound->e_user_logintype);
    if(e_user_logintype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserLogintype", e_user_logintype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_request_compound->s_user_firstname
    if (!user_request_compound->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", user_request_compound->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // user_request_compound->s_user_lastname
    if (!user_request_compound->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", user_request_compound->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // user_request_compound->s_user_loginname
    if (!user_request_compound->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", user_request_compound->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // user_request_compound->e_user_ezsignaccess
    if (ezmax_api_definition__full_user_request_compound__NULL == user_request_compound->e_user_ezsignaccess) {
        goto fail;
    }
    cJSON *e_user_ezsignaccess_local_JSON = field_e_user_ezsignaccess_convertToJSON(user_request_compound->e_user_ezsignaccess);
    if(e_user_ezsignaccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserEzsignaccess", e_user_ezsignaccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_request_compound->b_user_isactive
    if (!user_request_compound->b_user_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserIsactive", user_request_compound->b_user_isactive) == NULL) {
    goto fail; //Bool
    }


    // user_request_compound->b_user_validatebyadministration
    if(user_request_compound->b_user_validatebyadministration) {
    if(cJSON_AddBoolToObject(item, "bUserValidatebyadministration", user_request_compound->b_user_validatebyadministration) == NULL) {
    goto fail; //Bool
    }
    }


    // user_request_compound->b_user_validatebydirector
    if(user_request_compound->b_user_validatebydirector) {
    if(cJSON_AddBoolToObject(item, "bUserValidatebydirector", user_request_compound->b_user_validatebydirector) == NULL) {
    goto fail; //Bool
    }
    }


    // user_request_compound->b_user_attachmentautoverified
    if(user_request_compound->b_user_attachmentautoverified) {
    if(cJSON_AddBoolToObject(item, "bUserAttachmentautoverified", user_request_compound->b_user_attachmentautoverified) == NULL) {
    goto fail; //Bool
    }
    }


    // user_request_compound->b_user_changepassword
    if(user_request_compound->b_user_changepassword) {
    if(cJSON_AddBoolToObject(item, "bUserChangepassword", user_request_compound->b_user_changepassword) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_request_compound_t *user_request_compound_parseFromJSON(cJSON *user_request_compoundJSON){

    user_request_compound_t *user_request_compound_local_var = NULL;

    // define the local variable for user_request_compound->obj_email
    email_request_compound_t *obj_email_local_nonprim = NULL;

    // define the local variable for user_request_compound->obj_phone_home
    phone_request_compound_t *obj_phone_home_local_nonprim = NULL;

    // define the local variable for user_request_compound->obj_phone_sms
    phone_request_compound_t *obj_phone_sms_local_nonprim = NULL;

    // define the local variable for user_request_compound->e_user_type
    field_e_user_type_t *e_user_type_local_nonprim = NULL;

    // define the local variable for user_request_compound->e_user_logintype
    field_e_user_logintype_t *e_user_logintype_local_nonprim = NULL;

    // define the local variable for user_request_compound->e_user_ezsignaccess
    field_e_user_ezsignaccess_t *e_user_ezsignaccess_local_nonprim = NULL;

    // user_request_compound->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "pkiUserID");
    if (pki_user_id) { 
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }
    }

    // user_request_compound->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiAgentID");
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // user_request_compound->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiBrokerID");
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // user_request_compound->fki_assistant_id
    cJSON *fki_assistant_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiAssistantID");
    if (fki_assistant_id) { 
    if(!cJSON_IsNumber(fki_assistant_id))
    {
    goto end; //Numeric
    }
    }

    // user_request_compound->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiEmployeeID");
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    }

    // user_request_compound->fki_company_id_default
    cJSON *fki_company_id_default = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiCompanyIDDefault");
    if (!fki_company_id_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_company_id_default))
    {
    goto end; //Numeric
    }

    // user_request_compound->fki_department_id_default
    cJSON *fki_department_id_default = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiDepartmentIDDefault");
    if (!fki_department_id_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_department_id_default))
    {
    goto end; //Numeric
    }

    // user_request_compound->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiTimezoneID");
    if (!fki_timezone_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }

    // user_request_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // user_request_compound->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "objEmail");
    if (!obj_email) {
        goto end;
    }

    
    obj_email_local_nonprim = email_request_compound_parseFromJSON(obj_email); //nonprimitive

    // user_request_compound->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiBillingentityinternalID");
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // user_request_compound->obj_phone_home
    cJSON *obj_phone_home = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "objPhoneHome");
    if (obj_phone_home) { 
    obj_phone_home_local_nonprim = phone_request_compound_parseFromJSON(obj_phone_home); //nonprimitive
    }

    // user_request_compound->obj_phone_sms
    cJSON *obj_phone_sms = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "objPhoneSMS");
    if (obj_phone_sms) { 
    obj_phone_sms_local_nonprim = phone_request_compound_parseFromJSON(obj_phone_sms); //nonprimitive
    }

    // user_request_compound->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiSecretquestionID");
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    }

    // user_request_compound->s_user_secretresponse
    cJSON *s_user_secretresponse = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "sUserSecretresponse");
    if (s_user_secretresponse) { 
    if(!cJSON_IsString(s_user_secretresponse) && !cJSON_IsNull(s_user_secretresponse))
    {
    goto end; //String
    }
    }

    // user_request_compound->fki_module_id_form
    cJSON *fki_module_id_form = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "fkiModuleIDForm");
    if (fki_module_id_form) { 
    if(!cJSON_IsNumber(fki_module_id_form))
    {
    goto end; //Numeric
    }
    }

    // user_request_compound->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "eUserType");
    if (!e_user_type) {
        goto end;
    }

    
    e_user_type_local_nonprim = field_e_user_type_parseFromJSON(e_user_type); //custom

    // user_request_compound->e_user_logintype
    cJSON *e_user_logintype = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "eUserLogintype");
    if (!e_user_logintype) {
        goto end;
    }

    
    e_user_logintype_local_nonprim = field_e_user_logintype_parseFromJSON(e_user_logintype); //custom

    // user_request_compound->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // user_request_compound->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // user_request_compound->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // user_request_compound->e_user_ezsignaccess
    cJSON *e_user_ezsignaccess = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "eUserEzsignaccess");
    if (!e_user_ezsignaccess) {
        goto end;
    }

    
    e_user_ezsignaccess_local_nonprim = field_e_user_ezsignaccess_parseFromJSON(e_user_ezsignaccess); //custom

    // user_request_compound->b_user_isactive
    cJSON *b_user_isactive = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "bUserIsactive");
    if (!b_user_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_isactive))
    {
    goto end; //Bool
    }

    // user_request_compound->b_user_validatebyadministration
    cJSON *b_user_validatebyadministration = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "bUserValidatebyadministration");
    if (b_user_validatebyadministration) { 
    if(!cJSON_IsBool(b_user_validatebyadministration))
    {
    goto end; //Bool
    }
    }

    // user_request_compound->b_user_validatebydirector
    cJSON *b_user_validatebydirector = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "bUserValidatebydirector");
    if (b_user_validatebydirector) { 
    if(!cJSON_IsBool(b_user_validatebydirector))
    {
    goto end; //Bool
    }
    }

    // user_request_compound->b_user_attachmentautoverified
    cJSON *b_user_attachmentautoverified = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "bUserAttachmentautoverified");
    if (b_user_attachmentautoverified) { 
    if(!cJSON_IsBool(b_user_attachmentautoverified))
    {
    goto end; //Bool
    }
    }

    // user_request_compound->b_user_changepassword
    cJSON *b_user_changepassword = cJSON_GetObjectItemCaseSensitive(user_request_compoundJSON, "bUserChangepassword");
    if (b_user_changepassword) { 
    if(!cJSON_IsBool(b_user_changepassword))
    {
    goto end; //Bool
    }
    }


    user_request_compound_local_var = user_request_compound_create (
        pki_user_id ? pki_user_id->valuedouble : 0,
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_assistant_id ? fki_assistant_id->valuedouble : 0,
        fki_employee_id ? fki_employee_id->valuedouble : 0,
        fki_company_id_default->valuedouble,
        fki_department_id_default->valuedouble,
        fki_timezone_id->valuedouble,
        fki_language_id->valuedouble,
        obj_email_local_nonprim,
        fki_billingentityinternal_id->valuedouble,
        obj_phone_home ? obj_phone_home_local_nonprim : NULL,
        obj_phone_sms ? obj_phone_sms_local_nonprim : NULL,
        fki_secretquestion_id ? fki_secretquestion_id->valuedouble : 0,
        s_user_secretresponse && !cJSON_IsNull(s_user_secretresponse) ? strdup(s_user_secretresponse->valuestring) : NULL,
        fki_module_id_form ? fki_module_id_form->valuedouble : 0,
        e_user_type_local_nonprim,
        e_user_logintype_local_nonprim,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        e_user_ezsignaccess_local_nonprim,
        b_user_isactive->valueint,
        b_user_validatebyadministration ? b_user_validatebyadministration->valueint : 0,
        b_user_validatebydirector ? b_user_validatebydirector->valueint : 0,
        b_user_attachmentautoverified ? b_user_attachmentautoverified->valueint : 0,
        b_user_changepassword ? b_user_changepassword->valueint : 0
        );

    return user_request_compound_local_var;
end:
    if (obj_email_local_nonprim) {
        email_request_compound_free(obj_email_local_nonprim);
        obj_email_local_nonprim = NULL;
    }
    if (obj_phone_home_local_nonprim) {
        phone_request_compound_free(obj_phone_home_local_nonprim);
        obj_phone_home_local_nonprim = NULL;
    }
    if (obj_phone_sms_local_nonprim) {
        phone_request_compound_free(obj_phone_sms_local_nonprim);
        obj_phone_sms_local_nonprim = NULL;
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
    return NULL;

}
