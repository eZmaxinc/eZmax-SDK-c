#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_response.h"



static ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_create_internal(
    int *pki_ezsignbulksenddocumentmapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezsigntemplate_id,
    int *i_ezsignbulksenddocumentmapping_order
    ) {
    ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_response_t));
    if (!ezsignbulksenddocumentmapping_response_local_var) {
        return NULL;
    }
    memset(ezsignbulksenddocumentmapping_response_local_var, 0, sizeof(ezsignbulksenddocumentmapping_response_t));
    ezsignbulksenddocumentmapping_response_local_var->_library_owned = 1;
    ezsignbulksenddocumentmapping_response_local_var->pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    ezsignbulksenddocumentmapping_response_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksenddocumentmapping_response_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsignbulksenddocumentmapping_response_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsignbulksenddocumentmapping_response_local_var->i_ezsignbulksenddocumentmapping_order = i_ezsignbulksenddocumentmapping_order;
    return ezsignbulksenddocumentmapping_response_local_var;
}

__attribute__((deprecated)) ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_create(
    int *pki_ezsignbulksenddocumentmapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezsigntemplate_id,
    int *i_ezsignbulksenddocumentmapping_order
    ) {
    int *pki_ezsignbulksenddocumentmapping_id_copy = NULL;
    if (pki_ezsignbulksenddocumentmapping_id) {
        pki_ezsignbulksenddocumentmapping_id_copy = malloc(sizeof(int));
        if (pki_ezsignbulksenddocumentmapping_id_copy) *pki_ezsignbulksenddocumentmapping_id_copy = *pki_ezsignbulksenddocumentmapping_id;
    }
    int *fki_ezsignbulksend_id_copy = NULL;
    if (fki_ezsignbulksend_id) {
        fki_ezsignbulksend_id_copy = malloc(sizeof(int));
        if (fki_ezsignbulksend_id_copy) *fki_ezsignbulksend_id_copy = *fki_ezsignbulksend_id;
    }
    int *fki_ezsigntemplatepackage_id_copy = NULL;
    if (fki_ezsigntemplatepackage_id) {
        fki_ezsigntemplatepackage_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatepackage_id_copy) *fki_ezsigntemplatepackage_id_copy = *fki_ezsigntemplatepackage_id;
    }
    int *fki_ezsigntemplate_id_copy = NULL;
    if (fki_ezsigntemplate_id) {
        fki_ezsigntemplate_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplate_id_copy) *fki_ezsigntemplate_id_copy = *fki_ezsigntemplate_id;
    }
    int *i_ezsignbulksenddocumentmapping_order_copy = NULL;
    if (i_ezsignbulksenddocumentmapping_order) {
        i_ezsignbulksenddocumentmapping_order_copy = malloc(sizeof(int));
        if (i_ezsignbulksenddocumentmapping_order_copy) *i_ezsignbulksenddocumentmapping_order_copy = *i_ezsignbulksenddocumentmapping_order;
    }
    ezsignbulksenddocumentmapping_response_t *result = ezsignbulksenddocumentmapping_response_create_internal (
        pki_ezsignbulksenddocumentmapping_id_copy,
        fki_ezsignbulksend_id_copy,
        fki_ezsigntemplatepackage_id_copy,
        fki_ezsigntemplate_id_copy,
        i_ezsignbulksenddocumentmapping_order_copy
        );
    if (!result) {
        free(pki_ezsignbulksenddocumentmapping_id_copy);
        free(fki_ezsignbulksend_id_copy);
        free(fki_ezsigntemplatepackage_id_copy);
        free(fki_ezsigntemplate_id_copy);
        free(i_ezsignbulksenddocumentmapping_order_copy);
    }
    return result;
}

void ezsignbulksenddocumentmapping_response_free(ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response) {
    if(NULL == ezsignbulksenddocumentmapping_response){
        return ;
    }
    if(ezsignbulksenddocumentmapping_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksenddocumentmapping_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id) {
        free(ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id);
        ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id = NULL;
    }
    if (ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id) {
        free(ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id);
        ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id = NULL;
    }
    if (ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id) {
        free(ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id);
        ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id) {
        free(ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id);
        ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id = NULL;
    }
    if (ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order) {
        free(ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order);
        ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order = NULL;
    }
    free(ezsignbulksenddocumentmapping_response);
}

