#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_generate_delegated_credentials_v1_request.h"



static apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_create_internal(
    int *i_expiration_minutes
    ) {
    apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_local_var = malloc(sizeof(apikey_generate_delegated_credentials_v1_request_t));
    if (!apikey_generate_delegated_credentials_v1_request_local_var) {
        return NULL;
    }
    memset(apikey_generate_delegated_credentials_v1_request_local_var, 0, sizeof(apikey_generate_delegated_credentials_v1_request_t));
    apikey_generate_delegated_credentials_v1_request_local_var->_library_owned = 1;
    apikey_generate_delegated_credentials_v1_request_local_var->i_expiration_minutes = i_expiration_minutes;
    return apikey_generate_delegated_credentials_v1_request_local_var;
}

__attribute__((deprecated)) apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_create(
    int *i_expiration_minutes
    ) {
    int *i_expiration_minutes_copy = NULL;
    if (i_expiration_minutes) {
        i_expiration_minutes_copy = malloc(sizeof(int));
        if (i_expiration_minutes_copy) *i_expiration_minutes_copy = *i_expiration_minutes;
    }
    apikey_generate_delegated_credentials_v1_request_t *result = apikey_generate_delegated_credentials_v1_request_create_internal (
        i_expiration_minutes_copy
        );
    if (!result) {
        free(i_expiration_minutes_copy);
    }
    return result;
}

void apikey_generate_delegated_credentials_v1_request_free(apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request) {
    if(NULL == apikey_generate_delegated_credentials_v1_request){
        return ;
    }
    if(apikey_generate_delegated_credentials_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_generate_delegated_credentials_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_generate_delegated_credentials_v1_request->i_expiration_minutes) {
        free(apikey_generate_delegated_credentials_v1_request->i_expiration_minutes);
        apikey_generate_delegated_credentials_v1_request->i_expiration_minutes = NULL;
    }
    free(apikey_generate_delegated_credentials_v1_request);
}

cJSON *apikey_generate_delegated_credentials_v1_request_convertToJSON(apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_generate_delegated_credentials_v1_request->i_expiration_minutes
    if (!apikey_generate_delegated_credentials_v1_request->i_expiration_minutes) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iExpirationMinutes", *apikey_generate_delegated_credentials_v1_request->i_expiration_minutes) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_parseFromJSON(cJSON *apikey_generate_delegated_credentials_v1_requestJSON){

    apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_local_var = NULL;

    // define the local variable for apikey_generate_delegated_credentials_v1_request->i_expiration_minutes
    int *i_expiration_minutes_local_var = NULL;

    // apikey_generate_delegated_credentials_v1_request->i_expiration_minutes
    cJSON *i_expiration_minutes = cJSON_GetObjectItemCaseSensitive(apikey_generate_delegated_credentials_v1_requestJSON, "iExpirationMinutes");
    if (cJSON_IsNull(i_expiration_minutes)) {
        i_expiration_minutes = NULL;
    }
    if (!i_expiration_minutes) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_expiration_minutes))
    {
    goto end; //Numeric
    }
    i_expiration_minutes_local_var = malloc(sizeof(int));
    if(!i_expiration_minutes_local_var)
    {
        goto end;
    }
    *i_expiration_minutes_local_var = i_expiration_minutes->valuedouble;



    apikey_generate_delegated_credentials_v1_request_local_var = apikey_generate_delegated_credentials_v1_request_create_internal (
        i_expiration_minutes_local_var
        );

    if (!apikey_generate_delegated_credentials_v1_request_local_var) {
        goto end;
    }

    return apikey_generate_delegated_credentials_v1_request_local_var;
end:
    if (i_expiration_minutes_local_var) {
        free(i_expiration_minutes_local_var);
        i_expiration_minutes_local_var = NULL;
    }
    return NULL;

}
