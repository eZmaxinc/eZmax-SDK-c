#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_autocomplete_element_response.h"



static ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_create_internal(
    char *yyyymm_ezmaxinvoicing,
    int *pki_ezmaxinvoicing_id,
    int *b_ezmaxinvoicing_isactive
    ) {
    ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_local_var = malloc(sizeof(ezmaxinvoicing_autocomplete_element_response_t));
    if (!ezmaxinvoicing_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(ezmaxinvoicing_autocomplete_element_response_local_var, 0, sizeof(ezmaxinvoicing_autocomplete_element_response_t));
    ezmaxinvoicing_autocomplete_element_response_local_var->_library_owned = 1;
    ezmaxinvoicing_autocomplete_element_response_local_var->yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    ezmaxinvoicing_autocomplete_element_response_local_var->pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    ezmaxinvoicing_autocomplete_element_response_local_var->b_ezmaxinvoicing_isactive = b_ezmaxinvoicing_isactive;
    return ezmaxinvoicing_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_create(
    char *yyyymm_ezmaxinvoicing,
    int *pki_ezmaxinvoicing_id,
    int *b_ezmaxinvoicing_isactive
    ) {
    int *pki_ezmaxinvoicing_id_copy = NULL;
    if (pki_ezmaxinvoicing_id) {
        pki_ezmaxinvoicing_id_copy = malloc(sizeof(int));
        if (pki_ezmaxinvoicing_id_copy) *pki_ezmaxinvoicing_id_copy = *pki_ezmaxinvoicing_id;
    }
    int *b_ezmaxinvoicing_isactive_copy = NULL;
    if (b_ezmaxinvoicing_isactive) {
        b_ezmaxinvoicing_isactive_copy = malloc(sizeof(int));
        if (b_ezmaxinvoicing_isactive_copy) *b_ezmaxinvoicing_isactive_copy = *b_ezmaxinvoicing_isactive;
    }
    ezmaxinvoicing_autocomplete_element_response_t *result = ezmaxinvoicing_autocomplete_element_response_create_internal (
        yyyymm_ezmaxinvoicing,
        pki_ezmaxinvoicing_id_copy,
        b_ezmaxinvoicing_isactive_copy
        );
    if (!result) {
        free(pki_ezmaxinvoicing_id_copy);
        free(b_ezmaxinvoicing_isactive_copy);
    }
    return result;
}

void ezmaxinvoicing_autocomplete_element_response_free(ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response) {
    if(NULL == ezmaxinvoicing_autocomplete_element_response){
        return ;
    }
    if(ezmaxinvoicing_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicing_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicing_autocomplete_element_response->yyyymm_ezmaxinvoicing) {
        free(ezmaxinvoicing_autocomplete_element_response->yyyymm_ezmaxinvoicing);
        ezmaxinvoicing_autocomplete_element_response->yyyymm_ezmaxinvoicing = NULL;
    }
    if (ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id) {
        free(ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id);
        ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id = NULL;
    }
    if (ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive) {
        free(ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive);
        ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive = NULL;
    }
    free(ezmaxinvoicing_autocomplete_element_response);
}

cJSON *ezmaxinvoicing_autocomplete_element_response_convertToJSON(ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicing_autocomplete_element_response->yyyymm_ezmaxinvoicing
    if (!ezmaxinvoicing_autocomplete_element_response->yyyymm_ezmaxinvoicing) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "yyyymmEzmaxinvoicing", ezmaxinvoicing_autocomplete_element_response->yyyymm_ezmaxinvoicing) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id
    if (!ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingID", *ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive
    if (!ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingIsactive", *ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_parseFromJSON(cJSON *ezmaxinvoicing_autocomplete_element_responseJSON){

    ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_local_var = NULL;

    char *yyyymm_ezmaxinvoicing_local_str = NULL;

    // define the local variable for ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id
    int *pki_ezmaxinvoicing_id_local_var = NULL;

    // define the local variable for ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive
    int *b_ezmaxinvoicing_isactive_local_var = NULL;

    // ezmaxinvoicing_autocomplete_element_response->yyyymm_ezmaxinvoicing
    cJSON *yyyymm_ezmaxinvoicing = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_autocomplete_element_responseJSON, "yyyymmEzmaxinvoicing");
    if (cJSON_IsNull(yyyymm_ezmaxinvoicing)) {
        yyyymm_ezmaxinvoicing = NULL;
    }
    if (!yyyymm_ezmaxinvoicing) {
        goto end;
    }

    
    if(!cJSON_IsString(yyyymm_ezmaxinvoicing))
    {
    goto end; //String
    }

    // ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id
    cJSON *pki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_autocomplete_element_responseJSON, "pkiEzmaxinvoicingID");
    if (cJSON_IsNull(pki_ezmaxinvoicing_id)) {
        pki_ezmaxinvoicing_id = NULL;
    }
    if (!pki_ezmaxinvoicing_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    pki_ezmaxinvoicing_id_local_var = malloc(sizeof(int));
    if(!pki_ezmaxinvoicing_id_local_var)
    {
        goto end;
    }
    *pki_ezmaxinvoicing_id_local_var = pki_ezmaxinvoicing_id->valuedouble;

    // ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive
    cJSON *b_ezmaxinvoicing_isactive = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_autocomplete_element_responseJSON, "bEzmaxinvoicingIsactive");
    if (cJSON_IsNull(b_ezmaxinvoicing_isactive)) {
        b_ezmaxinvoicing_isactive = NULL;
    }
    if (!b_ezmaxinvoicing_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicing_isactive))
    {
    goto end; //Bool
    }
    b_ezmaxinvoicing_isactive_local_var = malloc(sizeof(int));
    if(!b_ezmaxinvoicing_isactive_local_var)
    {
        goto end;
    }
    *b_ezmaxinvoicing_isactive_local_var = b_ezmaxinvoicing_isactive->valueint;


    if (yyyymm_ezmaxinvoicing && !cJSON_IsNull(yyyymm_ezmaxinvoicing)) yyyymm_ezmaxinvoicing_local_str = strdup(yyyymm_ezmaxinvoicing->valuestring);

    ezmaxinvoicing_autocomplete_element_response_local_var = ezmaxinvoicing_autocomplete_element_response_create_internal (
        yyyymm_ezmaxinvoicing_local_str,
        pki_ezmaxinvoicing_id_local_var,
        b_ezmaxinvoicing_isactive_local_var
        );

    if (!ezmaxinvoicing_autocomplete_element_response_local_var) {
        goto end;
    }

    return ezmaxinvoicing_autocomplete_element_response_local_var;
end:
    if (yyyymm_ezmaxinvoicing_local_str) {
        free(yyyymm_ezmaxinvoicing_local_str);
        yyyymm_ezmaxinvoicing_local_str = NULL;
    }
    if (pki_ezmaxinvoicing_id_local_var) {
        free(pki_ezmaxinvoicing_id_local_var);
        pki_ezmaxinvoicing_id_local_var = NULL;
    }
    if (b_ezmaxinvoicing_isactive_local_var) {
        free(b_ezmaxinvoicing_isactive_local_var);
        b_ezmaxinvoicing_isactive_local_var = NULL;
    }
    return NULL;

}
