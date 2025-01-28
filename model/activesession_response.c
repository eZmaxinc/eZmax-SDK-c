#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response.h"



static activesession_response_t *activesession_response_create_internal(
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype,
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin,
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    int b_activesession_attachment,
    int b_activesession_canafe,
    int b_activesession_financial,
    int b_activesession_realestatecompleted,
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign,
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess,
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid,
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    int fki_signature_id
    ) {
    activesession_response_t *activesession_response_local_var = malloc(sizeof(activesession_response_t));
    if (!activesession_response_local_var) {
        return NULL;
    }
    activesession_response_local_var->e_activesession_usertype = e_activesession_usertype;
    activesession_response_local_var->e_activesession_origin = e_activesession_origin;
    activesession_response_local_var->e_activesession_weekdaystart = e_activesession_weekdaystart;
    activesession_response_local_var->fki_language_id = fki_language_id;
    activesession_response_local_var->s_company_name_x = s_company_name_x;
    activesession_response_local_var->s_department_name_x = s_department_name_x;
    activesession_response_local_var->b_activesession_debug = b_activesession_debug;
    activesession_response_local_var->b_activesession_issuperadmin = b_activesession_issuperadmin;
    activesession_response_local_var->b_activesession_attachment = b_activesession_attachment;
    activesession_response_local_var->b_activesession_canafe = b_activesession_canafe;
    activesession_response_local_var->b_activesession_financial = b_activesession_financial;
    activesession_response_local_var->b_activesession_realestatecompleted = b_activesession_realestatecompleted;
    activesession_response_local_var->e_activesession_ezsign = e_activesession_ezsign;
    activesession_response_local_var->e_activesession_ezsignaccess = e_activesession_ezsignaccess;
    activesession_response_local_var->e_activesession_ezsignprepaid = e_activesession_ezsignprepaid;
    activesession_response_local_var->e_activesession_realestateinprogress = e_activesession_realestateinprogress;
    activesession_response_local_var->pks_customer_code = pks_customer_code;
    activesession_response_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    activesession_response_local_var->fki_signature_id = fki_signature_id;

    activesession_response_local_var->_library_owned = 1;
    return activesession_response_local_var;
}

__attribute__((deprecated)) activesession_response_t *activesession_response_create(
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype,
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin,
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    int b_activesession_attachment,
    int b_activesession_canafe,
    int b_activesession_financial,
    int b_activesession_realestatecompleted,
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign,
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess,
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid,
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    int fki_signature_id
    ) {
    return activesession_response_create_internal (
        e_activesession_usertype,
        e_activesession_origin,
        e_activesession_weekdaystart,
        fki_language_id,
        s_company_name_x,
        s_department_name_x,
        b_activesession_debug,
        b_activesession_issuperadmin,
        b_activesession_attachment,
        b_activesession_canafe,
        b_activesession_financial,
        b_activesession_realestatecompleted,
        e_activesession_ezsign,
        e_activesession_ezsignaccess,
        e_activesession_ezsignprepaid,
        e_activesession_realestateinprogress,
        pks_customer_code,
        fki_systemconfigurationtype_id,
        fki_signature_id
        );
}

void activesession_response_free(activesession_response_t *activesession_response) {
    if(NULL == activesession_response){
        return ;
    }
    if(activesession_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response->s_company_name_x) {
        free(activesession_response->s_company_name_x);
        activesession_response->s_company_name_x = NULL;
    }
    if (activesession_response->s_department_name_x) {
        free(activesession_response->s_department_name_x);
        activesession_response->s_department_name_x = NULL;
    }
    if (activesession_response->pks_customer_code) {
        free(activesession_response->pks_customer_code);
        activesession_response->pks_customer_code = NULL;
    }
    free(activesession_response);
}

