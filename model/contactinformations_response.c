#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contactinformations_response.h"


char* contactinformations_response_e_contactinformations_type_ToString(ezmax_api_definition__full_contactinformations_response__e e_contactinformations_type) {
    char* e_contactinformations_typeArray[] =  { "NULL", "BankAccount", "ContactObject", "CreditCard", "Customer", "ExternalBroker", "ExternalBrokerFirm", "EzcomCompany", "FinancialInstitution", "FranchiseCompany", "FranchiseOffice", "Supplier" };
    return e_contactinformations_typeArray[e_contactinformations_type];
}

ezmax_api_definition__full_contactinformations_response__e contactinformations_response_e_contactinformations_type_FromString(char* e_contactinformations_type){
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

contactinformations_response_t *contactinformations_response_create(
    int pki_contactinformations_id,
    int fki_address_id_default,
    int fki_phone_id_default,
    int fki_email_id_default,
    int fki_website_id_default,
    field_e_contactinformations_type_t *e_contactinformations_type,
    char *s_contactinformations_url,
    address_response_t *obj_address_default,
    phone_response_compound_t *obj_phone_default,
    email_response_t *obj_email_default,
    website_response_t *obj_website_default
    ) {
    contactinformations_response_t *contactinformations_response_local_var = malloc(sizeof(contactinformations_response_t));
    if (!contactinformations_response_local_var) {
        return NULL;
    }
    contactinformations_response_local_var->pki_contactinformations_id = pki_contactinformations_id;
    contactinformations_response_local_var->fki_address_id_default = fki_address_id_default;
    contactinformations_response_local_var->fki_phone_id_default = fki_phone_id_default;
    contactinformations_response_local_var->fki_email_id_default = fki_email_id_default;
    contactinformations_response_local_var->fki_website_id_default = fki_website_id_default;
    contactinformations_response_local_var->e_contactinformations_type = e_contactinformations_type;
    contactinformations_response_local_var->s_contactinformations_url = s_contactinformations_url;
    contactinformations_response_local_var->obj_address_default = obj_address_default;
    contactinformations_response_local_var->obj_phone_default = obj_phone_default;
    contactinformations_response_local_var->obj_email_default = obj_email_default;
    contactinformations_response_local_var->obj_website_default = obj_website_default;

    return contactinformations_response_local_var;
}


void contactinformations_response_free(contactinformations_response_t *contactinformations_response) {
    if(NULL == contactinformations_response){
        return ;
    }
    listEntry_t *listEntry;
    if (contactinformations_response->e_contactinformations_type) {
        field_e_contactinformations_type_free(contactinformations_response->e_contactinformations_type);
        contactinformations_response->e_contactinformations_type = NULL;
    }
    if (contactinformations_response->s_contactinformations_url) {
        free(contactinformations_response->s_contactinformations_url);
        contactinformations_response->s_contactinformations_url = NULL;
    }
    if (contactinformations_response->obj_address_default) {
        address_response_free(contactinformations_response->obj_address_default);
        contactinformations_response->obj_address_default = NULL;
    }
    if (contactinformations_response->obj_phone_default) {
        phone_response_compound_free(contactinformations_response->obj_phone_default);
        contactinformations_response->obj_phone_default = NULL;
    }
    if (contactinformations_response->obj_email_default) {
        email_response_free(contactinformations_response->obj_email_default);
        contactinformations_response->obj_email_default = NULL;
    }
    if (contactinformations_response->obj_website_default) {
        website_response_free(contactinformations_response->obj_website_default);
        contactinformations_response->obj_website_default = NULL;
    }
    free(contactinformations_response);
}

cJSON *contactinformations_response_convertToJSON(contactinformations_response_t *contactinformations_response) {
    cJSON *item = cJSON_CreateObject();

    // contactinformations_response->pki_contactinformations_id
    if (!contactinformations_response->pki_contactinformations_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiContactinformationsID", contactinformations_response->pki_contactinformations_id) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_response->fki_address_id_default
    if(contactinformations_response->fki_address_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiAddressIDDefault", contactinformations_response->fki_address_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response->fki_phone_id_default
    if(contactinformations_response->fki_phone_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiPhoneIDDefault", contactinformations_response->fki_phone_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response->fki_email_id_default
    if(contactinformations_response->fki_email_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiEmailIDDefault", contactinformations_response->fki_email_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response->fki_website_id_default
    if(contactinformations_response->fki_website_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiWebsiteIDDefault", contactinformations_response->fki_website_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response->e_contactinformations_type
    if (ezmax_api_definition__full_contactinformations_response__NULL == contactinformations_response->e_contactinformations_type) {
        goto fail;
    }
    cJSON *e_contactinformations_type_local_JSON = field_e_contactinformations_type_convertToJSON(contactinformations_response->e_contactinformations_type);
    if(e_contactinformations_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eContactinformationsType", e_contactinformations_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // contactinformations_response->s_contactinformations_url
    if(contactinformations_response->s_contactinformations_url) {
    if(cJSON_AddStringToObject(item, "sContactinformationsUrl", contactinformations_response->s_contactinformations_url) == NULL) {
    goto fail; //String
    }
    }


    // contactinformations_response->obj_address_default
    if(contactinformations_response->obj_address_default) {
    cJSON *obj_address_default_local_JSON = address_response_convertToJSON(contactinformations_response->obj_address_default);
    if(obj_address_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddressDefault", obj_address_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contactinformations_response->obj_phone_default
    if(contactinformations_response->obj_phone_default) {
    cJSON *obj_phone_default_local_JSON = phone_response_compound_convertToJSON(contactinformations_response->obj_phone_default);
    if(obj_phone_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneDefault", obj_phone_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contactinformations_response->obj_email_default
    if(contactinformations_response->obj_email_default) {
    cJSON *obj_email_default_local_JSON = email_response_convertToJSON(contactinformations_response->obj_email_default);
    if(obj_email_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmailDefault", obj_email_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contactinformations_response->obj_website_default
    if(contactinformations_response->obj_website_default) {
    cJSON *obj_website_default_local_JSON = website_response_convertToJSON(contactinformations_response->obj_website_default);
    if(obj_website_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebsiteDefault", obj_website_default_local_JSON);
    if(item->child == NULL) {
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

contactinformations_response_t *contactinformations_response_parseFromJSON(cJSON *contactinformations_responseJSON){

    contactinformations_response_t *contactinformations_response_local_var = NULL;

    // define the local variable for contactinformations_response->e_contactinformations_type
    field_e_contactinformations_type_t *e_contactinformations_type_local_nonprim = NULL;

    // define the local variable for contactinformations_response->obj_address_default
    address_response_t *obj_address_default_local_nonprim = NULL;

    // define the local variable for contactinformations_response->obj_phone_default
    phone_response_compound_t *obj_phone_default_local_nonprim = NULL;

    // define the local variable for contactinformations_response->obj_email_default
    email_response_t *obj_email_default_local_nonprim = NULL;

    // define the local variable for contactinformations_response->obj_website_default
    website_response_t *obj_website_default_local_nonprim = NULL;

    // contactinformations_response->pki_contactinformations_id
    cJSON *pki_contactinformations_id = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "pkiContactinformationsID");
    if (!pki_contactinformations_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_contactinformations_id))
    {
    goto end; //Numeric
    }

    // contactinformations_response->fki_address_id_default
    cJSON *fki_address_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "fkiAddressIDDefault");
    if (fki_address_id_default) { 
    if(!cJSON_IsNumber(fki_address_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response->fki_phone_id_default
    cJSON *fki_phone_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "fkiPhoneIDDefault");
    if (fki_phone_id_default) { 
    if(!cJSON_IsNumber(fki_phone_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response->fki_email_id_default
    cJSON *fki_email_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "fkiEmailIDDefault");
    if (fki_email_id_default) { 
    if(!cJSON_IsNumber(fki_email_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response->fki_website_id_default
    cJSON *fki_website_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "fkiWebsiteIDDefault");
    if (fki_website_id_default) { 
    if(!cJSON_IsNumber(fki_website_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response->e_contactinformations_type
    cJSON *e_contactinformations_type = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "eContactinformationsType");
    if (!e_contactinformations_type) {
        goto end;
    }

    
    e_contactinformations_type_local_nonprim = field_e_contactinformations_type_parseFromJSON(e_contactinformations_type); //custom

    // contactinformations_response->s_contactinformations_url
    cJSON *s_contactinformations_url = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "sContactinformationsUrl");
    if (s_contactinformations_url) { 
    if(!cJSON_IsString(s_contactinformations_url) && !cJSON_IsNull(s_contactinformations_url))
    {
    goto end; //String
    }
    }

    // contactinformations_response->obj_address_default
    cJSON *obj_address_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "objAddressDefault");
    if (obj_address_default) { 
    obj_address_default_local_nonprim = address_response_parseFromJSON(obj_address_default); //nonprimitive
    }

    // contactinformations_response->obj_phone_default
    cJSON *obj_phone_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "objPhoneDefault");
    if (obj_phone_default) { 
    obj_phone_default_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_default); //nonprimitive
    }

    // contactinformations_response->obj_email_default
    cJSON *obj_email_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "objEmailDefault");
    if (obj_email_default) { 
    obj_email_default_local_nonprim = email_response_parseFromJSON(obj_email_default); //nonprimitive
    }

    // contactinformations_response->obj_website_default
    cJSON *obj_website_default = cJSON_GetObjectItemCaseSensitive(contactinformations_responseJSON, "objWebsiteDefault");
    if (obj_website_default) { 
    obj_website_default_local_nonprim = website_response_parseFromJSON(obj_website_default); //nonprimitive
    }


    contactinformations_response_local_var = contactinformations_response_create (
        pki_contactinformations_id->valuedouble,
        fki_address_id_default ? fki_address_id_default->valuedouble : 0,
        fki_phone_id_default ? fki_phone_id_default->valuedouble : 0,
        fki_email_id_default ? fki_email_id_default->valuedouble : 0,
        fki_website_id_default ? fki_website_id_default->valuedouble : 0,
        e_contactinformations_type_local_nonprim,
        s_contactinformations_url && !cJSON_IsNull(s_contactinformations_url) ? strdup(s_contactinformations_url->valuestring) : NULL,
        obj_address_default ? obj_address_default_local_nonprim : NULL,
        obj_phone_default ? obj_phone_default_local_nonprim : NULL,
        obj_email_default ? obj_email_default_local_nonprim : NULL,
        obj_website_default ? obj_website_default_local_nonprim : NULL
        );

    return contactinformations_response_local_var;
end:
    if (e_contactinformations_type_local_nonprim) {
        field_e_contactinformations_type_free(e_contactinformations_type_local_nonprim);
        e_contactinformations_type_local_nonprim = NULL;
    }
    if (obj_address_default_local_nonprim) {
        address_response_free(obj_address_default_local_nonprim);
        obj_address_default_local_nonprim = NULL;
    }
    if (obj_phone_default_local_nonprim) {
        phone_response_compound_free(obj_phone_default_local_nonprim);
        obj_phone_default_local_nonprim = NULL;
    }
    if (obj_email_default_local_nonprim) {
        email_response_free(obj_email_default_local_nonprim);
        obj_email_default_local_nonprim = NULL;
    }
    if (obj_website_default_local_nonprim) {
        website_response_free(obj_website_default_local_nonprim);
        obj_website_default_local_nonprim = NULL;
    }
    return NULL;

}
