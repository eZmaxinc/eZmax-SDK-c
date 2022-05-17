#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_response_compound.h"



ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatedocument_name,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplatedocument_signaturetotal
    ) {
    ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound_local_var = malloc(sizeof(ezsigntemplatedocument_response_compound_t));
    if (!ezsigntemplatedocument_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_response_compound_local_var->pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    ezsigntemplatedocument_response_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatedocument_response_compound_local_var->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    ezsigntemplatedocument_response_compound_local_var->i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    ezsigntemplatedocument_response_compound_local_var->i_ezsigntemplatedocument_signaturetotal = i_ezsigntemplatedocument_signaturetotal;

    return ezsigntemplatedocument_response_compound_local_var;
}


void ezsigntemplatedocument_response_compound_free(ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound) {
    if(NULL == ezsigntemplatedocument_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_response_compound->s_ezsigntemplatedocument_name) {
        free(ezsigntemplatedocument_response_compound->s_ezsigntemplatedocument_name);
        ezsigntemplatedocument_response_compound->s_ezsigntemplatedocument_name = NULL;
    }
    free(ezsigntemplatedocument_response_compound);
}

cJSON *ezsigntemplatedocument_response_compound_convertToJSON(ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_response_compound->pki_ezsigntemplatedocument_id
    if (!ezsigntemplatedocument_response_compound->pki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentID", ezsigntemplatedocument_response_compound->pki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_response_compound->fki_ezsigntemplate_id
    if (!ezsigntemplatedocument_response_compound->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatedocument_response_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_response_compound->s_ezsigntemplatedocument_name
    if (!ezsigntemplatedocument_response_compound->s_ezsigntemplatedocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentName", ezsigntemplatedocument_response_compound->s_ezsigntemplatedocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_pagetotal
    if (!ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_pagetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentPagetotal", ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_signaturetotal
    if (!ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentSignaturetotal", ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_signaturetotal) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound_parseFromJSON(cJSON *ezsigntemplatedocument_response_compoundJSON){

    ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound_local_var = NULL;

    // ezsigntemplatedocument_response_compound->pki_ezsigntemplatedocument_id
    cJSON *pki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_response_compoundJSON, "pkiEzsigntemplatedocumentID");
    if (!pki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_response_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_response_compoundJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_response_compound->s_ezsigntemplatedocument_name
    cJSON *s_ezsigntemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_response_compoundJSON, "sEzsigntemplatedocumentName");
    if (!s_ezsigntemplatedocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatedocument_name))
    {
    goto end; //String
    }

    // ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_pagetotal
    cJSON *i_ezsigntemplatedocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_response_compoundJSON, "iEzsigntemplatedocumentPagetotal");
    if (!i_ezsigntemplatedocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_pagetotal))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_response_compound->i_ezsigntemplatedocument_signaturetotal
    cJSON *i_ezsigntemplatedocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_response_compoundJSON, "iEzsigntemplatedocumentSignaturetotal");
    if (!i_ezsigntemplatedocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_signaturetotal))
    {
    goto end; //Numeric
    }


    ezsigntemplatedocument_response_compound_local_var = ezsigntemplatedocument_response_compound_create (
        pki_ezsigntemplatedocument_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        strdup(s_ezsigntemplatedocument_name->valuestring),
        i_ezsigntemplatedocument_pagetotal->valuedouble,
        i_ezsigntemplatedocument_signaturetotal->valuedouble
        );

    return ezsigntemplatedocument_response_compound_local_var;
end:
    return NULL;

}
