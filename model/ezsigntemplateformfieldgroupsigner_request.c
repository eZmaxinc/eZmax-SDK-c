#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroupsigner_request.h"



static ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_create_internal(
    int *pki_ezsigntemplateformfieldgroupsigner_id,
    int *fki_ezsigntemplatesigner_id
    ) {
    ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_local_var = malloc(sizeof(ezsigntemplateformfieldgroupsigner_request_t));
    if (!ezsigntemplateformfieldgroupsigner_request_local_var) {
        return NULL;
    }
    memset(ezsigntemplateformfieldgroupsigner_request_local_var, 0, sizeof(ezsigntemplateformfieldgroupsigner_request_t));
    ezsigntemplateformfieldgroupsigner_request_local_var->_library_owned = 1;
    ezsigntemplateformfieldgroupsigner_request_local_var->pki_ezsigntemplateformfieldgroupsigner_id = pki_ezsigntemplateformfieldgroupsigner_id;
    ezsigntemplateformfieldgroupsigner_request_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    return ezsigntemplateformfieldgroupsigner_request_local_var;
}

__attribute__((deprecated)) ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_create(
    int *pki_ezsigntemplateformfieldgroupsigner_id,
    int *fki_ezsigntemplatesigner_id
    ) {
    int *pki_ezsigntemplateformfieldgroupsigner_id_copy = NULL;
    if (pki_ezsigntemplateformfieldgroupsigner_id) {
        pki_ezsigntemplateformfieldgroupsigner_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateformfieldgroupsigner_id_copy) *pki_ezsigntemplateformfieldgroupsigner_id_copy = *pki_ezsigntemplateformfieldgroupsigner_id;
    }
    int *fki_ezsigntemplatesigner_id_copy = NULL;
    if (fki_ezsigntemplatesigner_id) {
        fki_ezsigntemplatesigner_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatesigner_id_copy) *fki_ezsigntemplatesigner_id_copy = *fki_ezsigntemplatesigner_id;
    }
    ezsigntemplateformfieldgroupsigner_request_t *result = ezsigntemplateformfieldgroupsigner_request_create_internal (
        pki_ezsigntemplateformfieldgroupsigner_id_copy,
        fki_ezsigntemplatesigner_id_copy
        );
    if (!result) {
        free(pki_ezsigntemplateformfieldgroupsigner_id_copy);
        free(fki_ezsigntemplatesigner_id_copy);
    }
    return result;
}

void ezsigntemplateformfieldgroupsigner_request_free(ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request) {
    if(NULL == ezsigntemplateformfieldgroupsigner_request){
        return ;
    }
    if(ezsigntemplateformfieldgroupsigner_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateformfieldgroupsigner_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id) {
        free(ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id);
        ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id = NULL;
    }
    if (ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id) {
        free(ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id);
        ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id = NULL;
    }
    free(ezsigntemplateformfieldgroupsigner_request);
}

cJSON *ezsigntemplateformfieldgroupsigner_request_convertToJSON(ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id
    if(ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupsignerID", *ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id
    if (!ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", *ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroupsigner_requestJSON){

    ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id
    int *pki_ezsigntemplateformfieldgroupsigner_id_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id
    int *fki_ezsigntemplatesigner_id_local_var = NULL;

    // ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id
    cJSON *pki_ezsigntemplateformfieldgroupsigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_requestJSON, "pkiEzsigntemplateformfieldgroupsignerID");
    if (cJSON_IsNull(pki_ezsigntemplateformfieldgroupsigner_id)) {
        pki_ezsigntemplateformfieldgroupsigner_id = NULL;
    }
    if (pki_ezsigntemplateformfieldgroupsigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateformfieldgroupsigner_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateformfieldgroupsigner_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateformfieldgroupsigner_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateformfieldgroupsigner_id_local_var = pki_ezsigntemplateformfieldgroupsigner_id->valuedouble;
    }

    // ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_requestJSON, "fkiEzsigntemplatesignerID");
    if (cJSON_IsNull(fki_ezsigntemplatesigner_id)) {
        fki_ezsigntemplatesigner_id = NULL;
    }
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatesigner_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatesigner_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatesigner_id_local_var = fki_ezsigntemplatesigner_id->valuedouble;



    ezsigntemplateformfieldgroupsigner_request_local_var = ezsigntemplateformfieldgroupsigner_request_create_internal (
        pki_ezsigntemplateformfieldgroupsigner_id_local_var,
        fki_ezsigntemplatesigner_id_local_var
        );

    if (!ezsigntemplateformfieldgroupsigner_request_local_var) {
        goto end;
    }

    return ezsigntemplateformfieldgroupsigner_request_local_var;
end:
    if (pki_ezsigntemplateformfieldgroupsigner_id_local_var) {
        free(pki_ezsigntemplateformfieldgroupsigner_id_local_var);
        pki_ezsigntemplateformfieldgroupsigner_id_local_var = NULL;
    }
    if (fki_ezsigntemplatesigner_id_local_var) {
        free(fki_ezsigntemplatesigner_id_local_var);
        fki_ezsigntemplatesigner_id_local_var = NULL;
    }
    return NULL;

}
