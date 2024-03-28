#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phone_request_v2.h"



phone_request_v2_t *phone_request_v2_create(
    int pki_phone_id,
    int fki_phonetype_id,
    char *s_phone_extension,
    char *s_phone_e164
    ) {
    phone_request_v2_t *phone_request_v2_local_var = malloc(sizeof(phone_request_v2_t));
    if (!phone_request_v2_local_var) {
        return NULL;
    }
    phone_request_v2_local_var->pki_phone_id = pki_phone_id;
    phone_request_v2_local_var->fki_phonetype_id = fki_phonetype_id;
    phone_request_v2_local_var->s_phone_extension = s_phone_extension;
    phone_request_v2_local_var->s_phone_e164 = s_phone_e164;

    return phone_request_v2_local_var;
}


void phone_request_v2_free(phone_request_v2_t *phone_request_v2) {
    if(NULL == phone_request_v2){
        return ;
    }
    listEntry_t *listEntry;
    if (phone_request_v2->s_phone_extension) {
        free(phone_request_v2->s_phone_extension);
        phone_request_v2->s_phone_extension = NULL;
    }
    if (phone_request_v2->s_phone_e164) {
        free(phone_request_v2->s_phone_e164);
        phone_request_v2->s_phone_e164 = NULL;
    }
    free(phone_request_v2);
}

cJSON *phone_request_v2_convertToJSON(phone_request_v2_t *phone_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // phone_request_v2->pki_phone_id
    if(phone_request_v2->pki_phone_id) {
    if(cJSON_AddNumberToObject(item, "pkiPhoneID", phone_request_v2->pki_phone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // phone_request_v2->fki_phonetype_id
    if (!phone_request_v2->fki_phonetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPhonetypeID", phone_request_v2->fki_phonetype_id) == NULL) {
    goto fail; //Numeric
    }


    // phone_request_v2->s_phone_extension
    if(phone_request_v2->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", phone_request_v2->s_phone_extension) == NULL) {
    goto fail; //String
    }
    }


    // phone_request_v2->s_phone_e164
    if(phone_request_v2->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", phone_request_v2->s_phone_e164) == NULL) {
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

phone_request_v2_t *phone_request_v2_parseFromJSON(cJSON *phone_request_v2JSON){

    phone_request_v2_t *phone_request_v2_local_var = NULL;

    // phone_request_v2->pki_phone_id
    cJSON *pki_phone_id = cJSON_GetObjectItemCaseSensitive(phone_request_v2JSON, "pkiPhoneID");
    if (pki_phone_id) { 
    if(!cJSON_IsNumber(pki_phone_id))
    {
    goto end; //Numeric
    }
    }

    // phone_request_v2->fki_phonetype_id
    cJSON *fki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phone_request_v2JSON, "fkiPhonetypeID");
    if (!fki_phonetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_phonetype_id))
    {
    goto end; //Numeric
    }

    // phone_request_v2->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(phone_request_v2JSON, "sPhoneExtension");
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension) && !cJSON_IsNull(s_phone_extension))
    {
    goto end; //String
    }
    }

    // phone_request_v2->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(phone_request_v2JSON, "sPhoneE164");
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }


    phone_request_v2_local_var = phone_request_v2_create (
        pki_phone_id ? pki_phone_id->valuedouble : 0,
        fki_phonetype_id->valuedouble,
        s_phone_extension && !cJSON_IsNull(s_phone_extension) ? strdup(s_phone_extension->valuestring) : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL
        );

    return phone_request_v2_local_var;
end:
    return NULL;

}
