#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxpartner_response_compound.h"



static ezmaxpartner_response_compound_t *ezmaxpartner_response_compound_create_internal(
    ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e e_ezmaxpartner_customdevelopment,
    multilingual_ezmaxpartner_address_t *obj_ezmaxpartner_address,
    multilingual_ezmaxpartner_description_t *obj_ezmaxpartner_description,
    multilingual_ezmaxpartner_emailaddress_t *obj_ezmaxpartner_emailaddress,
    multilingual_ezmaxpartner_name_t *obj_ezmaxpartner_name,
    multilingual_ezmaxpartner_phone_e164_t *obj_ezmaxpartner_phone_e164,
    multilingual_ezmaxpartner_shortdescription_t *obj_ezmaxpartner_shortdescription,
    multilingual_ezmaxpartner_url_t *obj_ezmaxpartner_url,
    int *b_ezmaxpartner_isactive,
    multilingual_ezmaxpartner_logourl_t *obj_ezmaxpartner_logourl
    ) {
    ezmaxpartner_response_compound_t *ezmaxpartner_response_compound_local_var = malloc(sizeof(ezmaxpartner_response_compound_t));
    if (!ezmaxpartner_response_compound_local_var) {
        return NULL;
    }
    memset(ezmaxpartner_response_compound_local_var, 0, sizeof(ezmaxpartner_response_compound_t));
    ezmaxpartner_response_compound_local_var->_library_owned = 1;
    ezmaxpartner_response_compound_local_var->e_ezmaxpartner_customdevelopment = e_ezmaxpartner_customdevelopment;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_address = obj_ezmaxpartner_address;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_description = obj_ezmaxpartner_description;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_emailaddress = obj_ezmaxpartner_emailaddress;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_name = obj_ezmaxpartner_name;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_phone_e164 = obj_ezmaxpartner_phone_e164;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_shortdescription = obj_ezmaxpartner_shortdescription;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_url = obj_ezmaxpartner_url;
    ezmaxpartner_response_compound_local_var->b_ezmaxpartner_isactive = b_ezmaxpartner_isactive;
    ezmaxpartner_response_compound_local_var->obj_ezmaxpartner_logourl = obj_ezmaxpartner_logourl;
    return ezmaxpartner_response_compound_local_var;
}

__attribute__((deprecated)) ezmaxpartner_response_compound_t *ezmaxpartner_response_compound_create(
    ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e e_ezmaxpartner_customdevelopment,
    multilingual_ezmaxpartner_address_t *obj_ezmaxpartner_address,
    multilingual_ezmaxpartner_description_t *obj_ezmaxpartner_description,
    multilingual_ezmaxpartner_emailaddress_t *obj_ezmaxpartner_emailaddress,
    multilingual_ezmaxpartner_name_t *obj_ezmaxpartner_name,
    multilingual_ezmaxpartner_phone_e164_t *obj_ezmaxpartner_phone_e164,
    multilingual_ezmaxpartner_shortdescription_t *obj_ezmaxpartner_shortdescription,
    multilingual_ezmaxpartner_url_t *obj_ezmaxpartner_url,
    int *b_ezmaxpartner_isactive,
    multilingual_ezmaxpartner_logourl_t *obj_ezmaxpartner_logourl
    ) {
    int *b_ezmaxpartner_isactive_copy = NULL;
    if (b_ezmaxpartner_isactive) {
        b_ezmaxpartner_isactive_copy = malloc(sizeof(int));
        if (b_ezmaxpartner_isactive_copy) *b_ezmaxpartner_isactive_copy = *b_ezmaxpartner_isactive;
    }
    ezmaxpartner_response_compound_t *result = ezmaxpartner_response_compound_create_internal (
        e_ezmaxpartner_customdevelopment,
        obj_ezmaxpartner_address,
        obj_ezmaxpartner_description,
        obj_ezmaxpartner_emailaddress,
        obj_ezmaxpartner_name,
        obj_ezmaxpartner_phone_e164,
        obj_ezmaxpartner_shortdescription,
        obj_ezmaxpartner_url,
        b_ezmaxpartner_isactive_copy,
        obj_ezmaxpartner_logourl
        );
    if (!result) {
        free(b_ezmaxpartner_isactive_copy);
    }
    return result;
}

