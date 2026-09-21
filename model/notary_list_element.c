#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notary_list_element.h"



static notary_list_element_t *notary_list_element_create_internal(
    int *pki_notary_id,
    int *fki_paymentmethod_id,
    int *fki_province_id,
    int *fki_country_id,
    char *s_contact_lastname,
    char *s_contact_firstname,
    char *s_contact_company,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_phone_e164,
    char *s_paymentmethod_description_x,
    char *s_province_name_x,
    char *s_country_name_x
    ) {
    notary_list_element_t *notary_list_element_local_var = malloc(sizeof(notary_list_element_t));
    if (!notary_list_element_local_var) {
        return NULL;
    }
    memset(notary_list_element_local_var, 0, sizeof(notary_list_element_t));
    notary_list_element_local_var->_library_owned = 1;
    notary_list_element_local_var->pki_notary_id = pki_notary_id;
    notary_list_element_local_var->fki_paymentmethod_id = fki_paymentmethod_id;
    notary_list_element_local_var->fki_province_id = fki_province_id;
    notary_list_element_local_var->fki_country_id = fki_country_id;
    notary_list_element_local_var->s_contact_lastname = s_contact_lastname;
    notary_list_element_local_var->s_contact_firstname = s_contact_firstname;
    notary_list_element_local_var->s_contact_company = s_contact_company;
    notary_list_element_local_var->s_address_civic = s_address_civic;
    notary_list_element_local_var->s_address_street = s_address_street;
    notary_list_element_local_var->s_address_suite = s_address_suite;
    notary_list_element_local_var->s_address_city = s_address_city;
    notary_list_element_local_var->s_phone_e164 = s_phone_e164;
    notary_list_element_local_var->s_paymentmethod_description_x = s_paymentmethod_description_x;
    notary_list_element_local_var->s_province_name_x = s_province_name_x;
    notary_list_element_local_var->s_country_name_x = s_country_name_x;
    return notary_list_element_local_var;
}

