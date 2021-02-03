#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contactinformations_request_compound.h"



contactinformations_request_compound_t *contactinformations_request_compound_create(
    list_t *a_obj_address,
    list_t *a_obj_phone,
    list_t *a_obj_email,
    list_t *a_obj_website,
    int i_address_default,
    int i_phone_default,
    int i_email_default,
    int i_website_default
    ) {
    contactinformations_request_compound_t *contactinformations_request_compound_local_var = malloc(sizeof(contactinformations_request_compound_t));
    if (!contactinformations_request_compound_local_var) {
        return NULL;
    }
    contactinformations_request_compound_local_var->a_obj_address = a_obj_address;
    contactinformations_request_compound_local_var->a_obj_phone = a_obj_phone;
    contactinformations_request_compound_local_var->a_obj_email = a_obj_email;
    contactinformations_request_compound_local_var->a_obj_website = a_obj_website;
    contactinformations_request_compound_local_var->i_address_default = i_address_default;
    contactinformations_request_compound_local_var->i_phone_default = i_phone_default;
    contactinformations_request_compound_local_var->i_email_default = i_email_default;
    contactinformations_request_compound_local_var->i_website_default = i_website_default;

    return contactinformations_request_compound_local_var;
}


void contactinformations_request_compound_free(contactinformations_request_compound_t *contactinformations_request_compound) {
    if(NULL == contactinformations_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (contactinformations_request_compound->a_obj_address) {
        list_ForEach(listEntry, contactinformations_request_compound->a_obj_address) {
            address_request_free(listEntry->data);
        }
        list_free(contactinformations_request_compound->a_obj_address);
        contactinformations_request_compound->a_obj_address = NULL;
    }
    if (contactinformations_request_compound->a_obj_phone) {
        list_ForEach(listEntry, contactinformations_request_compound->a_obj_phone) {
            phone_request_free(listEntry->data);
        }
        list_free(contactinformations_request_compound->a_obj_phone);
        contactinformations_request_compound->a_obj_phone = NULL;
    }
    if (contactinformations_request_compound->a_obj_email) {
        list_ForEach(listEntry, contactinformations_request_compound->a_obj_email) {
            email_request_free(listEntry->data);
        }
        list_free(contactinformations_request_compound->a_obj_email);
        contactinformations_request_compound->a_obj_email = NULL;
    }
    if (contactinformations_request_compound->a_obj_website) {
        list_ForEach(listEntry, contactinformations_request_compound->a_obj_website) {
            website_request_free(listEntry->data);
        }
        list_free(contactinformations_request_compound->a_obj_website);
        contactinformations_request_compound->a_obj_website = NULL;
    }
    free(contactinformations_request_compound);
}

cJSON *contactinformations_request_compound_convertToJSON(contactinformations_request_compound_t *contactinformations_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // contactinformations_request_compound->a_obj_address
    if (!contactinformations_request_compound->a_obj_address) {
        goto fail;
    }
    
    cJSON *a_obj_address = cJSON_AddArrayToObject(item, "a_objAddress");
    if(a_obj_address == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_addressListEntry;
    if (contactinformations_request_compound->a_obj_address) {
    list_ForEach(a_obj_addressListEntry, contactinformations_request_compound->a_obj_address) {
    cJSON *itemLocal = address_request_convertToJSON(a_obj_addressListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_address, itemLocal);
    }
    }


    // contactinformations_request_compound->a_obj_phone
    if (!contactinformations_request_compound->a_obj_phone) {
        goto fail;
    }
    
    cJSON *a_obj_phone = cJSON_AddArrayToObject(item, "a_objPhone");
    if(a_obj_phone == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_phoneListEntry;
    if (contactinformations_request_compound->a_obj_phone) {
    list_ForEach(a_obj_phoneListEntry, contactinformations_request_compound->a_obj_phone) {
    cJSON *itemLocal = phone_request_convertToJSON(a_obj_phoneListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_phone, itemLocal);
    }
    }


    // contactinformations_request_compound->a_obj_email
    if (!contactinformations_request_compound->a_obj_email) {
        goto fail;
    }
    
    cJSON *a_obj_email = cJSON_AddArrayToObject(item, "a_objEmail");
    if(a_obj_email == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_emailListEntry;
    if (contactinformations_request_compound->a_obj_email) {
    list_ForEach(a_obj_emailListEntry, contactinformations_request_compound->a_obj_email) {
    cJSON *itemLocal = email_request_convertToJSON(a_obj_emailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_email, itemLocal);
    }
    }


    // contactinformations_request_compound->a_obj_website
    if (!contactinformations_request_compound->a_obj_website) {
        goto fail;
    }
    
    cJSON *a_obj_website = cJSON_AddArrayToObject(item, "a_objWebsite");
    if(a_obj_website == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_websiteListEntry;
    if (contactinformations_request_compound->a_obj_website) {
    list_ForEach(a_obj_websiteListEntry, contactinformations_request_compound->a_obj_website) {
    cJSON *itemLocal = website_request_convertToJSON(a_obj_websiteListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_website, itemLocal);
    }
    }


    // contactinformations_request_compound->i_address_default
    if (!contactinformations_request_compound->i_address_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iAddressDefault", contactinformations_request_compound->i_address_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request_compound->i_phone_default
    if (!contactinformations_request_compound->i_phone_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iPhoneDefault", contactinformations_request_compound->i_phone_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request_compound->i_email_default
    if (!contactinformations_request_compound->i_email_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEmailDefault", contactinformations_request_compound->i_email_default) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_request_compound->i_website_default
    if (!contactinformations_request_compound->i_website_default) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iWebsiteDefault", contactinformations_request_compound->i_website_default) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contactinformations_request_compound_t *contactinformations_request_compound_parseFromJSON(cJSON *contactinformations_request_compoundJSON){

    contactinformations_request_compound_t *contactinformations_request_compound_local_var = NULL;

    // contactinformations_request_compound->a_obj_address
    cJSON *a_obj_address = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "a_objAddress");
    if (!a_obj_address) {
        goto end;
    }

    list_t *a_obj_addressList;
    
    cJSON *a_obj_address_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_address)){
        goto end; //nonprimitive container
    }

    a_obj_addressList = list_create();

    cJSON_ArrayForEach(a_obj_address_local_nonprimitive,a_obj_address )
    {
        if(!cJSON_IsObject(a_obj_address_local_nonprimitive)){
            goto end;
        }
        address_request_t *a_obj_addressItem = address_request_parseFromJSON(a_obj_address_local_nonprimitive);

        list_addElement(a_obj_addressList, a_obj_addressItem);
    }

    // contactinformations_request_compound->a_obj_phone
    cJSON *a_obj_phone = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "a_objPhone");
    if (!a_obj_phone) {
        goto end;
    }

    list_t *a_obj_phoneList;
    
    cJSON *a_obj_phone_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_phone)){
        goto end; //nonprimitive container
    }

    a_obj_phoneList = list_create();

    cJSON_ArrayForEach(a_obj_phone_local_nonprimitive,a_obj_phone )
    {
        if(!cJSON_IsObject(a_obj_phone_local_nonprimitive)){
            goto end;
        }
        phone_request_t *a_obj_phoneItem = phone_request_parseFromJSON(a_obj_phone_local_nonprimitive);

        list_addElement(a_obj_phoneList, a_obj_phoneItem);
    }

    // contactinformations_request_compound->a_obj_email
    cJSON *a_obj_email = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "a_objEmail");
    if (!a_obj_email) {
        goto end;
    }

    list_t *a_obj_emailList;
    
    cJSON *a_obj_email_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_email)){
        goto end; //nonprimitive container
    }

    a_obj_emailList = list_create();

    cJSON_ArrayForEach(a_obj_email_local_nonprimitive,a_obj_email )
    {
        if(!cJSON_IsObject(a_obj_email_local_nonprimitive)){
            goto end;
        }
        email_request_t *a_obj_emailItem = email_request_parseFromJSON(a_obj_email_local_nonprimitive);

        list_addElement(a_obj_emailList, a_obj_emailItem);
    }

    // contactinformations_request_compound->a_obj_website
    cJSON *a_obj_website = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "a_objWebsite");
    if (!a_obj_website) {
        goto end;
    }

    list_t *a_obj_websiteList;
    
    cJSON *a_obj_website_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_website)){
        goto end; //nonprimitive container
    }

    a_obj_websiteList = list_create();

    cJSON_ArrayForEach(a_obj_website_local_nonprimitive,a_obj_website )
    {
        if(!cJSON_IsObject(a_obj_website_local_nonprimitive)){
            goto end;
        }
        website_request_t *a_obj_websiteItem = website_request_parseFromJSON(a_obj_website_local_nonprimitive);

        list_addElement(a_obj_websiteList, a_obj_websiteItem);
    }

    // contactinformations_request_compound->i_address_default
    cJSON *i_address_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "iAddressDefault");
    if (!i_address_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_address_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request_compound->i_phone_default
    cJSON *i_phone_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "iPhoneDefault");
    if (!i_phone_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_phone_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request_compound->i_email_default
    cJSON *i_email_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "iEmailDefault");
    if (!i_email_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_email_default))
    {
    goto end; //Numeric
    }

    // contactinformations_request_compound->i_website_default
    cJSON *i_website_default = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compoundJSON, "iWebsiteDefault");
    if (!i_website_default) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_website_default))
    {
    goto end; //Numeric
    }


    contactinformations_request_compound_local_var = contactinformations_request_compound_create (
        a_obj_addressList,
        a_obj_phoneList,
        a_obj_emailList,
        a_obj_websiteList,
        i_address_default->valuedouble,
        i_phone_default->valuedouble,
        i_email_default->valuedouble,
        i_website_default->valuedouble
        );

    return contactinformations_request_compound_local_var;
end:
    return NULL;

}
