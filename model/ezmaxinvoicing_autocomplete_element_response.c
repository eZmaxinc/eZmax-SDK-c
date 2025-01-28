#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_autocomplete_element_response.h"



static ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_create_internal(
    char *yyyymm_ezmaxinvoicing,
    int pki_ezmaxinvoicing_id,
    int b_ezmaxinvoicing_isactive
    ) {
    ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_local_var = malloc(sizeof(ezmaxinvoicing_autocomplete_element_response_t));
    if (!ezmaxinvoicing_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezmaxinvoicing_autocomplete_element_response_local_var->yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    ezmaxinvoicing_autocomplete_element_response_local_var->pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    ezmaxinvoicing_autocomplete_element_response_local_var->b_ezmaxinvoicing_isactive = b_ezmaxinvoicing_isactive;

    ezmaxinvoicing_autocomplete_element_response_local_var->_library_owned = 1;
    return ezmaxinvoicing_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicing_autocomplete_element_response_t *ezmaxinvoicing_autocomplete_element_response_create(
    char *yyyymm_ezmaxinvoicing,
    int pki_ezmaxinvoicing_id,
    int b_ezmaxinvoicing_isactive
    ) {
    return ezmaxinvoicing_autocomplete_element_response_create_internal (
        yyyymm_ezmaxinvoicing,
        pki_ezmaxinvoicing_id,
        b_ezmaxinvoicing_isactive
        );
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
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingID", ezmaxinvoicing_autocomplete_element_response->pki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive
    if (!ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingIsactive", ezmaxinvoicing_autocomplete_element_response->b_ezmaxinvoicing_isactive) == NULL) {
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


    ezmaxinvoicing_autocomplete_element_response_local_var = ezmaxinvoicing_autocomplete_element_response_create_internal (
        strdup(yyyymm_ezmaxinvoicing->valuestring),
        pki_ezmaxinvoicing_id->valuedouble,
        b_ezmaxinvoicing_isactive->valueint
        );

    return ezmaxinvoicing_autocomplete_element_response_local_var;
end:
    return NULL;

}
