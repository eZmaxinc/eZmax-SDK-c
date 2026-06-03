#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contactinformations_request.h"



static contactinformations_request_t *contactinformations_request_create_internal(
    int *i_address_default,
    int *i_phone_default,
    int *i_email_default,
    int *i_website_default
    ) {
    contactinformations_request_t *contactinformations_request_local_var = malloc(sizeof(contactinformations_request_t));
    if (!contactinformations_request_local_var) {
        return NULL;
    }
    memset(contactinformations_request_local_var, 0, sizeof(contactinformations_request_t));
    contactinformations_request_local_var->_library_owned = 1;
    contactinformations_request_local_var->i_address_default = i_address_default;
    contactinformations_request_local_var->i_phone_default = i_phone_default;
    contactinformations_request_local_var->i_email_default = i_email_default;
    contactinformations_request_local_var->i_website_default = i_website_default;
    return contactinformations_request_local_var;
}

__attribute__((deprecated)) contactinformations_request_t *contactinformations_request_create(
    int *i_address_default,
    int *i_phone_default,
    int *i_email_default,
    int *i_website_default
    ) {
    int *i_address_default_copy = NULL;
    if (i_address_default) {
        i_address_default_copy = malloc(sizeof(int));
        if (i_address_default_copy) *i_address_default_copy = *i_address_default;
    }
    int *i_phone_default_copy = NULL;
    if (i_phone_default) {
        i_phone_default_copy = malloc(sizeof(int));
        if (i_phone_default_copy) *i_phone_default_copy = *i_phone_default;
    }
    int *i_email_default_copy = NULL;
    if (i_email_default) {
        i_email_default_copy = malloc(sizeof(int));
        if (i_email_default_copy) *i_email_default_copy = *i_email_default;
    }
    int *i_website_default_copy = NULL;
    if (i_website_default) {
        i_website_default_copy = malloc(sizeof(int));
        if (i_website_default_copy) *i_website_default_copy = *i_website_default;
    }
    contactinformations_request_t *result = contactinformations_request_create_internal (
        i_address_default_copy,
        i_phone_default_copy,
        i_email_default_copy,
        i_website_default_copy
        );
    if (!result) {
        free(i_address_default_copy);
        free(i_phone_default_copy);
        free(i_email_default_copy);
        free(i_website_default_copy);
    }
    return result;
}

void contactinformations_request_free(contactinformations_request_t *contactinformations_request) {
    if(NULL == contactinformations_request){
        return ;
    }
    if(contactinformations_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "contactinformations_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (contactinformations_request->i_address_default) {
        free(contactinformations_request->i_address_default);
        contactinformations_request->i_address_default = NULL;
    }
    if (contactinformations_request->i_phone_default) {
        free(contactinformations_request->i_phone_default);
        contactinformations_request->i_phone_default = NULL;
    }
    if (contactinformations_request->i_email_default) {
        free(contactinformations_request->i_email_default);
        contactinformations_request->i_email_default = NULL;
    }
    if (contactinformations_request->i_website_default) {
        free(contactinformations_request->i_website_default);
        contactinformations_request->i_website_default = NULL;
    }
    free(contactinformations_request);
}

cJSON *contactinformations_request_convertToJSON(contactinformations_request_t *contactinformations_request) {
    cJSON *item = cJSON_CreateObject();

    // contactinformations_request->i_address_default
    if (!contactinformations_request->i_address_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAddressDefault", *contactinformations_request->i_address_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request->i_phone_default
    if (!contactinformations_request->i_phone_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPhoneDefault", *contactinformations_request->i_phone_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request->i_email_default
    if (!contactinformations_request->i_email_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEmailDefault", *contactinformations_request->i_email_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request->i_website_default
    if (!contactinformations_request->i_website_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iWebsiteDefault", *contactinformations_request->i_website_default) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contactinformations_request_t *contactinformations_request_parseFromJSON(cJSON *contactinformations_requestJSON){

    contactinformations_request_t *contactinformations_request_local_var = NULL;

    // define the local variable for contactinformations_request->i_address_default
    int *i_address_default_local_var = NULL;

    // define the local variable for contactinformations_request->i_phone_default
    int *i_phone_default_local_var = NULL;

    // define the local variable for contactinformations_request->i_email_default
    int *i_email_default_local_var = NULL;

    // define the local variable for contactinformations_request->i_website_default
    int *i_website_default_local_var = NULL;

    // contactinformations_request->i_address_default
    cJSON *i_address_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iAddressDefault");
    if (cJSON_IsNull(i_address_default)) {
        i_address_default = NULL;
    }
    if (!i_address_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_address_default))
    {
    goto end; //Numeric
    }
    i_address_default_local_var = malloc(sizeof(int));
    if(!i_address_default_local_var)
    {
        goto end;
    }
    *i_address_default_local_var = i_address_default->valuedouble;

    // contactinformations_request->i_phone_default
    cJSON *i_phone_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iPhoneDefault");
    if (cJSON_IsNull(i_phone_default)) {
        i_phone_default = NULL;
    }
    if (!i_phone_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_phone_default))
    {
    goto end; //Numeric
    }
    i_phone_default_local_var = malloc(sizeof(int));
    if(!i_phone_default_local_var)
    {
        goto end;
    }
    *i_phone_default_local_var = i_phone_default->valuedouble;

    // contactinformations_request->i_email_default
    cJSON *i_email_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iEmailDefault");
    if (cJSON_IsNull(i_email_default)) {
        i_email_default = NULL;
    }
    if (!i_email_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_email_default))
    {
    goto end; //Numeric
    }
    i_email_default_local_var = malloc(sizeof(int));
    if(!i_email_default_local_var)
    {
        goto end;
    }
    *i_email_default_local_var = i_email_default->valuedouble;

    // contactinformations_request->i_website_default
    cJSON *i_website_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iWebsiteDefault");
    if (cJSON_IsNull(i_website_default)) {
        i_website_default = NULL;
    }
    if (!i_website_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_website_default))
    {
    goto end; //Numeric
    }
    i_website_default_local_var = malloc(sizeof(int));
    if(!i_website_default_local_var)
    {
        goto end;
    }
    *i_website_default_local_var = i_website_default->valuedouble;



    contactinformations_request_local_var = contactinformations_request_create_internal (
        i_address_default_local_var,
        i_phone_default_local_var,
        i_email_default_local_var,
        i_website_default_local_var
        );

    if (!contactinformations_request_local_var) {
        goto end;
    }

    return contactinformations_request_local_var;
end:
    if (i_address_default_local_var) {
        free(i_address_default_local_var);
        i_address_default_local_var = NULL;
    }
    if (i_phone_default_local_var) {
        free(i_phone_default_local_var);
        i_phone_default_local_var = NULL;
    }
    if (i_email_default_local_var) {
        free(i_email_default_local_var);
        i_email_default_local_var = NULL;
    }
    if (i_website_default_local_var) {
        free(i_website_default_local_var);
        i_website_default_local_var = NULL;
    }
    return NULL;

}
