#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocumentdependency_request.h"



ezsigndocumentdependency_request_t *ezsigndocumentdependency_request_create(
    int pki_ezsigndocumentdependency_id,
    int fki_ezsigndocument_i_ddependency
    ) {
    ezsigndocumentdependency_request_t *ezsigndocumentdependency_request_local_var = malloc(sizeof(ezsigndocumentdependency_request_t));
    if (!ezsigndocumentdependency_request_local_var) {
        return NULL;
    }
    ezsigndocumentdependency_request_local_var->pki_ezsigndocumentdependency_id = pki_ezsigndocumentdependency_id;
    ezsigndocumentdependency_request_local_var->fki_ezsigndocument_i_ddependency = fki_ezsigndocument_i_ddependency;

    return ezsigndocumentdependency_request_local_var;
}


void ezsigndocumentdependency_request_free(ezsigndocumentdependency_request_t *ezsigndocumentdependency_request) {
    if(NULL == ezsigndocumentdependency_request){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigndocumentdependency_request);
}

cJSON *ezsigndocumentdependency_request_convertToJSON(ezsigndocumentdependency_request_t *ezsigndocumentdependency_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocumentdependency_request->pki_ezsigndocumentdependency_id
    if(ezsigndocumentdependency_request->pki_ezsigndocumentdependency_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentdependencyID", ezsigndocumentdependency_request->pki_ezsigndocumentdependency_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocumentdependency_request->fki_ezsigndocument_i_ddependency
    if (!ezsigndocumentdependency_request->fki_ezsigndocument_i_ddependency) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentIDdependency", ezsigndocumentdependency_request->fki_ezsigndocument_i_ddependency) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocumentdependency_request_t *ezsigndocumentdependency_request_parseFromJSON(cJSON *ezsigndocumentdependency_requestJSON){

    ezsigndocumentdependency_request_t *ezsigndocumentdependency_request_local_var = NULL;

    // ezsigndocumentdependency_request->pki_ezsigndocumentdependency_id
    cJSON *pki_ezsigndocumentdependency_id = cJSON_GetObjectItemCaseSensitive(ezsigndocumentdependency_requestJSON, "pkiEzsigndocumentdependencyID");
    if (pki_ezsigndocumentdependency_id) { 
    if(!cJSON_IsNumber(pki_ezsigndocumentdependency_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndocumentdependency_request->fki_ezsigndocument_i_ddependency
    cJSON *fki_ezsigndocument_i_ddependency = cJSON_GetObjectItemCaseSensitive(ezsigndocumentdependency_requestJSON, "fkiEzsigndocumentIDdependency");
    if (!fki_ezsigndocument_i_ddependency) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_i_ddependency))
    {
    goto end; //Numeric
    }


    ezsigndocumentdependency_request_local_var = ezsigndocumentdependency_request_create (
        pki_ezsigndocumentdependency_id ? pki_ezsigndocumentdependency_id->valuedouble : 0,
        fki_ezsigndocument_i_ddependency->valuedouble
        );

    return ezsigndocumentdependency_request_local_var;
end:
    return NULL;

}