void ezmaxpartner_response_compound_free(ezmaxpartner_response_compound_t *ezmaxpartner_response_compound) {
    if(NULL == ezmaxpartner_response_compound){
        return ;
    }
    if(ezmaxpartner_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxpartner_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_address) {
        multilingual_ezmaxpartner_address_free(ezmaxpartner_response_compound->obj_ezmaxpartner_address);
        ezmaxpartner_response_compound->obj_ezmaxpartner_address = NULL;
    }
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_description) {
        multilingual_ezmaxpartner_description_free(ezmaxpartner_response_compound->obj_ezmaxpartner_description);
        ezmaxpartner_response_compound->obj_ezmaxpartner_description = NULL;
    }
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress) {
        multilingual_ezmaxpartner_emailaddress_free(ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress);
        ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress = NULL;
    }
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_name) {
        multilingual_ezmaxpartner_name_free(ezmaxpartner_response_compound->obj_ezmaxpartner_name);
        ezmaxpartner_response_compound->obj_ezmaxpartner_name = NULL;
    }
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164) {
        multilingual_ezmaxpartner_phone_e164_free(ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164);
        ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164 = NULL;
    }
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription) {
        multilingual_ezmaxpartner_shortdescription_free(ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription);
        ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription = NULL;
    }
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_url) {
        multilingual_ezmaxpartner_url_free(ezmaxpartner_response_compound->obj_ezmaxpartner_url);
        ezmaxpartner_response_compound->obj_ezmaxpartner_url = NULL;
    }
    if (ezmaxpartner_response_compound->b_ezmaxpartner_isactive) {
        free(ezmaxpartner_response_compound->b_ezmaxpartner_isactive);
        ezmaxpartner_response_compound->b_ezmaxpartner_isactive = NULL;
    }
    if (ezmaxpartner_response_compound->obj_ezmaxpartner_logourl) {
        multilingual_ezmaxpartner_logourl_free(ezmaxpartner_response_compound->obj_ezmaxpartner_logourl);
        ezmaxpartner_response_compound->obj_ezmaxpartner_logourl = NULL;
    }
    free(ezmaxpartner_response_compound);
}

