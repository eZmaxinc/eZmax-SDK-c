#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rejectedoffertopurchase_list_element.h"



static rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element_create_internal(
    int *pki_rejectedoffertopurchase_id,
    char *s_rejectedoffertopurchase_number,
    char *dt_rejectedoffertopurchase_date,
    int *b_rejectedoffertopurchase_isactive,
    char *dt_created_date,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x,
    int *b_rejectedoffertopurchase_linkedtoinscription
    ) {
    rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element_local_var = malloc(sizeof(rejectedoffertopurchase_list_element_t));
    if (!rejectedoffertopurchase_list_element_local_var) {
        return NULL;
    }
    memset(rejectedoffertopurchase_list_element_local_var, 0, sizeof(rejectedoffertopurchase_list_element_t));
    rejectedoffertopurchase_list_element_local_var->_library_owned = 1;
    rejectedoffertopurchase_list_element_local_var->pki_rejectedoffertopurchase_id = pki_rejectedoffertopurchase_id;
    rejectedoffertopurchase_list_element_local_var->s_rejectedoffertopurchase_number = s_rejectedoffertopurchase_number;
    rejectedoffertopurchase_list_element_local_var->dt_rejectedoffertopurchase_date = dt_rejectedoffertopurchase_date;
    rejectedoffertopurchase_list_element_local_var->b_rejectedoffertopurchase_isactive = b_rejectedoffertopurchase_isactive;
    rejectedoffertopurchase_list_element_local_var->dt_created_date = dt_created_date;
    rejectedoffertopurchase_list_element_local_var->s_address_civic = s_address_civic;
    rejectedoffertopurchase_list_element_local_var->s_address_street = s_address_street;
    rejectedoffertopurchase_list_element_local_var->s_address_suite = s_address_suite;
    rejectedoffertopurchase_list_element_local_var->s_address_city = s_address_city;
    rejectedoffertopurchase_list_element_local_var->s_address_zip = s_address_zip;
    rejectedoffertopurchase_list_element_local_var->fki_province_id = fki_province_id;
    rejectedoffertopurchase_list_element_local_var->s_province_name_x = s_province_name_x;
    rejectedoffertopurchase_list_element_local_var->fki_country_id = fki_country_id;
    rejectedoffertopurchase_list_element_local_var->s_country_name_x = s_country_name_x;
    rejectedoffertopurchase_list_element_local_var->b_rejectedoffertopurchase_linkedtoinscription = b_rejectedoffertopurchase_linkedtoinscription;
    return rejectedoffertopurchase_list_element_local_var;
}

