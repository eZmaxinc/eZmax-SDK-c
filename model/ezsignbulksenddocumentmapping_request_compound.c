#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_request_compound.h"



static ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound_create_internal(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
    ) {
    ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_request_compound_t));
    if (!ezsignbulksenddocumentmapping_request_compound_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_request_compound_local_var->pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    ezsignbulksenddocumentmapping_request_compound_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksenddocumentmapping_request_compound_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsignbulksenddocumentmapping_request_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;

    ezsignbulksenddocumentmapping_request_compound_local_var->_library_owned = 1;
    return ezsignbulksenddocumentmapping_request_compound_local_var;
}

__attribute__((deprecated)) ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
    ) {
    return ezsignbulksenddocumentmapping_request_compound_create_internal (
        pki_ezsignbulksenddocumentmapping_id,
        fki_ezsignbulksend_id,
        fki_ezsigntemplatepackage_id,
        fki_ezsigntemplate_id
        );
}

void ezsignbulksenddocumentmapping_request_compound_free(ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound) {
    if(NULL == ezsignbulksenddocumentmapping_request_compound){
        return ;
    }
    if(ezsignbulksenddocumentmapping_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksenddocumentmapping_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignbulksenddocumentmapping_request_compound);
}

cJSON *ezsignbulksenddocumentmapping_request_compound_convertToJSON(ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_request_compound->pki_ezsignbulksenddocumentmapping_id
    if(ezsignbulksenddocumentmapping_request_compound->pki_ezsignbulksenddocumentmapping_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksenddocumentmappingID", ezsignbulksenddocumentmapping_request_compound->pki_ezsignbulksenddocumentmapping_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_request_compound->fki_ezsignbulksend_id
    if (!ezsignbulksenddocumentmapping_request_compound->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksenddocumentmapping_request_compound->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplatepackage_id
    if(ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplate_id
    if(ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplate_id) == NULL) {
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

ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_request_compoundJSON){

    ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound_local_var = NULL;

    // ezsignbulksenddocumentmapping_request_compound->pki_ezsignbulksenddocumentmapping_id
    cJSON *pki_ezsignbulksenddocumentmapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_request_compoundJSON, "pkiEzsignbulksenddocumentmappingID");
    if (cJSON_IsNull(pki_ezsignbulksenddocumentmapping_id)) {
        pki_ezsignbulksenddocumentmapping_id = NULL;
    }
    if (pki_ezsignbulksenddocumentmapping_id) { 
    if(!cJSON_IsNumber(pki_ezsignbulksenddocumentmapping_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_request_compound->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_request_compoundJSON, "fkiEzsignbulksendID");
    if (cJSON_IsNull(fki_ezsignbulksend_id)) {
        fki_ezsignbulksend_id = NULL;
    }
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_request_compoundJSON, "fkiEzsigntemplatepackageID");
    if (cJSON_IsNull(fki_ezsigntemplatepackage_id)) {
        fki_ezsigntemplatepackage_id = NULL;
    }
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksenddocumentmapping_request_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_request_compoundJSON, "fkiEzsigntemplateID");
    if (cJSON_IsNull(fki_ezsigntemplate_id)) {
        fki_ezsigntemplate_id = NULL;
    }
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }


    ezsignbulksenddocumentmapping_request_compound_local_var = ezsignbulksenddocumentmapping_request_compound_create_internal (
        pki_ezsignbulksenddocumentmapping_id ? pki_ezsignbulksenddocumentmapping_id->valuedouble : 0,
        fki_ezsignbulksend_id->valuedouble,
        fki_ezsigntemplatepackage_id ? fki_ezsigntemplatepackage_id->valuedouble : 0,
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0
        );

    return ezsignbulksenddocumentmapping_request_compound_local_var;
end:
    return NULL;

}
