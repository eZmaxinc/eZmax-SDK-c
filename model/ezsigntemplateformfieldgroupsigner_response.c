#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroupsigner_response.h"



ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response_create(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
    ) {
    ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response_local_var = malloc(sizeof(ezsigntemplateformfieldgroupsigner_response_t));
    if (!ezsigntemplateformfieldgroupsigner_response_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroupsigner_response_local_var->pki_ezsigntemplateformfieldgroupsigner_id = pki_ezsigntemplateformfieldgroupsigner_id;
    ezsigntemplateformfieldgroupsigner_response_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;

    return ezsigntemplateformfieldgroupsigner_response_local_var;
}


void ezsigntemplateformfieldgroupsigner_response_free(ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response) {
    if(NULL == ezsigntemplateformfieldgroupsigner_response){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplateformfieldgroupsigner_response);
}

cJSON *ezsigntemplateformfieldgroupsigner_response_convertToJSON(ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroupsigner_response->pki_ezsigntemplateformfieldgroupsigner_id
    if (!ezsigntemplateformfieldgroupsigner_response->pki_ezsigntemplateformfieldgroupsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupsignerID", ezsigntemplateformfieldgroupsigner_response->pki_ezsigntemplateformfieldgroupsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroupsigner_response->fki_ezsigntemplatesigner_id
    if (!ezsigntemplateformfieldgroupsigner_response->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplateformfieldgroupsigner_response->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroupsigner_responseJSON){

    ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response_local_var = NULL;

    // ezsigntemplateformfieldgroupsigner_response->pki_ezsigntemplateformfieldgroupsigner_id
    cJSON *pki_ezsigntemplateformfieldgroupsigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_responseJSON, "pkiEzsigntemplateformfieldgroupsignerID");
    if (!pki_ezsigntemplateformfieldgroupsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateformfieldgroupsigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfieldgroupsigner_response->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_responseJSON, "fkiEzsigntemplatesignerID");
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }


    ezsigntemplateformfieldgroupsigner_response_local_var = ezsigntemplateformfieldgroupsigner_response_create (
        pki_ezsigntemplateformfieldgroupsigner_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble
        );

    return ezsigntemplateformfieldgroupsigner_response_local_var;
end:
    return NULL;

}
