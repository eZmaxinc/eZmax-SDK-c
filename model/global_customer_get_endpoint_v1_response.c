#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "global_customer_get_endpoint_v1_response.h"



global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_create(
    char *s_endpoint_url
    ) {
    global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_local_var = malloc(sizeof(global_customer_get_endpoint_v1_response_t));
    if (!global_customer_get_endpoint_v1_response_local_var) {
        return NULL;
    }
    global_customer_get_endpoint_v1_response_local_var->s_endpoint_url = s_endpoint_url;

    return global_customer_get_endpoint_v1_response_local_var;
}


void global_customer_get_endpoint_v1_response_free(global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response) {
    if(NULL == global_customer_get_endpoint_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (global_customer_get_endpoint_v1_response->s_endpoint_url) {
        free(global_customer_get_endpoint_v1_response->s_endpoint_url);
        global_customer_get_endpoint_v1_response->s_endpoint_url = NULL;
    }
    free(global_customer_get_endpoint_v1_response);
}

cJSON *global_customer_get_endpoint_v1_response_convertToJSON(global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // global_customer_get_endpoint_v1_response->s_endpoint_url
    if (!global_customer_get_endpoint_v1_response->s_endpoint_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEndpointURL", global_customer_get_endpoint_v1_response->s_endpoint_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_parseFromJSON(cJSON *global_customer_get_endpoint_v1_responseJSON){

    global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_local_var = NULL;

    // global_customer_get_endpoint_v1_response->s_endpoint_url
    cJSON *s_endpoint_url = cJSON_GetObjectItemCaseSensitive(global_customer_get_endpoint_v1_responseJSON, "sEndpointURL");
    if (!s_endpoint_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_endpoint_url))
    {
    goto end; //String
    }


    global_customer_get_endpoint_v1_response_local_var = global_customer_get_endpoint_v1_response_create (
        strdup(s_endpoint_url->valuestring)
        );

    return global_customer_get_endpoint_v1_response_local_var;
end:
    return NULL;

}
