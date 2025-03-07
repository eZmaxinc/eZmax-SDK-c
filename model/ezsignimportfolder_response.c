#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignimportfolder_response.h"



static ezsignimportfolder_response_t *ezsignimportfolder_response_create_internal(
    int pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name
    ) {
    ezsignimportfolder_response_t *ezsignimportfolder_response_local_var = malloc(sizeof(ezsignimportfolder_response_t));
    if (!ezsignimportfolder_response_local_var) {
        return NULL;
    }
    ezsignimportfolder_response_local_var->pki_ezsignimportfolder_id = pki_ezsignimportfolder_id;
    ezsignimportfolder_response_local_var->s_ezsignimportfolder_name = s_ezsignimportfolder_name;

    ezsignimportfolder_response_local_var->_library_owned = 1;
    return ezsignimportfolder_response_local_var;
}

__attribute__((deprecated)) ezsignimportfolder_response_t *ezsignimportfolder_response_create(
    int pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name
    ) {
    return ezsignimportfolder_response_create_internal (
        pki_ezsignimportfolder_id,
        s_ezsignimportfolder_name
        );
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
    if(cJSON_AddNumberToObject(item, "pkiEzsignimportfolderID", ezsignimportfolder_response->pki_ezsignimportfolder_id) == NULL) {
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


    ezsignimportfolder_response_local_var = ezsignimportfolder_response_create_internal (
        pki_ezsignimportfolder_id->valuedouble,
        strdup(s_ezsignimportfolder_name->valuestring)
        );

    return ezsignimportfolder_response_local_var;
end:
    return NULL;

}
