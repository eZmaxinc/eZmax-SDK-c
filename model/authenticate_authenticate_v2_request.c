#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticate_authenticate_v2_request.h"



authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request_create(
    char *pks_customer_code,
    char *s_email_address,
    char *s_user_loginname,
    char *s_password
    ) {
    authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request_local_var = malloc(sizeof(authenticate_authenticate_v2_request_t));
    if (!authenticate_authenticate_v2_request_local_var) {
        return NULL;
    }
    authenticate_authenticate_v2_request_local_var->pks_customer_code = pks_customer_code;
    authenticate_authenticate_v2_request_local_var->s_email_address = s_email_address;
    authenticate_authenticate_v2_request_local_var->s_user_loginname = s_user_loginname;
    authenticate_authenticate_v2_request_local_var->s_password = s_password;

    return authenticate_authenticate_v2_request_local_var;
}


void authenticate_authenticate_v2_request_free(authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request) {
    if(NULL == authenticate_authenticate_v2_request){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticate_authenticate_v2_request->pks_customer_code) {
        free(authenticate_authenticate_v2_request->pks_customer_code);
        authenticate_authenticate_v2_request->pks_customer_code = NULL;
    }
    if (authenticate_authenticate_v2_request->s_email_address) {
        free(authenticate_authenticate_v2_request->s_email_address);
        authenticate_authenticate_v2_request->s_email_address = NULL;
    }
    if (authenticate_authenticate_v2_request->s_user_loginname) {
        free(authenticate_authenticate_v2_request->s_user_loginname);
        authenticate_authenticate_v2_request->s_user_loginname = NULL;
    }
    if (authenticate_authenticate_v2_request->s_password) {
        free(authenticate_authenticate_v2_request->s_password);
        authenticate_authenticate_v2_request->s_password = NULL;
    }
    free(authenticate_authenticate_v2_request);
}

cJSON *authenticate_authenticate_v2_request_convertToJSON(authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // authenticate_authenticate_v2_request->pks_customer_code
    if (!authenticate_authenticate_v2_request->pks_customer_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "pksCustomerCode", authenticate_authenticate_v2_request->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // authenticate_authenticate_v2_request->s_email_address
    if(authenticate_authenticate_v2_request->s_email_address) { 
    if(cJSON_AddStringToObject(item, "sEmailAddress", authenticate_authenticate_v2_request->s_email_address) == NULL) {
    goto fail; //String
    }
     } 


    // authenticate_authenticate_v2_request->s_user_loginname
    if(authenticate_authenticate_v2_request->s_user_loginname) { 
    if(cJSON_AddStringToObject(item, "sUserLoginname", authenticate_authenticate_v2_request->s_user_loginname) == NULL) {
    goto fail; //String
    }
     } 


    // authenticate_authenticate_v2_request->s_password
    if (!authenticate_authenticate_v2_request->s_password) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sPassword", authenticate_authenticate_v2_request->s_password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request_parseFromJSON(cJSON *authenticate_authenticate_v2_requestJSON){

    authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request_local_var = NULL;

    // authenticate_authenticate_v2_request->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(authenticate_authenticate_v2_requestJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // authenticate_authenticate_v2_request->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(authenticate_authenticate_v2_requestJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }
    }

    // authenticate_authenticate_v2_request->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(authenticate_authenticate_v2_requestJSON, "sUserLoginname");
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }
    }

    // authenticate_authenticate_v2_request->s_password
    cJSON *s_password = cJSON_GetObjectItemCaseSensitive(authenticate_authenticate_v2_requestJSON, "sPassword");
    if (!s_password) {
        goto end;
    }

    
    if(!cJSON_IsString(s_password))
    {
    goto end; //String
    }


    authenticate_authenticate_v2_request_local_var = authenticate_authenticate_v2_request_create (
        strdup(pks_customer_code->valuestring),
        s_email_address ? strdup(s_email_address->valuestring) : NULL,
        s_user_loginname ? strdup(s_user_loginname->valuestring) : NULL,
        strdup(s_password->valuestring)
        );

    return authenticate_authenticate_v2_request_local_var;
end:
    return NULL;

}
