#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_get_current_v1_response_m_payload.h"



static activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_create_internal(
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
    int fki_signature_id,
    int fki_ezsignuser_id,
    int b_systemconfiguration_ezsignpaidbyoffice,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess,
    ezmax_api_definition__full_field_e_user_ezsignprepaid__e e_user_ezsignprepaid,
    int b_user_ezsigntrial,
    char *dt_user_ezsignprepaidexpiration,
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname
    ) {
    activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_local_var = malloc(sizeof(activesession_get_current_v1_response_m_payload_t));
    if (!activesession_get_current_v1_response_m_payload_local_var) {
        return NULL;
    }
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_usertype = e_activesession_usertype;
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_origin = e_activesession_origin;
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_weekdaystart = e_activesession_weekdaystart;
    activesession_get_current_v1_response_m_payload_local_var->fki_language_id = fki_language_id;
    activesession_get_current_v1_response_m_payload_local_var->s_company_name_x = s_company_name_x;
    activesession_get_current_v1_response_m_payload_local_var->s_department_name_x = s_department_name_x;
    activesession_get_current_v1_response_m_payload_local_var->b_activesession_debug = b_activesession_debug;
    activesession_get_current_v1_response_m_payload_local_var->b_activesession_issuperadmin = b_activesession_issuperadmin;
    activesession_get_current_v1_response_m_payload_local_var->b_activesession_attachment = b_activesession_attachment;
    activesession_get_current_v1_response_m_payload_local_var->b_activesession_canafe = b_activesession_canafe;
    activesession_get_current_v1_response_m_payload_local_var->b_activesession_financial = b_activesession_financial;
    activesession_get_current_v1_response_m_payload_local_var->b_activesession_realestatecompleted = b_activesession_realestatecompleted;
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_ezsign = e_activesession_ezsign;
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_ezsignaccess = e_activesession_ezsignaccess;
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_ezsignprepaid = e_activesession_ezsignprepaid;
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_realestateinprogress = e_activesession_realestateinprogress;
    activesession_get_current_v1_response_m_payload_local_var->pks_customer_code = pks_customer_code;
    activesession_get_current_v1_response_m_payload_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    activesession_get_current_v1_response_m_payload_local_var->fki_signature_id = fki_signature_id;
    activesession_get_current_v1_response_m_payload_local_var->fki_ezsignuser_id = fki_ezsignuser_id;
    activesession_get_current_v1_response_m_payload_local_var->b_systemconfiguration_ezsignpaidbyoffice = b_systemconfiguration_ezsignpaidbyoffice;
    activesession_get_current_v1_response_m_payload_local_var->e_systemconfiguration_ezsignofficeplan = e_systemconfiguration_ezsignofficeplan;
    activesession_get_current_v1_response_m_payload_local_var->e_user_ezsignaccess = e_user_ezsignaccess;
    activesession_get_current_v1_response_m_payload_local_var->e_user_ezsignprepaid = e_user_ezsignprepaid;
    activesession_get_current_v1_response_m_payload_local_var->b_user_ezsigntrial = b_user_ezsigntrial;
    activesession_get_current_v1_response_m_payload_local_var->dt_user_ezsignprepaidexpiration = dt_user_ezsignprepaidexpiration;
    activesession_get_current_v1_response_m_payload_local_var->a_pki_permission_id = a_pki_permission_id;
    activesession_get_current_v1_response_m_payload_local_var->obj_user_real = obj_user_real;
    activesession_get_current_v1_response_m_payload_local_var->obj_user_cloned = obj_user_cloned;
    activesession_get_current_v1_response_m_payload_local_var->obj_apikey = obj_apikey;
    activesession_get_current_v1_response_m_payload_local_var->a_e_module_internalname = a_e_module_internalname;

    activesession_get_current_v1_response_m_payload_local_var->_library_owned = 1;
    return activesession_get_current_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_create(
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
    int fki_signature_id,
    int fki_ezsignuser_id,
    int b_systemconfiguration_ezsignpaidbyoffice,
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan,
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess,
    ezmax_api_definition__full_field_e_user_ezsignprepaid__e e_user_ezsignprepaid,
    int b_user_ezsigntrial,
    char *dt_user_ezsignprepaidexpiration,
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname
    ) {
    return activesession_get_current_v1_response_m_payload_create_internal (
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
        fki_signature_id,
        fki_ezsignuser_id,
        b_systemconfiguration_ezsignpaidbyoffice,
        e_systemconfiguration_ezsignofficeplan,
        e_user_ezsignaccess,
        e_user_ezsignprepaid,
        b_user_ezsigntrial,
        dt_user_ezsignprepaidexpiration,
        a_pki_permission_id,
        obj_user_real,
        obj_user_cloned,
        obj_apikey,
        a_e_module_internalname
        );
}

void activesession_get_current_v1_response_m_payload_free(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload) {
    if(NULL == activesession_get_current_v1_response_m_payload){
        return ;
    }
    if(activesession_get_current_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_get_current_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_get_current_v1_response_m_payload->s_company_name_x) {
        free(activesession_get_current_v1_response_m_payload->s_company_name_x);
        activesession_get_current_v1_response_m_payload->s_company_name_x = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->s_department_name_x) {
        free(activesession_get_current_v1_response_m_payload->s_department_name_x);
        activesession_get_current_v1_response_m_payload->s_department_name_x = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->pks_customer_code) {
        free(activesession_get_current_v1_response_m_payload->pks_customer_code);
        activesession_get_current_v1_response_m_payload->pks_customer_code = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->dt_user_ezsignprepaidexpiration) {
        free(activesession_get_current_v1_response_m_payload->dt_user_ezsignprepaidexpiration);
        activesession_get_current_v1_response_m_payload->dt_user_ezsignprepaidexpiration = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->a_pki_permission_id) {
        list_ForEach(listEntry, activesession_get_current_v1_response_m_payload->a_pki_permission_id) {
            free(listEntry->data);
        }
        list_freeList(activesession_get_current_v1_response_m_payload->a_pki_permission_id);
        activesession_get_current_v1_response_m_payload->a_pki_permission_id = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->obj_user_real) {
        activesession_response_compound_user_free(activesession_get_current_v1_response_m_payload->obj_user_real);
        activesession_get_current_v1_response_m_payload->obj_user_real = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->obj_user_cloned) {
        activesession_response_compound_user_free(activesession_get_current_v1_response_m_payload->obj_user_cloned);
        activesession_get_current_v1_response_m_payload->obj_user_cloned = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->obj_apikey) {
        activesession_response_compound_apikey_free(activesession_get_current_v1_response_m_payload->obj_apikey);
        activesession_get_current_v1_response_m_payload->obj_apikey = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->a_e_module_internalname) {
        list_ForEach(listEntry, activesession_get_current_v1_response_m_payload->a_e_module_internalname) {
            free(listEntry->data);
        }
        list_freeList(activesession_get_current_v1_response_m_payload->a_e_module_internalname);
        activesession_get_current_v1_response_m_payload->a_e_module_internalname = NULL;
    }
    free(activesession_get_current_v1_response_m_payload);
}

cJSON *activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // activesession_get_current_v1_response_m_payload->e_activesession_usertype
    if (ezmax_api_definition__full_field_e_activesession_usertype__NULL == activesession_get_current_v1_response_m_payload->e_activesession_usertype) {
        goto fail;
    }
    cJSON *e_activesession_usertype_local_JSON = field_e_activesession_usertype_convertToJSON(activesession_get_current_v1_response_m_payload->e_activesession_usertype);
    if(e_activesession_usertype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionUsertype", e_activesession_usertype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_get_current_v1_response_m_payload->e_activesession_origin
    if (ezmax_api_definition__full_field_e_activesession_origin__NULL == activesession_get_current_v1_response_m_payload->e_activesession_origin) {
        goto fail;
    }
    cJSON *e_activesession_origin_local_JSON = field_e_activesession_origin_convertToJSON(activesession_get_current_v1_response_m_payload->e_activesession_origin);
    if(e_activesession_origin_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionOrigin", e_activesession_origin_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_get_current_v1_response_m_payload->e_activesession_weekdaystart
    if (ezmax_api_definition__full_field_e_activesession_weekdaystart__NULL == activesession_get_current_v1_response_m_payload->e_activesession_weekdaystart) {
        goto fail;
    }
    cJSON *e_activesession_weekdaystart_local_JSON = field_e_activesession_weekdaystart_convertToJSON(activesession_get_current_v1_response_m_payload->e_activesession_weekdaystart);
    if(e_activesession_weekdaystart_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionWeekdaystart", e_activesession_weekdaystart_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_get_current_v1_response_m_payload->fki_language_id
    if (!activesession_get_current_v1_response_m_payload->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", activesession_get_current_v1_response_m_payload->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_get_current_v1_response_m_payload->s_company_name_x
    if (!activesession_get_current_v1_response_m_payload->s_company_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCompanyNameX", activesession_get_current_v1_response_m_payload->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_get_current_v1_response_m_payload->s_department_name_x
    if (!activesession_get_current_v1_response_m_payload->s_department_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", activesession_get_current_v1_response_m_payload->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_get_current_v1_response_m_payload->b_activesession_debug
    if (!activesession_get_current_v1_response_m_payload->b_activesession_debug) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActivesessionDebug", activesession_get_current_v1_response_m_payload->b_activesession_debug) == NULL) {
    goto fail; //Bool
    }


    // activesession_get_current_v1_response_m_payload->b_activesession_issuperadmin
    if (!activesession_get_current_v1_response_m_payload->b_activesession_issuperadmin) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActivesessionIssuperadmin", activesession_get_current_v1_response_m_payload->b_activesession_issuperadmin) == NULL) {
    goto fail; //Bool
    }


    // activesession_get_current_v1_response_m_payload->b_activesession_attachment
    if(activesession_get_current_v1_response_m_payload->b_activesession_attachment) {
    if(cJSON_AddBoolToObject(item, "bActivesessionAttachment", activesession_get_current_v1_response_m_payload->b_activesession_attachment) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_get_current_v1_response_m_payload->b_activesession_canafe
    if(activesession_get_current_v1_response_m_payload->b_activesession_canafe) {
    if(cJSON_AddBoolToObject(item, "bActivesessionCanafe", activesession_get_current_v1_response_m_payload->b_activesession_canafe) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_get_current_v1_response_m_payload->b_activesession_financial
    if(activesession_get_current_v1_response_m_payload->b_activesession_financial) {
    if(cJSON_AddBoolToObject(item, "bActivesessionFinancial", activesession_get_current_v1_response_m_payload->b_activesession_financial) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_get_current_v1_response_m_payload->b_activesession_realestatecompleted
    if(activesession_get_current_v1_response_m_payload->b_activesession_realestatecompleted) {
    if(cJSON_AddBoolToObject(item, "bActivesessionRealestatecompleted", activesession_get_current_v1_response_m_payload->b_activesession_realestatecompleted) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_get_current_v1_response_m_payload->e_activesession_ezsign
    if(activesession_get_current_v1_response_m_payload->e_activesession_ezsign != ezmax_api_definition__full_field_e_activesession_ezsign__NULL) {
    cJSON *e_activesession_ezsign_local_JSON = field_e_activesession_ezsign_convertToJSON(activesession_get_current_v1_response_m_payload->e_activesession_ezsign);
    if(e_activesession_ezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionEzsign", e_activesession_ezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->e_activesession_ezsignaccess
    if (ezmax_api_definition__full_field_e_activesession_ezsignaccess__NULL == activesession_get_current_v1_response_m_payload->e_activesession_ezsignaccess) {
        goto fail;
    }
    cJSON *e_activesession_ezsignaccess_local_JSON = field_e_activesession_ezsignaccess_convertToJSON(activesession_get_current_v1_response_m_payload->e_activesession_ezsignaccess);
    if(e_activesession_ezsignaccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionEzsignaccess", e_activesession_ezsignaccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_get_current_v1_response_m_payload->e_activesession_ezsignprepaid
    if(activesession_get_current_v1_response_m_payload->e_activesession_ezsignprepaid != ezmax_api_definition__full_field_e_activesession_ezsignprepaid__NULL) {
    cJSON *e_activesession_ezsignprepaid_local_JSON = field_e_activesession_ezsignprepaid_convertToJSON(activesession_get_current_v1_response_m_payload->e_activesession_ezsignprepaid);
    if(e_activesession_ezsignprepaid_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionEzsignprepaid", e_activesession_ezsignprepaid_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->e_activesession_realestateinprogress
    if(activesession_get_current_v1_response_m_payload->e_activesession_realestateinprogress != ezmax_api_definition__full_field_e_activesession_realestateinprogress__NULL) {
    cJSON *e_activesession_realestateinprogress_local_JSON = field_e_activesession_realestateinprogress_convertToJSON(activesession_get_current_v1_response_m_payload->e_activesession_realestateinprogress);
    if(e_activesession_realestateinprogress_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionRealestateinprogress", e_activesession_realestateinprogress_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->pks_customer_code
    if (!activesession_get_current_v1_response_m_payload->pks_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksCustomerCode", activesession_get_current_v1_response_m_payload->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // activesession_get_current_v1_response_m_payload->fki_systemconfigurationtype_id
    if (!activesession_get_current_v1_response_m_payload->fki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", activesession_get_current_v1_response_m_payload->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_get_current_v1_response_m_payload->fki_signature_id
    if(activesession_get_current_v1_response_m_payload->fki_signature_id) {
    if(cJSON_AddNumberToObject(item, "fkiSignatureID", activesession_get_current_v1_response_m_payload->fki_signature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // activesession_get_current_v1_response_m_payload->fki_ezsignuser_id
    if(activesession_get_current_v1_response_m_payload->fki_ezsignuser_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignuserID", activesession_get_current_v1_response_m_payload->fki_ezsignuser_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // activesession_get_current_v1_response_m_payload->b_systemconfiguration_ezsignpaidbyoffice
    if(activesession_get_current_v1_response_m_payload->b_systemconfiguration_ezsignpaidbyoffice) {
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationEzsignpaidbyoffice", activesession_get_current_v1_response_m_payload->b_systemconfiguration_ezsignpaidbyoffice) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_get_current_v1_response_m_payload->e_systemconfiguration_ezsignofficeplan
    if(activesession_get_current_v1_response_m_payload->e_systemconfiguration_ezsignofficeplan != ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__NULL) {
    cJSON *e_systemconfiguration_ezsignofficeplan_local_JSON = field_e_systemconfiguration_ezsignofficeplan_convertToJSON(activesession_get_current_v1_response_m_payload->e_systemconfiguration_ezsignofficeplan);
    if(e_systemconfiguration_ezsignofficeplan_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSystemconfigurationEzsignofficeplan", e_systemconfiguration_ezsignofficeplan_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->e_user_ezsignaccess
    if (ezmax_api_definition__full_field_e_user_ezsignaccess__NULL == activesession_get_current_v1_response_m_payload->e_user_ezsignaccess) {
        goto fail;
    }
    cJSON *e_user_ezsignaccess_local_JSON = field_e_user_ezsignaccess_convertToJSON(activesession_get_current_v1_response_m_payload->e_user_ezsignaccess);
    if(e_user_ezsignaccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserEzsignaccess", e_user_ezsignaccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_get_current_v1_response_m_payload->e_user_ezsignprepaid
    if(activesession_get_current_v1_response_m_payload->e_user_ezsignprepaid != ezmax_api_definition__full_field_e_user_ezsignprepaid__NULL) {
    cJSON *e_user_ezsignprepaid_local_JSON = field_e_user_ezsignprepaid_convertToJSON(activesession_get_current_v1_response_m_payload->e_user_ezsignprepaid);
    if(e_user_ezsignprepaid_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserEzsignprepaid", e_user_ezsignprepaid_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->b_user_ezsigntrial
    if(activesession_get_current_v1_response_m_payload->b_user_ezsigntrial) {
    if(cJSON_AddBoolToObject(item, "bUserEzsigntrial", activesession_get_current_v1_response_m_payload->b_user_ezsigntrial) == NULL) {
    goto fail; //Bool
    }
    }


    // activesession_get_current_v1_response_m_payload->dt_user_ezsignprepaidexpiration
    if(activesession_get_current_v1_response_m_payload->dt_user_ezsignprepaidexpiration) {
    if(cJSON_AddStringToObject(item, "dtUserEzsignprepaidexpiration", activesession_get_current_v1_response_m_payload->dt_user_ezsignprepaidexpiration) == NULL) {
    goto fail; //String
    }
    }


    // activesession_get_current_v1_response_m_payload->a_pki_permission_id
    if (!activesession_get_current_v1_response_m_payload->a_pki_permission_id) {
        goto fail;
    }
    cJSON *a_pki_permission_id = cJSON_AddArrayToObject(item, "a_pkiPermissionID");
    if(a_pki_permission_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_permission_idListEntry;
    list_ForEach(a_pki_permission_idListEntry, activesession_get_current_v1_response_m_payload->a_pki_permission_id) {
    if(cJSON_AddNumberToObject(a_pki_permission_id, "", *(double *)a_pki_permission_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->obj_user_real
    if (!activesession_get_current_v1_response_m_payload->obj_user_real) {
        goto fail;
    }
    cJSON *obj_user_real_local_JSON = activesession_response_compound_user_convertToJSON(activesession_get_current_v1_response_m_payload->obj_user_real);
    if(obj_user_real_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserReal", obj_user_real_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // activesession_get_current_v1_response_m_payload->obj_user_cloned
    if(activesession_get_current_v1_response_m_payload->obj_user_cloned) {
    cJSON *obj_user_cloned_local_JSON = activesession_response_compound_user_convertToJSON(activesession_get_current_v1_response_m_payload->obj_user_cloned);
    if(obj_user_cloned_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserCloned", obj_user_cloned_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->obj_apikey
    if(activesession_get_current_v1_response_m_payload->obj_apikey) {
    cJSON *obj_apikey_local_JSON = activesession_response_compound_apikey_convertToJSON(activesession_get_current_v1_response_m_payload->obj_apikey);
    if(obj_apikey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikey", obj_apikey_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->a_e_module_internalname
    if (!activesession_get_current_v1_response_m_payload->a_e_module_internalname) {
        goto fail;
    }
    cJSON *a_e_module_internalname = cJSON_AddArrayToObject(item, "a_eModuleInternalname");
    if(a_e_module_internalname == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_e_module_internalnameListEntry;
    list_ForEach(a_e_module_internalnameListEntry, activesession_get_current_v1_response_m_payload->a_e_module_internalname) {
    if(cJSON_AddStringToObject(a_e_module_internalname, "", a_e_module_internalnameListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_parseFromJSON(cJSON *activesession_get_current_v1_response_m_payloadJSON){

    activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_local_var = NULL;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_activesession_usertype
    ezmax_api_definition__full_field_e_activesession_usertype__e e_activesession_usertype_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_activesession_origin
    ezmax_api_definition__full_field_e_activesession_origin__e e_activesession_origin_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_activesession_weekdaystart
    ezmax_api_definition__full_field_e_activesession_weekdaystart__e e_activesession_weekdaystart_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_activesession_ezsign
    ezmax_api_definition__full_field_e_activesession_ezsign__e e_activesession_ezsign_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_activesession_ezsignaccess
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e e_activesession_ezsignaccess_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_activesession_ezsignprepaid
    ezmax_api_definition__full_field_e_activesession_ezsignprepaid__e e_activesession_ezsignprepaid_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_activesession_realestateinprogress
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e e_activesession_realestateinprogress_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_systemconfiguration_ezsignofficeplan
    ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e e_systemconfiguration_ezsignofficeplan_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_user_ezsignaccess
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess_local_nonprim = 0;

    // define the local variable for activesession_get_current_v1_response_m_payload->e_user_ezsignprepaid
    ezmax_api_definition__full_field_e_user_ezsignprepaid__e e_user_ezsignprepaid_local_nonprim = 0;

    // define the local list for activesession_get_current_v1_response_m_payload->a_pki_permission_id
    list_t *a_pki_permission_idList = NULL;

    // define the local variable for activesession_get_current_v1_response_m_payload->obj_user_real
    activesession_response_compound_user_t *obj_user_real_local_nonprim = NULL;

    // define the local variable for activesession_get_current_v1_response_m_payload->obj_user_cloned
    activesession_response_compound_user_t *obj_user_cloned_local_nonprim = NULL;

    // define the local variable for activesession_get_current_v1_response_m_payload->obj_apikey
    activesession_response_compound_apikey_t *obj_apikey_local_nonprim = NULL;

    // define the local list for activesession_get_current_v1_response_m_payload->a_e_module_internalname
    list_t *a_e_module_internalnameList = NULL;

    // activesession_get_current_v1_response_m_payload->e_activesession_usertype
    cJSON *e_activesession_usertype = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionUsertype");
    if (cJSON_IsNull(e_activesession_usertype)) {
        e_activesession_usertype = NULL;
    }
    if (!e_activesession_usertype) {
        goto end;
    }

    
    e_activesession_usertype_local_nonprim = field_e_activesession_usertype_parseFromJSON(e_activesession_usertype); //custom

    // activesession_get_current_v1_response_m_payload->e_activesession_origin
    cJSON *e_activesession_origin = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionOrigin");
    if (cJSON_IsNull(e_activesession_origin)) {
        e_activesession_origin = NULL;
    }
    if (!e_activesession_origin) {
        goto end;
    }

    
    e_activesession_origin_local_nonprim = field_e_activesession_origin_parseFromJSON(e_activesession_origin); //custom

    // activesession_get_current_v1_response_m_payload->e_activesession_weekdaystart
    cJSON *e_activesession_weekdaystart = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionWeekdaystart");
    if (cJSON_IsNull(e_activesession_weekdaystart)) {
        e_activesession_weekdaystart = NULL;
    }
    if (!e_activesession_weekdaystart) {
        goto end;
    }

    
    e_activesession_weekdaystart_local_nonprim = field_e_activesession_weekdaystart_parseFromJSON(e_activesession_weekdaystart); //custom

    // activesession_get_current_v1_response_m_payload->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "fkiLanguageID");
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

    // activesession_get_current_v1_response_m_payload->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "sCompanyNameX");
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

    // activesession_get_current_v1_response_m_payload->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "sDepartmentNameX");
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

    // activesession_get_current_v1_response_m_payload->b_activesession_debug
    cJSON *b_activesession_debug = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bActivesessionDebug");
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

    // activesession_get_current_v1_response_m_payload->b_activesession_issuperadmin
    cJSON *b_activesession_issuperadmin = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bActivesessionIssuperadmin");
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

    // activesession_get_current_v1_response_m_payload->b_activesession_attachment
    cJSON *b_activesession_attachment = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bActivesessionAttachment");
    if (cJSON_IsNull(b_activesession_attachment)) {
        b_activesession_attachment = NULL;
    }
    if (b_activesession_attachment) { 
    if(!cJSON_IsBool(b_activesession_attachment))
    {
    goto end; //Bool
    }
    }

    // activesession_get_current_v1_response_m_payload->b_activesession_canafe
    cJSON *b_activesession_canafe = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bActivesessionCanafe");
    if (cJSON_IsNull(b_activesession_canafe)) {
        b_activesession_canafe = NULL;
    }
    if (b_activesession_canafe) { 
    if(!cJSON_IsBool(b_activesession_canafe))
    {
    goto end; //Bool
    }
    }

    // activesession_get_current_v1_response_m_payload->b_activesession_financial
    cJSON *b_activesession_financial = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bActivesessionFinancial");
    if (cJSON_IsNull(b_activesession_financial)) {
        b_activesession_financial = NULL;
    }
    if (b_activesession_financial) { 
    if(!cJSON_IsBool(b_activesession_financial))
    {
    goto end; //Bool
    }
    }

    // activesession_get_current_v1_response_m_payload->b_activesession_realestatecompleted
    cJSON *b_activesession_realestatecompleted = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bActivesessionRealestatecompleted");
    if (cJSON_IsNull(b_activesession_realestatecompleted)) {
        b_activesession_realestatecompleted = NULL;
    }
    if (b_activesession_realestatecompleted) { 
    if(!cJSON_IsBool(b_activesession_realestatecompleted))
    {
    goto end; //Bool
    }
    }

    // activesession_get_current_v1_response_m_payload->e_activesession_ezsign
    cJSON *e_activesession_ezsign = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionEzsign");
    if (cJSON_IsNull(e_activesession_ezsign)) {
        e_activesession_ezsign = NULL;
    }
    if (e_activesession_ezsign) { 
    e_activesession_ezsign_local_nonprim = field_e_activesession_ezsign_parseFromJSON(e_activesession_ezsign); //custom
    }

    // activesession_get_current_v1_response_m_payload->e_activesession_ezsignaccess
    cJSON *e_activesession_ezsignaccess = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionEzsignaccess");
    if (cJSON_IsNull(e_activesession_ezsignaccess)) {
        e_activesession_ezsignaccess = NULL;
    }
    if (!e_activesession_ezsignaccess) {
        goto end;
    }

    
    e_activesession_ezsignaccess_local_nonprim = field_e_activesession_ezsignaccess_parseFromJSON(e_activesession_ezsignaccess); //custom

    // activesession_get_current_v1_response_m_payload->e_activesession_ezsignprepaid
    cJSON *e_activesession_ezsignprepaid = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionEzsignprepaid");
    if (cJSON_IsNull(e_activesession_ezsignprepaid)) {
        e_activesession_ezsignprepaid = NULL;
    }
    if (e_activesession_ezsignprepaid) { 
    e_activesession_ezsignprepaid_local_nonprim = field_e_activesession_ezsignprepaid_parseFromJSON(e_activesession_ezsignprepaid); //custom
    }

    // activesession_get_current_v1_response_m_payload->e_activesession_realestateinprogress
    cJSON *e_activesession_realestateinprogress = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionRealestateinprogress");
    if (cJSON_IsNull(e_activesession_realestateinprogress)) {
        e_activesession_realestateinprogress = NULL;
    }
    if (e_activesession_realestateinprogress) { 
    e_activesession_realestateinprogress_local_nonprim = field_e_activesession_realestateinprogress_parseFromJSON(e_activesession_realestateinprogress); //custom
    }

    // activesession_get_current_v1_response_m_payload->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "pksCustomerCode");
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

    // activesession_get_current_v1_response_m_payload->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "fkiSystemconfigurationtypeID");
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

    // activesession_get_current_v1_response_m_payload->fki_signature_id
    cJSON *fki_signature_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "fkiSignatureID");
    if (cJSON_IsNull(fki_signature_id)) {
        fki_signature_id = NULL;
    }
    if (fki_signature_id) { 
    if(!cJSON_IsNumber(fki_signature_id))
    {
    goto end; //Numeric
    }
    }

    // activesession_get_current_v1_response_m_payload->fki_ezsignuser_id
    cJSON *fki_ezsignuser_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "fkiEzsignuserID");
    if (cJSON_IsNull(fki_ezsignuser_id)) {
        fki_ezsignuser_id = NULL;
    }
    if (fki_ezsignuser_id) { 
    if(!cJSON_IsNumber(fki_ezsignuser_id))
    {
    goto end; //Numeric
    }
    }

    // activesession_get_current_v1_response_m_payload->b_systemconfiguration_ezsignpaidbyoffice
    cJSON *b_systemconfiguration_ezsignpaidbyoffice = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bSystemconfigurationEzsignpaidbyoffice");
    if (cJSON_IsNull(b_systemconfiguration_ezsignpaidbyoffice)) {
        b_systemconfiguration_ezsignpaidbyoffice = NULL;
    }
    if (b_systemconfiguration_ezsignpaidbyoffice) { 
    if(!cJSON_IsBool(b_systemconfiguration_ezsignpaidbyoffice))
    {
    goto end; //Bool
    }
    }

    // activesession_get_current_v1_response_m_payload->e_systemconfiguration_ezsignofficeplan
    cJSON *e_systemconfiguration_ezsignofficeplan = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eSystemconfigurationEzsignofficeplan");
    if (cJSON_IsNull(e_systemconfiguration_ezsignofficeplan)) {
        e_systemconfiguration_ezsignofficeplan = NULL;
    }
    if (e_systemconfiguration_ezsignofficeplan) { 
    e_systemconfiguration_ezsignofficeplan_local_nonprim = field_e_systemconfiguration_ezsignofficeplan_parseFromJSON(e_systemconfiguration_ezsignofficeplan); //custom
    }

    // activesession_get_current_v1_response_m_payload->e_user_ezsignaccess
    cJSON *e_user_ezsignaccess = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eUserEzsignaccess");
    if (cJSON_IsNull(e_user_ezsignaccess)) {
        e_user_ezsignaccess = NULL;
    }
    if (!e_user_ezsignaccess) {
        goto end;
    }

    
    e_user_ezsignaccess_local_nonprim = field_e_user_ezsignaccess_parseFromJSON(e_user_ezsignaccess); //custom

    // activesession_get_current_v1_response_m_payload->e_user_ezsignprepaid
    cJSON *e_user_ezsignprepaid = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eUserEzsignprepaid");
    if (cJSON_IsNull(e_user_ezsignprepaid)) {
        e_user_ezsignprepaid = NULL;
    }
    if (e_user_ezsignprepaid) { 
    e_user_ezsignprepaid_local_nonprim = field_e_user_ezsignprepaid_parseFromJSON(e_user_ezsignprepaid); //custom
    }

    // activesession_get_current_v1_response_m_payload->b_user_ezsigntrial
    cJSON *b_user_ezsigntrial = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "bUserEzsigntrial");
    if (cJSON_IsNull(b_user_ezsigntrial)) {
        b_user_ezsigntrial = NULL;
    }
    if (b_user_ezsigntrial) { 
    if(!cJSON_IsBool(b_user_ezsigntrial))
    {
    goto end; //Bool
    }
    }

    // activesession_get_current_v1_response_m_payload->dt_user_ezsignprepaidexpiration
    cJSON *dt_user_ezsignprepaidexpiration = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "dtUserEzsignprepaidexpiration");
    if (cJSON_IsNull(dt_user_ezsignprepaidexpiration)) {
        dt_user_ezsignprepaidexpiration = NULL;
    }
    if (dt_user_ezsignprepaidexpiration) { 
    if(!cJSON_IsString(dt_user_ezsignprepaidexpiration) && !cJSON_IsNull(dt_user_ezsignprepaidexpiration))
    {
    goto end; //String
    }
    }

    // activesession_get_current_v1_response_m_payload->a_pki_permission_id
    cJSON *a_pki_permission_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "a_pkiPermissionID");
    if (cJSON_IsNull(a_pki_permission_id)) {
        a_pki_permission_id = NULL;
    }
    if (!a_pki_permission_id) {
        goto end;
    }

    
    cJSON *a_pki_permission_id_local = NULL;
    if(!cJSON_IsArray(a_pki_permission_id)) {
        goto end;//primitive container
    }
    a_pki_permission_idList = list_createList();

    cJSON_ArrayForEach(a_pki_permission_id_local, a_pki_permission_id)
    {
        if(!cJSON_IsNumber(a_pki_permission_id_local))
        {
            goto end;
        }
        double *a_pki_permission_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_permission_id_local_value)
        {
            goto end;
        }
        *a_pki_permission_id_local_value = a_pki_permission_id_local->valuedouble;
        list_addElement(a_pki_permission_idList , a_pki_permission_id_local_value);
    }

    // activesession_get_current_v1_response_m_payload->obj_user_real
    cJSON *obj_user_real = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "objUserReal");
    if (cJSON_IsNull(obj_user_real)) {
        obj_user_real = NULL;
    }
    if (!obj_user_real) {
        goto end;
    }

    
    obj_user_real_local_nonprim = activesession_response_compound_user_parseFromJSON(obj_user_real); //nonprimitive

    // activesession_get_current_v1_response_m_payload->obj_user_cloned
    cJSON *obj_user_cloned = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "objUserCloned");
    if (cJSON_IsNull(obj_user_cloned)) {
        obj_user_cloned = NULL;
    }
    if (obj_user_cloned) { 
    obj_user_cloned_local_nonprim = activesession_response_compound_user_parseFromJSON(obj_user_cloned); //nonprimitive
    }

    // activesession_get_current_v1_response_m_payload->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "objApikey");
    if (cJSON_IsNull(obj_apikey)) {
        obj_apikey = NULL;
    }
    if (obj_apikey) { 
    obj_apikey_local_nonprim = activesession_response_compound_apikey_parseFromJSON(obj_apikey); //nonprimitive
    }

    // activesession_get_current_v1_response_m_payload->a_e_module_internalname
    cJSON *a_e_module_internalname = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "a_eModuleInternalname");
    if (cJSON_IsNull(a_e_module_internalname)) {
        a_e_module_internalname = NULL;
    }
    if (!a_e_module_internalname) {
        goto end;
    }

    
    cJSON *a_e_module_internalname_local = NULL;
    if(!cJSON_IsArray(a_e_module_internalname)) {
        goto end;//primitive container
    }
    a_e_module_internalnameList = list_createList();

    cJSON_ArrayForEach(a_e_module_internalname_local, a_e_module_internalname)
    {
        if(!cJSON_IsString(a_e_module_internalname_local))
        {
            goto end;
        }
        list_addElement(a_e_module_internalnameList , strdup(a_e_module_internalname_local->valuestring));
    }


    activesession_get_current_v1_response_m_payload_local_var = activesession_get_current_v1_response_m_payload_create_internal (
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
        fki_signature_id ? fki_signature_id->valuedouble : 0,
        fki_ezsignuser_id ? fki_ezsignuser_id->valuedouble : 0,
        b_systemconfiguration_ezsignpaidbyoffice ? b_systemconfiguration_ezsignpaidbyoffice->valueint : 0,
        e_systemconfiguration_ezsignofficeplan ? e_systemconfiguration_ezsignofficeplan_local_nonprim : 0,
        e_user_ezsignaccess_local_nonprim,
        e_user_ezsignprepaid ? e_user_ezsignprepaid_local_nonprim : 0,
        b_user_ezsigntrial ? b_user_ezsigntrial->valueint : 0,
        dt_user_ezsignprepaidexpiration && !cJSON_IsNull(dt_user_ezsignprepaidexpiration) ? strdup(dt_user_ezsignprepaidexpiration->valuestring) : NULL,
        a_pki_permission_idList,
        obj_user_real_local_nonprim,
        obj_user_cloned ? obj_user_cloned_local_nonprim : NULL,
        obj_apikey ? obj_apikey_local_nonprim : NULL,
        a_e_module_internalnameList
        );

    return activesession_get_current_v1_response_m_payload_local_var;
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
    if (e_systemconfiguration_ezsignofficeplan_local_nonprim) {
        e_systemconfiguration_ezsignofficeplan_local_nonprim = 0;
    }
    if (e_user_ezsignaccess_local_nonprim) {
        e_user_ezsignaccess_local_nonprim = 0;
    }
    if (e_user_ezsignprepaid_local_nonprim) {
        e_user_ezsignprepaid_local_nonprim = 0;
    }
    if (a_pki_permission_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_permission_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_permission_idList);
        a_pki_permission_idList = NULL;
    }
    if (obj_user_real_local_nonprim) {
        activesession_response_compound_user_free(obj_user_real_local_nonprim);
        obj_user_real_local_nonprim = NULL;
    }
    if (obj_user_cloned_local_nonprim) {
        activesession_response_compound_user_free(obj_user_cloned_local_nonprim);
        obj_user_cloned_local_nonprim = NULL;
    }
    if (obj_apikey_local_nonprim) {
        activesession_response_compound_apikey_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    if (a_e_module_internalnameList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_e_module_internalnameList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_e_module_internalnameList);
        a_e_module_internalnameList = NULL;
    }
    return NULL;

}