cJSON *activesession_response_convertToJSON(activesession_response_t *activesession_response) {
    cJSON *item = cJSON_CreateObject();

    // activesession_response->e_activesession_usertype
    if (ezmax_api_definition__full_field_e_activesession_usertype__NULL == activesession_response->e_activesession_usertype) {
        goto fail;
    }
    cJSON *e_activesession_usertype_local_JSON = field_e_activesession_usertype_convertToJSON(activesession_response->e_activesession_usertype);
    if(e_activesession_usertype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionUsertype", e_activesession_usertype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->e_activesession_origin
    if (ezmax_api_definition__full_field_e_activesession_origin__NULL == activesession_response->e_activesession_origin) {
        goto fail;
    }
    cJSON *e_activesession_origin_local_JSON = field_e_activesession_origin_convertToJSON(activesession_response->e_activesession_origin);
    if(e_activesession_origin_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionOrigin", e_activesession_origin_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->e_activesession_weekdaystart
    if (ezmax_api_definition__full_field_e_activesession_weekdaystart__NULL == activesession_response->e_activesession_weekdaystart) {
        goto fail;
    }
    cJSON *e_activesession_weekdaystart_local_JSON = field_e_activesession_weekdaystart_convertToJSON(activesession_response->e_activesession_weekdaystart);
    if(e_activesession_weekdaystart_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionWeekdaystart", e_activesession_weekdaystart_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->fki_language_id
    if (!activesession_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", activesession_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response->s_company_name_x
    if (!activesession_response->s_company_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCompanyNameX", activesession_response->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_response->s_department_name_x
    if (!activesession_response->s_department_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", activesession_response->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_response->b_activesession_debug
    if (!activesession_response->b_activesession_debug) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActivesessionDebug", activesession_response->b_activesession_debug) == NULL) {
    goto fail; //Bool
    }


    // activesession_response->b_activesession_issuperadmin
    if (!activesession_response->b_activesession_issuperadmin) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActivesessionIssuperadmin", activesession_response->b_activesession_issuperadmin) == NULL) {
    goto fail; //Bool
    }


    // activesession_response->b_activesession_attachment
    if(activesession_response->b_activesession_attachment) {
    if(cJSON_AddBoolToObject(item, "bActivesessionAttachment", activesession_response->b_activesession_attachment) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_response->b_activesession_canafe
    if(activesession_response->b_activesession_canafe) {
    if(cJSON_AddBoolToObject(item, "bActivesessionCanafe", activesession_response->b_activesession_canafe) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_response->b_activesession_financial
    if(activesession_response->b_activesession_financial) {
    if(cJSON_AddBoolToObject(item, "bActivesessionFinancial", activesession_response->b_activesession_financial) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_response->b_activesession_realestatecompleted
    if(activesession_response->b_activesession_realestatecompleted) {
    if(cJSON_AddBoolToObject(item, "bActivesessionRealestatecompleted", activesession_response->b_activesession_realestatecompleted) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_response->e_activesession_ezsign
    if(activesession_response->e_activesession_ezsign != ezmax_api_definition__full_field_e_activesession_ezsign__NULL) {
    cJSON *e_activesession_ezsign_local_JSON = field_e_activesession_ezsign_convertToJSON(activesession_response->e_activesession_ezsign);
    if(e_activesession_ezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionEzsign", e_activesession_ezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_response->e_activesession_ezsignaccess
    if (ezmax_api_definition__full_field_e_activesession_ezsignaccess__NULL == activesession_response->e_activesession_ezsignaccess) {
        goto fail;
    }
    cJSON *e_activesession_ezsignaccess_local_JSON = field_e_activesession_ezsignaccess_convertToJSON(activesession_response->e_activesession_ezsignaccess);
    if(e_activesession_ezsignaccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionEzsignaccess", e_activesession_ezsignaccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->e_activesession_ezsignprepaid
    if(activesession_response->e_activesession_ezsignprepaid != ezmax_api_definition__full_field_e_activesession_ezsignprepaid__NULL) {
    cJSON *e_activesession_ezsignprepaid_local_JSON = field_e_activesession_ezsignprepaid_convertToJSON(activesession_response->e_activesession_ezsignprepaid);
    if(e_activesession_ezsignprepaid_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionEzsignprepaid", e_activesession_ezsignprepaid_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_response->e_activesession_realestateinprogress
    if(activesession_response->e_activesession_realestateinprogress != ezmax_api_definition__full_field_e_activesession_realestateinprogress__NULL) {
    cJSON *e_activesession_realestateinprogress_local_JSON = field_e_activesession_realestateinprogress_convertToJSON(activesession_response->e_activesession_realestateinprogress);
    if(e_activesession_realestateinprogress_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionRealestateinprogress", e_activesession_realestateinprogress_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_response->pks_customer_code
    if (!activesession_response->pks_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksCustomerCode", activesession_response->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // activesession_response->fki_systemconfigurationtype_id
    if (!activesession_response->fki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", activesession_response->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response->fki_signature_id
    if(activesession_response->fki_signature_id) {
    if(cJSON_AddNumberToObject(item, "fkiSignatureID", activesession_response->fki_signature_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_response_t *activesession_response_parseFromJSON(cJSON *activesession_responseJSON){

    activesession_response_t *activesession_response_local_var = NULL;

    // define the local variable for activesession_response->e_activesession_usertype
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype_local_nonprim = 0;

    // define the local variable for activesession_response->e_activesession_origin
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin_local_nonprim = 0;

    // define the local variable for activesession_response->e_activesession_weekdaystart
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart_local_nonprim = 0;

    // define the local variable for activesession_response->e_activesession_ezsign
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign_local_nonprim = 0;

    // define the local variable for activesession_response->e_activesession_ezsignaccess
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess_local_nonprim = 0;

    // define the local variable for activesession_response->e_activesession_ezsignprepaid
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid_local_nonprim = 0;

    // define the local variable for activesession_response->e_activesession_realestateinprogress
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress_local_nonprim = 0;

    // activesession_response->e_activesession_usertype
    cJSON *e_activesession_usertype = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionUsertype");
    if (cJSON_IsNull(e_activesession_usertype)) {
        e_activesession_usertype = NULL;
    }
    if (!e_activesession_usertype) {
        goto end;
    }

    
    e_activesession_usertype_local_nonprim = field_e_activesession_usertype_parseFromJSON(e_activesession_usertype); //custom

    // activesession_response->e_activesession_origin
    cJSON *e_activesession_origin = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionOrigin");
    if (cJSON_IsNull(e_activesession_origin)) {
        e_activesession_origin = NULL;
    }
    if (!e_activesession_origin) {
        goto end;
    }

    
    e_activesession_origin_local_nonprim = field_e_activesession_origin_parseFromJSON(e_activesession_origin); //custom

    // activesession_response->e_activesession_weekdaystart
    cJSON *e_activesession_weekdaystart = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionWeekdaystart");
    if (cJSON_IsNull(e_activesession_weekdaystart)) {
        e_activesession_weekdaystart = NULL;
    }
    if (!e_activesession_weekdaystart) {
        goto end;
    }

    
    e_activesession_weekdaystart_local_nonprim = field_e_activesession_weekdaystart_parseFromJSON(e_activesession_weekdaystart); //custom

    // activesession_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // activesession_response->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "sCompanyNameX");
    if (cJSON_IsNull(s_company_name_x)) {
        s_company_name_x = NULL;
    }
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // activesession_response->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // activesession_response->b_activesession_debug
    cJSON *b_activesession_debug = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionDebug");
    if (cJSON_IsNull(b_activesession_debug)) {
        b_activesession_debug = NULL;
    }
    if (!b_activesession_debug) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_activesession_debug))
    {
    goto end; //Bool
    }

    // activesession_response->b_activesession_issuperadmin
    cJSON *b_activesession_issuperadmin = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionIssuperadmin");
    if (cJSON_IsNull(b_activesession_issuperadmin)) {
        b_activesession_issuperadmin = NULL;
    }
    if (!b_activesession_issuperadmin) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_activesession_issuperadmin))
    {
    goto end; //Bool
    }

    // activesession_response->b_activesession_attachment
    cJSON *b_activesession_attachment = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionAttachment");
    if (cJSON_IsNull(b_activesession_attachment)) {
        b_activesession_attachment = NULL;
    }
    if (b_activesession_attachment) { 
    if(!cJSON_IsBool(b_activesession_attachment))
    {
    goto end; //Bool
    }
    }

    // activesession_response->b_activesession_canafe
    cJSON *b_activesession_canafe = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionCanafe");
    if (cJSON_IsNull(b_activesession_canafe)) {
        b_activesession_canafe = NULL;
    }
    if (b_activesession_canafe) { 
    if(!cJSON_IsBool(b_activesession_canafe))
    {
    goto end; //Bool
    }
    }

    // activesession_response->b_activesession_financial
    cJSON *b_activesession_financial = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionFinancial");
    if (cJSON_IsNull(b_activesession_financial)) {
        b_activesession_financial = NULL;
    }
    if (b_activesession_financial) { 
    if(!cJSON_IsBool(b_activesession_financial))
    {
    goto end; //Bool
    }
    }

    // activesession_response->b_activesession_realestatecompleted
    cJSON *b_activesession_realestatecompleted = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionRealestatecompleted");
    if (cJSON_IsNull(b_activesession_realestatecompleted)) {
        b_activesession_realestatecompleted = NULL;
    }
    if (b_activesession_realestatecompleted) { 
    if(!cJSON_IsBool(b_activesession_realestatecompleted))
    {
    goto end; //Bool
    }
    }

    // activesession_response->e_activesession_ezsign
    cJSON *e_activesession_ezsign = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionEzsign");
    if (cJSON_IsNull(e_activesession_ezsign)) {
        e_activesession_ezsign = NULL;
    }
    if (e_activesession_ezsign) { 
    e_activesession_ezsign_local_nonprim = field_e_activesession_ezsign_parseFromJSON(e_activesession_ezsign); //custom
    }

    // activesession_response->e_activesession_ezsignaccess
    cJSON *e_activesession_ezsignaccess = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionEzsignaccess");
    if (cJSON_IsNull(e_activesession_ezsignaccess)) {
        e_activesession_ezsignaccess = NULL;
    }
    if (!e_activesession_ezsignaccess) {
        goto end;
    }

    
    e_activesession_ezsignaccess_local_nonprim = field_e_activesession_ezsignaccess_parseFromJSON(e_activesession_ezsignaccess); //custom

    // activesession_response->e_activesession_ezsignprepaid
    cJSON *e_activesession_ezsignprepaid = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionEzsignprepaid");
    if (cJSON_IsNull(e_activesession_ezsignprepaid)) {
        e_activesession_ezsignprepaid = NULL;
    }
    if (e_activesession_ezsignprepaid) { 
    e_activesession_ezsignprepaid_local_nonprim = field_e_activesession_ezsignprepaid_parseFromJSON(e_activesession_ezsignprepaid); //custom
    }

    // activesession_response->e_activesession_realestateinprogress
    cJSON *e_activesession_realestateinprogress = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionRealestateinprogress");
    if (cJSON_IsNull(e_activesession_realestateinprogress)) {
        e_activesession_realestateinprogress = NULL;
    }
    if (e_activesession_realestateinprogress) { 
    e_activesession_realestateinprogress_local_nonprim = field_e_activesession_realestateinprogress_parseFromJSON(e_activesession_realestateinprogress); //custom
    }

    // activesession_response->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "pksCustomerCode");
    if (cJSON_IsNull(pks_customer_code)) {
        pks_customer_code = NULL;
    }
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // activesession_response->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "fkiSystemconfigurationtypeID");
    if (cJSON_IsNull(fki_systemconfigurationtype_id)) {
        fki_systemconfigurationtype_id = NULL;
    }
    if (!fki_systemconfigurationtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }

    // activesession_response->fki_signature_id
    cJSON *fki_signature_id = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "fkiSignatureID");
    if (cJSON_IsNull(fki_signature_id)) {
        fki_signature_id = NULL;
    }
    if (fki_signature_id) { 
    if(!cJSON_IsNumber(fki_signature_id))
    {
    goto end; //Numeric
    }
    }


    activesession_response_local_var = activesession_response_create_internal (
        e_activesession_usertype_local_nonprim,
        e_activesession_origin_local_nonprim,
        e_activesession_weekdaystart_local_nonprim,
        fki_language_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        b_activesession_debug->valueint,
        b_activesession_issuperadmin->valueint,
        b_activesession_attachment ? b_activesession_attachment->valueint : 0,
        b_activesession_canafe ? b_activesession_canafe->valueint : 0,
        b_activesession_financial ? b_activesession_financial->valueint : 0,
        b_activesession_realestatecompleted ? b_activesession_realestatecompleted->valueint : 0,
        e_activesession_ezsign ? e_activesession_ezsign_local_nonprim : 0,
        e_activesession_ezsignaccess_local_nonprim,
        e_activesession_ezsignprepaid ? e_activesession_ezsignprepaid_local_nonprim : 0,
        e_activesession_realestateinprogress ? e_activesession_realestateinprogress_local_nonprim : 0,
        strdup(pks_customer_code->valuestring),
        fki_systemconfigurationtype_id->valuedouble,
        fki_signature_id ? fki_signature_id->valuedouble : 0
        );

    return activesession_response_local_var;
end:
    if (e_activesession_usertype_local_nonprim) {
        e_activesession_usertype_local_nonprim = 0;
    }
    if (e_activesession_origin_local_nonprim) {
        e_activesession_origin_local_nonprim = 0;
    }
    if (e_activesession_weekdaystart_local_nonprim) {
        e_activesession_weekdaystart_local_nonprim = 0;
    }
    if (e_activesession_ezsign_local_nonprim) {
        e_activesession_ezsign_local_nonprim = 0;
    }
    if (e_activesession_ezsignaccess_local_nonprim) {
        e_activesession_ezsignaccess_local_nonprim = 0;
    }
    if (e_activesession_ezsignprepaid_local_nonprim) {
        e_activesession_ezsignprepaid_local_nonprim = 0;
    }
    if (e_activesession_realestateinprogress_local_nonprim) {
        e_activesession_realestateinprogress_local_nonprim = 0;
    }
    return NULL;

}
