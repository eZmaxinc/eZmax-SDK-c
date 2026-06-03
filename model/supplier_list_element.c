#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplier_list_element.h"



static supplier_list_element_t *supplier_list_element_create_internal(
    int *pki_supplier_id,
    int *fki_paymentmethod_id,
    char *s_supplier_name,
    char *s_supplier_code,
    char *s_supplier_account,
    int *b_supplier_isactive,
    char *s_phone_e164,
    char *s_email_address,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x,
    char *s_paymentmethod_description_x,
    char *s_electronicfundstransferbankaccount_transit,
    char *s_electronicfundstransferbankaccount_institution,
    char *s_electronicfundstransferbankaccount_account,
    char *s_glaccountcontainer_longcode,
    char *s_glaccountcontainer_longdescription_x
    ) {
    supplier_list_element_t *supplier_list_element_local_var = malloc(sizeof(supplier_list_element_t));
    if (!supplier_list_element_local_var) {
        return NULL;
    }
    memset(supplier_list_element_local_var, 0, sizeof(supplier_list_element_t));
    supplier_list_element_local_var->_library_owned = 1;
    supplier_list_element_local_var->pki_supplier_id = pki_supplier_id;
    supplier_list_element_local_var->fki_paymentmethod_id = fki_paymentmethod_id;
    supplier_list_element_local_var->s_supplier_name = s_supplier_name;
    supplier_list_element_local_var->s_supplier_code = s_supplier_code;
    supplier_list_element_local_var->s_supplier_account = s_supplier_account;
    supplier_list_element_local_var->b_supplier_isactive = b_supplier_isactive;
    supplier_list_element_local_var->s_phone_e164 = s_phone_e164;
    supplier_list_element_local_var->s_email_address = s_email_address;
    supplier_list_element_local_var->s_address_civic = s_address_civic;
    supplier_list_element_local_var->s_address_street = s_address_street;
    supplier_list_element_local_var->s_address_suite = s_address_suite;
    supplier_list_element_local_var->s_address_city = s_address_city;
    supplier_list_element_local_var->s_address_zip = s_address_zip;
    supplier_list_element_local_var->fki_province_id = fki_province_id;
    supplier_list_element_local_var->s_province_name_x = s_province_name_x;
    supplier_list_element_local_var->fki_country_id = fki_country_id;
    supplier_list_element_local_var->s_country_name_x = s_country_name_x;
    supplier_list_element_local_var->s_paymentmethod_description_x = s_paymentmethod_description_x;
    supplier_list_element_local_var->s_electronicfundstransferbankaccount_transit = s_electronicfundstransferbankaccount_transit;
    supplier_list_element_local_var->s_electronicfundstransferbankaccount_institution = s_electronicfundstransferbankaccount_institution;
    supplier_list_element_local_var->s_electronicfundstransferbankaccount_account = s_electronicfundstransferbankaccount_account;
    supplier_list_element_local_var->s_glaccountcontainer_longcode = s_glaccountcontainer_longcode;
    supplier_list_element_local_var->s_glaccountcontainer_longdescription_x = s_glaccountcontainer_longdescription_x;
    return supplier_list_element_local_var;
}

