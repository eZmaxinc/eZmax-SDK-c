#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroupsigner_response_compound.h"



static ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_create_internal(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
    ) {
    ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_local_var = malloc(sizeof(ezsigntemplateformfieldgroupsigner_response_compound_t));
    if (!ezsigntemplateformfieldgroupsigner_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroupsigner_response_compound_local_var->pki_ezsigntemplateformfieldgroupsigner_id = pki_ezsigntemplateformfieldgroupsigner_id;
    ezsigntemplateformfieldgroupsigner_response_compound_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;

    ezsigntemplateformfieldgroupsigner_response_compound_local_var->_library_owned = 1;
    return ezsigntemplateformfieldgroupsigner_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_create(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
    ) {
    return ezsigntemplateformfieldgroupsigner_response_compound_create_internal (
        pki_ezsigntemplateformfieldgroupsigner_id,
        fki_ezsigntemplatesigner_id
        );
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
    free(ezsigntemplateformfieldgroupsigner_response_compound);
}

cJSON *ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id
    if (!ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupsignerID", ezsigntemplateformfieldgroupsigner_response_compound->pki_ezsigntemplateformfieldgroupsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id
    if (!ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplateformfieldgroupsigner_response_compound->fki_ezsigntemplatesigner_id) == NULL) {
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


    ezsigntemplateformfieldgroupsigner_response_compound_local_var = ezsigntemplateformfieldgroupsigner_response_compound_create_internal (
        pki_ezsigntemplateformfieldgroupsigner_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble
        );

    return ezsigntemplateformfieldgroupsigner_response_compound_local_var;
end:
    return NULL;

}
