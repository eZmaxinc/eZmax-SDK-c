#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_response_compound.h"



static ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound_create_internal(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
    ) {
    ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_response_compound_t));
    if (!ezsigntemplatepackagesignermembership_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_response_compound_local_var->pki_ezsigntemplatepackagesignermembership_id = pki_ezsigntemplatepackagesignermembership_id;
    ezsigntemplatepackagesignermembership_response_compound_local_var->fki_ezsigntemplatepackagemembership_id = fki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagesignermembership_response_compound_local_var->fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesignermembership_response_compound_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatepackagesignermembership_response_compound_local_var->i_ezsigntemplatepackagesignermembership_copy = i_ezsigntemplatepackagesignermembership_copy;

    ezsigntemplatepackagesignermembership_response_compound_local_var->_library_owned = 1;
    return ezsigntemplatepackagesignermembership_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound_create(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
    ) {
    return ezsigntemplatepackagesignermembership_response_compound_create_internal (
        pki_ezsigntemplatepackagesignermembership_id,
        fki_ezsigntemplatepackagemembership_id,
        fki_ezsigntemplatepackagesigner_id,
        fki_ezsigntemplatesigner_id,
        i_ezsigntemplatepackagesignermembership_copy
        );
}

void ezsigntemplatepackagesignermembership_response_compound_free(ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound) {
    if(NULL == ezsigntemplatepackagesignermembership_response_compound){
        return ;
    }
    if(ezsigntemplatepackagesignermembership_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesignermembership_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatepackagesignermembership_response_compound);
}

cJSON *ezsigntemplatepackagesignermembership_response_compound_convertToJSON(ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_response_compound->pki_ezsigntemplatepackagesignermembership_id
    if (!ezsigntemplatepackagesignermembership_response_compound->pki_ezsigntemplatepackagesignermembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignermembershipID", ezsigntemplatepackagesignermembership_response_compound->pki_ezsigntemplatepackagesignermembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagemembership_id
    if (!ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagemembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackagemembershipID", ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagemembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagesigner_id
    if (!ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatesigner_id
    if (!ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_response_compound->i_ezsigntemplatepackagesignermembership_copy
    if(ezsigntemplatepackagesignermembership_response_compound->i_ezsigntemplatepackagesignermembership_copy) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagesignermembershipCopy", ezsigntemplatepackagesignermembership_response_compound->i_ezsigntemplatepackagesignermembership_copy) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_response_compoundJSON){

    ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound_local_var = NULL;

    // ezsigntemplatepackagesignermembership_response_compound->pki_ezsigntemplatepackagesignermembership_id
    cJSON *pki_ezsigntemplatepackagesignermembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_response_compoundJSON, "pkiEzsigntemplatepackagesignermembershipID");
    if (cJSON_IsNull(pki_ezsigntemplatepackagesignermembership_id)) {
        pki_ezsigntemplatepackagesignermembership_id = NULL;
    }
    if (!pki_ezsigntemplatepackagesignermembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesignermembership_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagemembership_id
    cJSON *fki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_response_compoundJSON, "fkiEzsigntemplatepackagemembershipID");
    if (cJSON_IsNull(fki_ezsigntemplatepackagemembership_id)) {
        fki_ezsigntemplatepackagemembership_id = NULL;
    }
    if (!fki_ezsigntemplatepackagemembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackagemembership_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatepackagesigner_id
    cJSON *fki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_response_compoundJSON, "fkiEzsigntemplatepackagesignerID");
    if (cJSON_IsNull(fki_ezsigntemplatepackagesigner_id)) {
        fki_ezsigntemplatepackagesigner_id = NULL;
    }
    if (!fki_ezsigntemplatepackagesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_response_compound->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_response_compoundJSON, "fkiEzsigntemplatesignerID");
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

    // ezsigntemplatepackagesignermembership_response_compound->i_ezsigntemplatepackagesignermembership_copy
    cJSON *i_ezsigntemplatepackagesignermembership_copy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_response_compoundJSON, "iEzsigntemplatepackagesignermembershipCopy");
    if (cJSON_IsNull(i_ezsigntemplatepackagesignermembership_copy)) {
        i_ezsigntemplatepackagesignermembership_copy = NULL;
    }
    if (i_ezsigntemplatepackagesignermembership_copy) { 
    if(!cJSON_IsNumber(i_ezsigntemplatepackagesignermembership_copy))
    {
    goto end; //Numeric
    }
    }


    ezsigntemplatepackagesignermembership_response_compound_local_var = ezsigntemplatepackagesignermembership_response_compound_create_internal (
        pki_ezsigntemplatepackagesignermembership_id->valuedouble,
        fki_ezsigntemplatepackagemembership_id->valuedouble,
        fki_ezsigntemplatepackagesigner_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble,
        i_ezsigntemplatepackagesignermembership_copy ? i_ezsigntemplatepackagesignermembership_copy->valuedouble : 0
        );

    return ezsigntemplatepackagesignermembership_response_compound_local_var;
end:
    return NULL;

}
