#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobaldocument_response.h"



ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_create(
    int pki_ezsigntemplateglobaldocument_id,
    char *s_ezsigntemplateglobaldocument_name,
    int i_ezsigntemplateglobaldocument_pagetotal,
    int i_ezsigntemplateglobaldocument_signaturetotal
    ) {
    ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_local_var = malloc(sizeof(ezsigntemplateglobaldocument_response_t));
    if (!ezsigntemplateglobaldocument_response_local_var) {
        return NULL;
    }
    ezsigntemplateglobaldocument_response_local_var->pki_ezsigntemplateglobaldocument_id = pki_ezsigntemplateglobaldocument_id;
    ezsigntemplateglobaldocument_response_local_var->s_ezsigntemplateglobaldocument_name = s_ezsigntemplateglobaldocument_name;
    ezsigntemplateglobaldocument_response_local_var->i_ezsigntemplateglobaldocument_pagetotal = i_ezsigntemplateglobaldocument_pagetotal;
    ezsigntemplateglobaldocument_response_local_var->i_ezsigntemplateglobaldocument_signaturetotal = i_ezsigntemplateglobaldocument_signaturetotal;

    return ezsigntemplateglobaldocument_response_local_var;
}


void ezsigntemplateglobaldocument_response_free(ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response) {
    if(NULL == ezsigntemplateglobaldocument_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name) {
        free(ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name);
        ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name = NULL;
    }
    free(ezsigntemplateglobaldocument_response);
}

cJSON *ezsigntemplateglobaldocument_response_convertToJSON(ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id
    if (!ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobaldocumentID", ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name
    if (!ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobaldocumentName", ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal
    if (!ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobaldocumentPagetotal", ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal
    if (!ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobaldocumentSignaturetotal", ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_parseFromJSON(cJSON *ezsigntemplateglobaldocument_responseJSON){

    ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_local_var = NULL;

    // ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id
    cJSON *pki_ezsigntemplateglobaldocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "pkiEzsigntemplateglobaldocumentID");
    if (!pki_ezsigntemplateglobaldocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobaldocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name
    cJSON *s_ezsigntemplateglobaldocument_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "sEzsigntemplateglobaldocumentName");
    if (!s_ezsigntemplateglobaldocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobaldocument_name))
    {
    goto end; //String
    }

    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal
    cJSON *i_ezsigntemplateglobaldocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "iEzsigntemplateglobaldocumentPagetotal");
    if (!i_ezsigntemplateglobaldocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobaldocument_pagetotal))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal
    cJSON *i_ezsigntemplateglobaldocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "iEzsigntemplateglobaldocumentSignaturetotal");
    if (!i_ezsigntemplateglobaldocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobaldocument_signaturetotal))
    {
    goto end; //Numeric
    }


    ezsigntemplateglobaldocument_response_local_var = ezsigntemplateglobaldocument_response_create (
        pki_ezsigntemplateglobaldocument_id->valuedouble,
        strdup(s_ezsigntemplateglobaldocument_name->valuestring),
        i_ezsigntemplateglobaldocument_pagetotal->valuedouble,
        i_ezsigntemplateglobaldocument_signaturetotal->valuedouble
        );

    return ezsigntemplateglobaldocument_response_local_var;
end:
    return NULL;

}
