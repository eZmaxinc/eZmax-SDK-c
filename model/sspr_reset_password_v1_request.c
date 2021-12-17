#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sspr_reset_password_v1_request.h"


char* e_user_type_ssprsspr_reset_password_v1_request_ToString(ezmax_api_definition_sspr_reset_password_v1_request__e e_user_type_sspr) {
    char* e_user_type_ssprArray[] =  { "NULL", "EzsignUser", "Native" };
	return e_user_type_ssprArray[e_user_type_sspr];
}

ezmax_api_definition_sspr_reset_password_v1_request__e e_user_type_ssprsspr_reset_password_v1_request_FromString(char* e_user_type_sspr){
    int stringToReturn = 0;
    char *e_user_type_ssprArray[] =  { "NULL", "EzsignUser", "Native" };
    size_t sizeofArray = sizeof(e_user_type_ssprArray) / sizeof(e_user_type_ssprArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_type_sspr, e_user_type_ssprArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

sspr_reset_password_v1_request_t *sspr_reset_password_v1_request_create(
    char *pks_customer_code,
    int fki_language_id,
    field_e_user_type_sspr_t *e_user_type_sspr,
    char *s_email_address,
    char *s_user_loginname,
    char *bin_user_ssp_rtoken,
    char *s_password
    ) {
    sspr_reset_password_v1_request_t *sspr_reset_password_v1_request_local_var = malloc(sizeof(sspr_reset_password_v1_request_t));
    if (!sspr_reset_password_v1_request_local_var) {
        return NULL;
    }
    sspr_reset_password_v1_request_local_var->pks_customer_code = pks_customer_code;
    sspr_reset_password_v1_request_local_var->fki_language_id = fki_language_id;
    sspr_reset_password_v1_request_local_var->e_user_type_sspr = e_user_type_sspr;
    sspr_reset_password_v1_request_local_var->s_email_address = s_email_address;
    sspr_reset_password_v1_request_local_var->s_user_loginname = s_user_loginname;
    sspr_reset_password_v1_request_local_var->bin_user_ssp_rtoken = bin_user_ssp_rtoken;
    sspr_reset_password_v1_request_local_var->s_password = s_password;

    return sspr_reset_password_v1_request_local_var;
}


void sspr_reset_password_v1_request_free(sspr_reset_password_v1_request_t *sspr_reset_password_v1_request) {
    if(NULL == sspr_reset_password_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (sspr_reset_password_v1_request->pks_customer_code) {
        free(sspr_reset_password_v1_request->pks_customer_code);
        sspr_reset_password_v1_request->pks_customer_code = NULL;
    }
    if (sspr_reset_password_v1_request->e_user_type_sspr) {
        field_e_user_type_sspr_free(sspr_reset_password_v1_request->e_user_type_sspr);
        sspr_reset_password_v1_request->e_user_type_sspr = NULL;
    }
    if (sspr_reset_password_v1_request->s_email_address) {
        free(sspr_reset_password_v1_request->s_email_address);
        sspr_reset_password_v1_request->s_email_address = NULL;
    }
    if (sspr_reset_password_v1_request->s_user_loginname) {
        free(sspr_reset_password_v1_request->s_user_loginname);
        sspr_reset_password_v1_request->s_user_loginname = NULL;
    }
    if (sspr_reset_password_v1_request->bin_user_ssp_rtoken) {
        free(sspr_reset_password_v1_request->bin_user_ssp_rtoken);
        sspr_reset_password_v1_request->bin_user_ssp_rtoken = NULL;
    }
    if (sspr_reset_password_v1_request->s_password) {
        free(sspr_reset_password_v1_request->s_password);
        sspr_reset_password_v1_request->s_password = NULL;
    }
    free(sspr_reset_password_v1_request);
}

cJSON *sspr_reset_password_v1_request_convertToJSON(sspr_reset_password_v1_request_t *sspr_reset_password_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // sspr_reset_password_v1_request->pks_customer_code
    if (!sspr_reset_password_v1_request->pks_customer_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "pksCustomerCode", sspr_reset_password_v1_request->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // sspr_reset_password_v1_request->fki_language_id
    if (!sspr_reset_password_v1_request->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", sspr_reset_password_v1_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // sspr_reset_password_v1_request->e_user_type_sspr
    
    cJSON *e_user_type_sspr_local_JSON = field_e_user_type_sspr_convertToJSON(sspr_reset_password_v1_request->e_user_type_sspr);
    if(e_user_type_sspr_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserTypeSSPR", e_user_type_sspr_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // sspr_reset_password_v1_request->s_email_address
    if(sspr_reset_password_v1_request->s_email_address) { 
    if(cJSON_AddStringToObject(item, "sEmailAddress", sspr_reset_password_v1_request->s_email_address) == NULL) {
    goto fail; //String
    }
     } 


    // sspr_reset_password_v1_request->s_user_loginname
    if(sspr_reset_password_v1_request->s_user_loginname) { 
    if(cJSON_AddStringToObject(item, "sUserLoginname", sspr_reset_password_v1_request->s_user_loginname) == NULL) {
    goto fail; //String
    }
     } 


    // sspr_reset_password_v1_request->bin_user_ssp_rtoken
    if (!sspr_reset_password_v1_request->bin_user_ssp_rtoken) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "binUserSSPRtoken", sspr_reset_password_v1_request->bin_user_ssp_rtoken) == NULL) {
    goto fail; //String
    }


    // sspr_reset_password_v1_request->s_password
    if (!sspr_reset_password_v1_request->s_password) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sPassword", sspr_reset_password_v1_request->s_password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

sspr_reset_password_v1_request_t *sspr_reset_password_v1_request_parseFromJSON(cJSON *sspr_reset_password_v1_requestJSON){

    sspr_reset_password_v1_request_t *sspr_reset_password_v1_request_local_var = NULL;

    // define the local variable for sspr_reset_password_v1_request->e_user_type_sspr
    field_e_user_type_sspr_t *e_user_type_sspr_local_nonprim = NULL;

    // sspr_reset_password_v1_request->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(sspr_reset_password_v1_requestJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // sspr_reset_password_v1_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(sspr_reset_password_v1_requestJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // sspr_reset_password_v1_request->e_user_type_sspr
    cJSON *e_user_type_sspr = cJSON_GetObjectItemCaseSensitive(sspr_reset_password_v1_requestJSON, "eUserTypeSSPR");
    if (!e_user_type_sspr) {
        goto end;
    }

    
    e_user_type_sspr_local_nonprim = field_e_user_type_sspr_parseFromJSON(e_user_type_sspr); //custom

    // sspr_reset_password_v1_request->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(sspr_reset_password_v1_requestJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }
    }

    // sspr_reset_password_v1_request->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(sspr_reset_password_v1_requestJSON, "sUserLoginname");
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }
    }

    // sspr_reset_password_v1_request->bin_user_ssp_rtoken
    cJSON *bin_user_ssp_rtoken = cJSON_GetObjectItemCaseSensitive(sspr_reset_password_v1_requestJSON, "binUserSSPRtoken");
    if (!bin_user_ssp_rtoken) {
        goto end;
    }

    
    if(!cJSON_IsString(bin_user_ssp_rtoken))
    {
    goto end; //String
    }

    // sspr_reset_password_v1_request->s_password
    cJSON *s_password = cJSON_GetObjectItemCaseSensitive(sspr_reset_password_v1_requestJSON, "sPassword");
    if (!s_password) {
        goto end;
    }

    
    if(!cJSON_IsString(s_password))
    {
    goto end; //String
    }


    sspr_reset_password_v1_request_local_var = sspr_reset_password_v1_request_create (
        strdup(pks_customer_code->valuestring),
        fki_language_id->valuedouble,
        e_user_type_sspr_local_nonprim,
        s_email_address ? strdup(s_email_address->valuestring) : NULL,
        s_user_loginname ? strdup(s_user_loginname->valuestring) : NULL,
        strdup(bin_user_ssp_rtoken->valuestring),
        strdup(s_password->valuestring)
        );

    return sspr_reset_password_v1_request_local_var;
end:
    if (e_user_type_sspr_local_nonprim) {
        field_e_user_type_sspr_free(e_user_type_sspr_local_nonprim);
        e_user_type_sspr_local_nonprim = NULL;
    }
    return NULL;

}
