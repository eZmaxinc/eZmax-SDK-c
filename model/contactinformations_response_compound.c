#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contactinformations_response_compound.h"



static contactinformations_response_compound_t *contactinformations_response_compound_create_internal(
    int pki_contactinformations_id,
    int fki_address_id_default,
    int fki_phone_id_default,
    int fki_email_id_default,
    int fki_website_id_default,
    ezmax_api_definition__full_field_e_contactinformations_type__e e_contactinformations_type,
    char *s_contactinformations_url,
    address_response_compound_t *obj_address_default,
    phone_response_compound_t *obj_phone_default,
    email_response_compound_t *obj_email_default,
    website_response_compound_t *obj_website_default,
    list_t *a_obj_address,
    list_t *a_obj_phone,
    list_t *a_obj_email,
    list_t *a_obj_website
    ) {
    contactinformations_response_compound_t *contactinformations_response_compound_local_var = malloc(sizeof(contactinformations_response_compound_t));
    if (!contactinformations_response_compound_local_var) {
        return NULL;
    }
    contactinformations_response_compound_local_var->pki_contactinformations_id = pki_contactinformations_id;
    contactinformations_response_compound_local_var->fki_address_id_default = fki_address_id_default;
    contactinformations_response_compound_local_var->fki_phone_id_default = fki_phone_id_default;
    contactinformations_response_compound_local_var->fki_email_id_default = fki_email_id_default;
    contactinformations_response_compound_local_var->fki_website_id_default = fki_website_id_default;
    contactinformations_response_compound_local_var->e_contactinformations_type = e_contactinformations_type;
    contactinformations_response_compound_local_var->s_contactinformations_url = s_contactinformations_url;
    contactinformations_response_compound_local_var->obj_address_default = obj_address_default;
    contactinformations_response_compound_local_var->obj_phone_default = obj_phone_default;
    contactinformations_response_compound_local_var->obj_email_default = obj_email_default;
    contactinformations_response_compound_local_var->obj_website_default = obj_website_default;
    contactinformations_response_compound_local_var->a_obj_address = a_obj_address;
    contactinformations_response_compound_local_var->a_obj_phone = a_obj_phone;
    contactinformations_response_compound_local_var->a_obj_email = a_obj_email;
    contactinformations_response_compound_local_var->a_obj_website = a_obj_website;

    contactinformations_response_compound_local_var->_library_owned = 1;
    return contactinformations_response_compound_local_var;
}

__attribute__((deprecated)) contactinformations_response_compound_t *contactinformations_response_compound_create(
    int pki_contactinformations_id,
    int fki_address_id_default,
    int fki_phone_id_default,
    int fki_email_id_default,
    int fki_website_id_default,
    ezmax_api_definition__full_field_e_contactinformations_type__e e_contactinformations_type,
    char *s_contactinformations_url,
    address_response_compound_t *obj_address_default,
    phone_response_compound_t *obj_phone_default,
    email_response_compound_t *obj_email_default,
    website_response_compound_t *obj_website_default,
    list_t *a_obj_address,
    list_t *a_obj_phone,
    list_t *a_obj_email,
    list_t *a_obj_website
    ) {
    return contactinformations_response_compound_create_internal (
        pki_contactinformations_id,
        fki_address_id_default,
        fki_phone_id_default,
        fki_email_id_default,
        fki_website_id_default,
        e_contactinformations_type,
        s_contactinformations_url,
        obj_address_default,
        obj_phone_default,
        obj_email_default,
        obj_website_default,
        a_obj_address,
        a_obj_phone,
        a_obj_email,
        a_obj_website
        );
}

