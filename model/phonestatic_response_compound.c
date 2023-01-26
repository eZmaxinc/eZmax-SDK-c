#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phonestatic_response_compound.h"



phonestatic_response_compound_t *phonestatic_response_compound_create(
    int pki_phonestatic_id,
    char *s_phonestatic_e164,
    char *s_phonestatic_extension
    ) {
    phonestatic_response_compound_t *phonestatic_response_compound_local_var = malloc(sizeof(phonestatic_response_compound_t));
    if (!phonestatic_response_compound_local_var) {
        return NULL;
    }
    phonestatic_response_compound_local_var->pki_phonestatic_id = pki_phonestatic_id;
    phonestatic_response_compound_local_var->s_phonestatic_e164 = s_phonestatic_e164;
    phonestatic_response_compound_local_var->s_phonestatic_extension = s_phonestatic_extension;

    return phonestatic_response_compound_local_var;
}


void phonestatic_response_compound_free(phonestatic_response_compound_t *phonestatic_response_compound) {
    if(NULL == phonestatic_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (phonestatic_response_compound->s_phonestatic_e164) {
        free(phonestatic_response_compound->s_phonestatic_e164);
        phonestatic_response_compound->s_phonestatic_e164 = NULL;
    }
    if (phonestatic_response_compound->s_phonestatic_extension) {
        free(phonestatic_response_compound->s_phonestatic_extension);
        phonestatic_response_compound->s_phonestatic_extension = NULL;
    }
    free(phonestatic_response_compound);
}

cJSON *phonestatic_response_compound_convertToJSON(phonestatic_response_compound_t *phonestatic_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // phonestatic_response_compound->pki_phonestatic_id
    if (!phonestatic_response_compound->pki_phonestatic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPhonestaticID", phonestatic_response_compound->pki_phonestatic_id) == NULL) {
    goto fail; //Numeric
    }


    // phonestatic_response_compound->s_phonestatic_e164
    if(phonestatic_response_compound->s_phonestatic_e164) {
    if(cJSON_AddStringToObject(item, "sPhonestaticE164", phonestatic_response_compound->s_phonestatic_e164) == NULL) {
    goto fail; //String
    }
    }


    // phonestatic_response_compound->s_phonestatic_extension
    if(phonestatic_response_compound->s_phonestatic_extension) {
    if(cJSON_AddStringToObject(item, "sPhonestaticExtension", phonestatic_response_compound->s_phonestatic_extension) == NULL) {
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

phonestatic_response_compound_t *phonestatic_response_compound_parseFromJSON(cJSON *phonestatic_response_compoundJSON){

    phonestatic_response_compound_t *phonestatic_response_compound_local_var = NULL;

    // phonestatic_response_compound->pki_phonestatic_id
    cJSON *pki_phonestatic_id = cJSON_GetObjectItemCaseSensitive(phonestatic_response_compoundJSON, "pkiPhonestaticID");
    if (!pki_phonestatic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_phonestatic_id))
    {
    goto end; //Numeric
    }

    // phonestatic_response_compound->s_phonestatic_e164
    cJSON *s_phonestatic_e164 = cJSON_GetObjectItemCaseSensitive(phonestatic_response_compoundJSON, "sPhonestaticE164");
    if (s_phonestatic_e164) { 
    if(!cJSON_IsString(s_phonestatic_e164))
    {
    goto end; //String
    }
    }

    // phonestatic_response_compound->s_phonestatic_extension
    cJSON *s_phonestatic_extension = cJSON_GetObjectItemCaseSensitive(phonestatic_response_compoundJSON, "sPhonestaticExtension");
    if (s_phonestatic_extension) { 
    if(!cJSON_IsString(s_phonestatic_extension))
    {
    goto end; //String
    }
    }


    phonestatic_response_compound_local_var = phonestatic_response_compound_create (
        pki_phonestatic_id->valuedouble,
        s_phonestatic_e164 ? strdup(s_phonestatic_e164->valuestring) : NULL,
        s_phonestatic_extension ? strdup(s_phonestatic_extension->valuestring) : NULL
        );

    return phonestatic_response_compound_local_var;
end:
    return NULL;

}
