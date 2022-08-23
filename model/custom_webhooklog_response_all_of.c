#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_webhooklog_response_all_of.h"



custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of_create(
    char *dt_webhooklog_date,
    char *t_webhooklog_json
    ) {
    custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of_local_var = malloc(sizeof(custom_webhooklog_response_all_of_t));
    if (!custom_webhooklog_response_all_of_local_var) {
        return NULL;
    }
    custom_webhooklog_response_all_of_local_var->dt_webhooklog_date = dt_webhooklog_date;
    custom_webhooklog_response_all_of_local_var->t_webhooklog_json = t_webhooklog_json;

    return custom_webhooklog_response_all_of_local_var;
}


void custom_webhooklog_response_all_of_free(custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of) {
    if(NULL == custom_webhooklog_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_webhooklog_response_all_of->dt_webhooklog_date) {
        free(custom_webhooklog_response_all_of->dt_webhooklog_date);
        custom_webhooklog_response_all_of->dt_webhooklog_date = NULL;
    }
    if (custom_webhooklog_response_all_of->t_webhooklog_json) {
        free(custom_webhooklog_response_all_of->t_webhooklog_json);
        custom_webhooklog_response_all_of->t_webhooklog_json = NULL;
    }
    free(custom_webhooklog_response_all_of);
}

cJSON *custom_webhooklog_response_all_of_convertToJSON(custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_webhooklog_response_all_of->dt_webhooklog_date
    if (!custom_webhooklog_response_all_of->dt_webhooklog_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtWebhooklogDate", custom_webhooklog_response_all_of->dt_webhooklog_date) == NULL) {
    goto fail; //String
    }


    // custom_webhooklog_response_all_of->t_webhooklog_json
    if (!custom_webhooklog_response_all_of->t_webhooklog_json) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tWebhooklogJson", custom_webhooklog_response_all_of->t_webhooklog_json) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of_parseFromJSON(cJSON *custom_webhooklog_response_all_ofJSON){

    custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of_local_var = NULL;

    // custom_webhooklog_response_all_of->dt_webhooklog_date
    cJSON *dt_webhooklog_date = cJSON_GetObjectItemCaseSensitive(custom_webhooklog_response_all_ofJSON, "dtWebhooklogDate");
    if (!dt_webhooklog_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_webhooklog_date))
    {
    goto end; //String
    }

    // custom_webhooklog_response_all_of->t_webhooklog_json
    cJSON *t_webhooklog_json = cJSON_GetObjectItemCaseSensitive(custom_webhooklog_response_all_ofJSON, "tWebhooklogJson");
    if (!t_webhooklog_json) {
        goto end;
    }

    
    if(!cJSON_IsString(t_webhooklog_json))
    {
    goto end; //String
    }


    custom_webhooklog_response_all_of_local_var = custom_webhooklog_response_all_of_create (
        strdup(dt_webhooklog_date->valuestring),
        strdup(t_webhooklog_json->valuestring)
        );

    return custom_webhooklog_response_all_of_local_var;
end:
    return NULL;

}