__attribute__((deprecated)) notary_list_element_t *notary_list_element_create(
    int *pki_notary_id,
    int *fki_paymentmethod_id,
    int *fki_province_id,
    int *fki_country_id,
    char *s_contact_lastname,
    char *s_contact_firstname,
    char *s_contact_company,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_phone_e164,
    char *s_paymentmethod_description_x,
    char *s_province_name_x,
    char *s_country_name_x
    ) {
    int *pki_notary_id_copy = NULL;
    if (pki_notary_id) {
        pki_notary_id_copy = malloc(sizeof(int));
        if (pki_notary_id_copy) *pki_notary_id_copy = *pki_notary_id;
    }
    int *fki_paymentmethod_id_copy = NULL;
    if (fki_paymentmethod_id) {
        fki_paymentmethod_id_copy = malloc(sizeof(int));
        if (fki_paymentmethod_id_copy) *fki_paymentmethod_id_copy = *fki_paymentmethod_id;
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
    notary_list_element_t *result = notary_list_element_create_internal (
        pki_notary_id_copy,
        fki_paymentmethod_id_copy,
        fki_province_id_copy,
        fki_country_id_copy,
        s_contact_lastname,
        s_contact_firstname,
        s_contact_company,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        s_phone_e164,
        s_paymentmethod_description_x,
        s_province_name_x,
        s_country_name_x
        );
    if (!result) {
        free(pki_notary_id_copy);
        free(fki_paymentmethod_id_copy);
        free(fki_province_id_copy);
        free(fki_country_id_copy);
    }
    return result;
}

void notary_list_element_free(notary_list_element_t *notary_list_element) {
    if(NULL == notary_list_element){
        return ;
    }
    if(notary_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "notary_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (notary_list_element->pki_notary_id) {
        free(notary_list_element->pki_notary_id);
        notary_list_element->pki_notary_id = NULL;
    }
    if (notary_list_element->fki_paymentmethod_id) {
        free(notary_list_element->fki_paymentmethod_id);
        notary_list_element->fki_paymentmethod_id = NULL;
    }
    if (notary_list_element->fki_province_id) {
        free(notary_list_element->fki_province_id);
        notary_list_element->fki_province_id = NULL;
    }
    if (notary_list_element->fki_country_id) {
        free(notary_list_element->fki_country_id);
        notary_list_element->fki_country_id = NULL;
    }
    if (notary_list_element->s_contact_lastname) {
        free(notary_list_element->s_contact_lastname);
        notary_list_element->s_contact_lastname = NULL;
    }
    if (notary_list_element->s_contact_firstname) {
        free(notary_list_element->s_contact_firstname);
        notary_list_element->s_contact_firstname = NULL;
    }
    if (notary_list_element->s_contact_company) {
        free(notary_list_element->s_contact_company);
        notary_list_element->s_contact_company = NULL;
    }
    if (notary_list_element->s_address_civic) {
        free(notary_list_element->s_address_civic);
        notary_list_element->s_address_civic = NULL;
    }
    if (notary_list_element->s_address_street) {
        free(notary_list_element->s_address_street);
        notary_list_element->s_address_street = NULL;
    }
    if (notary_list_element->s_address_suite) {
        free(notary_list_element->s_address_suite);
        notary_list_element->s_address_suite = NULL;
    }
    if (notary_list_element->s_address_city) {
        free(notary_list_element->s_address_city);
        notary_list_element->s_address_city = NULL;
    }
    if (notary_list_element->s_phone_e164) {
        free(notary_list_element->s_phone_e164);
        notary_list_element->s_phone_e164 = NULL;
    }
    if (notary_list_element->s_paymentmethod_description_x) {
        free(notary_list_element->s_paymentmethod_description_x);
        notary_list_element->s_paymentmethod_description_x = NULL;
    }
    if (notary_list_element->s_province_name_x) {
        free(notary_list_element->s_province_name_x);
        notary_list_element->s_province_name_x = NULL;
    }
    if (notary_list_element->s_country_name_x) {
        free(notary_list_element->s_country_name_x);
        notary_list_element->s_country_name_x = NULL;
    }
    free(notary_list_element);
}

cJSON *notary_list_element_convertToJSON(notary_list_element_t *notary_list_element) {
    cJSON *item = cJSON_CreateObject();

    // notary_list_element->pki_notary_id
    if (!notary_list_element->pki_notary_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiNotaryID", *notary_list_element->pki_notary_id) == NULL) {
    goto fail; //Numeric
    }


    // notary_list_element->fki_paymentmethod_id
    if(notary_list_element->fki_paymentmethod_id) {
    if(cJSON_AddNumberToObject(item, "fkiPaymentmethodID", *notary_list_element->fki_paymentmethod_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // notary_list_element->fki_province_id
    if(notary_list_element->fki_province_id) {
    if(cJSON_AddNumberToObject(item, "fkiProvinceID", *notary_list_element->fki_province_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // notary_list_element->fki_country_id
    if(notary_list_element->fki_country_id) {
    if(cJSON_AddNumberToObject(item, "fkiCountryID", *notary_list_element->fki_country_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // notary_list_element->s_contact_lastname
    if(notary_list_element->s_contact_lastname) {
    if(cJSON_AddStringToObject(item, "sContactLastname", notary_list_element->s_contact_lastname) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_contact_firstname
    if(notary_list_element->s_contact_firstname) {
    if(cJSON_AddStringToObject(item, "sContactFirstname", notary_list_element->s_contact_firstname) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_contact_company
    if(notary_list_element->s_contact_company) {
    if(cJSON_AddStringToObject(item, "sContactCompany", notary_list_element->s_contact_company) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_address_civic
    if(notary_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", notary_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_address_street
    if(notary_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", notary_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_address_suite
    if(notary_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", notary_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_address_city
    if(notary_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", notary_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_phone_e164
    if(notary_list_element->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", notary_list_element->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_paymentmethod_description_x
    if(notary_list_element->s_paymentmethod_description_x) {
    if(cJSON_AddStringToObject(item, "sPaymentmethodDescriptionX", notary_list_element->s_paymentmethod_description_x) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_province_name_x
    if(notary_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", notary_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // notary_list_element->s_country_name_x
    if(notary_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", notary_list_element->s_country_name_x) == NULL) {
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

notary_list_element_t *notary_list_element_parseFromJSON(cJSON *notary_list_elementJSON){

    notary_list_element_t *notary_list_element_local_var = NULL;

    // define the local variable for notary_list_element->pki_notary_id
    int *pki_notary_id_local_var = NULL;

    // define the local variable for notary_list_element->fki_paymentmethod_id
    int *fki_paymentmethod_id_local_var = NULL;

    // define the local variable for notary_list_element->fki_province_id
    int *fki_province_id_local_var = NULL;

    // define the local variable for notary_list_element->fki_country_id
    int *fki_country_id_local_var = NULL;

    char *s_contact_lastname_local_str = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_company_local_str = NULL;

    char *s_address_civic_local_str = NULL;

    char *s_address_street_local_str = NULL;

    char *s_address_suite_local_str = NULL;

    char *s_address_city_local_str = NULL;

    char *s_phone_e164_local_str = NULL;

    char *s_paymentmethod_description_x_local_str = NULL;

    char *s_province_name_x_local_str = NULL;

    char *s_country_name_x_local_str = NULL;

    // notary_list_element->pki_notary_id
    cJSON *pki_notary_id = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "pkiNotaryID");
    if (cJSON_IsNull(pki_notary_id)) {
        pki_notary_id = NULL;
    }
    if (!pki_notary_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notary_id))
    {
    goto end; //Numeric
    }
    pki_notary_id_local_var = malloc(sizeof(int));
    if(!pki_notary_id_local_var)
    {
        goto end;
    }
    *pki_notary_id_local_var = pki_notary_id->valuedouble;

    // notary_list_element->fki_paymentmethod_id
    cJSON *fki_paymentmethod_id = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "fkiPaymentmethodID");
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

    // notary_list_element->fki_province_id
    cJSON *fki_province_id = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "fkiProvinceID");
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

    // notary_list_element->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "fkiCountryID");
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

    // notary_list_element->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (s_contact_lastname) { 
    if(!cJSON_IsString(s_contact_lastname) && !cJSON_IsNull(s_contact_lastname))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (s_contact_firstname) { 
    if(!cJSON_IsString(s_contact_firstname) && !cJSON_IsNull(s_contact_firstname))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sContactCompany");
    if (cJSON_IsNull(s_contact_company)) {
        s_contact_company = NULL;
    }
    if (s_contact_company) { 
    if(!cJSON_IsString(s_contact_company) && !cJSON_IsNull(s_contact_company))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_paymentmethod_description_x
    cJSON *s_paymentmethod_description_x = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sPaymentmethodDescriptionX");
    if (cJSON_IsNull(s_paymentmethod_description_x)) {
        s_paymentmethod_description_x = NULL;
    }
    if (s_paymentmethod_description_x) { 
    if(!cJSON_IsString(s_paymentmethod_description_x) && !cJSON_IsNull(s_paymentmethod_description_x))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // notary_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(notary_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }


    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);
    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_company && !cJSON_IsNull(s_contact_company)) s_contact_company_local_str = strdup(s_contact_company->valuestring);
    if (s_address_civic && !cJSON_IsNull(s_address_civic)) s_address_civic_local_str = strdup(s_address_civic->valuestring);
    if (s_address_street && !cJSON_IsNull(s_address_street)) s_address_street_local_str = strdup(s_address_street->valuestring);
    if (s_address_suite && !cJSON_IsNull(s_address_suite)) s_address_suite_local_str = strdup(s_address_suite->valuestring);
    if (s_address_city && !cJSON_IsNull(s_address_city)) s_address_city_local_str = strdup(s_address_city->valuestring);
    if (s_phone_e164 && !cJSON_IsNull(s_phone_e164)) s_phone_e164_local_str = strdup(s_phone_e164->valuestring);
    if (s_paymentmethod_description_x && !cJSON_IsNull(s_paymentmethod_description_x)) s_paymentmethod_description_x_local_str = strdup(s_paymentmethod_description_x->valuestring);
    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_country_name_x && !cJSON_IsNull(s_country_name_x)) s_country_name_x_local_str = strdup(s_country_name_x->valuestring);

    notary_list_element_local_var = notary_list_element_create_internal (
        pki_notary_id_local_var,
        fki_paymentmethod_id_local_var,
        fki_province_id_local_var,
        fki_country_id_local_var,
        s_contact_lastname_local_str,
        s_contact_firstname_local_str,
        s_contact_company_local_str,
        s_address_civic_local_str,
        s_address_street_local_str,
        s_address_suite_local_str,
        s_address_city_local_str,
        s_phone_e164_local_str,
        s_paymentmethod_description_x_local_str,
        s_province_name_x_local_str,
        s_country_name_x_local_str
        );

    if (!notary_list_element_local_var) {
        goto end;
    }

    return notary_list_element_local_var;
end:
    if (pki_notary_id_local_var) {
        free(pki_notary_id_local_var);
        pki_notary_id_local_var = NULL;
    }
    if (fki_paymentmethod_id_local_var) {
        free(fki_paymentmethod_id_local_var);
        fki_paymentmethod_id_local_var = NULL;
    }
    if (fki_province_id_local_var) {
        free(fki_province_id_local_var);
        fki_province_id_local_var = NULL;
    }
    if (fki_country_id_local_var) {
        free(fki_country_id_local_var);
        fki_country_id_local_var = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_company_local_str) {
        free(s_contact_company_local_str);
        s_contact_company_local_str = NULL;
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
    if (s_phone_e164_local_str) {
        free(s_phone_e164_local_str);
        s_phone_e164_local_str = NULL;
    }
    if (s_paymentmethod_description_x_local_str) {
        free(s_paymentmethod_description_x_local_str);
        s_paymentmethod_description_x_local_str = NULL;
    }
    if (s_province_name_x_local_str) {
        free(s_province_name_x_local_str);
        s_province_name_x_local_str = NULL;
    }
    if (s_country_name_x_local_str) {
        free(s_country_name_x_local_str);
        s_country_name_x_local_str = NULL;
    }
    return NULL;

}
