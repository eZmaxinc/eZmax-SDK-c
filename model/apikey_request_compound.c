#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_request_compound.h"



static apikey_request_compound_t *apikey_request_compound_create_internal(
    int *pki_apikey_id,
    int *fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description,
    int *b_apikey_isactive,
    int *b_apikey_issigned
    ) {
    apikey_request_compound_t *apikey_request_compound_local_var = malloc(sizeof(apikey_request_compound_t));
    if (!apikey_request_compound_local_var) {
        return NULL;
    }
    memset(apikey_request_compound_local_var, 0, sizeof(apikey_request_compound_t));
    apikey_request_compound_local_var->_library_owned = 1;
    apikey_request_compound_local_var->pki_apikey_id = pki_apikey_id;
    apikey_request_compound_local_var->fki_user_id = fki_user_id;
    apikey_request_compound_local_var->obj_apikey_description = obj_apikey_description;
    apikey_request_compound_local_var->b_apikey_isactive = b_apikey_isactive;
    apikey_request_compound_local_var->b_apikey_issigned = b_apikey_issigned;
    return apikey_request_compound_local_var;
}

__attribute__((deprecated)) apikey_request_compound_t *apikey_request_compound_create(
    int *pki_apikey_id,
    int *fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description,
    int *b_apikey_isactive,
    int *b_apikey_issigned
    ) {
    int *pki_apikey_id_copy = NULL;
    if (pki_apikey_id) {
        pki_apikey_id_copy = malloc(sizeof(int));
        if (pki_apikey_id_copy) *pki_apikey_id_copy = *pki_apikey_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *b_apikey_isactive_copy = NULL;
    if (b_apikey_isactive) {
        b_apikey_isactive_copy = malloc(sizeof(int));
        if (b_apikey_isactive_copy) *b_apikey_isactive_copy = *b_apikey_isactive;
    }
    int *b_apikey_issigned_copy = NULL;
    if (b_apikey_issigned) {
        b_apikey_issigned_copy = malloc(sizeof(int));
        if (b_apikey_issigned_copy) *b_apikey_issigned_copy = *b_apikey_issigned;
    }
    apikey_request_compound_t *result = apikey_request_compound_create_internal (
        pki_apikey_id_copy,
        fki_user_id_copy,
        obj_apikey_description,
        b_apikey_isactive_copy,
        b_apikey_issigned_copy
        );
    if (!result) {
        free(pki_apikey_id_copy);
        free(fki_user_id_copy);
        free(b_apikey_isactive_copy);
        free(b_apikey_issigned_copy);
    }
    return result;
}

void apikey_request_compound_free(apikey_request_compound_t *apikey_request_compound) {
    if(NULL == apikey_request_compound){
        return ;
    }
    if(apikey_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_request_compound->pki_apikey_id) {
        free(apikey_request_compound->pki_apikey_id);
        apikey_request_compound->pki_apikey_id = NULL;
    }
    if (apikey_request_compound->fki_user_id) {
        free(apikey_request_compound->fki_user_id);
        apikey_request_compound->fki_user_id = NULL;
    }
    if (apikey_request_compound->obj_apikey_description) {
        multilingual_apikey_description_free(apikey_request_compound->obj_apikey_description);
        apikey_request_compound->obj_apikey_description = NULL;
    }
    if (apikey_request_compound->b_apikey_isactive) {
        free(apikey_request_compound->b_apikey_isactive);
        apikey_request_compound->b_apikey_isactive = NULL;
    }
    if (apikey_request_compound->b_apikey_issigned) {
        free(apikey_request_compound->b_apikey_issigned);
        apikey_request_compound->b_apikey_issigned = NULL;
    }
    free(apikey_request_compound);
}

cJSON *apikey_request_compound_convertToJSON(apikey_request_compound_t *apikey_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // apikey_request_compound->pki_apikey_id
    if(apikey_request_compound->pki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "pkiApikeyID", *apikey_request_compound->pki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // apikey_request_compound->fki_user_id
    if (!apikey_request_compound->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", *apikey_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // apikey_request_compound->obj_apikey_description
    if (!apikey_request_compound->obj_apikey_description) {
        goto fail;
    }
    cJSON *obj_apikey_description_local_JSON = multilingual_apikey_description_convertToJSON(apikey_request_compound->obj_apikey_description);
    if(obj_apikey_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikeyDescription", obj_apikey_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // apikey_request_compound->b_apikey_isactive
    if(apikey_request_compound->b_apikey_isactive) {
    if(cJSON_AddBoolToObject(item, "bApikeyIsactive", *apikey_request_compound->b_apikey_isactive) == NULL) {
    goto fail; //Bool
    }
    }


    // apikey_request_compound->b_apikey_issigned
    if(apikey_request_compound->b_apikey_issigned) {
    if(cJSON_AddBoolToObject(item, "bApikeyIssigned", *apikey_request_compound->b_apikey_issigned) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apikey_request_compound_t *apikey_request_compound_parseFromJSON(cJSON *apikey_request_compoundJSON){

    apikey_request_compound_t *apikey_request_compound_local_var = NULL;

    // define the local variable for apikey_request_compound->pki_apikey_id
    int *pki_apikey_id_local_var = NULL;

    // define the local variable for apikey_request_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for apikey_request_compound->obj_apikey_description
    multilingual_apikey_description_t *obj_apikey_description_local_nonprim = NULL;

    // define the local variable for apikey_request_compound->b_apikey_isactive
    int *b_apikey_isactive_local_var = NULL;

    // define the local variable for apikey_request_compound->b_apikey_issigned
    int *b_apikey_issigned_local_var = NULL;

    // apikey_request_compound->pki_apikey_id
    cJSON *pki_apikey_id = cJSON_GetObjectItemCaseSensitive(apikey_request_compoundJSON, "pkiApikeyID");
    if (cJSON_IsNull(pki_apikey_id)) {
        pki_apikey_id = NULL;
    }
    if (pki_apikey_id) { 
    if(!cJSON_IsNumber(pki_apikey_id))
    {
    goto end; //Numeric
    }
    pki_apikey_id_local_var = malloc(sizeof(int));
    if(!pki_apikey_id_local_var)
    {
        goto end;
    }
    *pki_apikey_id_local_var = pki_apikey_id->valuedouble;
    }

    // apikey_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(apikey_request_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
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

    // apikey_request_compound->obj_apikey_description
    cJSON *obj_apikey_description = cJSON_GetObjectItemCaseSensitive(apikey_request_compoundJSON, "objApikeyDescription");
    if (cJSON_IsNull(obj_apikey_description)) {
        obj_apikey_description = NULL;
    }
    if (!obj_apikey_description) {
        goto end;
    }

    
    obj_apikey_description_local_nonprim = multilingual_apikey_description_parseFromJSON(obj_apikey_description); //nonprimitive

    // apikey_request_compound->b_apikey_isactive
    cJSON *b_apikey_isactive = cJSON_GetObjectItemCaseSensitive(apikey_request_compoundJSON, "bApikeyIsactive");
    if (cJSON_IsNull(b_apikey_isactive)) {
        b_apikey_isactive = NULL;
    }
    if (b_apikey_isactive) { 
    if(!cJSON_IsBool(b_apikey_isactive))
    {
    goto end; //Bool
    }
    b_apikey_isactive_local_var = malloc(sizeof(int));
    if(!b_apikey_isactive_local_var)
    {
        goto end;
    }
    *b_apikey_isactive_local_var = b_apikey_isactive->valueint;
    }

    // apikey_request_compound->b_apikey_issigned
    cJSON *b_apikey_issigned = cJSON_GetObjectItemCaseSensitive(apikey_request_compoundJSON, "bApikeyIssigned");
    if (cJSON_IsNull(b_apikey_issigned)) {
        b_apikey_issigned = NULL;
    }
    if (b_apikey_issigned) { 
    if(!cJSON_IsBool(b_apikey_issigned))
    {
    goto end; //Bool
    }
    b_apikey_issigned_local_var = malloc(sizeof(int));
    if(!b_apikey_issigned_local_var)
    {
        goto end;
    }
    *b_apikey_issigned_local_var = b_apikey_issigned->valueint;
    }



    apikey_request_compound_local_var = apikey_request_compound_create_internal (
        pki_apikey_id_local_var,
        fki_user_id_local_var,
        obj_apikey_description_local_nonprim,
        b_apikey_isactive_local_var,
        b_apikey_issigned_local_var
        );

    if (!apikey_request_compound_local_var) {
        goto end;
    }

    return apikey_request_compound_local_var;
end:
    if (pki_apikey_id_local_var) {
        free(pki_apikey_id_local_var);
        pki_apikey_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (obj_apikey_description_local_nonprim) {
        multilingual_apikey_description_free(obj_apikey_description_local_nonprim);
        obj_apikey_description_local_nonprim = NULL;
    }
    if (b_apikey_isactive_local_var) {
        free(b_apikey_isactive_local_var);
        b_apikey_isactive_local_var = NULL;
    }
    if (b_apikey_issigned_local_var) {
        free(b_apikey_issigned_local_var);
        b_apikey_issigned_local_var = NULL;
    }
    return NULL;

}
