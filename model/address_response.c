#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_response.h"



static address_response_t *address_response_create_internal(
    int *pki_address_id,
    int *fki_addresstype_id,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x,
    char *s_address_zip,
    char *f_address_longitude,
    char *f_address_latitude
    ) {
    address_response_t *address_response_local_var = malloc(sizeof(address_response_t));
    if (!address_response_local_var) {
        return NULL;
    }
    memset(address_response_local_var, 0, sizeof(address_response_t));
    address_response_local_var->_library_owned = 1;
    address_response_local_var->pki_address_id = pki_address_id;
    address_response_local_var->fki_addresstype_id = fki_addresstype_id;
    address_response_local_var->s_address_civic = s_address_civic;
    address_response_local_var->s_address_street = s_address_street;
    address_response_local_var->s_address_suite = s_address_suite;
    address_response_local_var->s_address_city = s_address_city;
    address_response_local_var->fki_province_id = fki_province_id;
    address_response_local_var->s_province_name_x = s_province_name_x;
    address_response_local_var->fki_country_id = fki_country_id;
    address_response_local_var->s_country_name_x = s_country_name_x;
    address_response_local_var->s_address_zip = s_address_zip;
    address_response_local_var->f_address_longitude = f_address_longitude;
    address_response_local_var->f_address_latitude = f_address_latitude;
    return address_response_local_var;
}

