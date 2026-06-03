#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_apikey.h"



static activesession_response_compound_apikey_t *activesession_response_compound_apikey_create_internal(
    int *pki_apikey_id,
    char *s_apikey_description_x
    ) {
    activesession_response_compound_apikey_t *activesession_response_compound_apikey_local_var = malloc(sizeof(activesession_response_compound_apikey_t));
    if (!activesession_response_compound_apikey_local_var) {
        return NULL;
    }
    memset(activesession_response_compound_apikey_local_var, 0, sizeof(activesession_response_compound_apikey_t));
    activesession_response_compound_apikey_local_var->_library_owned = 1;
    activesession_response_compound_apikey_local_var->pki_apikey_id = pki_apikey_id;
    activesession_response_compound_apikey_local_var->s_apikey_description_x = s_apikey_description_x;
    return activesession_response_compound_apikey_local_var;
}

__attribute__((deprecated)) activesession_response_compound_apikey_t *activesession_response_compound_apikey_create(
    int *pki_apikey_id,
    char *s_apikey_description_x
    ) {
    int *pki_apikey_id_copy = NULL;
    if (pki_apikey_id) {
        pki_apikey_id_copy = malloc(sizeof(int));
        if (pki_apikey_id_copy) *pki_apikey_id_copy = *pki_apikey_id;
    }
    activesession_response_compound_apikey_t *result = activesession_response_compound_apikey_create_internal (
        pki_apikey_id_copy,
        s_apikey_description_x
        );
    if (!result) {
        free(pki_apikey_id_copy);
    }
    return result;
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
    if (activesession_response_compound_apikey->pki_apikey_id) {
        free(activesession_response_compound_apikey->pki_apikey_id);
        activesession_response_compound_apikey->pki_apikey_id = NULL;
    }
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
    if(cJSON_AddNumberToObject(item, "pkiApikeyID", *activesession_response_compound_apikey->pki_apikey_id) == NULL) {
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

    // define the local variable for activesession_response_compound_apikey->pki_apikey_id
    int *pki_apikey_id_local_var = NULL;

    char *s_apikey_description_x_local_str = NULL;

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
    pki_apikey_id_local_var = malloc(sizeof(int));
    if(!pki_apikey_id_local_var)
    {
        goto end;
    }
    *pki_apikey_id_local_var = pki_apikey_id->valuedouble;

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


    if (s_apikey_description_x && !cJSON_IsNull(s_apikey_description_x)) s_apikey_description_x_local_str = strdup(s_apikey_description_x->valuestring);

    activesession_response_compound_apikey_local_var = activesession_response_compound_apikey_create_internal (
        pki_apikey_id_local_var,
        s_apikey_description_x_local_str
        );

    if (!activesession_response_compound_apikey_local_var) {
        goto end;
    }

    return activesession_response_compound_apikey_local_var;
end:
    if (pki_apikey_id_local_var) {
        free(pki_apikey_id_local_var);
        pki_apikey_id_local_var = NULL;
    }
    if (s_apikey_description_x_local_str) {
        free(s_apikey_description_x_local_str);
        s_apikey_description_x_local_str = NULL;
    }
    return NULL;

}
