#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "global_customer_get_endpoint_v1_response.h"



static global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_create_internal(
    char *s_endpoint_url
    ) {
    global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_local_var = malloc(sizeof(global_customer_get_endpoint_v1_response_t));
    if (!global_customer_get_endpoint_v1_response_local_var) {
        return NULL;
    }
    memset(global_customer_get_endpoint_v1_response_local_var, 0, sizeof(global_customer_get_endpoint_v1_response_t));
    global_customer_get_endpoint_v1_response_local_var->_library_owned = 1;
    global_customer_get_endpoint_v1_response_local_var->s_endpoint_url = s_endpoint_url;
    return global_customer_get_endpoint_v1_response_local_var;
}

__attribute__((deprecated)) global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_create(
    char *s_endpoint_url
    ) {
    global_customer_get_endpoint_v1_response_t *result = global_customer_get_endpoint_v1_response_create_internal (
        s_endpoint_url
        );
    if (!result) {
    }
    return result;
}

void global_customer_get_endpoint_v1_response_free(global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response) {
    if(NULL == global_customer_get_endpoint_v1_response){
        return ;
    }
    if(global_customer_get_endpoint_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "global_customer_get_endpoint_v1_response_free");
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

    char *s_endpoint_url_local_str = NULL;

    // global_customer_get_endpoint_v1_response->s_endpoint_url
    cJSON *s_endpoint_url = cJSON_GetObjectItemCaseSensitive(global_customer_get_endpoint_v1_responseJSON, "sEndpointURL");
    if (cJSON_IsNull(s_endpoint_url)) {
        s_endpoint_url = NULL;
    }
    if (!s_endpoint_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_endpoint_url))
    {
    goto end; //String
    }


    if (s_endpoint_url && !cJSON_IsNull(s_endpoint_url)) s_endpoint_url_local_str = strdup(s_endpoint_url->valuestring);

    global_customer_get_endpoint_v1_response_local_var = global_customer_get_endpoint_v1_response_create_internal (
        s_endpoint_url_local_str
        );

    if (!global_customer_get_endpoint_v1_response_local_var) {
        goto end;
    }

    return global_customer_get_endpoint_v1_response_local_var;
end:
    if (s_endpoint_url_local_str) {
        free(s_endpoint_url_local_str);
        s_endpoint_url_local_str = NULL;
    }
    return NULL;

}
