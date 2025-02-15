#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_webhooklog_response.h"



static custom_webhooklog_response_t *custom_webhooklog_response_create_internal(
    char *dt_webhooklog_date,
    char *t_webhooklog_json
    ) {
    custom_webhooklog_response_t *custom_webhooklog_response_local_var = malloc(sizeof(custom_webhooklog_response_t));
    if (!custom_webhooklog_response_local_var) {
        return NULL;
    }
    custom_webhooklog_response_local_var->dt_webhooklog_date = dt_webhooklog_date;
    custom_webhooklog_response_local_var->t_webhooklog_json = t_webhooklog_json;

    custom_webhooklog_response_local_var->_library_owned = 1;
    return custom_webhooklog_response_local_var;
}

__attribute__((deprecated)) custom_webhooklog_response_t *custom_webhooklog_response_create(
    char *dt_webhooklog_date,
    char *t_webhooklog_json
    ) {
    return custom_webhooklog_response_create_internal (
        dt_webhooklog_date,
        t_webhooklog_json
        );
}

void custom_webhooklog_response_free(custom_webhooklog_response_t *custom_webhooklog_response) {
    if(NULL == custom_webhooklog_response){
        return ;
    }
    if(custom_webhooklog_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_webhooklog_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_webhooklog_response->dt_webhooklog_date) {
        free(custom_webhooklog_response->dt_webhooklog_date);
        custom_webhooklog_response->dt_webhooklog_date = NULL;
    }
    if (custom_webhooklog_response->t_webhooklog_json) {
        free(custom_webhooklog_response->t_webhooklog_json);
        custom_webhooklog_response->t_webhooklog_json = NULL;
    }
    free(custom_webhooklog_response);
}

cJSON *custom_webhooklog_response_convertToJSON(custom_webhooklog_response_t *custom_webhooklog_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_webhooklog_response->dt_webhooklog_date
    if (!custom_webhooklog_response->dt_webhooklog_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtWebhooklogDate", custom_webhooklog_response->dt_webhooklog_date) == NULL) {
    goto fail; //String
    }


    // custom_webhooklog_response->t_webhooklog_json
    if (!custom_webhooklog_response->t_webhooklog_json) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tWebhooklogJson", custom_webhooklog_response->t_webhooklog_json) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_webhooklog_response_t *custom_webhooklog_response_parseFromJSON(cJSON *custom_webhooklog_responseJSON){

    custom_webhooklog_response_t *custom_webhooklog_response_local_var = NULL;

    // custom_webhooklog_response->dt_webhooklog_date
    cJSON *dt_webhooklog_date = cJSON_GetObjectItemCaseSensitive(custom_webhooklog_responseJSON, "dtWebhooklogDate");
    if (cJSON_IsNull(dt_webhooklog_date)) {
        dt_webhooklog_date = NULL;
    }
    if (!dt_webhooklog_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_webhooklog_date))
    {
    goto end; //String
    }

    // custom_webhooklog_response->t_webhooklog_json
    cJSON *t_webhooklog_json = cJSON_GetObjectItemCaseSensitive(custom_webhooklog_responseJSON, "tWebhooklogJson");
    if (cJSON_IsNull(t_webhooklog_json)) {
        t_webhooklog_json = NULL;
    }
    if (!t_webhooklog_json) {
        goto end;
    }

    
    if(!cJSON_IsString(t_webhooklog_json))
    {
    goto end; //String
    }


    custom_webhooklog_response_local_var = custom_webhooklog_response_create_internal (
        strdup(dt_webhooklog_date->valuestring),
        strdup(t_webhooklog_json->valuestring)
        );

    return custom_webhooklog_response_local_var;
end:
    return NULL;

}
