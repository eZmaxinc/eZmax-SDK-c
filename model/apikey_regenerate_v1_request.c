#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_regenerate_v1_request.h"



static apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_create_internal(
    int *b_apikey_issigned
    ) {
    apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_local_var = malloc(sizeof(apikey_regenerate_v1_request_t));
    if (!apikey_regenerate_v1_request_local_var) {
        return NULL;
    }
    memset(apikey_regenerate_v1_request_local_var, 0, sizeof(apikey_regenerate_v1_request_t));
    apikey_regenerate_v1_request_local_var->_library_owned = 1;
    apikey_regenerate_v1_request_local_var->b_apikey_issigned = b_apikey_issigned;
    return apikey_regenerate_v1_request_local_var;
}

__attribute__((deprecated)) apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_create(
    int *b_apikey_issigned
    ) {
    int *b_apikey_issigned_copy = NULL;
    if (b_apikey_issigned) {
        b_apikey_issigned_copy = malloc(sizeof(int));
        if (b_apikey_issigned_copy) *b_apikey_issigned_copy = *b_apikey_issigned;
    }
    apikey_regenerate_v1_request_t *result = apikey_regenerate_v1_request_create_internal (
        b_apikey_issigned_copy
        );
    if (!result) {
        free(b_apikey_issigned_copy);
    }
    return result;
}

void apikey_regenerate_v1_request_free(apikey_regenerate_v1_request_t *apikey_regenerate_v1_request) {
    if(NULL == apikey_regenerate_v1_request){
        return ;
    }
    if(apikey_regenerate_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_regenerate_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_regenerate_v1_request->b_apikey_issigned) {
        free(apikey_regenerate_v1_request->b_apikey_issigned);
        apikey_regenerate_v1_request->b_apikey_issigned = NULL;
    }
    free(apikey_regenerate_v1_request);
}

cJSON *apikey_regenerate_v1_request_convertToJSON(apikey_regenerate_v1_request_t *apikey_regenerate_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_regenerate_v1_request->b_apikey_issigned
    if(apikey_regenerate_v1_request->b_apikey_issigned) {
    if(cJSON_AddBoolToObject(item, "bApikeyIssigned", *apikey_regenerate_v1_request->b_apikey_issigned) == NULL) {
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

apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_parseFromJSON(cJSON *apikey_regenerate_v1_requestJSON){

    apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_local_var = NULL;

    // define the local variable for apikey_regenerate_v1_request->b_apikey_issigned
    int *b_apikey_issigned_local_var = NULL;

    // apikey_regenerate_v1_request->b_apikey_issigned
    cJSON *b_apikey_issigned = cJSON_GetObjectItemCaseSensitive(apikey_regenerate_v1_requestJSON, "bApikeyIssigned");
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



    apikey_regenerate_v1_request_local_var = apikey_regenerate_v1_request_create_internal (
        b_apikey_issigned_local_var
        );

    if (!apikey_regenerate_v1_request_local_var) {
        goto end;
    }

    return apikey_regenerate_v1_request_local_var;
end:
    if (b_apikey_issigned_local_var) {
        free(b_apikey_issigned_local_var);
        b_apikey_issigned_local_var = NULL;
    }
    return NULL;

}
