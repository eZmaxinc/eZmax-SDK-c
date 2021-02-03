#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contactinformations_request.h"



contactinformations_request_t *contactinformations_request_create(
    int i_address_default,
    int i_phone_default,
    int i_email_default,
    int i_website_default
    ) {
    contactinformations_request_t *contactinformations_request_local_var = malloc(sizeof(contactinformations_request_t));
    if (!contactinformations_request_local_var) {
        return NULL;
    }
    contactinformations_request_local_var->i_address_default = i_address_default;
    contactinformations_request_local_var->i_phone_default = i_phone_default;
    contactinformations_request_local_var->i_email_default = i_email_default;
    contactinformations_request_local_var->i_website_default = i_website_default;

    return contactinformations_request_local_var;
}


void contactinformations_request_free(contactinformations_request_t *contactinformations_request) {
    if(NULL == contactinformations_request){
        return ;
    }
    listEntry_t *listEntry;
    free(contactinformations_request);
}

cJSON *contactinformations_request_convertToJSON(contactinformations_request_t *contactinformations_request) {
    cJSON *item = cJSON_CreateObject();

    // contactinformations_request->i_address_default
    if (!contactinformations_request->i_address_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iAddressDefault", contactinformations_request->i_address_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request->i_phone_default
    if (!contactinformations_request->i_phone_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iPhoneDefault", contactinformations_request->i_phone_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request->i_email_default
    if (!contactinformations_request->i_email_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEmailDefault", contactinformations_request->i_email_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request->i_website_default
    if (!contactinformations_request->i_website_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iWebsiteDefault", contactinformations_request->i_website_default) == NULL) {
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

    // contactinformations_request->i_address_default
    cJSON *i_address_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iAddressDefault");
    if (!i_address_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_address_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request->i_phone_default
    cJSON *i_phone_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iPhoneDefault");
    if (!i_phone_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_phone_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request->i_email_default
    cJSON *i_email_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iEmailDefault");
    if (!i_email_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_email_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request->i_website_default
    cJSON *i_website_default = cJSON_GetObjectItemCaseSensitive(contactinformations_requestJSON, "iWebsiteDefault");
    if (!i_website_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_website_default))
    {
    goto end; //Numeric
    }


    contactinformations_request_local_var = contactinformations_request_create (
        i_address_default->valuedouble,
        i_phone_default->valuedouble,
        i_email_default->valuedouble,
        i_website_default->valuedouble
        );

    return contactinformations_request_local_var;
end:
    return NULL;

}
