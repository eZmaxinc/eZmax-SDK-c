#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phone_request.h"



static phone_request_t *phone_request_create_internal(
    int pki_phone_id,
    int fki_phonetype_id,
    ezmax_api_definition__full_field_e_phone_type__e e_phone_type,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_international,
    char *s_phone_extension,
    char *s_phone_e164
    ) {
    phone_request_t *phone_request_local_var = malloc(sizeof(phone_request_t));
    if (!phone_request_local_var) {
        return NULL;
    }
    phone_request_local_var->pki_phone_id = pki_phone_id;
    phone_request_local_var->fki_phonetype_id = fki_phonetype_id;
    phone_request_local_var->e_phone_type = e_phone_type;
    phone_request_local_var->s_phone_region = s_phone_region;
    phone_request_local_var->s_phone_exchange = s_phone_exchange;
    phone_request_local_var->s_phone_number = s_phone_number;
    phone_request_local_var->s_phone_international = s_phone_international;
    phone_request_local_var->s_phone_extension = s_phone_extension;
    phone_request_local_var->s_phone_e164 = s_phone_e164;

    phone_request_local_var->_library_owned = 1;
    return phone_request_local_var;
}

__attribute__((deprecated)) phone_request_t *phone_request_create(
    int pki_phone_id,
    int fki_phonetype_id,
    ezmax_api_definition__full_field_e_phone_type__e e_phone_type,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_international,
    char *s_phone_extension,
    char *s_phone_e164
    ) {
    return phone_request_create_internal (
        pki_phone_id,
        fki_phonetype_id,
        e_phone_type,
        s_phone_region,
        s_phone_exchange,
        s_phone_number,
        s_phone_international,
        s_phone_extension,
        s_phone_e164
        );
}

void phone_request_free(phone_request_t *phone_request) {
    if(NULL == phone_request){
        return ;
    }
    if(phone_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "phone_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (phone_request->s_phone_region) {
        free(phone_request->s_phone_region);
        phone_request->s_phone_region = NULL;
    }
    if (phone_request->s_phone_exchange) {
        free(phone_request->s_phone_exchange);
        phone_request->s_phone_exchange = NULL;
    }
    if (phone_request->s_phone_number) {
        free(phone_request->s_phone_number);
        phone_request->s_phone_number = NULL;
    }
    if (phone_request->s_phone_international) {
        free(phone_request->s_phone_international);
        phone_request->s_phone_international = NULL;
    }
    if (phone_request->s_phone_extension) {
        free(phone_request->s_phone_extension);
        phone_request->s_phone_extension = NULL;
    }
    if (phone_request->s_phone_e164) {
        free(phone_request->s_phone_e164);
        phone_request->s_phone_e164 = NULL;
    }
    free(phone_request);
}

