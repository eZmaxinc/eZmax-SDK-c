#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_apikey.h"



activesession_response_compound_apikey_t *activesession_response_compound_apikey_create(
    int pki_apikey_id,
    char *s_apikey_description_x
    ) {
    activesession_response_compound_apikey_t *activesession_response_compound_apikey_local_var = malloc(sizeof(activesession_response_compound_apikey_t));
    if (!activesession_response_compound_apikey_local_var) {
        return NULL;
    }
    activesession_response_compound_apikey_local_var->pki_apikey_id = pki_apikey_id;
    activesession_response_compound_apikey_local_var->s_apikey_description_x = s_apikey_description_x;

    return activesession_response_compound_apikey_local_var;
}


void activesession_response_compound_apikey_free(activesession_response_compound_apikey_t *activesession_response_compound_apikey) {
    if(NULL == activesession_response_compound_apikey){
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
    if (!pki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_apikey_id))
    {
    goto end; //Numeric
    }

    // activesession_response_compound_apikey->s_apikey_description_x
    cJSON *s_apikey_description_x = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_apikeyJSON, "sApikeyDescriptionX");
    if (!s_apikey_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikey_description_x))
    {
    goto end; //String
    }


    activesession_response_compound_apikey_local_var = activesession_response_compound_apikey_create (
        pki_apikey_id->valuedouble,
        strdup(s_apikey_description_x->valuestring)
        );

    return activesession_response_compound_apikey_local_var;
end:
    return NULL;

}
