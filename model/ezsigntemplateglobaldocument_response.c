#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobaldocument_response.h"



static ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_create_internal(
    int *pki_ezsigntemplateglobaldocument_id,
    char *s_ezsigntemplateglobaldocument_name,
    ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__e e_ezsigntemplateglobaldocument_acceptationtype,
    int *i_ezsigntemplateglobaldocument_pagetotal,
    int *i_ezsigntemplateglobaldocument_signaturetotal
    ) {
    ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_local_var = malloc(sizeof(ezsigntemplateglobaldocument_response_t));
    if (!ezsigntemplateglobaldocument_response_local_var) {
        return NULL;
    }
    memset(ezsigntemplateglobaldocument_response_local_var, 0, sizeof(ezsigntemplateglobaldocument_response_t));
    ezsigntemplateglobaldocument_response_local_var->_library_owned = 1;
    ezsigntemplateglobaldocument_response_local_var->pki_ezsigntemplateglobaldocument_id = pki_ezsigntemplateglobaldocument_id;
    ezsigntemplateglobaldocument_response_local_var->s_ezsigntemplateglobaldocument_name = s_ezsigntemplateglobaldocument_name;
    ezsigntemplateglobaldocument_response_local_var->e_ezsigntemplateglobaldocument_acceptationtype = e_ezsigntemplateglobaldocument_acceptationtype;
    ezsigntemplateglobaldocument_response_local_var->i_ezsigntemplateglobaldocument_pagetotal = i_ezsigntemplateglobaldocument_pagetotal;
    ezsigntemplateglobaldocument_response_local_var->i_ezsigntemplateglobaldocument_signaturetotal = i_ezsigntemplateglobaldocument_signaturetotal;
    return ezsigntemplateglobaldocument_response_local_var;
}

__attribute__((deprecated)) ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_create(
    int *pki_ezsigntemplateglobaldocument_id,
    char *s_ezsigntemplateglobaldocument_name,
    ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__e e_ezsigntemplateglobaldocument_acceptationtype,
    int *i_ezsigntemplateglobaldocument_pagetotal,
    int *i_ezsigntemplateglobaldocument_signaturetotal
    ) {
    int *pki_ezsigntemplateglobaldocument_id_copy = NULL;
    if (pki_ezsigntemplateglobaldocument_id) {
        pki_ezsigntemplateglobaldocument_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateglobaldocument_id_copy) *pki_ezsigntemplateglobaldocument_id_copy = *pki_ezsigntemplateglobaldocument_id;
    }
    int *i_ezsigntemplateglobaldocument_pagetotal_copy = NULL;
    if (i_ezsigntemplateglobaldocument_pagetotal) {
        i_ezsigntemplateglobaldocument_pagetotal_copy = malloc(sizeof(int));
        if (i_ezsigntemplateglobaldocument_pagetotal_copy) *i_ezsigntemplateglobaldocument_pagetotal_copy = *i_ezsigntemplateglobaldocument_pagetotal;
    }
    int *i_ezsigntemplateglobaldocument_signaturetotal_copy = NULL;
    if (i_ezsigntemplateglobaldocument_signaturetotal) {
        i_ezsigntemplateglobaldocument_signaturetotal_copy = malloc(sizeof(int));
        if (i_ezsigntemplateglobaldocument_signaturetotal_copy) *i_ezsigntemplateglobaldocument_signaturetotal_copy = *i_ezsigntemplateglobaldocument_signaturetotal;
    }
    ezsigntemplateglobaldocument_response_t *result = ezsigntemplateglobaldocument_response_create_internal (
        pki_ezsigntemplateglobaldocument_id_copy,
        s_ezsigntemplateglobaldocument_name,
        e_ezsigntemplateglobaldocument_acceptationtype,
        i_ezsigntemplateglobaldocument_pagetotal_copy,
        i_ezsigntemplateglobaldocument_signaturetotal_copy
        );
    if (!result) {
        free(pki_ezsigntemplateglobaldocument_id_copy);
        free(i_ezsigntemplateglobaldocument_pagetotal_copy);
        free(i_ezsigntemplateglobaldocument_signaturetotal_copy);
    }
    return result;
}

