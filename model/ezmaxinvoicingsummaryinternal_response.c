#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryinternal_response.h"



ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response_create(
    int pki_ezmaxinvoicingsummaryinternal_id,
    multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description,
    char *s_ezmaxinvoicingsummaryinternal_description_x,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x
    ) {
    ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response_local_var = malloc(sizeof(ezmaxinvoicingsummaryinternal_response_t));
    if (!ezmaxinvoicingsummaryinternal_response_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryinternal_response_local_var->pki_ezmaxinvoicingsummaryinternal_id = pki_ezmaxinvoicingsummaryinternal_id;
    ezmaxinvoicingsummaryinternal_response_local_var->obj_ezmaxinvoicingsummaryinternal_description = obj_ezmaxinvoicingsummaryinternal_description;
    ezmaxinvoicingsummaryinternal_response_local_var->s_ezmaxinvoicingsummaryinternal_description_x = s_ezmaxinvoicingsummaryinternal_description_x;
    ezmaxinvoicingsummaryinternal_response_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingsummaryinternal_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezmaxinvoicingsummaryinternal_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;

    return ezmaxinvoicingsummaryinternal_response_local_var;
}


void ezmaxinvoicingsummaryinternal_response_free(ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response) {
    if(NULL == ezmaxinvoicingsummaryinternal_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description) {
        multilingual_ezmaxinvoicingsummaryinternal_description_free(ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description);
        ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description = NULL;
    }
    if (ezmaxinvoicingsummaryinternal_response->s_ezmaxinvoicingsummaryinternal_description_x) {
        free(ezmaxinvoicingsummaryinternal_response->s_ezmaxinvoicingsummaryinternal_description_x);
        ezmaxinvoicingsummaryinternal_response->s_ezmaxinvoicingsummaryinternal_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryinternal_response->s_billingentityinternal_description_x) {
        free(ezmaxinvoicingsummaryinternal_response->s_billingentityinternal_description_x);
        ezmaxinvoicingsummaryinternal_response->s_billingentityinternal_description_x = NULL;
    }
    free(ezmaxinvoicingsummaryinternal_response);
}

cJSON *ezmaxinvoicingsummaryinternal_response_convertToJSON(ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryinternal_response->pki_ezmaxinvoicingsummaryinternal_id
    if(ezmaxinvoicingsummaryinternal_response->pki_ezmaxinvoicingsummaryinternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryinternalID", ezmaxinvoicingsummaryinternal_response->pki_ezmaxinvoicingsummaryinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description
    if (!ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description) {
        goto fail;
    }
    cJSON *obj_ezmaxinvoicingsummaryinternal_description_local_JSON = multilingual_ezmaxinvoicingsummaryinternal_description_convertToJSON(ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description);
    if(obj_ezmaxinvoicingsummaryinternal_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxinvoicingsummaryinternalDescription", obj_ezmaxinvoicingsummaryinternal_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxinvoicingsummaryinternal_response->s_ezmaxinvoicingsummaryinternal_description_x
    if (!ezmaxinvoicingsummaryinternal_response->s_ezmaxinvoicingsummaryinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxinvoicingsummaryinternalDescriptionX", ezmaxinvoicingsummaryinternal_response->s_ezmaxinvoicingsummaryinternal_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternal_response->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingsummaryinternal_response->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingsummaryinternal_response->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryinternal_response->fki_billingentityinternal_id
    if (!ezmaxinvoicingsummaryinternal_response->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezmaxinvoicingsummaryinternal_response->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryinternal_response->s_billingentityinternal_description_x
    if (!ezmaxinvoicingsummaryinternal_response->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezmaxinvoicingsummaryinternal_response->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternal_responseJSON){

    ezmaxinvoicingsummaryinternal_response_t *ezmaxinvoicingsummaryinternal_response_local_var = NULL;

    // define the local variable for ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description
    multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description_local_nonprim = NULL;

    // ezmaxinvoicingsummaryinternal_response->pki_ezmaxinvoicingsummaryinternal_id
    cJSON *pki_ezmaxinvoicingsummaryinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_responseJSON, "pkiEzmaxinvoicingsummaryinternalID");
    if (pki_ezmaxinvoicingsummaryinternal_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryinternal_response->obj_ezmaxinvoicingsummaryinternal_description
    cJSON *obj_ezmaxinvoicingsummaryinternal_description = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_responseJSON, "objEzmaxinvoicingsummaryinternalDescription");
    if (!obj_ezmaxinvoicingsummaryinternal_description) {
        goto end;
    }

    
    obj_ezmaxinvoicingsummaryinternal_description_local_nonprim = multilingual_ezmaxinvoicingsummaryinternal_description_parseFromJSON(obj_ezmaxinvoicingsummaryinternal_description); //nonprimitive

    // ezmaxinvoicingsummaryinternal_response->s_ezmaxinvoicingsummaryinternal_description_x
    cJSON *s_ezmaxinvoicingsummaryinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_responseJSON, "sEzmaxinvoicingsummaryinternalDescriptionX");
    if (!s_ezmaxinvoicingsummaryinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxinvoicingsummaryinternal_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternal_response->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_responseJSON, "fkiEzmaxinvoicingID");
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryinternal_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_responseJSON, "fkiBillingentityinternalID");
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryinternal_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_responseJSON, "sBillingentityinternalDescriptionX");
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }


    ezmaxinvoicingsummaryinternal_response_local_var = ezmaxinvoicingsummaryinternal_response_create (
        pki_ezmaxinvoicingsummaryinternal_id ? pki_ezmaxinvoicingsummaryinternal_id->valuedouble : 0,
        obj_ezmaxinvoicingsummaryinternal_description_local_nonprim,
        strdup(s_ezmaxinvoicingsummaryinternal_description_x->valuestring),
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring)
        );

    return ezmaxinvoicingsummaryinternal_response_local_var;
end:
    if (obj_ezmaxinvoicingsummaryinternal_description_local_nonprim) {
        multilingual_ezmaxinvoicingsummaryinternal_description_free(obj_ezmaxinvoicingsummaryinternal_description_local_nonprim);
        obj_ezmaxinvoicingsummaryinternal_description_local_nonprim = NULL;
    }
    return NULL;

}