cJSON *phone_request_convertToJSON(phone_request_t *phone_request) {
    cJSON *item = cJSON_CreateObject();

    // phone_request->pki_phone_id
    if(phone_request->pki_phone_id) {
    if(cJSON_AddNumberToObject(item, "pkiPhoneID", phone_request->pki_phone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // phone_request->fki_phonetype_id
    if (!phone_request->fki_phonetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPhonetypeID", phone_request->fki_phonetype_id) == NULL) {
    goto fail; //Numeric
    }


    // phone_request->e_phone_type
    if(phone_request->e_phone_type != ezmax_api_definition__full_field_e_phone_type__NULL) {
    cJSON *e_phone_type_local_JSON = field_e_phone_type_convertToJSON(phone_request->e_phone_type);
    if(e_phone_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePhoneType", e_phone_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // phone_request->s_phone_region
    if(phone_request->s_phone_region) {
    if(cJSON_AddStringToObject(item, "sPhoneRegion", phone_request->s_phone_region) == NULL) {
    goto fail; //String
    }
    }


    // phone_request->s_phone_exchange
    if(phone_request->s_phone_exchange) {
    if(cJSON_AddStringToObject(item, "sPhoneExchange", phone_request->s_phone_exchange) == NULL) {
    goto fail; //String
    }
    }


    // phone_request->s_phone_number
    if(phone_request->s_phone_number) {
    if(cJSON_AddStringToObject(item, "sPhoneNumber", phone_request->s_phone_number) == NULL) {
    goto fail; //String
    }
    }


    // phone_request->s_phone_international
    if(phone_request->s_phone_international) {
    if(cJSON_AddStringToObject(item, "sPhoneInternational", phone_request->s_phone_international) == NULL) {
    goto fail; //String
    }
    }


    // phone_request->s_phone_extension
    if(phone_request->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", phone_request->s_phone_extension) == NULL) {
    goto fail; //String
    }
    }


    // phone_request->s_phone_e164
    if(phone_request->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", phone_request->s_phone_e164) == NULL) {
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

phone_request_t *phone_request_parseFromJSON(cJSON *phone_requestJSON){

    phone_request_t *phone_request_local_var = NULL;

    // define the local variable for phone_request->e_phone_type
    ezmax_api_definition__full_field_e_phone_type__e e_phone_type_local_nonprim = 0;

    // phone_request->pki_phone_id
    cJSON *pki_phone_id = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "pkiPhoneID");
    if (cJSON_IsNull(pki_phone_id)) {
        pki_phone_id = NULL;
    }
    if (pki_phone_id) { 
    if(!cJSON_IsNumber(pki_phone_id))
    {
    goto end; //Numeric
    }
    }

    // phone_request->fki_phonetype_id
    cJSON *fki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "fkiPhonetypeID");
    if (cJSON_IsNull(fki_phonetype_id)) {
        fki_phonetype_id = NULL;
    }
    if (!fki_phonetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_phonetype_id))
    {
    goto end; //Numeric
    }

    // phone_request->e_phone_type
    cJSON *e_phone_type = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "ePhoneType");
    if (cJSON_IsNull(e_phone_type)) {
        e_phone_type = NULL;
    }
    if (e_phone_type) { 
    e_phone_type_local_nonprim = field_e_phone_type_parseFromJSON(e_phone_type); //custom
    }

    // phone_request->s_phone_region
    cJSON *s_phone_region = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneRegion");
    if (cJSON_IsNull(s_phone_region)) {
        s_phone_region = NULL;
    }
    if (s_phone_region) { 
    if(!cJSON_IsString(s_phone_region) && !cJSON_IsNull(s_phone_region))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_exchange
    cJSON *s_phone_exchange = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneExchange");
    if (cJSON_IsNull(s_phone_exchange)) {
        s_phone_exchange = NULL;
    }
    if (s_phone_exchange) { 
    if(!cJSON_IsString(s_phone_exchange) && !cJSON_IsNull(s_phone_exchange))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_number
    cJSON *s_phone_number = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneNumber");
    if (cJSON_IsNull(s_phone_number)) {
        s_phone_number = NULL;
    }
    if (s_phone_number) { 
    if(!cJSON_IsString(s_phone_number) && !cJSON_IsNull(s_phone_number))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_international
    cJSON *s_phone_international = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneInternational");
    if (cJSON_IsNull(s_phone_international)) {
        s_phone_international = NULL;
    }
    if (s_phone_international) { 
    if(!cJSON_IsString(s_phone_international) && !cJSON_IsNull(s_phone_international))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneExtension");
    if (cJSON_IsNull(s_phone_extension)) {
        s_phone_extension = NULL;
    }
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension) && !cJSON_IsNull(s_phone_extension))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }


    phone_request_local_var = phone_request_create_internal (
        pki_phone_id ? pki_phone_id->valuedouble : 0,
        fki_phonetype_id->valuedouble,
        e_phone_type ? e_phone_type_local_nonprim : 0,
        s_phone_region && !cJSON_IsNull(s_phone_region) ? strdup(s_phone_region->valuestring) : NULL,
        s_phone_exchange && !cJSON_IsNull(s_phone_exchange) ? strdup(s_phone_exchange->valuestring) : NULL,
        s_phone_number && !cJSON_IsNull(s_phone_number) ? strdup(s_phone_number->valuestring) : NULL,
        s_phone_international && !cJSON_IsNull(s_phone_international) ? strdup(s_phone_international->valuestring) : NULL,
        s_phone_extension && !cJSON_IsNull(s_phone_extension) ? strdup(s_phone_extension->valuestring) : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL
        );

    return phone_request_local_var;
end:
    if (e_phone_type_local_nonprim) {
        e_phone_type_local_nonprim = 0;
    }
    return NULL;

}
