#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_response.h"



static ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_create_internal(
    int *pki_ezsignbulksendsignermapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_user_id,
    int *b_ezsignbulksendsignermapping_receivecopy,
    char *s_ezsignbulksendsignermapping_description
    ) {
    ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_local_var = malloc(sizeof(ezsignbulksendsignermapping_response_t));
    if (!ezsignbulksendsignermapping_response_local_var) {
        return NULL;
    }
    memset(ezsignbulksendsignermapping_response_local_var, 0, sizeof(ezsignbulksendsignermapping_response_t));
    ezsignbulksendsignermapping_response_local_var->_library_owned = 1;
    ezsignbulksendsignermapping_response_local_var->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    ezsignbulksendsignermapping_response_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendsignermapping_response_local_var->fki_user_id = fki_user_id;
    ezsignbulksendsignermapping_response_local_var->b_ezsignbulksendsignermapping_receivecopy = b_ezsignbulksendsignermapping_receivecopy;
    ezsignbulksendsignermapping_response_local_var->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;
    return ezsignbulksendsignermapping_response_local_var;
}

__attribute__((deprecated)) ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_create(
    int *pki_ezsignbulksendsignermapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_user_id,
    int *b_ezsignbulksendsignermapping_receivecopy,
    char *s_ezsignbulksendsignermapping_description
    ) {
    int *pki_ezsignbulksendsignermapping_id_copy = NULL;
    if (pki_ezsignbulksendsignermapping_id) {
        pki_ezsignbulksendsignermapping_id_copy = malloc(sizeof(int));
        if (pki_ezsignbulksendsignermapping_id_copy) *pki_ezsignbulksendsignermapping_id_copy = *pki_ezsignbulksendsignermapping_id;
    }
    int *fki_ezsignbulksend_id_copy = NULL;
    if (fki_ezsignbulksend_id) {
        fki_ezsignbulksend_id_copy = malloc(sizeof(int));
        if (fki_ezsignbulksend_id_copy) *fki_ezsignbulksend_id_copy = *fki_ezsignbulksend_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *b_ezsignbulksendsignermapping_receivecopy_copy = NULL;
    if (b_ezsignbulksendsignermapping_receivecopy) {
        b_ezsignbulksendsignermapping_receivecopy_copy = malloc(sizeof(int));
        if (b_ezsignbulksendsignermapping_receivecopy_copy) *b_ezsignbulksendsignermapping_receivecopy_copy = *b_ezsignbulksendsignermapping_receivecopy;
    }
    ezsignbulksendsignermapping_response_t *result = ezsignbulksendsignermapping_response_create_internal (
        pki_ezsignbulksendsignermapping_id_copy,
        fki_ezsignbulksend_id_copy,
        fki_user_id_copy,
        b_ezsignbulksendsignermapping_receivecopy_copy,
        s_ezsignbulksendsignermapping_description
        );
    if (!result) {
        free(pki_ezsignbulksendsignermapping_id_copy);
        free(fki_ezsignbulksend_id_copy);
        free(fki_user_id_copy);
        free(b_ezsignbulksendsignermapping_receivecopy_copy);
    }
    return result;
}

void ezsignbulksendsignermapping_response_free(ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response) {
    if(NULL == ezsignbulksendsignermapping_response){
        return ;
    }
    if(ezsignbulksendsignermapping_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksendsignermapping_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id) {
        free(ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id);
        ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id = NULL;
    }
    if (ezsignbulksendsignermapping_response->fki_ezsignbulksend_id) {
        free(ezsignbulksendsignermapping_response->fki_ezsignbulksend_id);
        ezsignbulksendsignermapping_response->fki_ezsignbulksend_id = NULL;
    }
    if (ezsignbulksendsignermapping_response->fki_user_id) {
        free(ezsignbulksendsignermapping_response->fki_user_id);
        ezsignbulksendsignermapping_response->fki_user_id = NULL;
    }
    if (ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy) {
        free(ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy);
        ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy = NULL;
    }
    if (ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description) {
        free(ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description);
        ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description = NULL;
    }
    free(ezsignbulksendsignermapping_response);
}

cJSON *ezsignbulksendsignermapping_response_convertToJSON(ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id
    if (!ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendsignermappingID", *ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_response->fki_ezsignbulksend_id
    if (!ezsignbulksendsignermapping_response->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", *ezsignbulksendsignermapping_response->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_response->fki_user_id
    if(ezsignbulksendsignermapping_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsignbulksendsignermapping_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy
    if(ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendsignermappingReceivecopy", *ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description
    if (!ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendsignermappingDescription", ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_parseFromJSON(cJSON *ezsignbulksendsignermapping_responseJSON){

    ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id
    int *pki_ezsignbulksendsignermapping_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_response->fki_ezsignbulksend_id
    int *fki_ezsignbulksend_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_response->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy
    int *b_ezsignbulksendsignermapping_receivecopy_local_var = NULL;

    char *s_ezsignbulksendsignermapping_description_local_str = NULL;

    // ezsignbulksendsignermapping_response->pki_ezsignbulksendsignermapping_id
    cJSON *pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "pkiEzsignbulksendsignermappingID");
    if (cJSON_IsNull(pki_ezsignbulksendsignermapping_id)) {
        pki_ezsignbulksendsignermapping_id = NULL;
    }
    if (!pki_ezsignbulksendsignermapping_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksendsignermapping_id))
    {
    goto end; //Numeric
    }
    pki_ezsignbulksendsignermapping_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignbulksendsignermapping_id_local_var)
    {
        goto end;
    }
    *pki_ezsignbulksendsignermapping_id_local_var = pki_ezsignbulksendsignermapping_id->valuedouble;

    // ezsignbulksendsignermapping_response->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "fkiEzsignbulksendID");
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

    // ezsignbulksendsignermapping_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // ezsignbulksendsignermapping_response->b_ezsignbulksendsignermapping_receivecopy
    cJSON *b_ezsignbulksendsignermapping_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "bEzsignbulksendsignermappingReceivecopy");
    if (cJSON_IsNull(b_ezsignbulksendsignermapping_receivecopy)) {
        b_ezsignbulksendsignermapping_receivecopy = NULL;
    }
    if (b_ezsignbulksendsignermapping_receivecopy) { 
    if(!cJSON_IsBool(b_ezsignbulksendsignermapping_receivecopy))
    {
    goto end; //Bool
    }
    b_ezsignbulksendsignermapping_receivecopy_local_var = malloc(sizeof(int));
    if(!b_ezsignbulksendsignermapping_receivecopy_local_var)
    {
        goto end;
    }
    *b_ezsignbulksendsignermapping_receivecopy_local_var = b_ezsignbulksendsignermapping_receivecopy->valueint;
    }

    // ezsignbulksendsignermapping_response->s_ezsignbulksendsignermapping_description
    cJSON *s_ezsignbulksendsignermapping_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_responseJSON, "sEzsignbulksendsignermappingDescription");
    if (cJSON_IsNull(s_ezsignbulksendsignermapping_description)) {
        s_ezsignbulksendsignermapping_description = NULL;
    }
    if (!s_ezsignbulksendsignermapping_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendsignermapping_description))
    {
    goto end; //String
    }


    if (s_ezsignbulksendsignermapping_description && !cJSON_IsNull(s_ezsignbulksendsignermapping_description)) s_ezsignbulksendsignermapping_description_local_str = strdup(s_ezsignbulksendsignermapping_description->valuestring);

    ezsignbulksendsignermapping_response_local_var = ezsignbulksendsignermapping_response_create_internal (
        pki_ezsignbulksendsignermapping_id_local_var,
        fki_ezsignbulksend_id_local_var,
        fki_user_id_local_var,
        b_ezsignbulksendsignermapping_receivecopy_local_var,
        s_ezsignbulksendsignermapping_description_local_str
        );

    if (!ezsignbulksendsignermapping_response_local_var) {
        goto end;
    }

    return ezsignbulksendsignermapping_response_local_var;
end:
    if (pki_ezsignbulksendsignermapping_id_local_var) {
        free(pki_ezsignbulksendsignermapping_id_local_var);
        pki_ezsignbulksendsignermapping_id_local_var = NULL;
    }
    if (fki_ezsignbulksend_id_local_var) {
        free(fki_ezsignbulksend_id_local_var);
        fki_ezsignbulksend_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (b_ezsignbulksendsignermapping_receivecopy_local_var) {
        free(b_ezsignbulksendsignermapping_receivecopy_local_var);
        b_ezsignbulksendsignermapping_receivecopy_local_var = NULL;
    }
    if (s_ezsignbulksendsignermapping_description_local_str) {
        free(s_ezsignbulksendsignermapping_description_local_str);
        s_ezsignbulksendsignermapping_description_local_str = NULL;
    }
    return NULL;

}
