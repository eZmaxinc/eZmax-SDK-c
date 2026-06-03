#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_request.h"



static ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_create_internal(
    int *pki_ezsignbulksendsignermapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_user_id,
    int *b_ezsignbulksendsignermapping_receivecopy,
    char *s_ezsignbulksendsignermapping_description
    ) {
    ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_local_var = malloc(sizeof(ezsignbulksendsignermapping_request_t));
    if (!ezsignbulksendsignermapping_request_local_var) {
        return NULL;
    }
    memset(ezsignbulksendsignermapping_request_local_var, 0, sizeof(ezsignbulksendsignermapping_request_t));
    ezsignbulksendsignermapping_request_local_var->_library_owned = 1;
    ezsignbulksendsignermapping_request_local_var->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    ezsignbulksendsignermapping_request_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendsignermapping_request_local_var->fki_user_id = fki_user_id;
    ezsignbulksendsignermapping_request_local_var->b_ezsignbulksendsignermapping_receivecopy = b_ezsignbulksendsignermapping_receivecopy;
    ezsignbulksendsignermapping_request_local_var->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;
    return ezsignbulksendsignermapping_request_local_var;
}

__attribute__((deprecated)) ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_create(
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
    ezsignbulksendsignermapping_request_t *result = ezsignbulksendsignermapping_request_create_internal (
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

void ezsignbulksendsignermapping_request_free(ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request) {
    if(NULL == ezsignbulksendsignermapping_request){
        return ;
    }
    if(ezsignbulksendsignermapping_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksendsignermapping_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id) {
        free(ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id);
        ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id = NULL;
    }
    if (ezsignbulksendsignermapping_request->fki_ezsignbulksend_id) {
        free(ezsignbulksendsignermapping_request->fki_ezsignbulksend_id);
        ezsignbulksendsignermapping_request->fki_ezsignbulksend_id = NULL;
    }
    if (ezsignbulksendsignermapping_request->fki_user_id) {
        free(ezsignbulksendsignermapping_request->fki_user_id);
        ezsignbulksendsignermapping_request->fki_user_id = NULL;
    }
    if (ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy) {
        free(ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy);
        ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy = NULL;
    }
    if (ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description) {
        free(ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description);
        ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description = NULL;
    }
    free(ezsignbulksendsignermapping_request);
}

cJSON *ezsignbulksendsignermapping_request_convertToJSON(ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id
    if(ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendsignermappingID", *ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_request->fki_ezsignbulksend_id
    if (!ezsignbulksendsignermapping_request->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", *ezsignbulksendsignermapping_request->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_request->fki_user_id
    if(ezsignbulksendsignermapping_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsignbulksendsignermapping_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy
    if(ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendsignermappingReceivecopy", *ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description
    if (!ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendsignermappingDescription", ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_parseFromJSON(cJSON *ezsignbulksendsignermapping_requestJSON){

    ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id
    int *pki_ezsignbulksendsignermapping_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request->fki_ezsignbulksend_id
    int *fki_ezsignbulksend_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy
    int *b_ezsignbulksendsignermapping_receivecopy_local_var = NULL;

    char *s_ezsignbulksendsignermapping_description_local_str = NULL;

    // ezsignbulksendsignermapping_request->pki_ezsignbulksendsignermapping_id
    cJSON *pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "pkiEzsignbulksendsignermappingID");
    if (cJSON_IsNull(pki_ezsignbulksendsignermapping_id)) {
        pki_ezsignbulksendsignermapping_id = NULL;
    }
    if (pki_ezsignbulksendsignermapping_id) { 
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
    }

    // ezsignbulksendsignermapping_request->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "fkiEzsignbulksendID");
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

    // ezsignbulksendsignermapping_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "fkiUserID");
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

    // ezsignbulksendsignermapping_request->b_ezsignbulksendsignermapping_receivecopy
    cJSON *b_ezsignbulksendsignermapping_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "bEzsignbulksendsignermappingReceivecopy");
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

    // ezsignbulksendsignermapping_request->s_ezsignbulksendsignermapping_description
    cJSON *s_ezsignbulksendsignermapping_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_requestJSON, "sEzsignbulksendsignermappingDescription");
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

    ezsignbulksendsignermapping_request_local_var = ezsignbulksendsignermapping_request_create_internal (
        pki_ezsignbulksendsignermapping_id_local_var,
        fki_ezsignbulksend_id_local_var,
        fki_user_id_local_var,
        b_ezsignbulksendsignermapping_receivecopy_local_var,
        s_ezsignbulksendsignermapping_description_local_str
        );

    if (!ezsignbulksendsignermapping_request_local_var) {
        goto end;
    }

    return ezsignbulksendsignermapping_request_local_var;
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