void ezsigntemplateglobaldocument_response_free(ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response) {
    if(NULL == ezsigntemplateglobaldocument_response){
        return ;
    }
    if(ezsigntemplateglobaldocument_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateglobaldocument_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id) {
        free(ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id);
        ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id = NULL;
    }
    if (ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name) {
        free(ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name);
        ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name = NULL;
    }
    if (ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal) {
        free(ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal);
        ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal = NULL;
    }
    if (ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal) {
        free(ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal);
        ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal = NULL;
    }
    free(ezsigntemplateglobaldocument_response);
}

cJSON *ezsigntemplateglobaldocument_response_convertToJSON(ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id
    if (!ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobaldocumentID", *ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name
    if (!ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobaldocumentName", ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobaldocument_response->e_ezsigntemplateglobaldocument_acceptationtype
    if (ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__NULL == ezsigntemplateglobaldocument_response->e_ezsigntemplateglobaldocument_acceptationtype) {
        goto fail;
    }
    cJSON *e_ezsigntemplateglobaldocument_acceptationtype_local_JSON = field_e_ezsigntemplateglobaldocument_acceptationtype_convertToJSON(ezsigntemplateglobaldocument_response->e_ezsigntemplateglobaldocument_acceptationtype);
    if(e_ezsigntemplateglobaldocument_acceptationtype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateglobaldocumentAcceptationtype", e_ezsigntemplateglobaldocument_acceptationtype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal
    if (!ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobaldocumentPagetotal", *ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal
    if (!ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateglobaldocumentSignaturetotal", *ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal) == NULL) {
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

    // define the local variable for ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id
    int *pki_ezsigntemplateglobaldocument_id_local_var = NULL;

    char *s_ezsigntemplateglobaldocument_name_local_str = NULL;

    // define the local variable for ezsigntemplateglobaldocument_response->e_ezsigntemplateglobaldocument_acceptationtype
    ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__e e_ezsigntemplateglobaldocument_acceptationtype_local_nonprim = 0;

    // define the local variable for ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal
    int *i_ezsigntemplateglobaldocument_pagetotal_local_var = NULL;

    // define the local variable for ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal
    int *i_ezsigntemplateglobaldocument_signaturetotal_local_var = NULL;

    // ezsigntemplateglobaldocument_response->pki_ezsigntemplateglobaldocument_id
    cJSON *pki_ezsigntemplateglobaldocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "pkiEzsigntemplateglobaldocumentID");
    if (cJSON_IsNull(pki_ezsigntemplateglobaldocument_id)) {
        pki_ezsigntemplateglobaldocument_id = NULL;
    }
    if (!pki_ezsigntemplateglobaldocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobaldocument_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateglobaldocument_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateglobaldocument_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateglobaldocument_id_local_var = pki_ezsigntemplateglobaldocument_id->valuedouble;

    // ezsigntemplateglobaldocument_response->s_ezsigntemplateglobaldocument_name
    cJSON *s_ezsigntemplateglobaldocument_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "sEzsigntemplateglobaldocumentName");
    if (cJSON_IsNull(s_ezsigntemplateglobaldocument_name)) {
        s_ezsigntemplateglobaldocument_name = NULL;
    }
    if (!s_ezsigntemplateglobaldocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobaldocument_name))
    {
    goto end; //String
    }

    // ezsigntemplateglobaldocument_response->e_ezsigntemplateglobaldocument_acceptationtype
    cJSON *e_ezsigntemplateglobaldocument_acceptationtype = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "eEzsigntemplateglobaldocumentAcceptationtype");
    if (cJSON_IsNull(e_ezsigntemplateglobaldocument_acceptationtype)) {
        e_ezsigntemplateglobaldocument_acceptationtype = NULL;
    }
    if (!e_ezsigntemplateglobaldocument_acceptationtype) {
        goto end;
    }

    
    e_ezsigntemplateglobaldocument_acceptationtype_local_nonprim = field_e_ezsigntemplateglobaldocument_acceptationtype_parseFromJSON(e_ezsigntemplateglobaldocument_acceptationtype); //custom

    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_pagetotal
    cJSON *i_ezsigntemplateglobaldocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "iEzsigntemplateglobaldocumentPagetotal");
    if (cJSON_IsNull(i_ezsigntemplateglobaldocument_pagetotal)) {
        i_ezsigntemplateglobaldocument_pagetotal = NULL;
    }
    if (!i_ezsigntemplateglobaldocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobaldocument_pagetotal))
    {
    goto end; //Numeric
    }
    i_ezsigntemplateglobaldocument_pagetotal_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateglobaldocument_pagetotal_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateglobaldocument_pagetotal_local_var = i_ezsigntemplateglobaldocument_pagetotal->valuedouble;

    // ezsigntemplateglobaldocument_response->i_ezsigntemplateglobaldocument_signaturetotal
    cJSON *i_ezsigntemplateglobaldocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobaldocument_responseJSON, "iEzsigntemplateglobaldocumentSignaturetotal");
    if (cJSON_IsNull(i_ezsigntemplateglobaldocument_signaturetotal)) {
        i_ezsigntemplateglobaldocument_signaturetotal = NULL;
    }
    if (!i_ezsigntemplateglobaldocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateglobaldocument_signaturetotal))
    {
    goto end; //Numeric
    }
    i_ezsigntemplateglobaldocument_signaturetotal_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateglobaldocument_signaturetotal_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateglobaldocument_signaturetotal_local_var = i_ezsigntemplateglobaldocument_signaturetotal->valuedouble;


    if (s_ezsigntemplateglobaldocument_name && !cJSON_IsNull(s_ezsigntemplateglobaldocument_name)) s_ezsigntemplateglobaldocument_name_local_str = strdup(s_ezsigntemplateglobaldocument_name->valuestring);

    ezsigntemplateglobaldocument_response_local_var = ezsigntemplateglobaldocument_response_create_internal (
        pki_ezsigntemplateglobaldocument_id_local_var,
        s_ezsigntemplateglobaldocument_name_local_str,
        e_ezsigntemplateglobaldocument_acceptationtype_local_nonprim,
        i_ezsigntemplateglobaldocument_pagetotal_local_var,
        i_ezsigntemplateglobaldocument_signaturetotal_local_var
        );

    if (!ezsigntemplateglobaldocument_response_local_var) {
        goto end;
    }

    return ezsigntemplateglobaldocument_response_local_var;
end:
    if (pki_ezsigntemplateglobaldocument_id_local_var) {
        free(pki_ezsigntemplateglobaldocument_id_local_var);
        pki_ezsigntemplateglobaldocument_id_local_var = NULL;
    }
    if (s_ezsigntemplateglobaldocument_name_local_str) {
        free(s_ezsigntemplateglobaldocument_name_local_str);
        s_ezsigntemplateglobaldocument_name_local_str = NULL;
    }
    if (e_ezsigntemplateglobaldocument_acceptationtype_local_nonprim) {
        e_ezsigntemplateglobaldocument_acceptationtype_local_nonprim = 0;
    }
    if (i_ezsigntemplateglobaldocument_pagetotal_local_var) {
        free(i_ezsigntemplateglobaldocument_pagetotal_local_var);
        i_ezsigntemplateglobaldocument_pagetotal_local_var = NULL;
    }
    if (i_ezsigntemplateglobaldocument_signaturetotal_local_var) {
        free(i_ezsigntemplateglobaldocument_signaturetotal_local_var);
        i_ezsigntemplateglobaldocument_signaturetotal_local_var = NULL;
    }
    return NULL;

}