cJSON *ezmaxpartner_response_compound_convertToJSON(ezmaxpartner_response_compound_t *ezmaxpartner_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxpartner_response_compound->e_ezmaxpartner_customdevelopment
    if (ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__NULL == ezmaxpartner_response_compound->e_ezmaxpartner_customdevelopment) {
        goto fail;
    }
    cJSON *e_ezmaxpartner_customdevelopment_local_JSON = field_e_ezmaxpartner_customdevelopment_convertToJSON(ezmaxpartner_response_compound->e_ezmaxpartner_customdevelopment);
    if(e_ezmaxpartner_customdevelopment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxpartnerCustomdevelopment", e_ezmaxpartner_customdevelopment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_address
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_address) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_address_local_JSON = multilingual_ezmaxpartner_address_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_address);
    if(obj_ezmaxpartner_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerAddress", obj_ezmaxpartner_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_description
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_description) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_description_local_JSON = multilingual_ezmaxpartner_description_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_description);
    if(obj_ezmaxpartner_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerDescription", obj_ezmaxpartner_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_emailaddress_local_JSON = multilingual_ezmaxpartner_emailaddress_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress);
    if(obj_ezmaxpartner_emailaddress_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerEmailaddress", obj_ezmaxpartner_emailaddress_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_name
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_name) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_name_local_JSON = multilingual_ezmaxpartner_name_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_name);
    if(obj_ezmaxpartner_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerName", obj_ezmaxpartner_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_phone_e164_local_JSON = multilingual_ezmaxpartner_phone_e164_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164);
    if(obj_ezmaxpartner_phone_e164_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerPhoneE164", obj_ezmaxpartner_phone_e164_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_shortdescription_local_JSON = multilingual_ezmaxpartner_shortdescription_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription);
    if(obj_ezmaxpartner_shortdescription_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerShortdescription", obj_ezmaxpartner_shortdescription_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_url
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_url) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_url_local_JSON = multilingual_ezmaxpartner_url_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_url);
    if(obj_ezmaxpartner_url_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerUrl", obj_ezmaxpartner_url_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxpartner_response_compound->b_ezmaxpartner_isactive
    if(ezmaxpartner_response_compound->b_ezmaxpartner_isactive) {
    if(cJSON_AddBoolToObject(item, "bEzmaxpartnerIsactive", *ezmaxpartner_response_compound->b_ezmaxpartner_isactive) == NULL) {
    goto fail; //Bool
    }
    }


    // ezmaxpartner_response_compound->obj_ezmaxpartner_logourl
    if (!ezmaxpartner_response_compound->obj_ezmaxpartner_logourl) {
        goto fail;
    }
    cJSON *obj_ezmaxpartner_logourl_local_JSON = multilingual_ezmaxpartner_logourl_convertToJSON(ezmaxpartner_response_compound->obj_ezmaxpartner_logourl);
    if(obj_ezmaxpartner_logourl_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerLogourl", obj_ezmaxpartner_logourl_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxpartner_response_compound_t *ezmaxpartner_response_compound_parseFromJSON(cJSON *ezmaxpartner_response_compoundJSON){

    ezmaxpartner_response_compound_t *ezmaxpartner_response_compound_local_var = NULL;

    // define the local variable for ezmaxpartner_response_compound->e_ezmaxpartner_customdevelopment
    ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e e_ezmaxpartner_customdevelopment_local_nonprim = 0;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_address
    multilingual_ezmaxpartner_address_t *obj_ezmaxpartner_address_local_nonprim = NULL;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_description
    multilingual_ezmaxpartner_description_t *obj_ezmaxpartner_description_local_nonprim = NULL;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress
    multilingual_ezmaxpartner_emailaddress_t *obj_ezmaxpartner_emailaddress_local_nonprim = NULL;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_name
    multilingual_ezmaxpartner_name_t *obj_ezmaxpartner_name_local_nonprim = NULL;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164
    multilingual_ezmaxpartner_phone_e164_t *obj_ezmaxpartner_phone_e164_local_nonprim = NULL;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription
    multilingual_ezmaxpartner_shortdescription_t *obj_ezmaxpartner_shortdescription_local_nonprim = NULL;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_url
    multilingual_ezmaxpartner_url_t *obj_ezmaxpartner_url_local_nonprim = NULL;

    // define the local variable for ezmaxpartner_response_compound->b_ezmaxpartner_isactive
    int *b_ezmaxpartner_isactive_local_var = NULL;

    // define the local variable for ezmaxpartner_response_compound->obj_ezmaxpartner_logourl
    multilingual_ezmaxpartner_logourl_t *obj_ezmaxpartner_logourl_local_nonprim = NULL;

    // ezmaxpartner_response_compound->e_ezmaxpartner_customdevelopment
    cJSON *e_ezmaxpartner_customdevelopment = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "eEzmaxpartnerCustomdevelopment");
    if (cJSON_IsNull(e_ezmaxpartner_customdevelopment)) {
        e_ezmaxpartner_customdevelopment = NULL;
    }
    if (!e_ezmaxpartner_customdevelopment) {
        goto end;
    }

    
    e_ezmaxpartner_customdevelopment_local_nonprim = field_e_ezmaxpartner_customdevelopment_parseFromJSON(e_ezmaxpartner_customdevelopment); //custom

    // ezmaxpartner_response_compound->obj_ezmaxpartner_address
    cJSON *obj_ezmaxpartner_address = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerAddress");
    if (cJSON_IsNull(obj_ezmaxpartner_address)) {
        obj_ezmaxpartner_address = NULL;
    }
    if (!obj_ezmaxpartner_address) {
        goto end;
    }

    
    obj_ezmaxpartner_address_local_nonprim = multilingual_ezmaxpartner_address_parseFromJSON(obj_ezmaxpartner_address); //nonprimitive

    // ezmaxpartner_response_compound->obj_ezmaxpartner_description
    cJSON *obj_ezmaxpartner_description = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerDescription");
    if (cJSON_IsNull(obj_ezmaxpartner_description)) {
        obj_ezmaxpartner_description = NULL;
    }
    if (!obj_ezmaxpartner_description) {
        goto end;
    }

    
    obj_ezmaxpartner_description_local_nonprim = multilingual_ezmaxpartner_description_parseFromJSON(obj_ezmaxpartner_description); //nonprimitive

    // ezmaxpartner_response_compound->obj_ezmaxpartner_emailaddress
    cJSON *obj_ezmaxpartner_emailaddress = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerEmailaddress");
    if (cJSON_IsNull(obj_ezmaxpartner_emailaddress)) {
        obj_ezmaxpartner_emailaddress = NULL;
    }
    if (!obj_ezmaxpartner_emailaddress) {
        goto end;
    }

    
    obj_ezmaxpartner_emailaddress_local_nonprim = multilingual_ezmaxpartner_emailaddress_parseFromJSON(obj_ezmaxpartner_emailaddress); //nonprimitive

    // ezmaxpartner_response_compound->obj_ezmaxpartner_name
    cJSON *obj_ezmaxpartner_name = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerName");
    if (cJSON_IsNull(obj_ezmaxpartner_name)) {
        obj_ezmaxpartner_name = NULL;
    }
    if (!obj_ezmaxpartner_name) {
        goto end;
    }

    
    obj_ezmaxpartner_name_local_nonprim = multilingual_ezmaxpartner_name_parseFromJSON(obj_ezmaxpartner_name); //nonprimitive

    // ezmaxpartner_response_compound->obj_ezmaxpartner_phone_e164
    cJSON *obj_ezmaxpartner_phone_e164 = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerPhoneE164");
    if (cJSON_IsNull(obj_ezmaxpartner_phone_e164)) {
        obj_ezmaxpartner_phone_e164 = NULL;
    }
    if (!obj_ezmaxpartner_phone_e164) {
        goto end;
    }

    
    obj_ezmaxpartner_phone_e164_local_nonprim = multilingual_ezmaxpartner_phone_e164_parseFromJSON(obj_ezmaxpartner_phone_e164); //nonprimitive

    // ezmaxpartner_response_compound->obj_ezmaxpartner_shortdescription
    cJSON *obj_ezmaxpartner_shortdescription = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerShortdescription");
    if (cJSON_IsNull(obj_ezmaxpartner_shortdescription)) {
        obj_ezmaxpartner_shortdescription = NULL;
    }
    if (!obj_ezmaxpartner_shortdescription) {
        goto end;
    }

    
    obj_ezmaxpartner_shortdescription_local_nonprim = multilingual_ezmaxpartner_shortdescription_parseFromJSON(obj_ezmaxpartner_shortdescription); //nonprimitive

    // ezmaxpartner_response_compound->obj_ezmaxpartner_url
    cJSON *obj_ezmaxpartner_url = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerUrl");
    if (cJSON_IsNull(obj_ezmaxpartner_url)) {
        obj_ezmaxpartner_url = NULL;
    }
    if (!obj_ezmaxpartner_url) {
        goto end;
    }

    
    obj_ezmaxpartner_url_local_nonprim = multilingual_ezmaxpartner_url_parseFromJSON(obj_ezmaxpartner_url); //nonprimitive

    // ezmaxpartner_response_compound->b_ezmaxpartner_isactive
    cJSON *b_ezmaxpartner_isactive = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "bEzmaxpartnerIsactive");
    if (cJSON_IsNull(b_ezmaxpartner_isactive)) {
        b_ezmaxpartner_isactive = NULL;
    }
    if (b_ezmaxpartner_isactive) { 
    if(!cJSON_IsBool(b_ezmaxpartner_isactive))
    {
    goto end; //Bool
    }
    b_ezmaxpartner_isactive_local_var = malloc(sizeof(int));
    if(!b_ezmaxpartner_isactive_local_var)
    {
        goto end;
    }
    *b_ezmaxpartner_isactive_local_var = b_ezmaxpartner_isactive->valueint;
    }

    // ezmaxpartner_response_compound->obj_ezmaxpartner_logourl
    cJSON *obj_ezmaxpartner_logourl = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_response_compoundJSON, "objEzmaxpartnerLogourl");
    if (cJSON_IsNull(obj_ezmaxpartner_logourl)) {
        obj_ezmaxpartner_logourl = NULL;
    }
    if (!obj_ezmaxpartner_logourl) {
        goto end;
    }

    
    obj_ezmaxpartner_logourl_local_nonprim = multilingual_ezmaxpartner_logourl_parseFromJSON(obj_ezmaxpartner_logourl); //nonprimitive



    ezmaxpartner_response_compound_local_var = ezmaxpartner_response_compound_create_internal (
        e_ezmaxpartner_customdevelopment_local_nonprim,
        obj_ezmaxpartner_address_local_nonprim,
        obj_ezmaxpartner_description_local_nonprim,
        obj_ezmaxpartner_emailaddress_local_nonprim,
        obj_ezmaxpartner_name_local_nonprim,
        obj_ezmaxpartner_phone_e164_local_nonprim,
        obj_ezmaxpartner_shortdescription_local_nonprim,
        obj_ezmaxpartner_url_local_nonprim,
        b_ezmaxpartner_isactive_local_var,
        obj_ezmaxpartner_logourl_local_nonprim
        );

    if (!ezmaxpartner_response_compound_local_var) {
        goto end;
    }

    return ezmaxpartner_response_compound_local_var;
