#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignimportfolder_response.h"



static ezsignimportfolder_response_t *ezsignimportfolder_response_create_internal(
    int *pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name
    ) {
    ezsignimportfolder_response_t *ezsignimportfolder_response_local_var = malloc(sizeof(ezsignimportfolder_response_t));
    if (!ezsignimportfolder_response_local_var) {
        return NULL;
    }
    memset(ezsignimportfolder_response_local_var, 0, sizeof(ezsignimportfolder_response_t));
    ezsignimportfolder_response_local_var->_library_owned = 1;
    ezsignimportfolder_response_local_var->pki_ezsignimportfolder_id = pki_ezsignimportfolder_id;
    ezsignimportfolder_response_local_var->s_ezsignimportfolder_name = s_ezsignimportfolder_name;
    return ezsignimportfolder_response_local_var;
}

__attribute__((deprecated)) ezsignimportfolder_response_t *ezsignimportfolder_response_create(
    int *pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name
    ) {
    int *pki_ezsignimportfolder_id_copy = NULL;
    if (pki_ezsignimportfolder_id) {
        pki_ezsignimportfolder_id_copy = malloc(sizeof(int));
        if (pki_ezsignimportfolder_id_copy) *pki_ezsignimportfolder_id_copy = *pki_ezsignimportfolder_id;
    }
    ezsignimportfolder_response_t *result = ezsignimportfolder_response_create_internal (
        pki_ezsignimportfolder_id_copy,
        s_ezsignimportfolder_name
        );
    if (!result) {
        free(pki_ezsignimportfolder_id_copy);
    }
    return result;
}

void ezsignimportfolder_response_free(ezsignimportfolder_response_t *ezsignimportfolder_response) {
    if(NULL == ezsignimportfolder_response){
        return ;
    }
    if(ezsignimportfolder_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignimportfolder_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignimportfolder_response->pki_ezsignimportfolder_id) {
        free(ezsignimportfolder_response->pki_ezsignimportfolder_id);
        ezsignimportfolder_response->pki_ezsignimportfolder_id = NULL;
    }
    if (ezsignimportfolder_response->s_ezsignimportfolder_name) {
        free(ezsignimportfolder_response->s_ezsignimportfolder_name);
        ezsignimportfolder_response->s_ezsignimportfolder_name = NULL;
    }
    free(ezsignimportfolder_response);
}

cJSON *ezsignimportfolder_response_convertToJSON(ezsignimportfolder_response_t *ezsignimportfolder_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignimportfolder_response->pki_ezsignimportfolder_id
    if (!ezsignimportfolder_response->pki_ezsignimportfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignimportfolderID", *ezsignimportfolder_response->pki_ezsignimportfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignimportfolder_response->s_ezsignimportfolder_name
    if (!ezsignimportfolder_response->s_ezsignimportfolder_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignimportfolderName", ezsignimportfolder_response->s_ezsignimportfolder_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignimportfolder_response_t *ezsignimportfolder_response_parseFromJSON(cJSON *ezsignimportfolder_responseJSON){

    ezsignimportfolder_response_t *ezsignimportfolder_response_local_var = NULL;

    // define the local variable for ezsignimportfolder_response->pki_ezsignimportfolder_id
    int *pki_ezsignimportfolder_id_local_var = NULL;

    char *s_ezsignimportfolder_name_local_str = NULL;

    // ezsignimportfolder_response->pki_ezsignimportfolder_id
    cJSON *pki_ezsignimportfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_responseJSON, "pkiEzsignimportfolderID");
    if (cJSON_IsNull(pki_ezsignimportfolder_id)) {
        pki_ezsignimportfolder_id = NULL;
    }
    if (!pki_ezsignimportfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignimportfolder_id))
    {
    goto end; //Numeric
    }
    pki_ezsignimportfolder_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignimportfolder_id_local_var)
    {
        goto end;
    }
    *pki_ezsignimportfolder_id_local_var = pki_ezsignimportfolder_id->valuedouble;

    // ezsignimportfolder_response->s_ezsignimportfolder_name
    cJSON *s_ezsignimportfolder_name = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_responseJSON, "sEzsignimportfolderName");
    if (cJSON_IsNull(s_ezsignimportfolder_name)) {
        s_ezsignimportfolder_name = NULL;
    }
    if (!s_ezsignimportfolder_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignimportfolder_name))
    {
    goto end; //String
    }


    if (s_ezsignimportfolder_name && !cJSON_IsNull(s_ezsignimportfolder_name)) s_ezsignimportfolder_name_local_str = strdup(s_ezsignimportfolder_name->valuestring);

    ezsignimportfolder_response_local_var = ezsignimportfolder_response_create_internal (
        pki_ezsignimportfolder_id_local_var,
        s_ezsignimportfolder_name_local_str
        );

    if (!ezsignimportfolder_response_local_var) {
        goto end;
    }

    return ezsignimportfolder_response_local_var;
end:
    if (pki_ezsignimportfolder_id_local_var) {
        free(pki_ezsignimportfolder_id_local_var);
        pki_ezsignimportfolder_id_local_var = NULL;
    }
    if (s_ezsignimportfolder_name_local_str) {
        free(s_ezsignimportfolder_name_local_str);
        s_ezsignimportfolder_name_local_str = NULL;
    }
    return NULL;

}