__attribute__((deprecated)) supplier_list_element_t *supplier_list_element_create(
    int *pki_supplier_id,
    int *fki_paymentmethod_id,
    char *s_supplier_name,
    char *s_supplier_code,
    char *s_supplier_account,
    int *b_supplier_isactive,
    char *s_phone_e164,
    char *s_email_address,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x,
    char *s_paymentmethod_description_x,
    char *s_electronicfundstransferbankaccount_transit,
    char *s_electronicfundstransferbankaccount_institution,
    char *s_electronicfundstransferbankaccount_account,
    char *s_glaccountcontainer_longcode,
    char *s_glaccountcontainer_longdescription_x
    ) {
    int *pki_supplier_id_copy = NULL;
    if (pki_supplier_id) {
        pki_supplier_id_copy = malloc(sizeof(int));
        if (pki_supplier_id_copy) *pki_supplier_id_copy = *pki_supplier_id;
    }
    int *fki_paymentmethod_id_copy = NULL;
    if (fki_paymentmethod_id) {
        fki_paymentmethod_id_copy = malloc(sizeof(int));
        if (fki_paymentmethod_id_copy) *fki_paymentmethod_id_copy = *fki_paymentmethod_id;
    }
    int *b_supplier_isactive_copy = NULL;
    if (b_supplier_isactive) {
        b_supplier_isactive_copy = malloc(sizeof(int));
        if (b_supplier_isactive_copy) *b_supplier_isactive_copy = *b_supplier_isactive;
    }
    int *fki_province_id_copy = NULL;
    if (fki_province_id) {
        fki_province_id_copy = malloc(sizeof(int));
        if (fki_province_id_copy) *fki_province_id_copy = *fki_province_id;
    }
    int *fki_country_id_copy = NULL;
    if (fki_country_id) {
        fki_country_id_copy = malloc(sizeof(int));
        if (fki_country_id_copy) *fki_country_id_copy = *fki_country_id;
    }
    supplier_list_element_t *result = supplier_list_element_create_internal (
        pki_supplier_id_copy,
        fki_paymentmethod_id_copy,
        s_supplier_name,
        s_supplier_code,
        s_supplier_account,
        b_supplier_isactive_copy,
        s_phone_e164,
        s_email_address,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        s_address_zip,
        fki_province_id_copy,
        s_province_name_x,
        fki_country_id_copy,
        s_country_name_x,
        s_paymentmethod_description_x,
        s_electronicfundstransferbankaccount_transit,
        s_electronicfundstransferbankaccount_institution,
        s_electronicfundstransferbankaccount_account,
        s_glaccountcontainer_longcode,
        s_glaccountcontainer_longdescription_x
        );
    if (!result) {
        free(pki_supplier_id_copy);
        free(fki_paymentmethod_id_copy);
        free(b_supplier_isactive_copy);
        free(fki_province_id_copy);
        free(fki_country_id_copy);
    }
    return result;
}

void supplier_list_element_free(supplier_list_element_t *supplier_list_element) {
    if(NULL == supplier_list_element){
        return ;
    }
    if(supplier_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supplier_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supplier_list_element->pki_supplier_id) {
        free(supplier_list_element->pki_supplier_id);
        supplier_list_element->pki_supplier_id = NULL;
    }
    if (supplier_list_element->fki_paymentmethod_id) {
        free(supplier_list_element->fki_paymentmethod_id);
        supplier_list_element->fki_paymentmethod_id = NULL;
    }
    if (supplier_list_element->s_supplier_name) {
        free(supplier_list_element->s_supplier_name);
        supplier_list_element->s_supplier_name = NULL;
    }
    if (supplier_list_element->s_supplier_code) {
        free(supplier_list_element->s_supplier_code);
        supplier_list_element->s_supplier_code = NULL;
    }
    if (supplier_list_element->s_supplier_account) {
        free(supplier_list_element->s_supplier_account);
        supplier_list_element->s_supplier_account = NULL;
    }
    if (supplier_list_element->b_supplier_isactive) {
        free(supplier_list_element->b_supplier_isactive);
        supplier_list_element->b_supplier_isactive = NULL;
    }
    if (supplier_list_element->s_phone_e164) {
        free(supplier_list_element->s_phone_e164);
        supplier_list_element->s_phone_e164 = NULL;
    }
    if (supplier_list_element->s_email_address) {
        free(supplier_list_element->s_email_address);
        supplier_list_element->s_email_address = NULL;
    }
    if (supplier_list_element->s_address_civic) {
        free(supplier_list_element->s_address_civic);
        supplier_list_element->s_address_civic = NULL;
    }
    if (supplier_list_element->s_address_street) {
        free(supplier_list_element->s_address_street);
        supplier_list_element->s_address_street = NULL;
    }
    if (supplier_list_element->s_address_suite) {
        free(supplier_list_element->s_address_suite);
        supplier_list_element->s_address_suite = NULL;
    }
    if (supplier_list_element->s_address_city) {
        free(supplier_list_element->s_address_city);
        supplier_list_element->s_address_city = NULL;
    }
    if (supplier_list_element->s_address_zip) {
        free(supplier_list_element->s_address_zip);
        supplier_list_element->s_address_zip = NULL;
    }
    if (supplier_list_element->fki_province_id) {
        free(supplier_list_element->fki_province_id);
        supplier_list_element->fki_province_id = NULL;
    }
    if (supplier_list_element->s_province_name_x) {
        free(supplier_list_element->s_province_name_x);
        supplier_list_element->s_province_name_x = NULL;
    }
    if (supplier_list_element->fki_country_id) {
        free(supplier_list_element->fki_country_id);
        supplier_list_element->fki_country_id = NULL;
    }
    if (supplier_list_element->s_country_name_x) {
        free(supplier_list_element->s_country_name_x);
        supplier_list_element->s_country_name_x = NULL;
    }
    if (supplier_list_element->s_paymentmethod_description_x) {
        free(supplier_list_element->s_paymentmethod_description_x);
        supplier_list_element->s_paymentmethod_description_x = NULL;
    }
    if (supplier_list_element->s_electronicfundstransferbankaccount_transit) {
        free(supplier_list_element->s_electronicfundstransferbankaccount_transit);
        supplier_list_element->s_electronicfundstransferbankaccount_transit = NULL;
    }
    if (supplier_list_element->s_electronicfundstransferbankaccount_institution) {
        free(supplier_list_element->s_electronicfundstransferbankaccount_institution);
        supplier_list_element->s_electronicfundstransferbankaccount_institution = NULL;
    }
    if (supplier_list_element->s_electronicfundstransferbankaccount_account) {
        free(supplier_list_element->s_electronicfundstransferbankaccount_account);
        supplier_list_element->s_electronicfundstransferbankaccount_account = NULL;
    }
    if (supplier_list_element->s_glaccountcontainer_longcode) {
        free(supplier_list_element->s_glaccountcontainer_longcode);
        supplier_list_element->s_glaccountcontainer_longcode = NULL;
    }
    if (supplier_list_element->s_glaccountcontainer_longdescription_x) {
        free(supplier_list_element->s_glaccountcontainer_longdescription_x);
        supplier_list_element->s_glaccountcontainer_longdescription_x = NULL;
    }
    free(supplier_list_element);
}

