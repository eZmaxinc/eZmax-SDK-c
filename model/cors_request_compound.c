#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cors_request_compound.h"



static cors_request_compound_t *cors_request_compound_create_internal(
    int *pki_cors_id,
    int *fki_apikey_id,
    char *s_cors_entryurl
    ) {
    cors_request_compound_t *cors_request_compound_local_var = malloc(sizeof(cors_request_compound_t));
    if (!cors_request_compound_local_var) {
        return NULL;
    }
    memset(cors_request_compound_local_var, 0, sizeof(cors_request_compound_t));
    cors_request_compound_local_var->_library_owned = 1;
    cors_request_compound_local_var->pki_cors_id = pki_cors_id;
    cors_request_compound_local_var->fki_apikey_id = fki_apikey_id;
    cors_request_compound_local_var->s_cors_entryurl = s_cors_entryurl;
    return cors_request_compound_local_var;
}

__attribute__((deprecated)) cors_request_compound_t *cors_request_compound_create(
    int *pki_cors_id,
    int *fki_apikey_id,
    char *s_cors_entryurl
    ) {
    int *pki_cors_id_copy = NULL;
    if (pki_cors_id) {
        pki_cors_id_copy = malloc(sizeof(int));
        if (pki_cors_id_copy) *pki_cors_id_copy = *pki_cors_id;
    }
    int *fki_apikey_id_copy = NULL;
    if (fki_apikey_id) {
        fki_apikey_id_copy = malloc(sizeof(int));
        if (fki_apikey_id_copy) *fki_apikey_id_copy = *fki_apikey_id;
    }
    cors_request_compound_t *result = cors_request_compound_create_internal (
        pki_cors_id_copy,
        fki_apikey_id_copy,
        s_cors_entryurl
        );
    if (!result) {
        free(pki_cors_id_copy);
        free(fki_apikey_id_copy);
    }
    return result;
}

void cors_request_compound_free(cors_request_compound_t *cors_request_compound) {
    if(NULL == cors_request_compound){
        return ;
    }
    if(cors_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cors_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cors_request_compound->pki_cors_id) {
        free(cors_request_compound->pki_cors_id);
        cors_request_compound->pki_cors_id = NULL;
    }
    if (cors_request_compound->fki_apikey_id) {
        free(cors_request_compound->fki_apikey_id);
        cors_request_compound->fki_apikey_id = NULL;
    }
    if (cors_request_compound->s_cors_entryurl) {
        free(cors_request_compound->s_cors_entryurl);
        cors_request_compound->s_cors_entryurl = NULL;
    }
    free(cors_request_compound);
}

cJSON *cors_request_compound_convertToJSON(cors_request_compound_t *cors_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // cors_request_compound->pki_cors_id
    if(cors_request_compound->pki_cors_id) {
    if(cJSON_AddNumberToObject(item, "pkiCorsID", *cors_request_compound->pki_cors_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // cors_request_compound->fki_apikey_id
    if (!cors_request_compound->fki_apikey_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", *cors_request_compound->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }


    // cors_request_compound->s_cors_entryurl
    if (!cors_request_compound->s_cors_entryurl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCorsEntryurl", cors_request_compound->s_cors_entryurl) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cors_request_compound_t *cors_request_compound_parseFromJSON(cJSON *cors_request_compoundJSON){

    cors_request_compound_t *cors_request_compound_local_var = NULL;

    // define the local variable for cors_request_compound->pki_cors_id
    int *pki_cors_id_local_var = NULL;

    // define the local variable for cors_request_compound->fki_apikey_id
    int *fki_apikey_id_local_var = NULL;

    char *s_cors_entryurl_local_str = NULL;

    // cors_request_compound->pki_cors_id
    cJSON *pki_cors_id = cJSON_GetObjectItemCaseSensitive(cors_request_compoundJSON, "pkiCorsID");
    if (cJSON_IsNull(pki_cors_id)) {
        pki_cors_id = NULL;
    }
    if (pki_cors_id) { 
    if(!cJSON_IsNumber(pki_cors_id))
    {
    goto end; //Numeric
    }
    pki_cors_id_local_var = malloc(sizeof(int));
    if(!pki_cors_id_local_var)
    {
        goto end;
    }
    *pki_cors_id_local_var = pki_cors_id->valuedouble;
    }

    // cors_request_compound->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(cors_request_compoundJSON, "fkiApikeyID");
    if (cJSON_IsNull(fki_apikey_id)) {
        fki_apikey_id = NULL;
    }
    if (!fki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    fki_apikey_id_local_var = malloc(sizeof(int));
    if(!fki_apikey_id_local_var)
    {
        goto end;
    }
    *fki_apikey_id_local_var = fki_apikey_id->valuedouble;

    // cors_request_compound->s_cors_entryurl
    cJSON *s_cors_entryurl = cJSON_GetObjectItemCaseSensitive(cors_request_compoundJSON, "sCorsEntryurl");
    if (cJSON_IsNull(s_cors_entryurl)) {
        s_cors_entryurl = NULL;
    }
    if (!s_cors_entryurl) {
        goto end;
    }

    
    if(!cJSON_IsString(s_cors_entryurl))
    {
    goto end; //String
    }


    if (s_cors_entryurl && !cJSON_IsNull(s_cors_entryurl)) s_cors_entryurl_local_str = strdup(s_cors_entryurl->valuestring);

    cors_request_compound_local_var = cors_request_compound_create_internal (
        pki_cors_id_local_var,
        fki_apikey_id_local_var,
        s_cors_entryurl_local_str
        );

    if (!cors_request_compound_local_var) {
        goto end;
    }

    return cors_request_compound_local_var;
end:
    if (pki_cors_id_local_var) {
        free(pki_cors_id_local_var);
        pki_cors_id_local_var = NULL;
    }
    if (fki_apikey_id_local_var) {
        free(fki_apikey_id_local_var);
        fki_apikey_id_local_var = NULL;
    }
    if (s_cors_entryurl_local_str) {
        free(s_cors_entryurl_local_str);
        s_cors_entryurl_local_str = NULL;
    }
    return NULL;

}