void contactinformations_response_compound_free(contactinformations_response_compound_t *contactinformations_response_compound) {
    if(NULL == contactinformations_response_compound){
        return ;
    }
    if(contactinformations_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "contactinformations_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (contactinformations_response_compound->s_contactinformations_url) {
        free(contactinformations_response_compound->s_contactinformations_url);
        contactinformations_response_compound->s_contactinformations_url = NULL;
    }
    if (contactinformations_response_compound->obj_address_default) {
        address_response_compound_free(contactinformations_response_compound->obj_address_default);
        contactinformations_response_compound->obj_address_default = NULL;
    }
    if (contactinformations_response_compound->obj_phone_default) {
        phone_response_compound_free(contactinformations_response_compound->obj_phone_default);
        contactinformations_response_compound->obj_phone_default = NULL;
    }
    if (contactinformations_response_compound->obj_email_default) {
        email_response_compound_free(contactinformations_response_compound->obj_email_default);
        contactinformations_response_compound->obj_email_default = NULL;
    }
    if (contactinformations_response_compound->obj_website_default) {
        website_response_compound_free(contactinformations_response_compound->obj_website_default);
        contactinformations_response_compound->obj_website_default = NULL;
    }
    if (contactinformations_response_compound->a_obj_address) {
        list_ForEach(listEntry, contactinformations_response_compound->a_obj_address) {
            address_response_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_response_compound->a_obj_address);
        contactinformations_response_compound->a_obj_address = NULL;
    }
    if (contactinformations_response_compound->a_obj_phone) {
        list_ForEach(listEntry, contactinformations_response_compound->a_obj_phone) {
            phone_response_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_response_compound->a_obj_phone);
        contactinformations_response_compound->a_obj_phone = NULL;
    }
    if (contactinformations_response_compound->a_obj_email) {
        list_ForEach(listEntry, contactinformations_response_compound->a_obj_email) {
            email_response_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_response_compound->a_obj_email);
        contactinformations_response_compound->a_obj_email = NULL;
    }
    if (contactinformations_response_compound->a_obj_website) {
        list_ForEach(listEntry, contactinformations_response_compound->a_obj_website) {
            website_response_compound_free(listEntry->data);
        }
        list_freeList(contactinformations_response_compound->a_obj_website);
        contactinformations_response_compound->a_obj_website = NULL;
    }
    free(contactinformations_response_compound);
}

