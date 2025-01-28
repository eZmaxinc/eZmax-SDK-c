#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_apikey.h"



static activesession_response_compound_apikey_t *activesession_response_compound_apikey_create_internal(
    int pki_apikey_id,
    char *s_apikey_description_x
    ) {
    activesession_response_compound_apikey_t *activesession_response_compound_apikey_local_var = malloc(sizeof(activesession_response_compound_apikey_t));
    if (!activesession_response_compound_apikey_local_var) {
        return NULL;
    }
    activesession_response_compound_apikey_local_var->pki_apikey_id = pki_apikey_id;
    activesession_response_compound_apikey_local_var->s_apikey_description_x = s_apikey_description_x;

    activesession_response_compound_apikey_local_var->_library_owned = 1;
    return activesession_response_compound_apikey_local_var;
}

__attribute__((deprecated)) activesession_response_compound_apikey_t *activesession_response_compound_apikey_create(
    int pki_apikey_id,
    char *s_apikey_description_x
    ) {
    return activesession_response_compound_apikey_create_internal (
        pki_apikey_id,
        s_apikey_description_x
        );
}

void activesession_response_compound_apikey_free(activesession_response_compound_apikey_t *activesession_response_compound_apikey) {
    if(NULL == activesession_response_compound_apikey){
        return ;
    }
    if(activesession_response_compound_apikey->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_response_compound_apikey_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response_compound_apikey->s_apikey_description_x) {
        free(activesession_response_compound_apikey->s_apikey_description_x);
        activesession_response_compound_apikey->s_apikey_description_x = NULL;
    }
    free(activesession_response_compound_apikey);
}

cJSON *activesession_response_compound_apikey_convertToJSON(activesession_response_compound_apikey_t *activesession_response_compound_apikey) {
    cJSON *item = cJSON_CreateObject();

    // activesession_response_compound_apikey->pki_apikey_id
    if (!activesession_response_compound_apikey->pki_apikey_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiApikeyID", activesession_response_compound_apikey->pki_apikey_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound_apikey->s_apikey_description_x
    if (!activesession_response_compound_apikey->s_apikey_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sApikeyDescriptionX", activesession_response_compound_apikey->s_apikey_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_response_compound_apikey_t *activesession_response_compound_apikey_parseFromJSON(cJSON *activesession_response_compound_apikeyJSON){

    activesession_response_compound_apikey_t *activesession_response_compound_apikey_local_var = NULL;

    // activesession_response_compound_apikey->pki_apikey_id
    cJSON *pki_apikey_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_apikeyJSON, "pkiApikeyID");
    if (cJSON_IsNull(pki_apikey_id)) {
        pki_apikey_id = NULL;
    }
    if (!pki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_apikey_id))
    {
    goto end; //Numeric
    }

    // activesession_response_compound_apikey->s_apikey_description_x
    cJSON *s_apikey_description_x = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_apikeyJSON, "sApikeyDescriptionX");
    if (cJSON_IsNull(s_apikey_description_x)) {
        s_apikey_description_x = NULL;
    }
    if (!s_apikey_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikey_description_x))
    {
    goto end; //String
    }


    activesession_response_compound_apikey_local_var = activesession_response_compound_apikey_create_internal (
        pki_apikey_id->valuedouble,
        strdup(s_apikey_description_x->valuestring)
        );

    return activesession_response_compound_apikey_local_var;
end:
    return NULL;

}
