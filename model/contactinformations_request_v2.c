#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contactinformations_request_v2.h"


char* contactinformations_request_v2_e_contactinformations_type_ToString(ezmax_api_definition__full_contactinformations_request_v2__e e_contactinformations_type) {
    char* e_contactinformations_typeArray[] =  { "NULL", "BankAccount", "ContactObject", "CreditCard", "Customer", "ExternalBroker", "ExternalBrokerFirm", "EzcomCompany", "FinancialInstitution", "FranchiseCompany", "FranchiseOffice", "Supplier" };
    return e_contactinformations_typeArray[e_contactinformations_type];
}

ezmax_api_definition__full_contactinformations_request_v2__e contactinformations_request_v2_e_contactinformations_type_FromString(char* e_contactinformations_type){
    int stringToReturn = 0;
    char *e_contactinformations_typeArray[] =  { "NULL", "BankAccount", "ContactObject", "CreditCard", "Customer", "ExternalBroker", "ExternalBrokerFirm", "EzcomCompany", "FinancialInstitution", "FranchiseCompany", "FranchiseOffice", "Supplier" };
    size_t sizeofArray = sizeof(e_contactinformations_typeArray) / sizeof(e_contactinformations_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_contactinformations_type, e_contactinformations_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

contactinformations_request_v2_t *contactinformations_request_v2_create(
    field_e_contactinformations_type_t *e_contactinformations_type,
    int i_address_default,
    int i_phone_default,
    int i_email_default,
    int i_website_default
    ) {
    contactinformations_request_v2_t *contactinformations_request_v2_local_var = malloc(sizeof(contactinformations_request_v2_t));
    if (!contactinformations_request_v2_local_var) {
        return NULL;
    }
    contactinformations_request_v2_local_var->e_contactinformations_type = e_contactinformations_type;
    contactinformations_request_v2_local_var->i_address_default = i_address_default;
    contactinformations_request_v2_local_var->i_phone_default = i_phone_default;
    contactinformations_request_v2_local_var->i_email_default = i_email_default;
    contactinformations_request_v2_local_var->i_website_default = i_website_default;

    return contactinformations_request_v2_local_var;
}


void contactinformations_request_v2_free(contactinformations_request_v2_t *contactinformations_request_v2) {
    if(NULL == contactinformations_request_v2){
        return ;
    }
    listEntry_t *listEntry;
    if (contactinformations_request_v2->e_contactinformations_type) {
        field_e_contactinformations_type_free(contactinformations_request_v2->e_contactinformations_type);
        contactinformations_request_v2->e_contactinformations_type = NULL;
    }
    free(contactinformations_request_v2);
}

cJSON *contactinformations_request_v2_convertToJSON(contactinformations_request_v2_t *contactinformations_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // contactinformations_request_v2->e_contactinformations_type
    if (ezmax_api_definition__full_contactinformations_request_v2__NULL == contactinformations_request_v2->e_contactinformations_type) {
        goto fail;
    }
    cJSON *e_contactinformations_type_local_JSON = field_e_contactinformations_type_convertToJSON(contactinformations_request_v2->e_contactinformations_type);
    if(e_contactinformations_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eContactinformationsType", e_contactinformations_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // contactinformations_request_v2->i_address_default
    if (!contactinformations_request_v2->i_address_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAddressDefault", contactinformations_request_v2->i_address_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request_v2->i_phone_default
    if (!contactinformations_request_v2->i_phone_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPhoneDefault", contactinformations_request_v2->i_phone_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request_v2->i_email_default
    if (!contactinformations_request_v2->i_email_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEmailDefault", contactinformations_request_v2->i_email_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request_v2->i_website_default
    if (!contactinformations_request_v2->i_website_default) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iWebsiteDefault", contactinformations_request_v2->i_website_default) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contactinformations_request_v2_t *contactinformations_request_v2_parseFromJSON(cJSON *contactinformations_request_v2JSON){

    contactinformations_request_v2_t *contactinformations_request_v2_local_var = NULL;

    // define the local variable for contactinformations_request_v2->e_contactinformations_type
    field_e_contactinformations_type_t *e_contactinformations_type_local_nonprim = NULL;

    // contactinformations_request_v2->e_contactinformations_type
    cJSON *e_contactinformations_type = cJSON_GetObjectItemCaseSensitive(contactinformations_request_v2JSON, "eContactinformationsType");
    if (!e_contactinformations_type) {
        goto end;
    }

    
    e_contactinformations_type_local_nonprim = field_e_contactinformations_type_parseFromJSON(e_contactinformations_type); //custom

    // contactinformations_request_v2->i_address_default
    cJSON *i_address_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_v2JSON, "iAddressDefault");
    if (!i_address_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_address_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request_v2->i_phone_default
    cJSON *i_phone_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_v2JSON, "iPhoneDefault");
    if (!i_phone_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_phone_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request_v2->i_email_default
    cJSON *i_email_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_v2JSON, "iEmailDefault");
    if (!i_email_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_email_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request_v2->i_website_default
    cJSON *i_website_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_v2JSON, "iWebsiteDefault");
    if (!i_website_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_website_default))
    {
    goto end; //Numeric
    }


    contactinformations_request_v2_local_var = contactinformations_request_v2_create (
        e_contactinformations_type_local_nonprim,
        i_address_default->valuedouble,
        i_phone_default->valuedouble,
        i_email_default->valuedouble,
        i_website_default->valuedouble
        );

    return contactinformations_request_v2_local_var;
end:
    if (e_contactinformations_type_local_nonprim) {
        field_e_contactinformations_type_free(e_contactinformations_type_local_nonprim);
        e_contactinformations_type_local_nonprim = NULL;
    }
    return NULL;

}