cJSON *supplier_list_element_convertToJSON(supplier_list_element_t *supplier_list_element) {
    cJSON *item = cJSON_CreateObject();

    // supplier_list_element->pki_supplier_id
    if (!supplier_list_element->pki_supplier_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSupplierID", *supplier_list_element->pki_supplier_id) == NULL) {
    goto fail; //Numeric
    }


    // supplier_list_element->fki_paymentmethod_id
    if(supplier_list_element->fki_paymentmethod_id) {
    if(cJSON_AddNumberToObject(item, "fkiPaymentmethodID", *supplier_list_element->fki_paymentmethod_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supplier_list_element->s_supplier_name
    if (!supplier_list_element->s_supplier_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplierName", supplier_list_element->s_supplier_name) == NULL) {
    goto fail; //String
    }


    // supplier_list_element->s_supplier_code
    if (!supplier_list_element->s_supplier_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplierCode", supplier_list_element->s_supplier_code) == NULL) {
    goto fail; //String
    }


    // supplier_list_element->s_supplier_account
    if (!supplier_list_element->s_supplier_account) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplierAccount", supplier_list_element->s_supplier_account) == NULL) {
    goto fail; //String
    }


    // supplier_list_element->b_supplier_isactive
    if (!supplier_list_element->b_supplier_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplierIsactive", *supplier_list_element->b_supplier_isactive) == NULL) {
    goto fail; //Bool
    }


    // supplier_list_element->s_phone_e164
    if(supplier_list_element->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", supplier_list_element->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_email_address
    if(supplier_list_element->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", supplier_list_element->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_address_civic
    if(supplier_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", supplier_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_address_street
    if(supplier_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", supplier_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_address_suite
    if(supplier_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", supplier_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_address_city
    if(supplier_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", supplier_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_address_zip
    if(supplier_list_element->s_address_zip) {
    if(cJSON_AddStringToObject(item, "sAddressZip", supplier_list_element->s_address_zip) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->fki_province_id
    if(supplier_list_element->fki_province_id) {
    if(cJSON_AddNumberToObject(item, "fkiProvinceID", *supplier_list_element->fki_province_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supplier_list_element->s_province_name_x
    if(supplier_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", supplier_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->fki_country_id
    if(supplier_list_element->fki_country_id) {
    if(cJSON_AddNumberToObject(item, "fkiCountryID", *supplier_list_element->fki_country_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supplier_list_element->s_country_name_x
    if(supplier_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", supplier_list_element->s_country_name_x) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_paymentmethod_description_x
    if(supplier_list_element->s_paymentmethod_description_x) {
    if(cJSON_AddStringToObject(item, "sPaymentmethodDescriptionX", supplier_list_element->s_paymentmethod_description_x) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_electronicfundstransferbankaccount_transit
    if(supplier_list_element->s_electronicfundstransferbankaccount_transit) {
    if(cJSON_AddStringToObject(item, "sElectronicfundstransferbankaccountTransit", supplier_list_element->s_electronicfundstransferbankaccount_transit) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_electronicfundstransferbankaccount_institution
    if(supplier_list_element->s_electronicfundstransferbankaccount_institution) {
    if(cJSON_AddStringToObject(item, "sElectronicfundstransferbankaccountInstitution", supplier_list_element->s_electronicfundstransferbankaccount_institution) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_electronicfundstransferbankaccount_account
    if(supplier_list_element->s_electronicfundstransferbankaccount_account) {
    if(cJSON_AddStringToObject(item, "sElectronicfundstransferbankaccountAccount", supplier_list_element->s_electronicfundstransferbankaccount_account) == NULL) {
    goto fail; //String
    }
    }


    // supplier_list_element->s_glaccountcontainer_longcode
    if (!supplier_list_element->s_glaccountcontainer_longcode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sGlaccountcontainerLongcode", supplier_list_element->s_glaccountcontainer_longcode) == NULL) {
    goto fail; //String
    }


    // supplier_list_element->s_glaccountcontainer_longdescription_x
    if (!supplier_list_element->s_glaccountcontainer_longdescription_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sGlaccountcontainerLongdescriptionX", supplier_list_element->s_glaccountcontainer_longdescription_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supplier_list_element_t *supplier_list_element_parseFromJSON(cJSON *supplier_list_elementJSON){

    supplier_list_element_t *supplier_list_element_local_var = NULL;

    // define the local variable for supplier_list_element->pki_supplier_id
    int *pki_supplier_id_local_var = NULL;

    // define the local variable for supplier_list_element->fki_paymentmethod_id
    int *fki_paymentmethod_id_local_var = NULL;

    char *s_supplier_name_local_str = NULL;

    char *s_supplier_code_local_str = NULL;

    char *s_supplier_account_local_str = NULL;

    // define the local variable for supplier_list_element->b_supplier_isactive
    int *b_supplier_isactive_local_var = NULL;

    char *s_phone_e164_local_str = NULL;

    char *s_email_address_local_str = NULL;

    char *s_address_civic_local_str = NULL;

    char *s_address_street_local_str = NULL;

    char *s_address_suite_local_str = NULL;

    char *s_address_city_local_str = NULL;

    char *s_address_zip_local_str = NULL;

    // define the local variable for supplier_list_element->fki_province_id
    int *fki_province_id_local_var = NULL;

    char *s_province_name_x_local_str = NULL;

    // define the local variable for supplier_list_element->fki_country_id
    int *fki_country_id_local_var = NULL;

    char *s_country_name_x_local_str = NULL;

    char *s_paymentmethod_description_x_local_str = NULL;

    char *s_electronicfundstransferbankaccount_transit_local_str = NULL;

    char *s_electronicfundstransferbankaccount_institution_local_str = NULL;

    char *s_electronicfundstransferbankaccount_account_local_str = NULL;

    char *s_glaccountcontainer_longcode_local_str = NULL;

    char *s_glaccountcontainer_longdescription_x_local_str = NULL;

    // supplier_list_element->pki_supplier_id
    cJSON *pki_supplier_id = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "pkiSupplierID");
    if (cJSON_IsNull(pki_supplier_id)) {
        pki_supplier_id = NULL;
    }
    if (!pki_supplier_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_supplier_id))
    {
    goto end; //Numeric
    }
    pki_supplier_id_local_var = malloc(sizeof(int));
    if(!pki_supplier_id_local_var)
    {
        goto end;
    }
    *pki_supplier_id_local_var = pki_supplier_id->valuedouble;

    // supplier_list_element->fki_paymentmethod_id
    cJSON *fki_paymentmethod_id = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "fkiPaymentmethodID");
    if (cJSON_IsNull(fki_paymentmethod_id)) {
        fki_paymentmethod_id = NULL;
    }
    if (fki_paymentmethod_id) { 
    if(!cJSON_IsNumber(fki_paymentmethod_id))
    {
    goto end; //Numeric
    }
    fki_paymentmethod_id_local_var = malloc(sizeof(int));
    if(!fki_paymentmethod_id_local_var)
    {
        goto end;
    }
    *fki_paymentmethod_id_local_var = fki_paymentmethod_id->valuedouble;
    }

    // supplier_list_element->s_supplier_name
    cJSON *s_supplier_name = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sSupplierName");
    if (cJSON_IsNull(s_supplier_name)) {
        s_supplier_name = NULL;
    }
    if (!s_supplier_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supplier_name))
    {
    goto end; //String
    }

    // supplier_list_element->s_supplier_code
    cJSON *s_supplier_code = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sSupplierCode");
    if (cJSON_IsNull(s_supplier_code)) {
        s_supplier_code = NULL;
    }
    if (!s_supplier_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supplier_code))
    {
    goto end; //String
    }

    // supplier_list_element->s_supplier_account
    cJSON *s_supplier_account = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sSupplierAccount");
    if (cJSON_IsNull(s_supplier_account)) {
        s_supplier_account = NULL;
    }
    if (!s_supplier_account) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supplier_account))
    {
    goto end; //String
    }

    // supplier_list_element->b_supplier_isactive
    cJSON *b_supplier_isactive = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "bSupplierIsactive");
    if (cJSON_IsNull(b_supplier_isactive)) {
        b_supplier_isactive = NULL;
    }
    if (!b_supplier_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supplier_isactive))
    {
    goto end; //Bool
    }
    b_supplier_isactive_local_var = malloc(sizeof(int));
    if(!b_supplier_isactive_local_var)
    {
        goto end;
    }
    *b_supplier_isactive_local_var = b_supplier_isactive->valueint;

    // supplier_list_element->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (s_address_zip) { 
    if(!cJSON_IsString(s_address_zip) && !cJSON_IsNull(s_address_zip))
    {
    goto end; //String
    }
    }

    // supplier_list_element->fki_province_id
    cJSON *fki_province_id = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "fkiProvinceID");
    if (cJSON_IsNull(fki_province_id)) {
        fki_province_id = NULL;
    }
    if (fki_province_id) { 
    if(!cJSON_IsNumber(fki_province_id))
    {
    goto end; //Numeric
    }
    fki_province_id_local_var = malloc(sizeof(int));
    if(!fki_province_id_local_var)
    {
        goto end;
    }
    *fki_province_id_local_var = fki_province_id->valuedouble;
    }

    // supplier_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // supplier_list_element->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "fkiCountryID");
    if (cJSON_IsNull(fki_country_id)) {
        fki_country_id = NULL;
    }
    if (fki_country_id) { 
    if(!cJSON_IsNumber(fki_country_id))
    {
    goto end; //Numeric
    }
    fki_country_id_local_var = malloc(sizeof(int));
    if(!fki_country_id_local_var)
    {
        goto end;
    }
    *fki_country_id_local_var = fki_country_id->valuedouble;
    }

    // supplier_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_paymentmethod_description_x
    cJSON *s_paymentmethod_description_x = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sPaymentmethodDescriptionX");
    if (cJSON_IsNull(s_paymentmethod_description_x)) {
        s_paymentmethod_description_x = NULL;
    }
    if (s_paymentmethod_description_x) { 
    if(!cJSON_IsString(s_paymentmethod_description_x) && !cJSON_IsNull(s_paymentmethod_description_x))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_electronicfundstransferbankaccount_transit
    cJSON *s_electronicfundstransferbankaccount_transit = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sElectronicfundstransferbankaccountTransit");
    if (cJSON_IsNull(s_electronicfundstransferbankaccount_transit)) {
        s_electronicfundstransferbankaccount_transit = NULL;
    }
    if (s_electronicfundstransferbankaccount_transit) { 
    if(!cJSON_IsString(s_electronicfundstransferbankaccount_transit) && !cJSON_IsNull(s_electronicfundstransferbankaccount_transit))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_electronicfundstransferbankaccount_institution
    cJSON *s_electronicfundstransferbankaccount_institution = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sElectronicfundstransferbankaccountInstitution");
    if (cJSON_IsNull(s_electronicfundstransferbankaccount_institution)) {
        s_electronicfundstransferbankaccount_institution = NULL;
    }
    if (s_electronicfundstransferbankaccount_institution) { 
    if(!cJSON_IsString(s_electronicfundstransferbankaccount_institution) && !cJSON_IsNull(s_electronicfundstransferbankaccount_institution))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_electronicfundstransferbankaccount_account
    cJSON *s_electronicfundstransferbankaccount_account = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sElectronicfundstransferbankaccountAccount");
    if (cJSON_IsNull(s_electronicfundstransferbankaccount_account)) {
        s_electronicfundstransferbankaccount_account = NULL;
    }
    if (s_electronicfundstransferbankaccount_account) { 
    if(!cJSON_IsString(s_electronicfundstransferbankaccount_account) && !cJSON_IsNull(s_electronicfundstransferbankaccount_account))
    {
    goto end; //String
    }
    }

    // supplier_list_element->s_glaccountcontainer_longcode
    cJSON *s_glaccountcontainer_longcode = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sGlaccountcontainerLongcode");
    if (cJSON_IsNull(s_glaccountcontainer_longcode)) {
        s_glaccountcontainer_longcode = NULL;
    }
    if (!s_glaccountcontainer_longcode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccountcontainer_longcode))
    {
    goto end; //String
    }

    // supplier_list_element->s_glaccountcontainer_longdescription_x
    cJSON *s_glaccountcontainer_longdescription_x = cJSON_GetObjectItemCaseSensitive(supplier_list_elementJSON, "sGlaccountcontainerLongdescriptionX");
    if (cJSON_IsNull(s_glaccountcontainer_longdescription_x)) {
        s_glaccountcontainer_longdescription_x = NULL;
    }
    if (!s_glaccountcontainer_longdescription_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccountcontainer_longdescription_x))
    {
    goto end; //String
    }


    if (s_supplier_name && !cJSON_IsNull(s_supplier_name)) s_supplier_name_local_str = strdup(s_supplier_name->valuestring);
    if (s_supplier_code && !cJSON_IsNull(s_supplier_code)) s_supplier_code_local_str = strdup(s_supplier_code->valuestring);
    if (s_supplier_account && !cJSON_IsNull(s_supplier_account)) s_supplier_account_local_str = strdup(s_supplier_account->valuestring);
    if (s_phone_e164 && !cJSON_IsNull(s_phone_e164)) s_phone_e164_local_str = strdup(s_phone_e164->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_address_civic && !cJSON_IsNull(s_address_civic)) s_address_civic_local_str = strdup(s_address_civic->valuestring);
    if (s_address_street && !cJSON_IsNull(s_address_street)) s_address_street_local_str = strdup(s_address_street->valuestring);
    if (s_address_suite && !cJSON_IsNull(s_address_suite)) s_address_suite_local_str = strdup(s_address_suite->valuestring);
    if (s_address_city && !cJSON_IsNull(s_address_city)) s_address_city_local_str = strdup(s_address_city->valuestring);
    if (s_address_zip && !cJSON_IsNull(s_address_zip)) s_address_zip_local_str = strdup(s_address_zip->valuestring);
    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_country_name_x && !cJSON_IsNull(s_country_name_x)) s_country_name_x_local_str = strdup(s_country_name_x->valuestring);
    if (s_paymentmethod_description_x && !cJSON_IsNull(s_paymentmethod_description_x)) s_paymentmethod_description_x_local_str = strdup(s_paymentmethod_description_x->valuestring);
    if (s_electronicfundstransferbankaccount_transit && !cJSON_IsNull(s_electronicfundstransferbankaccount_transit)) s_electronicfundstransferbankaccount_transit_local_str = strdup(s_electronicfundstransferbankaccount_transit->valuestring);
    if (s_electronicfundstransferbankaccount_institution && !cJSON_IsNull(s_electronicfundstransferbankaccount_institution)) s_electronicfundstransferbankaccount_institution_local_str = strdup(s_electronicfundstransferbankaccount_institution->valuestring);
    if (s_electronicfundstransferbankaccount_account && !cJSON_IsNull(s_electronicfundstransferbankaccount_account)) s_electronicfundstransferbankaccount_account_local_str = strdup(s_electronicfundstransferbankaccount_account->valuestring);
    if (s_glaccountcontainer_longcode && !cJSON_IsNull(s_glaccountcontainer_longcode)) s_glaccountcontainer_longcode_local_str = strdup(s_glaccountcontainer_longcode->valuestring);
    if (s_glaccountcontainer_longdescription_x && !cJSON_IsNull(s_glaccountcontainer_longdescription_x)) s_glaccountcontainer_longdescription_x_local_str = strdup(s_glaccountcontainer_longdescription_x->valuestring);

    supplier_list_element_local_var = supplier_list_element_create_internal (
        pki_supplier_id_local_var,
        fki_paymentmethod_id_local_var,
        s_supplier_name_local_str,
        s_supplier_code_local_str,
        s_supplier_account_local_str,
        b_supplier_isactive_local_var,
        s_phone_e164_local_str,
        s_email_address_local_str,
        s_address_civic_local_str,
        s_address_street_local_str,
        s_address_suite_local_str,
        s_address_city_local_str,
        s_address_zip_local_str,
        fki_province_id_local_var,
        s_province_name_x_local_str,
        fki_country_id_local_var,
        s_country_name_x_local_str,
        s_paymentmethod_description_x_local_str,
        s_electronicfundstransferbankaccount_transit_local_str,
        s_electronicfundstransferbankaccount_institution_local_str,
        s_electronicfundstransferbankaccount_account_local_str,
        s_glaccountcontainer_longcode_local_str,
        s_glaccountcontainer_longdescription_x_local_str
        );

    if (!supplier_list_element_local_var) {
        goto end;
    }

    return supplier_list_element_local_var;
end:
    if (pki_supplier_id_local_var) {
        free(pki_supplier_id_local_var);
        pki_supplier_id_local_var = NULL;
    }
    if (fki_paymentmethod_id_local_var) {
        free(fki_paymentmethod_id_local_var);
        fki_paymentmethod_id_local_var = NULL;
    }
    if (s_supplier_name_local_str) {
        free(s_supplier_name_local_str);
        s_supplier_name_local_str = NULL;
    }
    if (s_supplier_code_local_str) {
        free(s_supplier_code_local_str);
        s_supplier_code_local_str = NULL;
    }
    if (s_supplier_account_local_str) {
        free(s_supplier_account_local_str);
        s_supplier_account_local_str = NULL;
    }
    if (b_supplier_isactive_local_var) {
        free(b_supplier_isactive_local_var);
        b_supplier_isactive_local_var = NULL;
    }
    if (s_phone_e164_local_str) {
        free(s_phone_e164_local_str);
        s_phone_e164_local_str = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    if (s_address_civic_local_str) {
        free(s_address_civic_local_str);
        s_address_civic_local_str = NULL;
    }
    if (s_address_street_local_str) {
        free(s_address_street_local_str);
        s_address_street_local_str = NULL;
    }
    if (s_address_suite_local_str) {
        free(s_address_suite_local_str);
        s_address_suite_local_str = NULL;
    }
    if (s_address_city_local_str) {
        free(s_address_city_local_str);
        s_address_city_local_str = NULL;
    }
    if (s_address_zip_local_str) {
        free(s_address_zip_local_str);
        s_address_zip_local_str = NULL;
    }
    if (fki_province_id_local_var) {
        free(fki_province_id_local_var);
        fki_province_id_local_var = NULL;
    }
    if (s_province_name_x_local_str) {
        free(s_province_name_x_local_str);
        s_province_name_x_local_str = NULL;
    }
    if (fki_country_id_local_var) {
        free(fki_country_id_local_var);
        fki_country_id_local_var = NULL;
    }
    if (s_country_name_x_local_str) {
        free(s_country_name_x_local_str);
        s_country_name_x_local_str = NULL;
    }
    if (s_paymentmethod_description_x_local_str) {
        free(s_paymentmethod_description_x_local_str);
        s_paymentmethod_description_x_local_str = NULL;
    }
    if (s_electronicfundstransferbankaccount_transit_local_str) {
        free(s_electronicfundstransferbankaccount_transit_local_str);
        s_electronicfundstransferbankaccount_transit_local_str = NULL;
    }
    if (s_electronicfundstransferbankaccount_institution_local_str) {
        free(s_electronicfundstransferbankaccount_institution_local_str);
        s_electronicfundstransferbankaccount_institution_local_str = NULL;
    }
    if (s_electronicfundstransferbankaccount_account_local_str) {
        free(s_electronicfundstransferbankaccount_account_local_str);
        s_electronicfundstransferbankaccount_account_local_str = NULL;
    }
    if (s_glaccountcontainer_longcode_local_str) {
        free(s_glaccountcontainer_longcode_local_str);
        s_glaccountcontainer_longcode_local_str = NULL;
    }
    if (s_glaccountcontainer_longdescription_x_local_str) {
        free(s_glaccountcontainer_longdescription_x_local_str);
        s_glaccountcontainer_longdescription_x_local_str = NULL;
    }
    return NULL;

}
