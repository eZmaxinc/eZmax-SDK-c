#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phone_request_compound.h"


char* e_phone_typephone_request_compound_ToString(ezmax_api_definition__full_phone_request_compound__e e_phone_type) {
    char* e_phone_typeArray[] =  { "NULL", "Local", "International" };
    return e_phone_typeArray[e_phone_type];
}

ezmax_api_definition__full_phone_request_compound__e e_phone_typephone_request_compound_FromString(char* e_phone_type){
    int stringToReturn = 0;
    char *e_phone_typeArray[] =  { "NULL", "Local", "International" };
    size_t sizeofArray = sizeof(e_phone_typeArray) / sizeof(e_phone_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_phone_type, e_phone_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

phone_request_compound_t *phone_request_compound_create(
    int pki_phone_id,
    int fki_phonetype_id,
    field_e_phone_type_t *e_phone_type,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_international,
    char *s_phone_extension,
    char *s_phone_e164
    ) {
    phone_request_compound_t *phone_request_compound_local_var = malloc(sizeof(phone_request_compound_t));
    if (!phone_request_compound_local_var) {
        return NULL;
    }
    phone_request_compound_local_var->pki_phone_id = pki_phone_id;
    phone_request_compound_local_var->fki_phonetype_id = fki_phonetype_id;
    phone_request_compound_local_var->e_phone_type = e_phone_type;
    phone_request_compound_local_var->s_phone_region = s_phone_region;
    phone_request_compound_local_var->s_phone_exchange = s_phone_exchange;
    phone_request_compound_local_var->s_phone_number = s_phone_number;
    phone_request_compound_local_var->s_phone_international = s_phone_international;
    phone_request_compound_local_var->s_phone_extension = s_phone_extension;
    phone_request_compound_local_var->s_phone_e164 = s_phone_e164;

    return phone_request_compound_local_var;
}


void phone_request_compound_free(phone_request_compound_t *phone_request_compound) {
    if(NULL == phone_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (phone_request_compound->e_phone_type) {
        field_e_phone_type_free(phone_request_compound->e_phone_type);
        phone_request_compound->e_phone_type = NULL;
    }
    if (phone_request_compound->s_phone_region) {
        free(phone_request_compound->s_phone_region);
        phone_request_compound->s_phone_region = NULL;
    }
    if (phone_request_compound->s_phone_exchange) {
        free(phone_request_compound->s_phone_exchange);
        phone_request_compound->s_phone_exchange = NULL;
    }
    if (phone_request_compound->s_phone_number) {
        free(phone_request_compound->s_phone_number);
        phone_request_compound->s_phone_number = NULL;
    }
    if (phone_request_compound->s_phone_international) {
        free(phone_request_compound->s_phone_international);
        phone_request_compound->s_phone_international = NULL;
    }
    if (phone_request_compound->s_phone_extension) {
        free(phone_request_compound->s_phone_extension);
        phone_request_compound->s_phone_extension = NULL;
    }
    if (phone_request_compound->s_phone_e164) {
        free(phone_request_compound->s_phone_e164);
        phone_request_compound->s_phone_e164 = NULL;
    }
    free(phone_request_compound);
}

cJSON *phone_request_compound_convertToJSON(phone_request_compound_t *phone_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // phone_request_compound->pki_phone_id
    if(phone_request_compound->pki_phone_id) {
    if(cJSON_AddNumberToObject(item, "pkiPhoneID", phone_request_compound->pki_phone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // phone_request_compound->fki_phonetype_id
    if (!phone_request_compound->fki_phonetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPhonetypeID", phone_request_compound->fki_phonetype_id) == NULL) {
    goto fail; //Numeric
    }


    // phone_request_compound->e_phone_type
    if(phone_request_compound->e_phone_type != ezmax_api_definition__full_phone_request_compound__NULL) {
    cJSON *e_phone_type_local_JSON = field_e_phone_type_convertToJSON(phone_request_compound->e_phone_type);
    if(e_phone_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePhoneType", e_phone_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // phone_request_compound->s_phone_region
    if(phone_request_compound->s_phone_region) {
    if(cJSON_AddStringToObject(item, "sPhoneRegion", phone_request_compound->s_phone_region) == NULL) {
    goto fail; //String
    }
    }


    // phone_request_compound->s_phone_exchange
    if(phone_request_compound->s_phone_exchange) {
    if(cJSON_AddStringToObject(item, "sPhoneExchange", phone_request_compound->s_phone_exchange) == NULL) {
    goto fail; //String
    }
    }


    // phone_request_compound->s_phone_number
    if(phone_request_compound->s_phone_number) {
    if(cJSON_AddStringToObject(item, "sPhoneNumber", phone_request_compound->s_phone_number) == NULL) {
    goto fail; //String
    }
    }


    // phone_request_compound->s_phone_international
    if(phone_request_compound->s_phone_international) {
    if(cJSON_AddStringToObject(item, "sPhoneInternational", phone_request_compound->s_phone_international) == NULL) {
    goto fail; //String
    }
    }


    // phone_request_compound->s_phone_extension
    if(phone_request_compound->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", phone_request_compound->s_phone_extension) == NULL) {
    goto fail; //String
    }
    }


    // phone_request_compound->s_phone_e164
    if(phone_request_compound->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", phone_request_compound->s_phone_e164) == NULL) {
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

phone_request_compound_t *phone_request_compound_parseFromJSON(cJSON *phone_request_compoundJSON){

    phone_request_compound_t *phone_request_compound_local_var = NULL;

    // define the local variable for phone_request_compound->e_phone_type
    field_e_phone_type_t *e_phone_type_local_nonprim = NULL;

    // phone_request_compound->pki_phone_id
    cJSON *pki_phone_id = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "pkiPhoneID");
    if (pki_phone_id) { 
    if(!cJSON_IsNumber(pki_phone_id))
    {
    goto end; //Numeric
    }
    }

    // phone_request_compound->fki_phonetype_id
    cJSON *fki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "fkiPhonetypeID");
    if (!fki_phonetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_phonetype_id))
    {
    goto end; //Numeric
    }

    // phone_request_compound->e_phone_type
    cJSON *e_phone_type = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "ePhoneType");
    if (e_phone_type) { 
    e_phone_type_local_nonprim = field_e_phone_type_parseFromJSON(e_phone_type); //custom
    }

    // phone_request_compound->s_phone_region
    cJSON *s_phone_region = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "sPhoneRegion");
    if (s_phone_region) { 
    if(!cJSON_IsString(s_phone_region) && !cJSON_IsNull(s_phone_region))
    {
    goto end; //String
    }
    }

    // phone_request_compound->s_phone_exchange
    cJSON *s_phone_exchange = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "sPhoneExchange");
    if (s_phone_exchange) { 
    if(!cJSON_IsString(s_phone_exchange) && !cJSON_IsNull(s_phone_exchange))
    {
    goto end; //String
    }
    }

    // phone_request_compound->s_phone_number
    cJSON *s_phone_number = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "sPhoneNumber");
    if (s_phone_number) { 
    if(!cJSON_IsString(s_phone_number) && !cJSON_IsNull(s_phone_number))
    {
    goto end; //String
    }
    }

    // phone_request_compound->s_phone_international
    cJSON *s_phone_international = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "sPhoneInternational");
    if (s_phone_international) { 
    if(!cJSON_IsString(s_phone_international) && !cJSON_IsNull(s_phone_international))
    {
    goto end; //String
    }
    }

    // phone_request_compound->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "sPhoneExtension");
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension) && !cJSON_IsNull(s_phone_extension))
    {
    goto end; //String
    }
    }

    // phone_request_compound->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(phone_request_compoundJSON, "sPhoneE164");
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }


    phone_request_compound_local_var = phone_request_compound_create (
        pki_phone_id ? pki_phone_id->valuedouble : 0,
        fki_phonetype_id->valuedouble,
        e_phone_type ? e_phone_type_local_nonprim : NULL,
        s_phone_region && !cJSON_IsNull(s_phone_region) ? strdup(s_phone_region->valuestring) : NULL,
        s_phone_exchange && !cJSON_IsNull(s_phone_exchange) ? strdup(s_phone_exchange->valuestring) : NULL,
        s_phone_number && !cJSON_IsNull(s_phone_number) ? strdup(s_phone_number->valuestring) : NULL,
        s_phone_international && !cJSON_IsNull(s_phone_international) ? strdup(s_phone_international->valuestring) : NULL,
        s_phone_extension && !cJSON_IsNull(s_phone_extension) ? strdup(s_phone_extension->valuestring) : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL
        );

    return phone_request_compound_local_var;
end:
    if (e_phone_type_local_nonprim) {
        field_e_phone_type_free(e_phone_type_local_nonprim);
        e_phone_type_local_nonprim = NULL;
    }
    return NULL;

}
