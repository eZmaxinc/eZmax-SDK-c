#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_list_element.h"



static customer_list_element_t *customer_list_element_create_internal(
    int pki_customer_id,
    char *s_customer_name,
    char *s_customer_note,
    char *s_customer_code,
    int b_customer_isactive,
    char *s_phone_e164,
    char *s_email_address,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x
    ) {
    customer_list_element_t *customer_list_element_local_var = malloc(sizeof(customer_list_element_t));
    if (!customer_list_element_local_var) {
        return NULL;
    }
    customer_list_element_local_var->pki_customer_id = pki_customer_id;
    customer_list_element_local_var->s_customer_name = s_customer_name;
    customer_list_element_local_var->s_customer_note = s_customer_note;
    customer_list_element_local_var->s_customer_code = s_customer_code;
    customer_list_element_local_var->b_customer_isactive = b_customer_isactive;
    customer_list_element_local_var->s_phone_e164 = s_phone_e164;
    customer_list_element_local_var->s_email_address = s_email_address;
    customer_list_element_local_var->s_address_civic = s_address_civic;
    customer_list_element_local_var->s_address_street = s_address_street;
    customer_list_element_local_var->s_address_suite = s_address_suite;
    customer_list_element_local_var->s_address_city = s_address_city;
    customer_list_element_local_var->s_address_zip = s_address_zip;
    customer_list_element_local_var->s_province_name_x = s_province_name_x;
    customer_list_element_local_var->s_country_name_x = s_country_name_x;

    customer_list_element_local_var->_library_owned = 1;
    return customer_list_element_local_var;
}

__attribute__((deprecated)) customer_list_element_t *customer_list_element_create(
    int pki_customer_id,
    char *s_customer_name,
    char *s_customer_note,
    char *s_customer_code,
    int b_customer_isactive,
    char *s_phone_e164,
    char *s_email_address,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x
    ) {
    return customer_list_element_create_internal (
        pki_customer_id,
        s_customer_name,
        s_customer_note,
        s_customer_code,
        b_customer_isactive,
        s_phone_e164,
        s_email_address,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        s_address_zip,
        s_province_name_x,
        s_country_name_x
        );
}

void customer_list_element_free(customer_list_element_t *customer_list_element) {
    if(NULL == customer_list_element){
        return ;
    }
    if(customer_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_list_element->s_customer_name) {
        free(customer_list_element->s_customer_name);
        customer_list_element->s_customer_name = NULL;
    }
    if (customer_list_element->s_customer_note) {
        free(customer_list_element->s_customer_note);
        customer_list_element->s_customer_note = NULL;
    }
    if (customer_list_element->s_customer_code) {
        free(customer_list_element->s_customer_code);
        customer_list_element->s_customer_code = NULL;
    }
    if (customer_list_element->s_phone_e164) {
        free(customer_list_element->s_phone_e164);
        customer_list_element->s_phone_e164 = NULL;
    }
    if (customer_list_element->s_email_address) {
        free(customer_list_element->s_email_address);
        customer_list_element->s_email_address = NULL;
    }
    if (customer_list_element->s_address_civic) {
        free(customer_list_element->s_address_civic);
        customer_list_element->s_address_civic = NULL;
    }
    if (customer_list_element->s_address_street) {
        free(customer_list_element->s_address_street);
        customer_list_element->s_address_street = NULL;
    }
    if (customer_list_element->s_address_suite) {
        free(customer_list_element->s_address_suite);
        customer_list_element->s_address_suite = NULL;
    }
    if (customer_list_element->s_address_city) {
        free(customer_list_element->s_address_city);
        customer_list_element->s_address_city = NULL;
    }
    if (customer_list_element->s_address_zip) {
        free(customer_list_element->s_address_zip);
        customer_list_element->s_address_zip = NULL;
    }
    if (customer_list_element->s_province_name_x) {
        free(customer_list_element->s_province_name_x);
        customer_list_element->s_province_name_x = NULL;
    }
    if (customer_list_element->s_country_name_x) {
        free(customer_list_element->s_country_name_x);
        customer_list_element->s_country_name_x = NULL;
    }
    free(customer_list_element);
}

