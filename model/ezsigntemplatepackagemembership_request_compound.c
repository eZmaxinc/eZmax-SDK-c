#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_request_compound.h"



ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
    ) {
    ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound_local_var = malloc(sizeof(ezsigntemplatepackagemembership_request_compound_t));
    if (!ezsigntemplatepackagemembership_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_request_compound_local_var->pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagemembership_request_compound_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagemembership_request_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;

    return ezsigntemplatepackagemembership_request_compound_local_var;
}


void ezsigntemplatepackagemembership_request_compound_free(ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound) {
    if(NULL == ezsigntemplatepackagemembership_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatepackagemembership_request_compound);
}

cJSON *ezsigntemplatepackagemembership_request_compound_convertToJSON(ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_request_compound->pki_ezsigntemplatepackagemembership_id
    if(ezsigntemplatepackagemembership_request_compound->pki_ezsigntemplatepackagemembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagemembershipID", ezsigntemplatepackagemembership_request_compound->pki_ezsigntemplatepackagemembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplate_id
    if (!ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagemembership_request_compoundJSON){

    ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound_local_var = NULL;

    // ezsigntemplatepackagemembership_request_compound->pki_ezsigntemplatepackagemembership_id
    cJSON *pki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_request_compoundJSON, "pkiEzsigntemplatepackagemembershipID");
    if (pki_ezsigntemplatepackagemembership_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagemembership_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_request_compoundJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagemembership_request_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_request_compoundJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }


    ezsigntemplatepackagemembership_request_compound_local_var = ezsigntemplatepackagemembership_request_compound_create (
        pki_ezsigntemplatepackagemembership_id ? pki_ezsigntemplatepackagemembership_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble
        );

    return ezsigntemplatepackagemembership_request_compound_local_var;
end:
    return NULL;

}
