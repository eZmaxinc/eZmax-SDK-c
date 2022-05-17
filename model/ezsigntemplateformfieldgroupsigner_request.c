#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroupsigner_request.h"



ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_create(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
    ) {
    ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_local_var = malloc(sizeof(ezsigntemplateformfieldgroupsigner_request_t));
    if (!ezsigntemplateformfieldgroupsigner_request_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroupsigner_request_local_var->pki_ezsigntemplateformfieldgroupsigner_id = pki_ezsigntemplateformfieldgroupsigner_id;
    ezsigntemplateformfieldgroupsigner_request_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;

    return ezsigntemplateformfieldgroupsigner_request_local_var;
}


void ezsigntemplateformfieldgroupsigner_request_free(ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request) {
    if(NULL == ezsigntemplateformfieldgroupsigner_request){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplateformfieldgroupsigner_request);
}

cJSON *ezsigntemplateformfieldgroupsigner_request_convertToJSON(ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id
    if(ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupsignerID", ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id
    if (!ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id) == NULL) {
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

    // ezsigntemplateformfieldgroupsigner_request->pki_ezsigntemplateformfieldgroupsigner_id
    cJSON *pki_ezsigntemplateformfieldgroupsigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_requestJSON, "pkiEzsigntemplateformfieldgroupsignerID");
    if (pki_ezsigntemplateformfieldgroupsigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateformfieldgroupsigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfieldgroupsigner_request->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroupsigner_requestJSON, "fkiEzsigntemplatesignerID");
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }


    ezsigntemplateformfieldgroupsigner_request_local_var = ezsigntemplateformfieldgroupsigner_request_create (
        pki_ezsigntemplateformfieldgroupsigner_id ? pki_ezsigntemplateformfieldgroupsigner_id->valuedouble : 0,
        fki_ezsigntemplatesigner_id->valuedouble
        );

    return ezsigntemplateformfieldgroupsigner_request_local_var;
end:
    return NULL;

}
