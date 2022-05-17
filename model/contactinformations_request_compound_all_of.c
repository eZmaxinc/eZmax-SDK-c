#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contactinformations_request_compound_all_of.h"



contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of_create(
    list_t *a_obj_address,
    list_t *a_obj_phone,
    list_t *a_obj_email,
    list_t *a_obj_website
    ) {
    contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of_local_var = malloc(sizeof(contactinformations_request_compound_all_of_t));
    if (!contactinformations_request_compound_all_of_local_var) {
        return NULL;
    }
    contactinformations_request_compound_all_of_local_var->a_obj_address = a_obj_address;
    contactinformations_request_compound_all_of_local_var->a_obj_phone = a_obj_phone;
    contactinformations_request_compound_all_of_local_var->a_obj_email = a_obj_email;
    contactinformations_request_compound_all_of_local_var->a_obj_website = a_obj_website;

    return contactinformations_request_compound_all_of_local_var;
}


void contactinformations_request_compound_all_of_free(contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of) {
    if(NULL == contactinformations_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (contactinformations_request_compound_all_of->a_obj_address) {
        list_ForEach(listEntry, contactinformations_request_compound_all_of->a_obj_address) {
            address_request_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_request_compound_all_of->a_obj_address);
        contactinformations_request_compound_all_of->a_obj_address = NULL;
    }
    if (contactinformations_request_compound_all_of->a_obj_phone) {
        list_ForEach(listEntry, contactinformations_request_compound_all_of->a_obj_phone) {
            phone_request_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_request_compound_all_of->a_obj_phone);
        contactinformations_request_compound_all_of->a_obj_phone = NULL;
    }
    if (contactinformations_request_compound_all_of->a_obj_email) {
        list_ForEach(listEntry, contactinformations_request_compound_all_of->a_obj_email) {
            email_request_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_request_compound_all_of->a_obj_email);
        contactinformations_request_compound_all_of->a_obj_email = NULL;
    }
    if (contactinformations_request_compound_all_of->a_obj_website) {
        list_ForEach(listEntry, contactinformations_request_compound_all_of->a_obj_website) {
            website_request_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_request_compound_all_of->a_obj_website);
        contactinformations_request_compound_all_of->a_obj_website = NULL;
    }
    free(contactinformations_request_compound_all_of);
}

cJSON *contactinformations_request_compound_all_of_convertToJSON(contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // contactinformations_request_compound_all_of->a_obj_address
    if (!contactinformations_request_compound_all_of->a_obj_address) {
        goto fail;
    }
    cJSON *a_obj_address = cJSON_AddArrayToObject(item, "a_objAddress");
    if(a_obj_address == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_addressListEntry;
    if (contactinformations_request_compound_all_of->a_obj_address) {
    list_ForEach(a_obj_addressListEntry, contactinformations_request_compound_all_of->a_obj_address) {
    cJSON *itemLocal = address_request_compound_convertToJSON(a_obj_addressListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_address, itemLocal);
    }
    }


    // contactinformations_request_compound_all_of->a_obj_phone
    if (!contactinformations_request_compound_all_of->a_obj_phone) {
        goto fail;
    }
    cJSON *a_obj_phone = cJSON_AddArrayToObject(item, "a_objPhone");
    if(a_obj_phone == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_phoneListEntry;
    if (contactinformations_request_compound_all_of->a_obj_phone) {
    list_ForEach(a_obj_phoneListEntry, contactinformations_request_compound_all_of->a_obj_phone) {
    cJSON *itemLocal = phone_request_compound_convertToJSON(a_obj_phoneListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_phone, itemLocal);
    }
    }


    // contactinformations_request_compound_all_of->a_obj_email
    if (!contactinformations_request_compound_all_of->a_obj_email) {
        goto fail;
    }
    cJSON *a_obj_email = cJSON_AddArrayToObject(item, "a_objEmail");
    if(a_obj_email == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_emailListEntry;
    if (contactinformations_request_compound_all_of->a_obj_email) {
    list_ForEach(a_obj_emailListEntry, contactinformations_request_compound_all_of->a_obj_email) {
    cJSON *itemLocal = email_request_compound_convertToJSON(a_obj_emailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_email, itemLocal);
    }
    }


    // contactinformations_request_compound_all_of->a_obj_website
    if (!contactinformations_request_compound_all_of->a_obj_website) {
        goto fail;
    }
    cJSON *a_obj_website = cJSON_AddArrayToObject(item, "a_objWebsite");
    if(a_obj_website == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_websiteListEntry;
    if (contactinformations_request_compound_all_of->a_obj_website) {
    list_ForEach(a_obj_websiteListEntry, contactinformations_request_compound_all_of->a_obj_website) {
    cJSON *itemLocal = website_request_compound_convertToJSON(a_obj_websiteListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_website, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of_parseFromJSON(cJSON *contactinformations_request_compound_all_ofJSON){

    contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of_local_var = NULL;

    // define the local list for contactinformations_request_compound_all_of->a_obj_address
    list_t *a_obj_addressList = NULL;

    // define the local list for contactinformations_request_compound_all_of->a_obj_phone
    list_t *a_obj_phoneList = NULL;

    // define the local list for contactinformations_request_compound_all_of->a_obj_email
    list_t *a_obj_emailList = NULL;

    // define the local list for contactinformations_request_compound_all_of->a_obj_website
    list_t *a_obj_websiteList = NULL;

    // contactinformations_request_compound_all_of->a_obj_address
    cJSON *a_obj_address = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compound_all_ofJSON, "a_objAddress");
    if (!a_obj_address) {
        goto end;
    }

    
    cJSON *a_obj_address_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_address)){
        goto end; //nonprimitive container
    }

    a_obj_addressList = list_createList();

    cJSON_ArrayForEach(a_obj_address_local_nonprimitive,a_obj_address )
    {
        if(!cJSON_IsObject(a_obj_address_local_nonprimitive)){
            goto end;
        }
        address_request_compound_t *a_obj_addressItem = address_request_compound_parseFromJSON(a_obj_address_local_nonprimitive);

        list_addElement(a_obj_addressList, a_obj_addressItem);
    }

    // contactinformations_request_compound_all_of->a_obj_phone
    cJSON *a_obj_phone = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compound_all_ofJSON, "a_objPhone");
    if (!a_obj_phone) {
        goto end;
    }

    
    cJSON *a_obj_phone_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_phone)){
        goto end; //nonprimitive container
    }

    a_obj_phoneList = list_createList();

    cJSON_ArrayForEach(a_obj_phone_local_nonprimitive,a_obj_phone )
    {
        if(!cJSON_IsObject(a_obj_phone_local_nonprimitive)){
            goto end;
        }
        phone_request_compound_t *a_obj_phoneItem = phone_request_compound_parseFromJSON(a_obj_phone_local_nonprimitive);

        list_addElement(a_obj_phoneList, a_obj_phoneItem);
    }

    // contactinformations_request_compound_all_of->a_obj_email
    cJSON *a_obj_email = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compound_all_ofJSON, "a_objEmail");
    if (!a_obj_email) {
        goto end;
    }

    
    cJSON *a_obj_email_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_email)){
        goto end; //nonprimitive container
    }

    a_obj_emailList = list_createList();

    cJSON_ArrayForEach(a_obj_email_local_nonprimitive,a_obj_email )
    {
        if(!cJSON_IsObject(a_obj_email_local_nonprimitive)){
            goto end;
        }
        email_request_compound_t *a_obj_emailItem = email_request_compound_parseFromJSON(a_obj_email_local_nonprimitive);

        list_addElement(a_obj_emailList, a_obj_emailItem);
    }

    // contactinformations_request_compound_all_of->a_obj_website
    cJSON *a_obj_website = cJSON_GetObjectItemCaseSensitive(contactinformations_request_compound_all_ofJSON, "a_objWebsite");
    if (!a_obj_website) {
        goto end;
    }

    
    cJSON *a_obj_website_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_website)){
        goto end; //nonprimitive container
    }

    a_obj_websiteList = list_createList();

    cJSON_ArrayForEach(a_obj_website_local_nonprimitive,a_obj_website )
    {
        if(!cJSON_IsObject(a_obj_website_local_nonprimitive)){
            goto end;
        }
        website_request_compound_t *a_obj_websiteItem = website_request_compound_parseFromJSON(a_obj_website_local_nonprimitive);

        list_addElement(a_obj_websiteList, a_obj_websiteItem);
    }


    contactinformations_request_compound_all_of_local_var = contactinformations_request_compound_all_of_create (
        a_obj_addressList,
        a_obj_phoneList,
        a_obj_emailList,
        a_obj_websiteList
        );

    return contactinformations_request_compound_all_of_local_var;
end:
    if (a_obj_addressList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_addressList) {
            address_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_addressList);
        a_obj_addressList = NULL;
    }
    if (a_obj_phoneList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_phoneList) {
            phone_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_phoneList);
        a_obj_phoneList = NULL;
    }
    if (a_obj_emailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_emailList) {
            email_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_emailList);
        a_obj_emailList = NULL;
    }
    if (a_obj_websiteList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_websiteList) {
            website_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_websiteList);
        a_obj_websiteList = NULL;
    }
    return NULL;

}
