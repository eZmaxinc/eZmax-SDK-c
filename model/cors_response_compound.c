#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cors_response_compound.h"



cors_response_compound_t *cors_response_compound_create(
    int pki_cors_id,
    int fki_apikey_id,
    char *s_cors_entryurl
    ) {
    cors_response_compound_t *cors_response_compound_local_var = malloc(sizeof(cors_response_compound_t));
    if (!cors_response_compound_local_var) {
        return NULL;
    }
    cors_response_compound_local_var->pki_cors_id = pki_cors_id;
    cors_response_compound_local_var->fki_apikey_id = fki_apikey_id;
    cors_response_compound_local_var->s_cors_entryurl = s_cors_entryurl;

    return cors_response_compound_local_var;
}


void cors_response_compound_free(cors_response_compound_t *cors_response_compound) {
    if(NULL == cors_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (cors_response_compound->s_cors_entryurl) {
        free(cors_response_compound->s_cors_entryurl);
        cors_response_compound->s_cors_entryurl = NULL;
    }
    free(cors_response_compound);
}

cJSON *cors_response_compound_convertToJSON(cors_response_compound_t *cors_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // cors_response_compound->pki_cors_id
    if (!cors_response_compound->pki_cors_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCorsID", cors_response_compound->pki_cors_id) == NULL) {
    goto fail; //Numeric
    }


    // cors_response_compound->fki_apikey_id
    if (!cors_response_compound->fki_apikey_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", cors_response_compound->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }


    // cors_response_compound->s_cors_entryurl
    if (!cors_response_compound->s_cors_entryurl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCorsEntryurl", cors_response_compound->s_cors_entryurl) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cors_response_compound_t *cors_response_compound_parseFromJSON(cJSON *cors_response_compoundJSON){

    cors_response_compound_t *cors_response_compound_local_var = NULL;

    // cors_response_compound->pki_cors_id
    cJSON *pki_cors_id = cJSON_GetObjectItemCaseSensitive(cors_response_compoundJSON, "pkiCorsID");
    if (!pki_cors_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_cors_id))
    {
    goto end; //Numeric
    }

    // cors_response_compound->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(cors_response_compoundJSON, "fkiApikeyID");
    if (!fki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }

    // cors_response_compound->s_cors_entryurl
    cJSON *s_cors_entryurl = cJSON_GetObjectItemCaseSensitive(cors_response_compoundJSON, "sCorsEntryurl");
    if (!s_cors_entryurl) {
        goto end;
    }

    
    if(!cJSON_IsString(s_cors_entryurl))
    {
    goto end; //String
    }


    cors_response_compound_local_var = cors_response_compound_create (
        pki_cors_id->valuedouble,
        fki_apikey_id->valuedouble,
        strdup(s_cors_entryurl->valuestring)
        );

    return cors_response_compound_local_var;
end:
    return NULL;

}
