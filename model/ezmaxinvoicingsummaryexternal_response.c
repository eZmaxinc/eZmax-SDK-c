#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryexternal_response.h"



static ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response_create_internal(
    int pki_ezmaxinvoicingsummaryexternal_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *s_ezmaxinvoicingsummaryexternal_description
    ) {
    ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response_local_var = malloc(sizeof(ezmaxinvoicingsummaryexternal_response_t));
    if (!ezmaxinvoicingsummaryexternal_response_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryexternal_response_local_var->pki_ezmaxinvoicingsummaryexternal_id = pki_ezmaxinvoicingsummaryexternal_id;
    ezmaxinvoicingsummaryexternal_response_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingsummaryexternal_response_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;
    ezmaxinvoicingsummaryexternal_response_local_var->s_billingentityexternal_description = s_billingentityexternal_description;
    ezmaxinvoicingsummaryexternal_response_local_var->s_ezmaxinvoicingsummaryexternal_description = s_ezmaxinvoicingsummaryexternal_description;

    ezmaxinvoicingsummaryexternal_response_local_var->_library_owned = 1;
    return ezmaxinvoicingsummaryexternal_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response_create(
    int pki_ezmaxinvoicingsummaryexternal_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *s_ezmaxinvoicingsummaryexternal_description
    ) {
    return ezmaxinvoicingsummaryexternal_response_create_internal (
        pki_ezmaxinvoicingsummaryexternal_id,
        fki_ezmaxinvoicing_id,
        fki_billingentityexternal_id,
        s_billingentityexternal_description,
        s_ezmaxinvoicingsummaryexternal_description
        );
}

void ezmaxinvoicingsummaryexternal_response_free(ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response) {
    if(NULL == ezmaxinvoicingsummaryexternal_response){
        return ;
    }
    if(ezmaxinvoicingsummaryexternal_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingsummaryexternal_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryexternal_response->s_billingentityexternal_description) {
        free(ezmaxinvoicingsummaryexternal_response->s_billingentityexternal_description);
        ezmaxinvoicingsummaryexternal_response->s_billingentityexternal_description = NULL;
    }
    if (ezmaxinvoicingsummaryexternal_response->s_ezmaxinvoicingsummaryexternal_description) {
        free(ezmaxinvoicingsummaryexternal_response->s_ezmaxinvoicingsummaryexternal_description);
        ezmaxinvoicingsummaryexternal_response->s_ezmaxinvoicingsummaryexternal_description = NULL;
    }
    free(ezmaxinvoicingsummaryexternal_response);
}

cJSON *ezmaxinvoicingsummaryexternal_response_convertToJSON(ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryexternal_response->pki_ezmaxinvoicingsummaryexternal_id
    if(ezmaxinvoicingsummaryexternal_response->pki_ezmaxinvoicingsummaryexternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryexternalID", ezmaxinvoicingsummaryexternal_response->pki_ezmaxinvoicingsummaryexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternal_response->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingsummaryexternal_response->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingsummaryexternal_response->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternal_response->fki_billingentityexternal_id
    if (!ezmaxinvoicingsummaryexternal_response->fki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", ezmaxinvoicingsummaryexternal_response->fki_billingentityexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryexternal_response->s_billingentityexternal_description
    if (!ezmaxinvoicingsummaryexternal_response->s_billingentityexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityexternalDescription", ezmaxinvoicingsummaryexternal_response->s_billingentityexternal_description) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternal_response->s_ezmaxinvoicingsummaryexternal_description
    if (!ezmaxinvoicingsummaryexternal_response->s_ezmaxinvoicingsummaryexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxinvoicingsummaryexternalDescription", ezmaxinvoicingsummaryexternal_response->s_ezmaxinvoicingsummaryexternal_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternal_responseJSON){

    ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response_local_var = NULL;

    // ezmaxinvoicingsummaryexternal_response->pki_ezmaxinvoicingsummaryexternal_id
    cJSON *pki_ezmaxinvoicingsummaryexternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_responseJSON, "pkiEzmaxinvoicingsummaryexternalID");
    if (cJSON_IsNull(pki_ezmaxinvoicingsummaryexternal_id)) {
        pki_ezmaxinvoicingsummaryexternal_id = NULL;
    }
    if (pki_ezmaxinvoicingsummaryexternal_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryexternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryexternal_response->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_responseJSON, "fkiEzmaxinvoicingID");
    if (cJSON_IsNull(fki_ezmaxinvoicing_id)) {
        fki_ezmaxinvoicing_id = NULL;
    }
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryexternal_response->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_responseJSON, "fkiBillingentityexternalID");
    if (cJSON_IsNull(fki_billingentityexternal_id)) {
        fki_billingentityexternal_id = NULL;
    }
    if (!fki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityexternal_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryexternal_response->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_responseJSON, "sBillingentityexternalDescription");
    if (cJSON_IsNull(s_billingentityexternal_description)) {
        s_billingentityexternal_description = NULL;
    }
    if (!s_billingentityexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityexternal_description))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternal_response->s_ezmaxinvoicingsummaryexternal_description
    cJSON *s_ezmaxinvoicingsummaryexternal_description = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_responseJSON, "sEzmaxinvoicingsummaryexternalDescription");
    if (cJSON_IsNull(s_ezmaxinvoicingsummaryexternal_description)) {
        s_ezmaxinvoicingsummaryexternal_description = NULL;
    }
    if (!s_ezmaxinvoicingsummaryexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxinvoicingsummaryexternal_description))
    {
    goto end; //String
    }


    ezmaxinvoicingsummaryexternal_response_local_var = ezmaxinvoicingsummaryexternal_response_create_internal (
        pki_ezmaxinvoicingsummaryexternal_id ? pki_ezmaxinvoicingsummaryexternal_id->valuedouble : 0,
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_billingentityexternal_id->valuedouble,
        strdup(s_billingentityexternal_description->valuestring),
        strdup(s_ezmaxinvoicingsummaryexternal_description->valuestring)
        );

    return ezmaxinvoicingsummaryexternal_response_local_var;
end:
    return NULL;

}
