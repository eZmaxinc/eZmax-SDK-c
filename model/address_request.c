#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_request.h"



static address_request_t *address_request_create_internal(
    int pki_address_id,
    int fki_addresstype_id,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    int fki_province_id,
    int fki_country_id,
    char *s_address_zip,
    char *f_address_longitude,
    char *f_address_latitude
    ) {
    address_request_t *address_request_local_var = malloc(sizeof(address_request_t));
    if (!address_request_local_var) {
        return NULL;
    }
    address_request_local_var->pki_address_id = pki_address_id;
    address_request_local_var->fki_addresstype_id = fki_addresstype_id;
    address_request_local_var->s_address_civic = s_address_civic;
    address_request_local_var->s_address_street = s_address_street;
    address_request_local_var->s_address_suite = s_address_suite;
    address_request_local_var->s_address_city = s_address_city;
    address_request_local_var->fki_province_id = fki_province_id;
    address_request_local_var->fki_country_id = fki_country_id;
    address_request_local_var->s_address_zip = s_address_zip;
    address_request_local_var->f_address_longitude = f_address_longitude;
    address_request_local_var->f_address_latitude = f_address_latitude;

    address_request_local_var->_library_owned = 1;
    return address_request_local_var;
}

__attribute__((deprecated)) address_request_t *address_request_create(
    int pki_address_id,
    int fki_addresstype_id,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    int fki_province_id,
    int fki_country_id,
    char *s_address_zip,
    char *f_address_longitude,
    char *f_address_latitude
    ) {
    return address_request_create_internal (
        pki_address_id,
        fki_addresstype_id,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        fki_province_id,
        fki_country_id,
        s_address_zip,
        f_address_longitude,
        f_address_latitude
        );
}

void address_request_free(address_request_t *address_request) {
    if(NULL == address_request){
        return ;
    }
    if(address_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "address_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (address_request->s_address_civic) {
        free(address_request->s_address_civic);
        address_request->s_address_civic = NULL;
    }
    if (address_request->s_address_street) {
        free(address_request->s_address_street);
        address_request->s_address_street = NULL;
    }
    if (address_request->s_address_suite) {
        free(address_request->s_address_suite);
        address_request->s_address_suite = NULL;
    }
    if (address_request->s_address_city) {
        free(address_request->s_address_city);
        address_request->s_address_city = NULL;
    }
    if (address_request->s_address_zip) {
        free(address_request->s_address_zip);
        address_request->s_address_zip = NULL;
    }
    if (address_request->f_address_longitude) {
        free(address_request->f_address_longitude);
        address_request->f_address_longitude = NULL;
    }
    if (address_request->f_address_latitude) {
        free(address_request->f_address_latitude);
        address_request->f_address_latitude = NULL;
    }
    free(address_request);
}

cJSON *address_request_convertToJSON(address_request_t *address_request) {
    cJSON *item = cJSON_CreateObject();

    // address_request->pki_address_id
    if(address_request->pki_address_id) {
    if(cJSON_AddNumberToObject(item, "pkiAddressID", address_request->pki_address_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // address_request->fki_addresstype_id
    if (!address_request->fki_addresstype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAddresstypeID", address_request->fki_addresstype_id) == NULL) {
    goto fail; //Numeric
    }


    // address_request->s_address_civic
    if (!address_request->s_address_civic) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressCivic", address_request->s_address_civic) == NULL) {
    goto fail; //String
    }


    // address_request->s_address_street
    if (!address_request->s_address_street) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressStreet", address_request->s_address_street) == NULL) {
    goto fail; //String
    }


    // address_request->s_address_suite
    if(address_request->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", address_request->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // address_request->s_address_city
    if (!address_request->s_address_city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressCity", address_request->s_address_city) == NULL) {
    goto fail; //String
    }


    // address_request->fki_province_id
    if (!address_request->fki_province_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiProvinceID", address_request->fki_province_id) == NULL) {
    goto fail; //Numeric
    }


    // address_request->fki_country_id
    if (!address_request->fki_country_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCountryID", address_request->fki_country_id) == NULL) {
    goto fail; //Numeric
    }


    // address_request->s_address_zip
    if (!address_request->s_address_zip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAddressZip", address_request->s_address_zip) == NULL) {
    goto fail; //String
    }


    // address_request->f_address_longitude
    if(address_request->f_address_longitude) {
    if(cJSON_AddStringToObject(item, "fAddressLongitude", address_request->f_address_longitude) == NULL) {
    goto fail; //String
    }
    }


    // address_request->f_address_latitude
    if(address_request->f_address_latitude) {
    if(cJSON_AddStringToObject(item, "fAddressLatitude", address_request->f_address_latitude) == NULL) {
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

address_request_t *address_request_parseFromJSON(cJSON *address_requestJSON){

    address_request_t *address_request_local_var = NULL;

    // address_request->pki_address_id
    cJSON *pki_address_id = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "pkiAddressID");
    if (cJSON_IsNull(pki_address_id)) {
        pki_address_id = NULL;
    }
    if (pki_address_id) { 
    if(!cJSON_IsNumber(pki_address_id))
    {
    goto end; //Numeric
    }
    }

    // address_request->fki_addresstype_id
    cJSON *fki_addresstype_id = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "fkiAddresstypeID");
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

    // address_request->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "sAddressCivic");
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

    // address_request->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "sAddressStreet");
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

    // address_request->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // address_request->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "sAddressCity");
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

    // address_request->fki_province_id
    cJSON *fki_province_id = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "fkiProvinceID");
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

    // address_request->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "fkiCountryID");
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

    // address_request->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "sAddressZip");
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

    // address_request->f_address_longitude
    cJSON *f_address_longitude = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "fAddressLongitude");
    if (cJSON_IsNull(f_address_longitude)) {
        f_address_longitude = NULL;
    }
    if (f_address_longitude) { 
    if(!cJSON_IsString(f_address_longitude) && !cJSON_IsNull(f_address_longitude))
    {
    goto end; //String
    }
    }

    // address_request->f_address_latitude
    cJSON *f_address_latitude = cJSON_GetObjectItemCaseSensitive(address_requestJSON, "fAddressLatitude");
    if (cJSON_IsNull(f_address_latitude)) {
        f_address_latitude = NULL;
    }
    if (f_address_latitude) { 
    if(!cJSON_IsString(f_address_latitude) && !cJSON_IsNull(f_address_latitude))
    {
    goto end; //String
    }
    }


    address_request_local_var = address_request_create_internal (
        pki_address_id ? pki_address_id->valuedouble : 0,
        fki_addresstype_id->valuedouble,
        strdup(s_address_civic->valuestring),
        strdup(s_address_street->valuestring),
        s_address_suite && !cJSON_IsNull(s_address_suite) ? strdup(s_address_suite->valuestring) : NULL,
        strdup(s_address_city->valuestring),
        fki_province_id->valuedouble,
        fki_country_id->valuedouble,
        strdup(s_address_zip->valuestring),
        f_address_longitude && !cJSON_IsNull(f_address_longitude) ? strdup(f_address_longitude->valuestring) : NULL,
        f_address_latitude && !cJSON_IsNull(f_address_latitude) ? strdup(f_address_latitude->valuestring) : NULL
        );

    return address_request_local_var;
end:
    return NULL;

}
