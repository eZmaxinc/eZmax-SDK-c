#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sspr_send_usernames_v1_request.h"


char* e_user_type_ssprsspr_send_usernames_v1_request_ToString(ezmax_api_definition_sspr_send_usernames_v1_request__e e_user_type_sspr) {
    char* e_user_type_ssprArray[] =  { "NULL", "EzsignUser", "Native" };
	return e_user_type_ssprArray[e_user_type_sspr];
}

ezmax_api_definition_sspr_send_usernames_v1_request__e e_user_type_ssprsspr_send_usernames_v1_request_FromString(char* e_user_type_sspr){
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

sspr_send_usernames_v1_request_t *sspr_send_usernames_v1_request_create(
    char *pks_customer_code,
    int fki_language_id,
    field_e_user_type_sspr_t *e_user_type_sspr,
    char *s_email_address
    ) {
    sspr_send_usernames_v1_request_t *sspr_send_usernames_v1_request_local_var = malloc(sizeof(sspr_send_usernames_v1_request_t));
    if (!sspr_send_usernames_v1_request_local_var) {
        return NULL;
    }
    sspr_send_usernames_v1_request_local_var->pks_customer_code = pks_customer_code;
    sspr_send_usernames_v1_request_local_var->fki_language_id = fki_language_id;
    sspr_send_usernames_v1_request_local_var->e_user_type_sspr = e_user_type_sspr;
    sspr_send_usernames_v1_request_local_var->s_email_address = s_email_address;

    return sspr_send_usernames_v1_request_local_var;
}


void sspr_send_usernames_v1_request_free(sspr_send_usernames_v1_request_t *sspr_send_usernames_v1_request) {
    if(NULL == sspr_send_usernames_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (sspr_send_usernames_v1_request->pks_customer_code) {
        free(sspr_send_usernames_v1_request->pks_customer_code);
        sspr_send_usernames_v1_request->pks_customer_code = NULL;
    }
    if (sspr_send_usernames_v1_request->e_user_type_sspr) {
        field_e_user_type_sspr_free(sspr_send_usernames_v1_request->e_user_type_sspr);
        sspr_send_usernames_v1_request->e_user_type_sspr = NULL;
    }
    if (sspr_send_usernames_v1_request->s_email_address) {
        free(sspr_send_usernames_v1_request->s_email_address);
        sspr_send_usernames_v1_request->s_email_address = NULL;
    }
    free(sspr_send_usernames_v1_request);
}

cJSON *sspr_send_usernames_v1_request_convertToJSON(sspr_send_usernames_v1_request_t *sspr_send_usernames_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // sspr_send_usernames_v1_request->pks_customer_code
    if (!sspr_send_usernames_v1_request->pks_customer_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "pksCustomerCode", sspr_send_usernames_v1_request->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // sspr_send_usernames_v1_request->fki_language_id
    if (!sspr_send_usernames_v1_request->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", sspr_send_usernames_v1_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // sspr_send_usernames_v1_request->e_user_type_sspr
    
    cJSON *e_user_type_sspr_local_JSON = field_e_user_type_sspr_convertToJSON(sspr_send_usernames_v1_request->e_user_type_sspr);
    if(e_user_type_sspr_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserTypeSSPR", e_user_type_sspr_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // sspr_send_usernames_v1_request->s_email_address
    if (!sspr_send_usernames_v1_request->s_email_address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEmailAddress", sspr_send_usernames_v1_request->s_email_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

sspr_send_usernames_v1_request_t *sspr_send_usernames_v1_request_parseFromJSON(cJSON *sspr_send_usernames_v1_requestJSON){

    sspr_send_usernames_v1_request_t *sspr_send_usernames_v1_request_local_var = NULL;

    // define the local variable for sspr_send_usernames_v1_request->e_user_type_sspr
    field_e_user_type_sspr_t *e_user_type_sspr_local_nonprim = NULL;

    // sspr_send_usernames_v1_request->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(sspr_send_usernames_v1_requestJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // sspr_send_usernames_v1_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(sspr_send_usernames_v1_requestJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // sspr_send_usernames_v1_request->e_user_type_sspr
    cJSON *e_user_type_sspr = cJSON_GetObjectItemCaseSensitive(sspr_send_usernames_v1_requestJSON, "eUserTypeSSPR");
    if (!e_user_type_sspr) {
        goto end;
    }

    
    e_user_type_sspr_local_nonprim = field_e_user_type_sspr_parseFromJSON(e_user_type_sspr); //custom

    // sspr_send_usernames_v1_request->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(sspr_send_usernames_v1_requestJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }


    sspr_send_usernames_v1_request_local_var = sspr_send_usernames_v1_request_create (
        strdup(pks_customer_code->valuestring),
        fki_language_id->valuedouble,
        e_user_type_sspr_local_nonprim,
        strdup(s_email_address->valuestring)
        );

    return sspr_send_usernames_v1_request_local_var;
end:
    if (e_user_type_sspr_local_nonprim) {
        field_e_user_type_sspr_free(e_user_type_sspr_local_nonprim);
        e_user_type_sspr_local_nonprim = NULL;
    }
    return NULL;

}
