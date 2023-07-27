#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_regenerate_v1_request.h"



apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_create(
    int b_apikey_issigned
    ) {
    apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_local_var = malloc(sizeof(apikey_regenerate_v1_request_t));
    if (!apikey_regenerate_v1_request_local_var) {
        return NULL;
    }
    apikey_regenerate_v1_request_local_var->b_apikey_issigned = b_apikey_issigned;

    return apikey_regenerate_v1_request_local_var;
}


void apikey_regenerate_v1_request_free(apikey_regenerate_v1_request_t *apikey_regenerate_v1_request) {
    if(NULL == apikey_regenerate_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    free(apikey_regenerate_v1_request);
}

cJSON *apikey_regenerate_v1_request_convertToJSON(apikey_regenerate_v1_request_t *apikey_regenerate_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_regenerate_v1_request->b_apikey_issigned
    if(apikey_regenerate_v1_request->b_apikey_issigned) {
    if(cJSON_AddBoolToObject(item, "bApikeyIssigned", apikey_regenerate_v1_request->b_apikey_issigned) == NULL) {
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

    // apikey_regenerate_v1_request->b_apikey_issigned
    cJSON *b_apikey_issigned = cJSON_GetObjectItemCaseSensitive(apikey_regenerate_v1_requestJSON, "bApikeyIssigned");
    if (b_apikey_issigned) { 
    if(!cJSON_IsBool(b_apikey_issigned))
    {
    goto end; //Bool
    }
    }


    apikey_regenerate_v1_request_local_var = apikey_regenerate_v1_request_create (
        b_apikey_issigned ? b_apikey_issigned->valueint : 0
        );

    return apikey_regenerate_v1_request_local_var;
end:
    return NULL;

}
