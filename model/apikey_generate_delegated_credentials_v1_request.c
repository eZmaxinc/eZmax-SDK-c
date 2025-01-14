#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_generate_delegated_credentials_v1_request.h"



apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_create(
    int i_expiration_minutes
    ) {
    apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_local_var = malloc(sizeof(apikey_generate_delegated_credentials_v1_request_t));
    if (!apikey_generate_delegated_credentials_v1_request_local_var) {
        return NULL;
    }
    apikey_generate_delegated_credentials_v1_request_local_var->i_expiration_minutes = i_expiration_minutes;

    return apikey_generate_delegated_credentials_v1_request_local_var;
}


void apikey_generate_delegated_credentials_v1_request_free(apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request) {
    if(NULL == apikey_generate_delegated_credentials_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    free(apikey_generate_delegated_credentials_v1_request);
}

cJSON *apikey_generate_delegated_credentials_v1_request_convertToJSON(apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_generate_delegated_credentials_v1_request->i_expiration_minutes
    if (!apikey_generate_delegated_credentials_v1_request->i_expiration_minutes) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iExpirationMinutes", apikey_generate_delegated_credentials_v1_request->i_expiration_minutes) == NULL) {
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

    // apikey_generate_delegated_credentials_v1_request->i_expiration_minutes
    cJSON *i_expiration_minutes = cJSON_GetObjectItemCaseSensitive(apikey_generate_delegated_credentials_v1_requestJSON, "iExpirationMinutes");
    if (!i_expiration_minutes) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_expiration_minutes))
    {
    goto end; //Numeric
    }


    apikey_generate_delegated_credentials_v1_request_local_var = apikey_generate_delegated_credentials_v1_request_create (
        i_expiration_minutes->valuedouble
        );

    return apikey_generate_delegated_credentials_v1_request_local_var;
end:
    return NULL;

}
