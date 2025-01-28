#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_create_ezsignuser_v1_request.h"



static user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request_create_internal(
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_extension
    ) {
    user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request_local_var = malloc(sizeof(user_create_ezsignuser_v1_request_t));
    if (!user_create_ezsignuser_v1_request_local_var) {
        return NULL;
    }
    user_create_ezsignuser_v1_request_local_var->fki_language_id = fki_language_id;
    user_create_ezsignuser_v1_request_local_var->s_user_firstname = s_user_firstname;
    user_create_ezsignuser_v1_request_local_var->s_user_lastname = s_user_lastname;
    user_create_ezsignuser_v1_request_local_var->s_email_address = s_email_address;
    user_create_ezsignuser_v1_request_local_var->s_phone_region = s_phone_region;
    user_create_ezsignuser_v1_request_local_var->s_phone_exchange = s_phone_exchange;
    user_create_ezsignuser_v1_request_local_var->s_phone_number = s_phone_number;
    user_create_ezsignuser_v1_request_local_var->s_phone_extension = s_phone_extension;

    user_create_ezsignuser_v1_request_local_var->_library_owned = 1;
    return user_create_ezsignuser_v1_request_local_var;
}

__attribute__((deprecated)) user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request_create(
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_extension
    ) {
    return user_create_ezsignuser_v1_request_create_internal (
        fki_language_id,
        s_user_firstname,
        s_user_lastname,
        s_email_address,
        s_phone_region,
        s_phone_exchange,
        s_phone_number,
        s_phone_extension
        );
}

void user_create_ezsignuser_v1_request_free(user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request) {
    if(NULL == user_create_ezsignuser_v1_request){
        return ;
    }
    if(user_create_ezsignuser_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_create_ezsignuser_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_create_ezsignuser_v1_request->s_user_firstname) {
        free(user_create_ezsignuser_v1_request->s_user_firstname);
        user_create_ezsignuser_v1_request->s_user_firstname = NULL;
    }
    if (user_create_ezsignuser_v1_request->s_user_lastname) {
        free(user_create_ezsignuser_v1_request->s_user_lastname);
        user_create_ezsignuser_v1_request->s_user_lastname = NULL;
    }
    if (user_create_ezsignuser_v1_request->s_email_address) {
        free(user_create_ezsignuser_v1_request->s_email_address);
        user_create_ezsignuser_v1_request->s_email_address = NULL;
    }
    if (user_create_ezsignuser_v1_request->s_phone_region) {
        free(user_create_ezsignuser_v1_request->s_phone_region);
        user_create_ezsignuser_v1_request->s_phone_region = NULL;
    }
    if (user_create_ezsignuser_v1_request->s_phone_exchange) {
        free(user_create_ezsignuser_v1_request->s_phone_exchange);
        user_create_ezsignuser_v1_request->s_phone_exchange = NULL;
    }
    if (user_create_ezsignuser_v1_request->s_phone_number) {
        free(user_create_ezsignuser_v1_request->s_phone_number);
        user_create_ezsignuser_v1_request->s_phone_number = NULL;
    }
    if (user_create_ezsignuser_v1_request->s_phone_extension) {
        free(user_create_ezsignuser_v1_request->s_phone_extension);
        user_create_ezsignuser_v1_request->s_phone_extension = NULL;
    }
    free(user_create_ezsignuser_v1_request);
}

cJSON *user_create_ezsignuser_v1_request_convertToJSON(user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // user_create_ezsignuser_v1_request->fki_language_id
    if (!user_create_ezsignuser_v1_request->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", user_create_ezsignuser_v1_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // user_create_ezsignuser_v1_request->s_user_firstname
    if (!user_create_ezsignuser_v1_request->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", user_create_ezsignuser_v1_request->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // user_create_ezsignuser_v1_request->s_user_lastname
    if (!user_create_ezsignuser_v1_request->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", user_create_ezsignuser_v1_request->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // user_create_ezsignuser_v1_request->s_email_address
    if (!user_create_ezsignuser_v1_request->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", user_create_ezsignuser_v1_request->s_email_address) == NULL) {
    goto fail; //String
    }


    // user_create_ezsignuser_v1_request->s_phone_region
    if (!user_create_ezsignuser_v1_request->s_phone_region) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPhoneRegion", user_create_ezsignuser_v1_request->s_phone_region) == NULL) {
    goto fail; //String
    }


    // user_create_ezsignuser_v1_request->s_phone_exchange
    if (!user_create_ezsignuser_v1_request->s_phone_exchange) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPhoneExchange", user_create_ezsignuser_v1_request->s_phone_exchange) == NULL) {
    goto fail; //String
    }


    // user_create_ezsignuser_v1_request->s_phone_number
    if (!user_create_ezsignuser_v1_request->s_phone_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPhoneNumber", user_create_ezsignuser_v1_request->s_phone_number) == NULL) {
    goto fail; //String
    }


    // user_create_ezsignuser_v1_request->s_phone_extension
    if(user_create_ezsignuser_v1_request->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", user_create_ezsignuser_v1_request->s_phone_extension) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request_parseFromJSON(cJSON *user_create_ezsignuser_v1_requestJSON){

    user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request_local_var = NULL;

    // user_create_ezsignuser_v1_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "fkiLanguageID");
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

    // user_create_ezsignuser_v1_request->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "sUserFirstname");
    if (cJSON_IsNull(s_user_firstname)) {
        s_user_firstname = NULL;
    }
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // user_create_ezsignuser_v1_request->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "sUserLastname");
    if (cJSON_IsNull(s_user_lastname)) {
        s_user_lastname = NULL;
    }
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // user_create_ezsignuser_v1_request->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }

    // user_create_ezsignuser_v1_request->s_phone_region
    cJSON *s_phone_region = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "sPhoneRegion");
    if (cJSON_IsNull(s_phone_region)) {
        s_phone_region = NULL;
    }
    if (!s_phone_region) {
        goto end;
    }

    
    if(!cJSON_IsString(s_phone_region))
    {
    goto end; //String
    }

    // user_create_ezsignuser_v1_request->s_phone_exchange
    cJSON *s_phone_exchange = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "sPhoneExchange");
    if (cJSON_IsNull(s_phone_exchange)) {
        s_phone_exchange = NULL;
    }
    if (!s_phone_exchange) {
        goto end;
    }

    
    if(!cJSON_IsString(s_phone_exchange))
    {
    goto end; //String
    }

    // user_create_ezsignuser_v1_request->s_phone_number
    cJSON *s_phone_number = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "sPhoneNumber");
    if (cJSON_IsNull(s_phone_number)) {
        s_phone_number = NULL;
    }
    if (!s_phone_number) {
        goto end;
    }

    
    if(!cJSON_IsString(s_phone_number))
    {
    goto end; //String
    }

    // user_create_ezsignuser_v1_request->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_requestJSON, "sPhoneExtension");
    if (cJSON_IsNull(s_phone_extension)) {
        s_phone_extension = NULL;
    }
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension) && !cJSON_IsNull(s_phone_extension))
    {
    goto end; //String
    }
    }


    user_create_ezsignuser_v1_request_local_var = user_create_ezsignuser_v1_request_create_internal (
        fki_language_id->valuedouble,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_email_address->valuestring),
        strdup(s_phone_region->valuestring),
        strdup(s_phone_exchange->valuestring),
        strdup(s_phone_number->valuestring),
        s_phone_extension && !cJSON_IsNull(s_phone_extension) ? strdup(s_phone_extension->valuestring) : NULL
        );

    return user_create_ezsignuser_v1_request_local_var;
end:
    return NULL;

}