end:
    if (e_ezmaxpartner_customdevelopment_local_nonprim) {
        e_ezmaxpartner_customdevelopment_local_nonprim = 0;
    }
    if (obj_ezmaxpartner_address_local_nonprim) {
        multilingual_ezmaxpartner_address_free(obj_ezmaxpartner_address_local_nonprim);
        obj_ezmaxpartner_address_local_nonprim = NULL;
    }
    if (obj_ezmaxpartner_description_local_nonprim) {
        multilingual_ezmaxpartner_description_free(obj_ezmaxpartner_description_local_nonprim);
        obj_ezmaxpartner_description_local_nonprim = NULL;
    }
    if (obj_ezmaxpartner_emailaddress_local_nonprim) {
        multilingual_ezmaxpartner_emailaddress_free(obj_ezmaxpartner_emailaddress_local_nonprim);
        obj_ezmaxpartner_emailaddress_local_nonprim = NULL;
    }
    if (obj_ezmaxpartner_name_local_nonprim) {
        multilingual_ezmaxpartner_name_free(obj_ezmaxpartner_name_local_nonprim);
        obj_ezmaxpartner_name_local_nonprim = NULL;
    }
    if (obj_ezmaxpartner_phone_e164_local_nonprim) {
        multilingual_ezmaxpartner_phone_e164_free(obj_ezmaxpartner_phone_e164_local_nonprim);
        obj_ezmaxpartner_phone_e164_local_nonprim = NULL;
    }
    if (obj_ezmaxpartner_shortdescription_local_nonprim) {
        multilingual_ezmaxpartner_shortdescription_free(obj_ezmaxpartner_shortdescription_local_nonprim);
        obj_ezmaxpartner_shortdescription_local_nonprim = NULL;
    }
    if (obj_ezmaxpartner_url_local_nonprim) {
        multilingual_ezmaxpartner_url_free(obj_ezmaxpartner_url_local_nonprim);
        obj_ezmaxpartner_url_local_nonprim = NULL;
    }
    if (b_ezmaxpartner_isactive_local_var) {
        free(b_ezmaxpartner_isactive_local_var);
        b_ezmaxpartner_isactive_local_var = NULL;
    }
    if (obj_ezmaxpartner_logourl_local_nonprim) {
        multilingual_ezmaxpartner_logourl_free(obj_ezmaxpartner_logourl_local_nonprim);
        obj_ezmaxpartner_logourl_local_nonprim = NULL;
    }
    return NULL;

}
