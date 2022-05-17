#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_request_compound.h"



ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound_create(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
    ) {
    ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_request_compound_t));
    if (!ezsigntemplatepackagesignermembership_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_request_compound_local_var->pki_ezsigntemplatepackagesignermembership_id = pki_ezsigntemplatepackagesignermembership_id;
    ezsigntemplatepackagesignermembership_request_compound_local_var->fki_ezsigntemplatepackagemembership_id = fki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagesignermembership_request_compound_local_var->fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesignermembership_request_compound_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatepackagesignermembership_request_compound_local_var->i_ezsigntemplatepackagesignermembership_copy = i_ezsigntemplatepackagesignermembership_copy;

    return ezsigntemplatepackagesignermembership_request_compound_local_var;
}


void ezsigntemplatepackagesignermembership_request_compound_free(ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound) {
    if(NULL == ezsigntemplatepackagesignermembership_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatepackagesignermembership_request_compound);
}

cJSON *ezsigntemplatepackagesignermembership_request_compound_convertToJSON(ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_request_compound->pki_ezsigntemplatepackagesignermembership_id
    if(ezsigntemplatepackagesignermembership_request_compound->pki_ezsigntemplatepackagesignermembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignermembershipID", ezsigntemplatepackagesignermembership_request_compound->pki_ezsigntemplatepackagesignermembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagemembership_id
    if (!ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagemembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackagemembershipID", ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagemembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagesigner_id
    if (!ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatesigner_id
    if (!ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_request_compound->i_ezsigntemplatepackagesignermembership_copy
    if(ezsigntemplatepackagesignermembership_request_compound->i_ezsigntemplatepackagesignermembership_copy) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagesignermembershipCopy", ezsigntemplatepackagesignermembership_request_compound->i_ezsigntemplatepackagesignermembership_copy) == NULL) {
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

ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_request_compoundJSON){

    ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound_local_var = NULL;

    // ezsigntemplatepackagesignermembership_request_compound->pki_ezsigntemplatepackagesignermembership_id
    cJSON *pki_ezsigntemplatepackagesignermembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_request_compoundJSON, "pkiEzsigntemplatepackagesignermembershipID");
    if (pki_ezsigntemplatepackagesignermembership_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesignermembership_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagemembership_id
    cJSON *fki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_request_compoundJSON, "fkiEzsigntemplatepackagemembershipID");
    if (!fki_ezsigntemplatepackagemembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackagemembership_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatepackagesigner_id
    cJSON *fki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_request_compoundJSON, "fkiEzsigntemplatepackagesignerID");
    if (!fki_ezsigntemplatepackagesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_request_compound->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_request_compoundJSON, "fkiEzsigntemplatesignerID");
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_request_compound->i_ezsigntemplatepackagesignermembership_copy
    cJSON *i_ezsigntemplatepackagesignermembership_copy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_request_compoundJSON, "iEzsigntemplatepackagesignermembershipCopy");
    if (i_ezsigntemplatepackagesignermembership_copy) { 
    if(!cJSON_IsNumber(i_ezsigntemplatepackagesignermembership_copy))
    {
    goto end; //Numeric
    }
    }


    ezsigntemplatepackagesignermembership_request_compound_local_var = ezsigntemplatepackagesignermembership_request_compound_create (
        pki_ezsigntemplatepackagesignermembership_id ? pki_ezsigntemplatepackagesignermembership_id->valuedouble : 0,
        fki_ezsigntemplatepackagemembership_id->valuedouble,
        fki_ezsigntemplatepackagesigner_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble,
        i_ezsigntemplatepackagesignermembership_copy ? i_ezsigntemplatepackagesignermembership_copy->valuedouble : 0
        );

    return ezsigntemplatepackagesignermembership_request_compound_local_var;
end:
    return NULL;

}
