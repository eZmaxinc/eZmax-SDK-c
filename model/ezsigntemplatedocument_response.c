#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_response.h"



ezsigntemplatedocument_response_t *ezsigntemplatedocument_response_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatedocument_name,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplatedocument_signaturetotal,
    int b_ezsigntemplatedocument_hassignedsignatures
    ) {
    ezsigntemplatedocument_response_t *ezsigntemplatedocument_response_local_var = malloc(sizeof(ezsigntemplatedocument_response_t));
    if (!ezsigntemplatedocument_response_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_response_local_var->pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    ezsigntemplatedocument_response_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatedocument_response_local_var->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    ezsigntemplatedocument_response_local_var->i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    ezsigntemplatedocument_response_local_var->i_ezsigntemplatedocument_signaturetotal = i_ezsigntemplatedocument_signaturetotal;
    ezsigntemplatedocument_response_local_var->b_ezsigntemplatedocument_hassignedsignatures = b_ezsigntemplatedocument_hassignedsignatures;

    return ezsigntemplatedocument_response_local_var;
}


void ezsigntemplatedocument_response_free(ezsigntemplatedocument_response_t *ezsigntemplatedocument_response) {
    if(NULL == ezsigntemplatedocument_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_response->s_ezsigntemplatedocument_name) {
        free(ezsigntemplatedocument_response->s_ezsigntemplatedocument_name);
        ezsigntemplatedocument_response->s_ezsigntemplatedocument_name = NULL;
    }
    free(ezsigntemplatedocument_response);
}

cJSON *ezsigntemplatedocument_response_convertToJSON(ezsigntemplatedocument_response_t *ezsigntemplatedocument_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_response->pki_ezsigntemplatedocument_id
    if (!ezsigntemplatedocument_response->pki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentID", ezsigntemplatedocument_response->pki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_response->fki_ezsigntemplate_id
    if (!ezsigntemplatedocument_response->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatedocument_response->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_response->s_ezsigntemplatedocument_name
    if (!ezsigntemplatedocument_response->s_ezsigntemplatedocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentName", ezsigntemplatedocument_response->s_ezsigntemplatedocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatedocument_response->i_ezsigntemplatedocument_pagetotal
    if (!ezsigntemplatedocument_response->i_ezsigntemplatedocument_pagetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentPagetotal", ezsigntemplatedocument_response->i_ezsigntemplatedocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_response->i_ezsigntemplatedocument_signaturetotal
    if (!ezsigntemplatedocument_response->i_ezsigntemplatedocument_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentSignaturetotal", ezsigntemplatedocument_response->i_ezsigntemplatedocument_signaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_response->b_ezsigntemplatedocument_hassignedsignatures
    if (!ezsigntemplatedocument_response->b_ezsigntemplatedocument_hassignedsignatures) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatedocumentHassignedsignatures", ezsigntemplatedocument_response->b_ezsigntemplatedocument_hassignedsignatures) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_response_t *ezsigntemplatedocument_response_parseFromJSON(cJSON *ezsigntemplatedocument_responseJSON){

    ezsigntemplatedocument_response_t *ezsigntemplatedocument_response_local_var = NULL;

    // ezsigntemplatedocument_response->pki_ezsigntemplatedocument_id
    cJSON *pki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_responseJSON, "pkiEzsigntemplatedocumentID");
    if (!pki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_response->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_responseJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_response->s_ezsigntemplatedocument_name
    cJSON *s_ezsigntemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_responseJSON, "sEzsigntemplatedocumentName");
    if (!s_ezsigntemplatedocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatedocument_name))
    {
    goto end; //String
    }

    // ezsigntemplatedocument_response->i_ezsigntemplatedocument_pagetotal
    cJSON *i_ezsigntemplatedocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_responseJSON, "iEzsigntemplatedocumentPagetotal");
    if (!i_ezsigntemplatedocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_pagetotal))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_response->i_ezsigntemplatedocument_signaturetotal
    cJSON *i_ezsigntemplatedocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_responseJSON, "iEzsigntemplatedocumentSignaturetotal");
    if (!i_ezsigntemplatedocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_signaturetotal))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_response->b_ezsigntemplatedocument_hassignedsignatures
    cJSON *b_ezsigntemplatedocument_hassignedsignatures = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_responseJSON, "bEzsigntemplatedocumentHassignedsignatures");
    if (!b_ezsigntemplatedocument_hassignedsignatures) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatedocument_hassignedsignatures))
    {
    goto end; //Bool
    }


    ezsigntemplatedocument_response_local_var = ezsigntemplatedocument_response_create (
        pki_ezsigntemplatedocument_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        strdup(s_ezsigntemplatedocument_name->valuestring),
        i_ezsigntemplatedocument_pagetotal->valuedouble,
        i_ezsigntemplatedocument_signaturetotal->valuedouble,
        b_ezsigntemplatedocument_hassignedsignatures->valueint
        );

    return ezsigntemplatedocument_response_local_var;
end:
    return NULL;

}