cJSON *contactinformations_response_compound_convertToJSON(contactinformations_response_compound_t *contactinformations_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // contactinformations_response_compound->pki_contactinformations_id
    if (!contactinformations_response_compound->pki_contactinformations_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiContactinformationsID", contactinformations_response_compound->pki_contactinformations_id) == NULL) {
    goto fail; //Numeric
    }


    // contactinformations_response_compound->fki_address_id_default
    if(contactinformations_response_compound->fki_address_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiAddressIDDefault", contactinformations_response_compound->fki_address_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response_compound->fki_phone_id_default
    if(contactinformations_response_compound->fki_phone_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiPhoneIDDefault", contactinformations_response_compound->fki_phone_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response_compound->fki_email_id_default
    if(contactinformations_response_compound->fki_email_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiEmailIDDefault", contactinformations_response_compound->fki_email_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response_compound->fki_website_id_default
    if(contactinformations_response_compound->fki_website_id_default) {
    if(cJSON_AddNumberToObject(item, "fkiWebsiteIDDefault", contactinformations_response_compound->fki_website_id_default) == NULL) {
    goto fail; //Numeric
    }
    }


    // contactinformations_response_compound->e_contactinformations_type
    if (ezmax_api_definition__full_field_e_contactinformations_type__NULL == contactinformations_response_compound->e_contactinformations_type) {
        goto fail;
    }
    cJSON *e_contactinformations_type_local_JSON = field_e_contactinformations_type_convertToJSON(contactinformations_response_compound->e_contactinformations_type);
    if(e_contactinformations_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eContactinformationsType", e_contactinformations_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // contactinformations_response_compound->s_contactinformations_url
    if(contactinformations_response_compound->s_contactinformations_url) {
    if(cJSON_AddStringToObject(item, "sContactinformationsUrl", contactinformations_response_compound->s_contactinformations_url) == NULL) {
    goto fail; //String
    }
    }


    // contactinformations_response_compound->obj_address_default
    if(contactinformations_response_compound->obj_address_default) {
    cJSON *obj_address_default_local_JSON = address_response_compound_convertToJSON(contactinformations_response_compound->obj_address_default);
    if(obj_address_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddressDefault", obj_address_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contactinformations_response_compound->obj_phone_default
    if(contactinformations_response_compound->obj_phone_default) {
    cJSON *obj_phone_default_local_JSON = phone_response_compound_convertToJSON(contactinformations_response_compound->obj_phone_default);
    if(obj_phone_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneDefault", obj_phone_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contactinformations_response_compound->obj_email_default
    if(contactinformations_response_compound->obj_email_default) {
    cJSON *obj_email_default_local_JSON = email_response_compound_convertToJSON(contactinformations_response_compound->obj_email_default);
    if(obj_email_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmailDefault", obj_email_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contactinformations_response_compound->obj_website_default
    if(contactinformations_response_compound->obj_website_default) {
    cJSON *obj_website_default_local_JSON = website_response_compound_convertToJSON(contactinformations_response_compound->obj_website_default);
    if(obj_website_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebsiteDefault", obj_website_default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contactinformations_response_compound->a_obj_address
    if (!contactinformations_response_compound->a_obj_address) {
        goto fail;
    }
    cJSON *a_obj_address = cJSON_AddArrayToObject(item, "a_objAddress");
    if(a_obj_address == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_addressListEntry;
    if (contactinformations_response_compound->a_obj_address) {
    list_ForEach(a_obj_addressListEntry, contactinformations_response_compound->a_obj_address) {
    cJSON *itemLocal = address_response_compound_convertToJSON(a_obj_addressListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_address, itemLocal);
    }
    }


    // contactinformations_response_compound->a_obj_phone
    if (!contactinformations_response_compound->a_obj_phone) {
        goto fail;
    }
    cJSON *a_obj_phone = cJSON_AddArrayToObject(item, "a_objPhone");
    if(a_obj_phone == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_phoneListEntry;
    if (contactinformations_response_compound->a_obj_phone) {
    list_ForEach(a_obj_phoneListEntry, contactinformations_response_compound->a_obj_phone) {
    cJSON *itemLocal = phone_response_compound_convertToJSON(a_obj_phoneListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_phone, itemLocal);
    }
    }


    // contactinformations_response_compound->a_obj_email
    if (!contactinformations_response_compound->a_obj_email) {
        goto fail;
    }
    cJSON *a_obj_email = cJSON_AddArrayToObject(item, "a_objEmail");
    if(a_obj_email == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_emailListEntry;
    if (contactinformations_response_compound->a_obj_email) {
    list_ForEach(a_obj_emailListEntry, contactinformations_response_compound->a_obj_email) {
    cJSON *itemLocal = email_response_compound_convertToJSON(a_obj_emailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_email, itemLocal);
    }
    }


    // contactinformations_response_compound->a_obj_website
    if (!contactinformations_response_compound->a_obj_website) {
        goto fail;
    }
    cJSON *a_obj_website = cJSON_AddArrayToObject(item, "a_objWebsite");
    if(a_obj_website == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_websiteListEntry;
    if (contactinformations_response_compound->a_obj_website) {
    list_ForEach(a_obj_websiteListEntry, contactinformations_response_compound->a_obj_website) {
    cJSON *itemLocal = website_response_compound_convertToJSON(a_obj_websiteListEntry->data);
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

contactinformations_response_compound_t *contactinformations_response_compound_parseFromJSON(cJSON *contactinformations_response_compoundJSON){

    contactinformations_response_compound_t *contactinformations_response_compound_local_var = NULL;

    // define the local variable for contactinformations_response_compound->e_contactinformations_type
    ezmax_api_definition__full_field_e_contactinformations_type__e e_contactinformations_type_local_nonprim = 0;

    // define the local variable for contactinformations_response_compound->obj_address_default
    address_response_compound_t *obj_address_default_local_nonprim = NULL;

    // define the local variable for contactinformations_response_compound->obj_phone_default
    phone_response_compound_t *obj_phone_default_local_nonprim = NULL;

    // define the local variable for contactinformations_response_compound->obj_email_default
    email_response_compound_t *obj_email_default_local_nonprim = NULL;

    // define the local variable for contactinformations_response_compound->obj_website_default
    website_response_compound_t *obj_website_default_local_nonprim = NULL;

    // define the local list for contactinformations_response_compound->a_obj_address
    list_t *a_obj_addressList = NULL;

    // define the local list for contactinformations_response_compound->a_obj_phone
    list_t *a_obj_phoneList = NULL;

    // define the local list for contactinformations_response_compound->a_obj_email
    list_t *a_obj_emailList = NULL;

    // define the local list for contactinformations_response_compound->a_obj_website
    list_t *a_obj_websiteList = NULL;

    // contactinformations_response_compound->pki_contactinformations_id
    cJSON *pki_contactinformations_id = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "pkiContactinformationsID");
    if (cJSON_IsNull(pki_contactinformations_id)) {
        pki_contactinformations_id = NULL;
    }
    if (!pki_contactinformations_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_contactinformations_id))
    {
    goto end; //Numeric
    }

    // contactinformations_response_compound->fki_address_id_default
    cJSON *fki_address_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "fkiAddressIDDefault");
    if (cJSON_IsNull(fki_address_id_default)) {
        fki_address_id_default = NULL;
    }
    if (fki_address_id_default) { 
    if(!cJSON_IsNumber(fki_address_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response_compound->fki_phone_id_default
    cJSON *fki_phone_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "fkiPhoneIDDefault");
    if (cJSON_IsNull(fki_phone_id_default)) {
        fki_phone_id_default = NULL;
    }
    if (fki_phone_id_default) { 
    if(!cJSON_IsNumber(fki_phone_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response_compound->fki_email_id_default
    cJSON *fki_email_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "fkiEmailIDDefault");
    if (cJSON_IsNull(fki_email_id_default)) {
        fki_email_id_default = NULL;
    }
    if (fki_email_id_default) { 
    if(!cJSON_IsNumber(fki_email_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response_compound->fki_website_id_default
    cJSON *fki_website_id_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "fkiWebsiteIDDefault");
    if (cJSON_IsNull(fki_website_id_default)) {
        fki_website_id_default = NULL;
    }
    if (fki_website_id_default) { 
    if(!cJSON_IsNumber(fki_website_id_default))
    {
    goto end; //Numeric
    }
    }

    // contactinformations_response_compound->e_contactinformations_type
    cJSON *e_contactinformations_type = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "eContactinformationsType");
    if (cJSON_IsNull(e_contactinformations_type)) {
        e_contactinformations_type = NULL;
    }
    if (!e_contactinformations_type) {
        goto end;
    }

    
    e_contactinformations_type_local_nonprim = field_e_contactinformations_type_parseFromJSON(e_contactinformations_type); //custom

    // contactinformations_response_compound->s_contactinformations_url
    cJSON *s_contactinformations_url = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "sContactinformationsUrl");
    if (cJSON_IsNull(s_contactinformations_url)) {
        s_contactinformations_url = NULL;
    }
    if (s_contactinformations_url) { 
    if(!cJSON_IsString(s_contactinformations_url) && !cJSON_IsNull(s_contactinformations_url))
    {
    goto end; //String
    }
    }

    // contactinformations_response_compound->obj_address_default
    cJSON *obj_address_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "objAddressDefault");
    if (cJSON_IsNull(obj_address_default)) {
        obj_address_default = NULL;
    }
    if (obj_address_default) { 
    obj_address_default_local_nonprim = address_response_compound_parseFromJSON(obj_address_default); //nonprimitive
    }

    // contactinformations_response_compound->obj_phone_default
    cJSON *obj_phone_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "objPhoneDefault");
    if (cJSON_IsNull(obj_phone_default)) {
        obj_phone_default = NULL;
    }
    if (obj_phone_default) { 
    obj_phone_default_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_default); //nonprimitive
    }

    // contactinformations_response_compound->obj_email_default
    cJSON *obj_email_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "objEmailDefault");
    if (cJSON_IsNull(obj_email_default)) {
        obj_email_default = NULL;
    }
    if (obj_email_default) { 
    obj_email_default_local_nonprim = email_response_compound_parseFromJSON(obj_email_default); //nonprimitive
    }

    // contactinformations_response_compound->obj_website_default
    cJSON *obj_website_default = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "objWebsiteDefault");
    if (cJSON_IsNull(obj_website_default)) {
        obj_website_default = NULL;
    }
    if (obj_website_default) { 
    obj_website_default_local_nonprim = website_response_compound_parseFromJSON(obj_website_default); //nonprimitive
    }

    // contactinformations_response_compound->a_obj_address
    cJSON *a_obj_address = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "a_objAddress");
    if (cJSON_IsNull(a_obj_address)) {
        a_obj_address = NULL;
    }
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
        address_response_compound_t *a_obj_addressItem = address_response_compound_parseFromJSON(a_obj_address_local_nonprimitive);

        list_addElement(a_obj_addressList, a_obj_addressItem);
    }

    // contactinformations_response_compound->a_obj_phone
    cJSON *a_obj_phone = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "a_objPhone");
    if (cJSON_IsNull(a_obj_phone)) {
        a_obj_phone = NULL;
    }
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
        phone_response_compound_t *a_obj_phoneItem = phone_response_compound_parseFromJSON(a_obj_phone_local_nonprimitive);

        list_addElement(a_obj_phoneList, a_obj_phoneItem);
    }

    // contactinformations_response_compound->a_obj_email
    cJSON *a_obj_email = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "a_objEmail");
    if (cJSON_IsNull(a_obj_email)) {
        a_obj_email = NULL;
    }
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
        email_response_compound_t *a_obj_emailItem = email_response_compound_parseFromJSON(a_obj_email_local_nonprimitive);

        list_addElement(a_obj_emailList, a_obj_emailItem);
    }

    // contactinformations_response_compound->a_obj_website
    cJSON *a_obj_website = cJSON_GetObjectItemCaseSensitive(contactinformations_response_compoundJSON, "a_objWebsite");
    if (cJSON_IsNull(a_obj_website)) {
        a_obj_website = NULL;
    }
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
        website_response_compound_t *a_obj_websiteItem = website_response_compound_parseFromJSON(a_obj_website_local_nonprimitive);

        list_addElement(a_obj_websiteList, a_obj_websiteItem);
    }


    contactinformations_response_compound_local_var = contactinformations_response_compound_create_internal (
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
        obj_website_default ? obj_website_default_local_nonprim : NULL,
        a_obj_addressList,
        a_obj_phoneList,
        a_obj_emailList,
        a_obj_websiteList
        );

    return contactinformations_response_compound_local_var;
end:
    if (e_contactinformations_type_local_nonprim) {
        e_contactinformations_type_local_nonprim = 0;
    }
    if (obj_address_default_local_nonprim) {
        address_response_compound_free(obj_address_default_local_nonprim);
        obj_address_default_local_nonprim = NULL;
    }
    if (obj_phone_default_local_nonprim) {
        phone_response_compound_free(obj_phone_default_local_nonprim);
        obj_phone_default_local_nonprim = NULL;
    }
    if (obj_email_default_local_nonprim) {
        email_response_compound_free(obj_email_default_local_nonprim);
        obj_email_default_local_nonprim = NULL;
    }
    if (obj_website_default_local_nonprim) {
        website_response_compound_free(obj_website_default_local_nonprim);
        obj_website_default_local_nonprim = NULL;
    }
    if (a_obj_addressList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_addressList) {
            address_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_addressList);
        a_obj_addressList = NULL;
    }
    if (a_obj_phoneList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_phoneList) {
            phone_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_phoneList);
        a_obj_phoneList = NULL;
    }
    if (a_obj_emailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_emailList) {
            email_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_emailList);
        a_obj_emailList = NULL;
    }
    if (a_obj_websiteList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_websiteList) {
            website_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_websiteList);
        a_obj_websiteList = NULL;
    }
    return NULL;

}
