#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_request.h"



ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
    ) {
    ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_request_t));
    if (!ezsignbulksenddocumentmapping_request_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_request_local_var->pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    ezsignbulksenddocumentmapping_request_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksenddocumentmapping_request_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsignbulksenddocumentmapping_request_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;

    return ezsignbulksenddocumentmapping_request_local_var;
}


void ezsignbulksenddocumentmapping_request_free(ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request) {
    if(NULL == ezsignbulksenddocumentmapping_request){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignbulksenddocumentmapping_request);
}

cJSON *ezsignbulksenddocumentmapping_request_convertToJSON(ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_request->pki_ezsignbulksenddocumentmapping_id
    if(ezsignbulksenddocumentmapping_request->pki_ezsignbulksenddocumentmapping_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksenddocumentmappingID", ezsignbulksenddocumentmapping_request->pki_ezsignbulksenddocumentmapping_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_request->fki_ezsignbulksend_id
    if (!ezsignbulksenddocumentmapping_request->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksenddocumentmapping_request->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_request->fki_ezsigntemplatepackage_id
    if(ezsignbulksenddocumentmapping_request->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsignbulksenddocumentmapping_request->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_request->fki_ezsigntemplate_id
    if(ezsignbulksenddocumentmapping_request->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsignbulksenddocumentmapping_request->fki_ezsigntemplate_id) == NULL) {
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

ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_requestJSON){

    ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request_local_var = NULL;

    // ezsignbulksenddocumentmapping_request->pki_ezsignbulksenddocumentmapping_id
    cJSON *pki_ezsignbulksenddocumentmapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_requestJSON, "pkiEzsignbulksenddocumentmappingID");
    if (pki_ezsignbulksenddocumentmapping_id) { 
    if(!cJSON_IsNumber(pki_ezsignbulksenddocumentmapping_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_request->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_requestJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksenddocumentmapping_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_requestJSON, "fkiEzsigntemplatepackageID");
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_request->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_requestJSON, "fkiEzsigntemplateID");
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }


    ezsignbulksenddocumentmapping_request_local_var = ezsignbulksenddocumentmapping_request_create (
        pki_ezsignbulksenddocumentmapping_id ? pki_ezsignbulksenddocumentmapping_id->valuedouble : 0,
        fki_ezsignbulksend_id->valuedouble,
        fki_ezsigntemplatepackage_id ? fki_ezsigntemplatepackage_id->valuedouble : 0,
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0
        );

    return ezsignbulksenddocumentmapping_request_local_var;
end:
    return NULL;

}
