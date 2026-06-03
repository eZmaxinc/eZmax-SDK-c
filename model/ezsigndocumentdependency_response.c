#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocumentdependency_response.h"



static ezsigndocumentdependency_response_t *ezsigndocumentdependency_response_create_internal(
    int *pki_ezsigndocumentdependency_id,
    int *fki_ezsigndocument_i_ddependency
    ) {
    ezsigndocumentdependency_response_t *ezsigndocumentdependency_response_local_var = malloc(sizeof(ezsigndocumentdependency_response_t));
    if (!ezsigndocumentdependency_response_local_var) {
        return NULL;
    }
    memset(ezsigndocumentdependency_response_local_var, 0, sizeof(ezsigndocumentdependency_response_t));
    ezsigndocumentdependency_response_local_var->_library_owned = 1;
    ezsigndocumentdependency_response_local_var->pki_ezsigndocumentdependency_id = pki_ezsigndocumentdependency_id;
    ezsigndocumentdependency_response_local_var->fki_ezsigndocument_i_ddependency = fki_ezsigndocument_i_ddependency;
    return ezsigndocumentdependency_response_local_var;
}

__attribute__((deprecated)) ezsigndocumentdependency_response_t *ezsigndocumentdependency_response_create(
    int *pki_ezsigndocumentdependency_id,
    int *fki_ezsigndocument_i_ddependency
    ) {
    int *pki_ezsigndocumentdependency_id_copy = NULL;
    if (pki_ezsigndocumentdependency_id) {
        pki_ezsigndocumentdependency_id_copy = malloc(sizeof(int));
        if (pki_ezsigndocumentdependency_id_copy) *pki_ezsigndocumentdependency_id_copy = *pki_ezsigndocumentdependency_id;
    }
    int *fki_ezsigndocument_i_ddependency_copy = NULL;
    if (fki_ezsigndocument_i_ddependency) {
        fki_ezsigndocument_i_ddependency_copy = malloc(sizeof(int));
        if (fki_ezsigndocument_i_ddependency_copy) *fki_ezsigndocument_i_ddependency_copy = *fki_ezsigndocument_i_ddependency;
    }
    ezsigndocumentdependency_response_t *result = ezsigndocumentdependency_response_create_internal (
        pki_ezsigndocumentdependency_id_copy,
        fki_ezsigndocument_i_ddependency_copy
        );
    if (!result) {
        free(pki_ezsigndocumentdependency_id_copy);
        free(fki_ezsigndocument_i_ddependency_copy);
    }
    return result;
}

void ezsigndocumentdependency_response_free(ezsigndocumentdependency_response_t *ezsigndocumentdependency_response) {
    if(NULL == ezsigndocumentdependency_response){
        return ;
    }
    if(ezsigndocumentdependency_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocumentdependency_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id) {
        free(ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id);
        ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id = NULL;
    }
    if (ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency) {
        free(ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency);
        ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency = NULL;
    }
    free(ezsigndocumentdependency_response);
}

cJSON *ezsigndocumentdependency_response_convertToJSON(ezsigndocumentdependency_response_t *ezsigndocumentdependency_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id
    if (!ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentdependencyID", *ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency
    if (!ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentIDdependency", *ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocumentdependency_response_t *ezsigndocumentdependency_response_parseFromJSON(cJSON *ezsigndocumentdependency_responseJSON){

    ezsigndocumentdependency_response_t *ezsigndocumentdependency_response_local_var = NULL;

    // define the local variable for ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id
    int *pki_ezsigndocumentdependency_id_local_var = NULL;

    // define the local variable for ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency
    int *fki_ezsigndocument_i_ddependency_local_var = NULL;

    // ezsigndocumentdependency_response->pki_ezsigndocumentdependency_id
    cJSON *pki_ezsigndocumentdependency_id = cJSON_GetObjectItemCaseSensitive(ezsigndocumentdependency_responseJSON, "pkiEzsigndocumentdependencyID");
    if (cJSON_IsNull(pki_ezsigndocumentdependency_id)) {
        pki_ezsigndocumentdependency_id = NULL;
    }
    if (!pki_ezsigndocumentdependency_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocumentdependency_id))
    {
    goto end; //Numeric
    }
    pki_ezsigndocumentdependency_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigndocumentdependency_id_local_var)
    {
        goto end;
    }
    *pki_ezsigndocumentdependency_id_local_var = pki_ezsigndocumentdependency_id->valuedouble;

    // ezsigndocumentdependency_response->fki_ezsigndocument_i_ddependency
    cJSON *fki_ezsigndocument_i_ddependency = cJSON_GetObjectItemCaseSensitive(ezsigndocumentdependency_responseJSON, "fkiEzsigndocumentIDdependency");
    if (cJSON_IsNull(fki_ezsigndocument_i_ddependency)) {
        fki_ezsigndocument_i_ddependency = NULL;
    }
    if (!fki_ezsigndocument_i_ddependency) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_i_ddependency))
    {
    goto end; //Numeric
    }
    fki_ezsigndocument_i_ddependency_local_var = malloc(sizeof(int));
    if(!fki_ezsigndocument_i_ddependency_local_var)
    {
        goto end;
    }
    *fki_ezsigndocument_i_ddependency_local_var = fki_ezsigndocument_i_ddependency->valuedouble;



    ezsigndocumentdependency_response_local_var = ezsigndocumentdependency_response_create_internal (
        pki_ezsigndocumentdependency_id_local_var,
        fki_ezsigndocument_i_ddependency_local_var
        );

    if (!ezsigndocumentdependency_response_local_var) {
        goto end;
    }

    return ezsigndocumentdependency_response_local_var;
end:
    if (pki_ezsigndocumentdependency_id_local_var) {
        free(pki_ezsigndocumentdependency_id_local_var);
        pki_ezsigndocumentdependency_id_local_var = NULL;
    }
    if (fki_ezsigndocument_i_ddependency_local_var) {
        free(fki_ezsigndocument_i_ddependency_local_var);
        fki_ezsigndocument_i_ddependency_local_var = NULL;
    }
    return NULL;

}
