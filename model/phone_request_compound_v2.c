#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phone_request_compound_v2.h"



static phone_request_compound_v2_t *phone_request_compound_v2_create_internal(
    int *pki_phone_id,
    int *fki_phonetype_id,
    char *s_phone_extension,
    char *s_phone_e164
    ) {
    phone_request_compound_v2_t *phone_request_compound_v2_local_var = malloc(sizeof(phone_request_compound_v2_t));
    if (!phone_request_compound_v2_local_var) {
        return NULL;
    }
    memset(phone_request_compound_v2_local_var, 0, sizeof(phone_request_compound_v2_t));
    phone_request_compound_v2_local_var->_library_owned = 1;
    phone_request_compound_v2_local_var->pki_phone_id = pki_phone_id;
    phone_request_compound_v2_local_var->fki_phonetype_id = fki_phonetype_id;
    phone_request_compound_v2_local_var->s_phone_extension = s_phone_extension;
    phone_request_compound_v2_local_var->s_phone_e164 = s_phone_e164;
    return phone_request_compound_v2_local_var;
}

__attribute__((deprecated)) phone_request_compound_v2_t *phone_request_compound_v2_create(
    int *pki_phone_id,
    int *fki_phonetype_id,
    char *s_phone_extension,
    char *s_phone_e164
    ) {
    int *pki_phone_id_copy = NULL;
    if (pki_phone_id) {
        pki_phone_id_copy = malloc(sizeof(int));
        if (pki_phone_id_copy) *pki_phone_id_copy = *pki_phone_id;
    }
    int *fki_phonetype_id_copy = NULL;
    if (fki_phonetype_id) {
        fki_phonetype_id_copy = malloc(sizeof(int));
        if (fki_phonetype_id_copy) *fki_phonetype_id_copy = *fki_phonetype_id;
    }
    phone_request_compound_v2_t *result = phone_request_compound_v2_create_internal (
        pki_phone_id_copy,
        fki_phonetype_id_copy,
        s_phone_extension,
        s_phone_e164
        );
    if (!result) {
        free(pki_phone_id_copy);
        free(fki_phonetype_id_copy);
    }
    return result;
}

void phone_request_compound_v2_free(phone_request_compound_v2_t *phone_request_compound_v2) {
    if(NULL == phone_request_compound_v2){
        return ;
    }
    if(phone_request_compound_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "phone_request_compound_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (phone_request_compound_v2->pki_phone_id) {
        free(phone_request_compound_v2->pki_phone_id);
        phone_request_compound_v2->pki_phone_id = NULL;
    }
    if (phone_request_compound_v2->fki_phonetype_id) {
        free(phone_request_compound_v2->fki_phonetype_id);
        phone_request_compound_v2->fki_phonetype_id = NULL;
    }
    if (phone_request_compound_v2->s_phone_extension) {
        free(phone_request_compound_v2->s_phone_extension);
        phone_request_compound_v2->s_phone_extension = NULL;
    }
    if (phone_request_compound_v2->s_phone_e164) {
        free(phone_request_compound_v2->s_phone_e164);
        phone_request_compound_v2->s_phone_e164 = NULL;
    }
    free(phone_request_compound_v2);
}

cJSON *phone_request_compound_v2_convertToJSON(phone_request_compound_v2_t *phone_request_compound_v2) {
    cJSON *item = cJSON_CreateObject();

    // phone_request_compound_v2->pki_phone_id
    if(phone_request_compound_v2->pki_phone_id) {
    if(cJSON_AddNumberToObject(item, "pkiPhoneID", *phone_request_compound_v2->pki_phone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // phone_request_compound_v2->fki_phonetype_id
    if (!phone_request_compound_v2->fki_phonetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPhonetypeID", *phone_request_compound_v2->fki_phonetype_id) == NULL) {
    goto fail; //Numeric
    }


    // phone_request_compound_v2->s_phone_extension
    if(phone_request_compound_v2->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", phone_request_compound_v2->s_phone_extension) == NULL) {
    goto fail; //String
    }
    }


    // phone_request_compound_v2->s_phone_e164
    if(phone_request_compound_v2->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", phone_request_compound_v2->s_phone_e164) == NULL) {
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

phone_request_compound_v2_t *phone_request_compound_v2_parseFromJSON(cJSON *phone_request_compound_v2JSON){

    phone_request_compound_v2_t *phone_request_compound_v2_local_var = NULL;

    // define the local variable for phone_request_compound_v2->pki_phone_id
    int *pki_phone_id_local_var = NULL;

    // define the local variable for phone_request_compound_v2->fki_phonetype_id
    int *fki_phonetype_id_local_var = NULL;

    char *s_phone_extension_local_str = NULL;

    char *s_phone_e164_local_str = NULL;

    // phone_request_compound_v2->pki_phone_id
    cJSON *pki_phone_id = cJSON_GetObjectItemCaseSensitive(phone_request_compound_v2JSON, "pkiPhoneID");
    if (cJSON_IsNull(pki_phone_id)) {
        pki_phone_id = NULL;
    }
    if (pki_phone_id) { 
    if(!cJSON_IsNumber(pki_phone_id))
    {
    goto end; //Numeric
    }
    pki_phone_id_local_var = malloc(sizeof(int));
    if(!pki_phone_id_local_var)
    {
        goto end;
    }
    *pki_phone_id_local_var = pki_phone_id->valuedouble;
    }

    // phone_request_compound_v2->fki_phonetype_id
    cJSON *fki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phone_request_compound_v2JSON, "fkiPhonetypeID");
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
    fki_phonetype_id_local_var = malloc(sizeof(int));
    if(!fki_phonetype_id_local_var)
    {
        goto end;
    }
    *fki_phonetype_id_local_var = fki_phonetype_id->valuedouble;

    // phone_request_compound_v2->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(phone_request_compound_v2JSON, "sPhoneExtension");
    if (cJSON_IsNull(s_phone_extension)) {
        s_phone_extension = NULL;
    }
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension) && !cJSON_IsNull(s_phone_extension))
    {
    goto end; //String
    }
    }

    // phone_request_compound_v2->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(phone_request_compound_v2JSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }


    if (s_phone_extension && !cJSON_IsNull(s_phone_extension)) s_phone_extension_local_str = strdup(s_phone_extension->valuestring);
    if (s_phone_e164 && !cJSON_IsNull(s_phone_e164)) s_phone_e164_local_str = strdup(s_phone_e164->valuestring);

    phone_request_compound_v2_local_var = phone_request_compound_v2_create_internal (
        pki_phone_id_local_var,
        fki_phonetype_id_local_var,
        s_phone_extension_local_str,
        s_phone_e164_local_str
        );

    if (!phone_request_compound_v2_local_var) {
        goto end;
    }

    return phone_request_compound_v2_local_var;
end:
    if (pki_phone_id_local_var) {
        free(pki_phone_id_local_var);
        pki_phone_id_local_var = NULL;
    }
    if (fki_phonetype_id_local_var) {
        free(fki_phonetype_id_local_var);
        fki_phonetype_id_local_var = NULL;
    }
    if (s_phone_extension_local_str) {
        free(s_phone_extension_local_str);
        s_phone_extension_local_str = NULL;
    }
    if (s_phone_e164_local_str) {
        free(s_phone_e164_local_str);
        s_phone_e164_local_str = NULL;
    }
    return NULL;

}