__attribute__((deprecated)) rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element_create(
    int *pki_rejectedoffertopurchase_id,
    char *s_rejectedoffertopurchase_number,
    char *dt_rejectedoffertopurchase_date,
    int *b_rejectedoffertopurchase_isactive,
    char *dt_created_date,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x,
    int *b_rejectedoffertopurchase_linkedtoinscription
    ) {
    int *pki_rejectedoffertopurchase_id_copy = NULL;
    if (pki_rejectedoffertopurchase_id) {
        pki_rejectedoffertopurchase_id_copy = malloc(sizeof(int));
        if (pki_rejectedoffertopurchase_id_copy) *pki_rejectedoffertopurchase_id_copy = *pki_rejectedoffertopurchase_id;
    }
    int *b_rejectedoffertopurchase_isactive_copy = NULL;
    if (b_rejectedoffertopurchase_isactive) {
        b_rejectedoffertopurchase_isactive_copy = malloc(sizeof(int));
        if (b_rejectedoffertopurchase_isactive_copy) *b_rejectedoffertopurchase_isactive_copy = *b_rejectedoffertopurchase_isactive;
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
    int *b_rejectedoffertopurchase_linkedtoinscription_copy = NULL;
    if (b_rejectedoffertopurchase_linkedtoinscription) {
        b_rejectedoffertopurchase_linkedtoinscription_copy = malloc(sizeof(int));
        if (b_rejectedoffertopurchase_linkedtoinscription_copy) *b_rejectedoffertopurchase_linkedtoinscription_copy = *b_rejectedoffertopurchase_linkedtoinscription;
    }
    rejectedoffertopurchase_list_element_t *result = rejectedoffertopurchase_list_element_create_internal (
        pki_rejectedoffertopurchase_id_copy,
        s_rejectedoffertopurchase_number,
        dt_rejectedoffertopurchase_date,
        b_rejectedoffertopurchase_isactive_copy,
        dt_created_date,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        s_address_zip,
        fki_province_id_copy,
        s_province_name_x,
        fki_country_id_copy,
        s_country_name_x,
        b_rejectedoffertopurchase_linkedtoinscription_copy
        );
    if (!result) {
        free(pki_rejectedoffertopurchase_id_copy);
        free(b_rejectedoffertopurchase_isactive_copy);
        free(fki_province_id_copy);
        free(fki_country_id_copy);
        free(b_rejectedoffertopurchase_linkedtoinscription_copy);
    }
    return result;
}

void rejectedoffertopurchase_list_element_free(rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element) {
    if(NULL == rejectedoffertopurchase_list_element){
        return ;
    }
    if(rejectedoffertopurchase_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "rejectedoffertopurchase_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id) {
        free(rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id);
        rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_rejectedoffertopurchase_number) {
        free(rejectedoffertopurchase_list_element->s_rejectedoffertopurchase_number);
        rejectedoffertopurchase_list_element->s_rejectedoffertopurchase_number = NULL;
    }
    if (rejectedoffertopurchase_list_element->dt_rejectedoffertopurchase_date) {
        free(rejectedoffertopurchase_list_element->dt_rejectedoffertopurchase_date);
        rejectedoffertopurchase_list_element->dt_rejectedoffertopurchase_date = NULL;
    }
    if (rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive) {
        free(rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive);
        rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive = NULL;
    }
    if (rejectedoffertopurchase_list_element->dt_created_date) {
        free(rejectedoffertopurchase_list_element->dt_created_date);
        rejectedoffertopurchase_list_element->dt_created_date = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_address_civic) {
        free(rejectedoffertopurchase_list_element->s_address_civic);
        rejectedoffertopurchase_list_element->s_address_civic = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_address_street) {
        free(rejectedoffertopurchase_list_element->s_address_street);
        rejectedoffertopurchase_list_element->s_address_street = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_address_suite) {
        free(rejectedoffertopurchase_list_element->s_address_suite);
        rejectedoffertopurchase_list_element->s_address_suite = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_address_city) {
        free(rejectedoffertopurchase_list_element->s_address_city);
        rejectedoffertopurchase_list_element->s_address_city = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_address_zip) {
        free(rejectedoffertopurchase_list_element->s_address_zip);
        rejectedoffertopurchase_list_element->s_address_zip = NULL;
    }
    if (rejectedoffertopurchase_list_element->fki_province_id) {
        free(rejectedoffertopurchase_list_element->fki_province_id);
        rejectedoffertopurchase_list_element->fki_province_id = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_province_name_x) {
        free(rejectedoffertopurchase_list_element->s_province_name_x);
        rejectedoffertopurchase_list_element->s_province_name_x = NULL;
    }
    if (rejectedoffertopurchase_list_element->fki_country_id) {
        free(rejectedoffertopurchase_list_element->fki_country_id);
        rejectedoffertopurchase_list_element->fki_country_id = NULL;
    }
    if (rejectedoffertopurchase_list_element->s_country_name_x) {
        free(rejectedoffertopurchase_list_element->s_country_name_x);
        rejectedoffertopurchase_list_element->s_country_name_x = NULL;
    }
    if (rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription) {
        free(rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription);
        rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription = NULL;
    }
    free(rejectedoffertopurchase_list_element);
}

cJSON *rejectedoffertopurchase_list_element_convertToJSON(rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element) {
    cJSON *item = cJSON_CreateObject();

    // rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id
    if (!rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiRejectedoffertopurchaseID", *rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id) == NULL) {
    goto fail; //Numeric
    }


    // rejectedoffertopurchase_list_element->s_rejectedoffertopurchase_number
    if (!rejectedoffertopurchase_list_element->s_rejectedoffertopurchase_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sRejectedoffertopurchaseNumber", rejectedoffertopurchase_list_element->s_rejectedoffertopurchase_number) == NULL) {
    goto fail; //String
    }


    // rejectedoffertopurchase_list_element->dt_rejectedoffertopurchase_date
    if (!rejectedoffertopurchase_list_element->dt_rejectedoffertopurchase_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtRejectedoffertopurchaseDate", rejectedoffertopurchase_list_element->dt_rejectedoffertopurchase_date) == NULL) {
    goto fail; //String
    }


    // rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive
    if (!rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bRejectedoffertopurchaseIsactive", *rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive) == NULL) {
    goto fail; //Bool
    }


    // rejectedoffertopurchase_list_element->dt_created_date
    if (!rejectedoffertopurchase_list_element->dt_created_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCreatedDate", rejectedoffertopurchase_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // rejectedoffertopurchase_list_element->s_address_civic
    if(rejectedoffertopurchase_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", rejectedoffertopurchase_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // rejectedoffertopurchase_list_element->s_address_street
    if(rejectedoffertopurchase_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", rejectedoffertopurchase_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // rejectedoffertopurchase_list_element->s_address_suite
    if(rejectedoffertopurchase_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", rejectedoffertopurchase_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // rejectedoffertopurchase_list_element->s_address_city
    if(rejectedoffertopurchase_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", rejectedoffertopurchase_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // rejectedoffertopurchase_list_element->s_address_zip
    if(rejectedoffertopurchase_list_element->s_address_zip) {
    if(cJSON_AddStringToObject(item, "sAddressZip", rejectedoffertopurchase_list_element->s_address_zip) == NULL) {
    goto fail; //String
    }
    }


    // rejectedoffertopurchase_list_element->fki_province_id
    if(rejectedoffertopurchase_list_element->fki_province_id) {
    if(cJSON_AddNumberToObject(item, "fkiProvinceID", *rejectedoffertopurchase_list_element->fki_province_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // rejectedoffertopurchase_list_element->s_province_name_x
    if(rejectedoffertopurchase_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", rejectedoffertopurchase_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // rejectedoffertopurchase_list_element->fki_country_id
    if(rejectedoffertopurchase_list_element->fki_country_id) {
    if(cJSON_AddNumberToObject(item, "fkiCountryID", *rejectedoffertopurchase_list_element->fki_country_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // rejectedoffertopurchase_list_element->s_country_name_x
    if(rejectedoffertopurchase_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", rejectedoffertopurchase_list_element->s_country_name_x) == NULL) {
    goto fail; //String
    }
    }


    // rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription
    if (!rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bRejectedoffertopurchaseLinkedtoinscription", *rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element_parseFromJSON(cJSON *rejectedoffertopurchase_list_elementJSON){

    rejectedoffertopurchase_list_element_t *rejectedoffertopurchase_list_element_local_var = NULL;

    // define the local variable for rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id
    int *pki_rejectedoffertopurchase_id_local_var = NULL;

    char *s_rejectedoffertopurchase_number_local_str = NULL;

    char *dt_rejectedoffertopurchase_date_local_str = NULL;

    // define the local variable for rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive
    int *b_rejectedoffertopurchase_isactive_local_var = NULL;

    char *dt_created_date_local_str = NULL;

    char *s_address_civic_local_str = NULL;

    char *s_address_street_local_str = NULL;

    char *s_address_suite_local_str = NULL;

    char *s_address_city_local_str = NULL;

    char *s_address_zip_local_str = NULL;

    // define the local variable for rejectedoffertopurchase_list_element->fki_province_id
    int *fki_province_id_local_var = NULL;

    char *s_province_name_x_local_str = NULL;

    // define the local variable for rejectedoffertopurchase_list_element->fki_country_id
    int *fki_country_id_local_var = NULL;

    char *s_country_name_x_local_str = NULL;

    // define the local variable for rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription
    int *b_rejectedoffertopurchase_linkedtoinscription_local_var = NULL;

    // rejectedoffertopurchase_list_element->pki_rejectedoffertopurchase_id
    cJSON *pki_rejectedoffertopurchase_id = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "pkiRejectedoffertopurchaseID");
    if (cJSON_IsNull(pki_rejectedoffertopurchase_id)) {
        pki_rejectedoffertopurchase_id = NULL;
    }
    if (!pki_rejectedoffertopurchase_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_rejectedoffertopurchase_id))
    {
    goto end; //Numeric
    }
    pki_rejectedoffertopurchase_id_local_var = malloc(sizeof(int));
    if(!pki_rejectedoffertopurchase_id_local_var)
    {
        goto end;
    }
    *pki_rejectedoffertopurchase_id_local_var = pki_rejectedoffertopurchase_id->valuedouble;

    // rejectedoffertopurchase_list_element->s_rejectedoffertopurchase_number
    cJSON *s_rejectedoffertopurchase_number = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sRejectedoffertopurchaseNumber");
    if (cJSON_IsNull(s_rejectedoffertopurchase_number)) {
        s_rejectedoffertopurchase_number = NULL;
    }
    if (!s_rejectedoffertopurchase_number) {
        goto end;
    }

    
    if(!cJSON_IsString(s_rejectedoffertopurchase_number))
    {
    goto end; //String
    }

    // rejectedoffertopurchase_list_element->dt_rejectedoffertopurchase_date
    cJSON *dt_rejectedoffertopurchase_date = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "dtRejectedoffertopurchaseDate");
    if (cJSON_IsNull(dt_rejectedoffertopurchase_date)) {
        dt_rejectedoffertopurchase_date = NULL;
    }
    if (!dt_rejectedoffertopurchase_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_rejectedoffertopurchase_date))
    {
    goto end; //String
    }

    // rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_isactive
    cJSON *b_rejectedoffertopurchase_isactive = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "bRejectedoffertopurchaseIsactive");
    if (cJSON_IsNull(b_rejectedoffertopurchase_isactive)) {
        b_rejectedoffertopurchase_isactive = NULL;
    }
    if (!b_rejectedoffertopurchase_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_rejectedoffertopurchase_isactive))
    {
    goto end; //Bool
    }
    b_rejectedoffertopurchase_isactive_local_var = malloc(sizeof(int));
    if(!b_rejectedoffertopurchase_isactive_local_var)
    {
        goto end;
    }
    *b_rejectedoffertopurchase_isactive_local_var = b_rejectedoffertopurchase_isactive->valueint;

    // rejectedoffertopurchase_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "dtCreatedDate");
    if (cJSON_IsNull(dt_created_date)) {
        dt_created_date = NULL;
    }
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // rejectedoffertopurchase_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // rejectedoffertopurchase_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // rejectedoffertopurchase_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // rejectedoffertopurchase_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // rejectedoffertopurchase_list_element->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (s_address_zip) { 
    if(!cJSON_IsString(s_address_zip) && !cJSON_IsNull(s_address_zip))
    {
    goto end; //String
    }
    }

    // rejectedoffertopurchase_list_element->fki_province_id
    cJSON *fki_province_id = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "fkiProvinceID");
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

    // rejectedoffertopurchase_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // rejectedoffertopurchase_list_element->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "fkiCountryID");
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

    // rejectedoffertopurchase_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }

    // rejectedoffertopurchase_list_element->b_rejectedoffertopurchase_linkedtoinscription
    cJSON *b_rejectedoffertopurchase_linkedtoinscription = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_list_elementJSON, "bRejectedoffertopurchaseLinkedtoinscription");
    if (cJSON_IsNull(b_rejectedoffertopurchase_linkedtoinscription)) {
        b_rejectedoffertopurchase_linkedtoinscription = NULL;
    }
    if (!b_rejectedoffertopurchase_linkedtoinscription) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_rejectedoffertopurchase_linkedtoinscription))
    {
    goto end; //Bool
    }
    b_rejectedoffertopurchase_linkedtoinscription_local_var = malloc(sizeof(int));
    if(!b_rejectedoffertopurchase_linkedtoinscription_local_var)
    {
        goto end;
    }
    *b_rejectedoffertopurchase_linkedtoinscription_local_var = b_rejectedoffertopurchase_linkedtoinscription->valueint;


    if (s_rejectedoffertopurchase_number && !cJSON_IsNull(s_rejectedoffertopurchase_number)) s_rejectedoffertopurchase_number_local_str = strdup(s_rejectedoffertopurchase_number->valuestring);
    if (dt_rejectedoffertopurchase_date && !cJSON_IsNull(dt_rejectedoffertopurchase_date)) dt_rejectedoffertopurchase_date_local_str = strdup(dt_rejectedoffertopurchase_date->valuestring);
    if (dt_created_date && !cJSON_IsNull(dt_created_date)) dt_created_date_local_str = strdup(dt_created_date->valuestring);
    if (s_address_civic && !cJSON_IsNull(s_address_civic)) s_address_civic_local_str = strdup(s_address_civic->valuestring);
    if (s_address_street && !cJSON_IsNull(s_address_street)) s_address_street_local_str = strdup(s_address_street->valuestring);
    if (s_address_suite && !cJSON_IsNull(s_address_suite)) s_address_suite_local_str = strdup(s_address_suite->valuestring);
    if (s_address_city && !cJSON_IsNull(s_address_city)) s_address_city_local_str = strdup(s_address_city->valuestring);
    if (s_address_zip && !cJSON_IsNull(s_address_zip)) s_address_zip_local_str = strdup(s_address_zip->valuestring);
    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_country_name_x && !cJSON_IsNull(s_country_name_x)) s_country_name_x_local_str = strdup(s_country_name_x->valuestring);

    rejectedoffertopurchase_list_element_local_var = rejectedoffertopurchase_list_element_create_internal (
        pki_rejectedoffertopurchase_id_local_var,
        s_rejectedoffertopurchase_number_local_str,
        dt_rejectedoffertopurchase_date_local_str,
        b_rejectedoffertopurchase_isactive_local_var,
        dt_created_date_local_str,
        s_address_civic_local_str,
        s_address_street_local_str,
        s_address_suite_local_str,
        s_address_city_local_str,
        s_address_zip_local_str,
        fki_province_id_local_var,
        s_province_name_x_local_str,
        fki_country_id_local_var,
        s_country_name_x_local_str,
        b_rejectedoffertopurchase_linkedtoinscription_local_var
        );

    if (!rejectedoffertopurchase_list_element_local_var) {
        goto end;
    }

    return rejectedoffertopurchase_list_element_local_var;
end:
    if (pki_rejectedoffertopurchase_id_local_var) {
        free(pki_rejectedoffertopurchase_id_local_var);
        pki_rejectedoffertopurchase_id_local_var = NULL;
    }
    if (s_rejectedoffertopurchase_number_local_str) {
        free(s_rejectedoffertopurchase_number_local_str);
        s_rejectedoffertopurchase_number_local_str = NULL;
    }
    if (dt_rejectedoffertopurchase_date_local_str) {
        free(dt_rejectedoffertopurchase_date_local_str);
        dt_rejectedoffertopurchase_date_local_str = NULL;
    }
    if (b_rejectedoffertopurchase_isactive_local_var) {
        free(b_rejectedoffertopurchase_isactive_local_var);
        b_rejectedoffertopurchase_isactive_local_var = NULL;
    }
    if (dt_created_date_local_str) {
        free(dt_created_date_local_str);
        dt_created_date_local_str = NULL;
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
    if (b_rejectedoffertopurchase_linkedtoinscription_local_var) {
        free(b_rejectedoffertopurchase_linkedtoinscription_local_var);
        b_rejectedoffertopurchase_linkedtoinscription_local_var = NULL;
    }
    return NULL;

}
