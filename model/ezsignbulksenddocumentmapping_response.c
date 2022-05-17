#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_response.h"



ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsignbulksenddocumentmapping_order
    ) {
    ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_response_t));
    if (!ezsignbulksenddocumentmapping_response_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_response_local_var->pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    ezsignbulksenddocumentmapping_response_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksenddocumentmapping_response_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsignbulksenddocumentmapping_response_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsignbulksenddocumentmapping_response_local_var->i_ezsignbulksenddocumentmapping_order = i_ezsignbulksenddocumentmapping_order;

    return ezsignbulksenddocumentmapping_response_local_var;
}


void ezsignbulksenddocumentmapping_response_free(ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response) {
    if(NULL == ezsignbulksenddocumentmapping_response){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignbulksenddocumentmapping_response);
}

cJSON *ezsignbulksenddocumentmapping_response_convertToJSON(ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id
    if (!ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksenddocumentmappingID", ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id
    if (!ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id
    if(ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id
    if(ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order
    if (!ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignbulksenddocumentmappingOrder", ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_responseJSON){

    ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_local_var = NULL;

    // ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id
    cJSON *pki_ezsignbulksenddocumentmapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "pkiEzsignbulksenddocumentmappingID");
    if (!pki_ezsignbulksenddocumentmapping_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksenddocumentmapping_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "fkiEzsigntemplatepackageID");
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "fkiEzsigntemplateID");
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order
    cJSON *i_ezsignbulksenddocumentmapping_order = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "iEzsignbulksenddocumentmappingOrder");
    if (!i_ezsignbulksenddocumentmapping_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignbulksenddocumentmapping_order))
    {
    goto end; //Numeric
    }


    ezsignbulksenddocumentmapping_response_local_var = ezsignbulksenddocumentmapping_response_create (
        pki_ezsignbulksenddocumentmapping_id->valuedouble,
        fki_ezsignbulksend_id->valuedouble,
        fki_ezsigntemplatepackage_id ? fki_ezsigntemplatepackage_id->valuedouble : 0,
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0,
        i_ezsignbulksenddocumentmapping_order->valuedouble
        );

    return ezsignbulksenddocumentmapping_response_local_var;
end:
    return NULL;

}
