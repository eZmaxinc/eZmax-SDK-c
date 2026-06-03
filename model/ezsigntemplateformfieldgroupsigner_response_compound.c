#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroupsigner_response_compound.h"



static ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_create_internal(
    int *pki_ezsigntemplateformfieldgroupsigner_id,
    int *fki_ezsigntemplatesigner_id
    ) {
    ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_local_var = malloc(sizeof(ezsigntemplateformfieldgroupsigner_response_compound_t));
    if (!ezsigntemplateformfieldgroupsigner_response_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplateformfieldgroupsigner_response_compound_local_var, 0, sizeof(ezsigntemplateformfieldgroupsigner_response_compound_t));
    ezsigntemplateformfieldgroupsigner_response_compound_local_var->_library_owned = 1;
    ezsigntemplateformfieldgroupsigner_response_compound_local_var->pki_ezsigntemplateformfieldgroupsigner_id = pki_ezsigntemplateformfieldgroupsigner_id;
    ezsigntemplateformfieldgroupsigner_response_compound_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    return ezsigntemplateformfieldgroupsigner_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_create(
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
    ezsigntemplateformfieldgroupsigner_response_compound_t *result = ezsigntemplateformfieldgroupsigner_response_compound_create_internal (
        pki_ezsigntemplateformfieldgroupsigner_id_copy,
        fki_ezsigntemplatesigner_id_copy
        );
    if (!result) {
        free(pki_ezsigntemplateformfieldgroupsigner_id_copy);
        free(fki_ezsigntemplatesigner_id_copy);
    }
    return result;
}

void ezsigntemplateformfieldgroupsigner_response_compound_free(ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound) {
    if(NULL == ezsigntemplateformfieldgroupsigner_response_compound){
        return ;
    }
    if(ezsigntemplateformfieldgroupsigner_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateformfieldgroupsigner_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id) {
        free(ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id);
        ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id = NULL;
    }
    if (ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id) {
        free(ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id);
        ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id = NULL;
    }
    free(ezsigntemplateformfieldgroupsigner_response_compound);
}

cJSON *ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id
    if (!ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupsignerID", *ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id
    if (!ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", *ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_parseFromJSON(cJSON *ezsigntemplateformfieldgroupsigner_response_compoundJSON){

    ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id
    int *pki_ezsigntemplateformfieldgroupsigner_id_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id
    int *fki_ezsigntemplatesigner_id_local_var = NULL;

    // ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id
    cJSON *pki_ezsigntemplateformfieldgroupsigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_response_compoundJSON, "pkiEzsigntemplateformfieldgroupsignerID");
    if (cJSON_IsNull(pki_ezsigntemplateformfieldgroupsigner_id)) {
        pki_ezsigntemplateformfieldgroupsigner_id = NULL;
    }
    if (!pki_ezsigntemplateformfieldgroupsigner_id) {
        goto end;
    }

    
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

    // ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_response_compoundJSON, "fkiEzsigntemplatesignerID");
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



    ezsigntemplateformfieldgroupsigner_response_compound_local_var = ezsigntemplateformfieldgroupsigner_response_compound_create_internal (
        pki_ezsigntemplateformfieldgroupsigner_id_local_var,
        fki_ezsigntemplatesigner_id_local_var
        );

    if (!ezsigntemplateformfieldgroupsigner_response_compound_local_var) {
        goto end;
    }

    return ezsigntemplateformfieldgroupsigner_response_compound_local_var;
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