cJSON *customer_list_element_convertToJSON(customer_list_element_t *customer_list_element) {
    cJSON *item = cJSON_CreateObject();

    // customer_list_element->pki_customer_id
    if (!customer_list_element->pki_customer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCustomerID", customer_list_element->pki_customer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_list_element->s_customer_name
    if (!customer_list_element->s_customer_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerName", customer_list_element->s_customer_name) == NULL) {
    goto fail; //String
    }


    // customer_list_element->s_customer_note
    if(customer_list_element->s_customer_note) {
    if(cJSON_AddStringToObject(item, "sCustomerNote", customer_list_element->s_customer_note) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_customer_code
    if (!customer_list_element->s_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerCode", customer_list_element->s_customer_code) == NULL) {
    goto fail; //String
    }


    // customer_list_element->b_customer_isactive
    if (!customer_list_element->b_customer_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerIsactive", customer_list_element->b_customer_isactive) == NULL) {
    goto fail; //Bool
    }


    // customer_list_element->s_phone_e164
    if(customer_list_element->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", customer_list_element->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_email_address
    if(customer_list_element->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", customer_list_element->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_address_civic
    if(customer_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", customer_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_address_street
    if(customer_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", customer_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_address_suite
    if(customer_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", customer_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_address_city
    if(customer_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", customer_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_address_zip
    if(customer_list_element->s_address_zip) {
    if(cJSON_AddStringToObject(item, "sAddressZip", customer_list_element->s_address_zip) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_province_name_x
    if(customer_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", customer_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // customer_list_element->s_country_name_x
    if(customer_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", customer_list_element->s_country_name_x) == NULL) {
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

customer_list_element_t *customer_list_element_parseFromJSON(cJSON *customer_list_elementJSON){

    customer_list_element_t *customer_list_element_local_var = NULL;

    // customer_list_element->pki_customer_id
    cJSON *pki_customer_id = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "pkiCustomerID");
    if (cJSON_IsNull(pki_customer_id)) {
        pki_customer_id = NULL;
    }
    if (!pki_customer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_customer_id))
    {
    goto end; //Numeric
    }

    // customer_list_element->s_customer_name
    cJSON *s_customer_name = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sCustomerName");
    if (cJSON_IsNull(s_customer_name)) {
        s_customer_name = NULL;
    }
    if (!s_customer_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_name))
    {
    goto end; //String
    }

    // customer_list_element->s_customer_note
    cJSON *s_customer_note = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sCustomerNote");
    if (cJSON_IsNull(s_customer_note)) {
        s_customer_note = NULL;
    }
    if (s_customer_note) { 
    if(!cJSON_IsString(s_customer_note) && !cJSON_IsNull(s_customer_note))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_customer_code
    cJSON *s_customer_code = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sCustomerCode");
    if (cJSON_IsNull(s_customer_code)) {
        s_customer_code = NULL;
    }
    if (!s_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_code))
    {
    goto end; //String
    }

    // customer_list_element->b_customer_isactive
    cJSON *b_customer_isactive = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "bCustomerIsactive");
    if (cJSON_IsNull(b_customer_isactive)) {
        b_customer_isactive = NULL;
    }
    if (!b_customer_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_isactive))
    {
    goto end; //Bool
    }

    // customer_list_element->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (s_address_zip) { 
    if(!cJSON_IsString(s_address_zip) && !cJSON_IsNull(s_address_zip))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // customer_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(customer_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }


    customer_list_element_local_var = customer_list_element_create_internal (
        pki_customer_id->valuedouble,
        strdup(s_customer_name->valuestring),
        s_customer_note && !cJSON_IsNull(s_customer_note) ? strdup(s_customer_note->valuestring) : NULL,
        strdup(s_customer_code->valuestring),
        b_customer_isactive->valueint,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        s_address_civic && !cJSON_IsNull(s_address_civic) ? strdup(s_address_civic->valuestring) : NULL,
        s_address_street && !cJSON_IsNull(s_address_street) ? strdup(s_address_street->valuestring) : NULL,
        s_address_suite && !cJSON_IsNull(s_address_suite) ? strdup(s_address_suite->valuestring) : NULL,
        s_address_city && !cJSON_IsNull(s_address_city) ? strdup(s_address_city->valuestring) : NULL,
        s_address_zip && !cJSON_IsNull(s_address_zip) ? strdup(s_address_zip->valuestring) : NULL,
        s_province_name_x && !cJSON_IsNull(s_province_name_x) ? strdup(s_province_name_x->valuestring) : NULL,
        s_country_name_x && !cJSON_IsNull(s_country_name_x) ? strdup(s_country_name_x->valuestring) : NULL
        );

    return customer_list_element_local_var;
end:
    return NULL;

}