__attribute__((deprecated)) address_response_t *address_response_create(
    int *pki_address_id,
    int *fki_addresstype_id,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x,
    char *s_address_zip,
    char *f_address_longitude,
    char *f_address_latitude
    ) {
    int *pki_address_id_copy = NULL;
    if (pki_address_id) {
        pki_address_id_copy = malloc(sizeof(int));
        if (pki_address_id_copy) *pki_address_id_copy = *pki_address_id;
    }
    int *fki_addresstype_id_copy = NULL;
    if (fki_addresstype_id) {
        fki_addresstype_id_copy = malloc(sizeof(int));
        if (fki_addresstype_id_copy) *fki_addresstype_id_copy = *fki_addresstype_id;
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
    address_response_t *result = address_response_create_internal (
        pki_address_id_copy,
        fki_addresstype_id_copy,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        fki_province_id_copy,
        s_province_name_x,
        fki_country_id_copy,
        s_country_name_x,
        s_address_zip,
        f_address_longitude,
        f_address_latitude
        );
    if (!result) {
        free(pki_address_id_copy);
        free(fki_addresstype_id_copy);
        free(fki_province_id_copy);
        free(fki_country_id_copy);
    }
    return result;
}

void address_response_free(address_response_t *address_response) {
    if(NULL == address_response){
        return ;
    }
    if(address_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "address_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (address_response->pki_address_id) {
        free(address_response->pki_address_id);
        address_response->pki_address_id = NULL;
    }
    if (address_response->fki_addresstype_id) {
        free(address_response->fki_addresstype_id);
        address_response->fki_addresstype_id = NULL;
    }
    if (address_response->s_address_civic) {
        free(address_response->s_address_civic);
        address_response->s_address_civic = NULL;
    }
    if (address_response->s_address_street) {
        free(address_response->s_address_street);
        address_response->s_address_street = NULL;
    }
    if (address_response->s_address_suite) {
        free(address_response->s_address_suite);
        address_response->s_address_suite = NULL;
    }
    if (address_response->s_address_city) {
        free(address_response->s_address_city);
        address_response->s_address_city = NULL;
    }
    if (address_response->fki_province_id) {
        free(address_response->fki_province_id);
        address_response->fki_province_id = NULL;
    }
    if (address_response->s_province_name_x) {
        free(address_response->s_province_name_x);
        address_response->s_province_name_x = NULL;
    }
    if (address_response->fki_country_id) {
        free(address_response->fki_country_id);
        address_response->fki_country_id = NULL;
    }
    if (address_response->s_country_name_x) {
        free(address_response->s_country_name_x);
        address_response->s_country_name_x = NULL;
    }
    if (address_response->s_address_zip) {
        free(address_response->s_address_zip);
        address_response->s_address_zip = NULL;
    }
    if (address_response->f_address_longitude) {
        free(address_response->f_address_longitude);
        address_response->f_address_longitude = NULL;
    }
    if (address_response->f_address_latitude) {
        free(address_response->f_address_latitude);
        address_response->f_address_latitude = NULL;
    }
    free(address_response);
}

cJSON *address_response_convertToJSON(address_response_t *address_response) {
    cJSON *item = cJSON_CreateObject();

    // address_response->pki_address_id
    if (!address_response->pki_address_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAddressID", *address_response->pki_address_id) == NULL) {
    goto fail; //Numeric
    }


    // address_response->fki_addresstype_id
    if (!address_response->fki_addresstype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAddresstypeID", *address_response->fki_addresstype_id) == NULL) {
    goto fail; //Numeric
    }


    // address_response->s_address_civic
    if (!address_response->s_address_civic) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressCivic", address_response->s_address_civic) == NULL) {
    goto fail; //String
    }


    // address_response->s_address_street
    if (!address_response->s_address_street) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressStreet", address_response->s_address_street) == NULL) {
    goto fail; //String
    }


    // address_response->s_address_suite
    if(address_response->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", address_response->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // address_response->s_address_city
    if (!address_response->s_address_city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressCity", address_response->s_address_city) == NULL) {
    goto fail; //String
    }


    // address_response->fki_province_id
    if (!address_response->fki_province_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiProvinceID", *address_response->fki_province_id) == NULL) {
    goto fail; //Numeric
    }


    // address_response->s_province_name_x
    if (!address_response->s_province_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sProvinceNameX", address_response->s_province_name_x) == NULL) {
    goto fail; //String
    }


    // address_response->fki_country_id
    if (!address_response->fki_country_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCountryID", *address_response->fki_country_id) == NULL) {
    goto fail; //Numeric
    }


    // address_response->s_country_name_x
    if (!address_response->s_country_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCountryNameX", address_response->s_country_name_x) == NULL) {
    goto fail; //String
    }


    // address_response->s_address_zip
    if (!address_response->s_address_zip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressZip", address_response->s_address_zip) == NULL) {
    goto fail; //String
    }


    // address_response->f_address_longitude
    if(address_response->f_address_longitude) {
    if(cJSON_AddStringToObject(item, "fAddressLongitude", address_response->f_address_longitude) == NULL) {
    goto fail; //String
    }
    }


    // address_response->f_address_latitude
    if(address_response->f_address_latitude) {
    if(cJSON_AddStringToObject(item, "fAddressLatitude", address_response->f_address_latitude) == NULL) {
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

address_response_t *address_response_parseFromJSON(cJSON *address_responseJSON){

    address_response_t *address_response_local_var = NULL;

    // define the local variable for address_response->pki_address_id
    int *pki_address_id_local_var = NULL;

    // define the local variable for address_response->fki_addresstype_id
    int *fki_addresstype_id_local_var = NULL;

    char *s_address_civic_local_str = NULL;

    char *s_address_street_local_str = NULL;

    char *s_address_suite_local_str = NULL;

    char *s_address_city_local_str = NULL;

    // define the local variable for address_response->fki_province_id
    int *fki_province_id_local_var = NULL;

    char *s_province_name_x_local_str = NULL;

    // define the local variable for address_response->fki_country_id
    int *fki_country_id_local_var = NULL;

    char *s_country_name_x_local_str = NULL;

    char *s_address_zip_local_str = NULL;

    char *f_address_longitude_local_str = NULL;

    char *f_address_latitude_local_str = NULL;

    // address_response->pki_address_id
    cJSON *pki_address_id = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "pkiAddressID");
    if (cJSON_IsNull(pki_address_id)) {
        pki_address_id = NULL;
    }
    if (!pki_address_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_address_id))
    {
    goto end; //Numeric
    }
    pki_address_id_local_var = malloc(sizeof(int));
    if(!pki_address_id_local_var)
    {
        goto end;
    }
    *pki_address_id_local_var = pki_address_id->valuedouble;

    // address_response->fki_addresstype_id
    cJSON *fki_addresstype_id = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "fkiAddresstypeID");
    if (cJSON_IsNull(fki_addresstype_id)) {
        fki_addresstype_id = NULL;
    }
    if (!fki_addresstype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_addresstype_id))
    {
    goto end; //Numeric
    }
    fki_addresstype_id_local_var = malloc(sizeof(int));
    if(!fki_addresstype_id_local_var)
    {
        goto end;
    }
    *fki_addresstype_id_local_var = fki_addresstype_id->valuedouble;

    // address_response->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (!s_address_civic) {
        goto end;
    }

    
    if(!cJSON_IsString(s_address_civic))
    {
    goto end; //String
    }

    // address_response->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (!s_address_street) {
        goto end;
    }

    
    if(!cJSON_IsString(s_address_street))
    {
    goto end; //String
    }

    // address_response->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // address_response->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (!s_address_city) {
        goto end;
    }

    
    if(!cJSON_IsString(s_address_city))
    {
    goto end; //String
    }

    // address_response->fki_province_id
    cJSON *fki_province_id = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "fkiProvinceID");
    if (cJSON_IsNull(fki_province_id)) {
        fki_province_id = NULL;
    }
    if (!fki_province_id) {
        goto end;
    }

    
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

    // address_response->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (!s_province_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_province_name_x))
    {
    goto end; //String
    }

    // address_response->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "fkiCountryID");
    if (cJSON_IsNull(fki_country_id)) {
        fki_country_id = NULL;
    }
    if (!fki_country_id) {
        goto end;
    }

    
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

    // address_response->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (!s_country_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_country_name_x))
    {
    goto end; //String
    }

    // address_response->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (!s_address_zip) {
        goto end;
    }

    
    if(!cJSON_IsString(s_address_zip))
    {
    goto end; //String
    }

    // address_response->f_address_longitude
    cJSON *f_address_longitude = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "fAddressLongitude");
    if (cJSON_IsNull(f_address_longitude)) {
        f_address_longitude = NULL;
    }
    if (f_address_longitude) { 
    if(!cJSON_IsString(f_address_longitude) && !cJSON_IsNull(f_address_longitude))
    {
    goto end; //String
    }
    }

    // address_response->f_address_latitude
    cJSON *f_address_latitude = cJSON_GetObjectItemCaseSensitive(address_responseJSON, "fAddressLatitude");
    if (cJSON_IsNull(f_address_latitude)) {
        f_address_latitude = NULL;
    }
    if (f_address_latitude) { 
    if(!cJSON_IsString(f_address_latitude) && !cJSON_IsNull(f_address_latitude))
    {
    goto end; //String
    }
    }


    if (s_address_civic && !cJSON_IsNull(s_address_civic)) s_address_civic_local_str = strdup(s_address_civic->valuestring);
    if (s_address_street && !cJSON_IsNull(s_address_street)) s_address_street_local_str = strdup(s_address_street->valuestring);
    if (s_address_suite && !cJSON_IsNull(s_address_suite)) s_address_suite_local_str = strdup(s_address_suite->valuestring);
    if (s_address_city && !cJSON_IsNull(s_address_city)) s_address_city_local_str = strdup(s_address_city->valuestring);
    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_country_name_x && !cJSON_IsNull(s_country_name_x)) s_country_name_x_local_str = strdup(s_country_name_x->valuestring);
    if (s_address_zip && !cJSON_IsNull(s_address_zip)) s_address_zip_local_str = strdup(s_address_zip->valuestring);
    if (f_address_longitude && !cJSON_IsNull(f_address_longitude)) f_address_longitude_local_str = strdup(f_address_longitude->valuestring);
    if (f_address_latitude && !cJSON_IsNull(f_address_latitude)) f_address_latitude_local_str = strdup(f_address_latitude->valuestring);

    address_response_local_var = address_response_create_internal (
        pki_address_id_local_var,
        fki_addresstype_id_local_var,
        s_address_civic_local_str,
        s_address_street_local_str,
        s_address_suite_local_str,
        s_address_city_local_str,
        fki_province_id_local_var,
        s_province_name_x_local_str,
        fki_country_id_local_var,
        s_country_name_x_local_str,
        s_address_zip_local_str,
        f_address_longitude_local_str,
        f_address_latitude_local_str
        );

    if (!address_response_local_var) {
        goto end;
    }

    return address_response_local_var;
end:
    if (pki_address_id_local_var) {
        free(pki_address_id_local_var);
        pki_address_id_local_var = NULL;
    }
    if (fki_addresstype_id_local_var) {
        free(fki_addresstype_id_local_var);
        fki_addresstype_id_local_var = NULL;
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
    if (s_address_zip_local_str) {
        free(s_address_zip_local_str);
        s_address_zip_local_str = NULL;
    }
    if (f_address_longitude_local_str) {
        free(f_address_longitude_local_str);
        f_address_longitude_local_str = NULL;
    }
    if (f_address_latitude_local_str) {
        free(f_address_latitude_local_str);
        f_address_latitude_local_str = NULL;
    }
    return NULL;

}