cJSON *ezsignbulksenddocumentmapping_response_convertToJSON(ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id
    if (!ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksenddocumentmappingID", *ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id
    if (!ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", *ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id
    if(ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", *ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id
    if(ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", *ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order
    if (!ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignbulksenddocumentmappingOrder", *ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order) == NULL) {
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

    // define the local variable for ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id
    int *pki_ezsignbulksenddocumentmapping_id_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id
    int *fki_ezsignbulksend_id_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id
    int *fki_ezsigntemplatepackage_id_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id
    int *fki_ezsigntemplate_id_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order
    int *i_ezsignbulksenddocumentmapping_order_local_var = NULL;

    // ezsignbulksenddocumentmapping_response->pki_ezsignbulksenddocumentmapping_id
    cJSON *pki_ezsignbulksenddocumentmapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "pkiEzsignbulksenddocumentmappingID");
    if (cJSON_IsNull(pki_ezsignbulksenddocumentmapping_id)) {
        pki_ezsignbulksenddocumentmapping_id = NULL;
    }
    if (!pki_ezsignbulksenddocumentmapping_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksenddocumentmapping_id))
    {
    goto end; //Numeric
    }
    pki_ezsignbulksenddocumentmapping_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignbulksenddocumentmapping_id_local_var)
    {
        goto end;
    }
    *pki_ezsignbulksenddocumentmapping_id_local_var = pki_ezsignbulksenddocumentmapping_id->valuedouble;

    // ezsignbulksenddocumentmapping_response->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "fkiEzsignbulksendID");
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
    fki_ezsignbulksend_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignbulksend_id_local_var)
    {
        goto end;
    }
    *fki_ezsignbulksend_id_local_var = fki_ezsignbulksend_id->valuedouble;

    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "fkiEzsigntemplatepackageID");
    if (cJSON_IsNull(fki_ezsigntemplatepackage_id)) {
        fki_ezsigntemplatepackage_id = NULL;
    }
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatepackage_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatepackage_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatepackage_id_local_var = fki_ezsigntemplatepackage_id->valuedouble;
    }

    // ezsignbulksenddocumentmapping_response->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "fkiEzsigntemplateID");
    if (cJSON_IsNull(fki_ezsigntemplate_id)) {
        fki_ezsigntemplate_id = NULL;
    }
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplate_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplate_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplate_id_local_var = fki_ezsigntemplate_id->valuedouble;
    }

    // ezsignbulksenddocumentmapping_response->i_ezsignbulksenddocumentmapping_order
    cJSON *i_ezsignbulksenddocumentmapping_order = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_responseJSON, "iEzsignbulksenddocumentmappingOrder");
    if (cJSON_IsNull(i_ezsignbulksenddocumentmapping_order)) {
        i_ezsignbulksenddocumentmapping_order = NULL;
    }
    if (!i_ezsignbulksenddocumentmapping_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignbulksenddocumentmapping_order))
    {
    goto end; //Numeric
    }
    i_ezsignbulksenddocumentmapping_order_local_var = malloc(sizeof(int));
    if(!i_ezsignbulksenddocumentmapping_order_local_var)
    {
        goto end;
    }
    *i_ezsignbulksenddocumentmapping_order_local_var = i_ezsignbulksenddocumentmapping_order->valuedouble;



    ezsignbulksenddocumentmapping_response_local_var = ezsignbulksenddocumentmapping_response_create_internal (
        pki_ezsignbulksenddocumentmapping_id_local_var,
        fki_ezsignbulksend_id_local_var,
        fki_ezsigntemplatepackage_id_local_var,
        fki_ezsigntemplate_id_local_var,
        i_ezsignbulksenddocumentmapping_order_local_var
        );

    if (!ezsignbulksenddocumentmapping_response_local_var) {
        goto end;
    }

    return ezsignbulksenddocumentmapping_response_local_var;
end:
    if (pki_ezsignbulksenddocumentmapping_id_local_var) {
        free(pki_ezsignbulksenddocumentmapping_id_local_var);
        pki_ezsignbulksenddocumentmapping_id_local_var = NULL;
    }
    if (fki_ezsignbulksend_id_local_var) {
        free(fki_ezsignbulksend_id_local_var);
        fki_ezsignbulksend_id_local_var = NULL;
    }
    if (fki_ezsigntemplatepackage_id_local_var) {
        free(fki_ezsigntemplatepackage_id_local_var);
        fki_ezsigntemplatepackage_id_local_var = NULL;
    }
    if (fki_ezsigntemplate_id_local_var) {
        free(fki_ezsigntemplate_id_local_var);
        fki_ezsigntemplate_id_local_var = NULL;
    }
    if (i_ezsignbulksenddocumentmapping_order_local_var) {
        free(i_ezsignbulksenddocumentmapping_order_local_var);
        i_ezsignbulksenddocumentmapping_order_local_var = NULL;
    }
    return NULL;

}
