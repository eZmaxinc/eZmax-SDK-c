#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phone_response_compound.h"


char* e_phone_typephone_response_compound_ToString(ezmax_api_definition__full_phone_response_compound__e e_phone_type) {
    char* e_phone_typeArray[] =  { "NULL", "Local", "International" };
    return e_phone_typeArray[e_phone_type];
}

ezmax_api_definition__full_phone_response_compound__e e_phone_typephone_response_compound_FromString(char* e_phone_type){
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

phone_response_compound_t *phone_response_compound_create(
    int pki_phone_id,
    int fki_phonetype_id,
    field_e_phone_type_t *e_phone_type,
    char *s_phone_e164,
    char *s_phone_extension,
    int b_phone_international
    ) {
    phone_response_compound_t *phone_response_compound_local_var = malloc(sizeof(phone_response_compound_t));
    if (!phone_response_compound_local_var) {
        return NULL;
    }
    phone_response_compound_local_var->pki_phone_id = pki_phone_id;
    phone_response_compound_local_var->fki_phonetype_id = fki_phonetype_id;
    phone_response_compound_local_var->e_phone_type = e_phone_type;
    phone_response_compound_local_var->s_phone_e164 = s_phone_e164;
    phone_response_compound_local_var->s_phone_extension = s_phone_extension;
    phone_response_compound_local_var->b_phone_international = b_phone_international;

    return phone_response_compound_local_var;
}


void phone_response_compound_free(phone_response_compound_t *phone_response_compound) {
    if(NULL == phone_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (phone_response_compound->e_phone_type) {
        field_e_phone_type_free(phone_response_compound->e_phone_type);
        phone_response_compound->e_phone_type = NULL;
    }
    if (phone_response_compound->s_phone_e164) {
        free(phone_response_compound->s_phone_e164);
        phone_response_compound->s_phone_e164 = NULL;
    }
    if (phone_response_compound->s_phone_extension) {
        free(phone_response_compound->s_phone_extension);
        phone_response_compound->s_phone_extension = NULL;
    }
    free(phone_response_compound);
}

cJSON *phone_response_compound_convertToJSON(phone_response_compound_t *phone_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // phone_response_compound->pki_phone_id
    if (!phone_response_compound->pki_phone_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPhoneID", phone_response_compound->pki_phone_id) == NULL) {
    goto fail; //Numeric
    }


    // phone_response_compound->fki_phonetype_id
    if (!phone_response_compound->fki_phonetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPhonetypeID", phone_response_compound->fki_phonetype_id) == NULL) {
    goto fail; //Numeric
    }


    // phone_response_compound->e_phone_type
    if(phone_response_compound->e_phone_type != ezmax_api_definition__full_phone_response_compound__NULL) {
    cJSON *e_phone_type_local_JSON = field_e_phone_type_convertToJSON(phone_response_compound->e_phone_type);
    if(e_phone_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePhoneType", e_phone_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // phone_response_compound->s_phone_e164
    if(phone_response_compound->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", phone_response_compound->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // phone_response_compound->s_phone_extension
    if(phone_response_compound->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", phone_response_compound->s_phone_extension) == NULL) {
    goto fail; //String
    }
    }


    // phone_response_compound->b_phone_international
    if(phone_response_compound->b_phone_international) {
    if(cJSON_AddBoolToObject(item, "bPhoneInternational", phone_response_compound->b_phone_international) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

phone_response_compound_t *phone_response_compound_parseFromJSON(cJSON *phone_response_compoundJSON){

    phone_response_compound_t *phone_response_compound_local_var = NULL;

    // define the local variable for phone_response_compound->e_phone_type
    field_e_phone_type_t *e_phone_type_local_nonprim = NULL;

    // phone_response_compound->pki_phone_id
    cJSON *pki_phone_id = cJSON_GetObjectItemCaseSensitive(phone_response_compoundJSON, "pkiPhoneID");
    if (!pki_phone_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_phone_id))
    {
    goto end; //Numeric
    }

    // phone_response_compound->fki_phonetype_id
    cJSON *fki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phone_response_compoundJSON, "fkiPhonetypeID");
    if (!fki_phonetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_phonetype_id))
    {
    goto end; //Numeric
    }

    // phone_response_compound->e_phone_type
    cJSON *e_phone_type = cJSON_GetObjectItemCaseSensitive(phone_response_compoundJSON, "ePhoneType");
    if (e_phone_type) { 
    e_phone_type_local_nonprim = field_e_phone_type_parseFromJSON(e_phone_type); //custom
    }

    // phone_response_compound->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(phone_response_compoundJSON, "sPhoneE164");
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // phone_response_compound->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(phone_response_compoundJSON, "sPhoneExtension");
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension) && !cJSON_IsNull(s_phone_extension))
    {
    goto end; //String
    }
    }

    // phone_response_compound->b_phone_international
    cJSON *b_phone_international = cJSON_GetObjectItemCaseSensitive(phone_response_compoundJSON, "bPhoneInternational");
    if (b_phone_international) { 
    if(!cJSON_IsBool(b_phone_international))
    {
    goto end; //Bool
    }
    }


    phone_response_compound_local_var = phone_response_compound_create (
        pki_phone_id->valuedouble,
        fki_phonetype_id->valuedouble,
        e_phone_type ? e_phone_type_local_nonprim : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL,
        s_phone_extension && !cJSON_IsNull(s_phone_extension) ? strdup(s_phone_extension->valuestring) : NULL,
        b_phone_international ? b_phone_international->valueint : 0
        );

    return phone_response_compound_local_var;
end:
    if (e_phone_type_local_nonprim) {
        field_e_phone_type_free(e_phone_type_local_nonprim);
        e_phone_type_local_nonprim = NULL;
    }
    return NULL;

}
