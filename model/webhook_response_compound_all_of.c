#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_response_compound_all_of.h"



webhook_response_compound_all_of_t *webhook_response_compound_all_of_create(
    char *s_webhook_event
    ) {
    webhook_response_compound_all_of_t *webhook_response_compound_all_of_local_var = malloc(sizeof(webhook_response_compound_all_of_t));
    if (!webhook_response_compound_all_of_local_var) {
        return NULL;
    }
    webhook_response_compound_all_of_local_var->s_webhook_event = s_webhook_event;

    return webhook_response_compound_all_of_local_var;
}


void webhook_response_compound_all_of_free(webhook_response_compound_all_of_t *webhook_response_compound_all_of) {
    if(NULL == webhook_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_response_compound_all_of->s_webhook_event) {
        free(webhook_response_compound_all_of->s_webhook_event);
        webhook_response_compound_all_of->s_webhook_event = NULL;
    }
    free(webhook_response_compound_all_of);
}

cJSON *webhook_response_compound_all_of_convertToJSON(webhook_response_compound_all_of_t *webhook_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // webhook_response_compound_all_of->s_webhook_event
    if(webhook_response_compound_all_of->s_webhook_event) {
    if(cJSON_AddStringToObject(item, "sWebhookEvent", webhook_response_compound_all_of->s_webhook_event) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_response_compound_all_of_t *webhook_response_compound_all_of_parseFromJSON(cJSON *webhook_response_compound_all_ofJSON){

    webhook_response_compound_all_of_t *webhook_response_compound_all_of_local_var = NULL;

    // webhook_response_compound_all_of->s_webhook_event
    cJSON *s_webhook_event = cJSON_GetObjectItemCaseSensitive(webhook_response_compound_all_ofJSON, "sWebhookEvent");
    if (s_webhook_event) { 
    if(!cJSON_IsString(s_webhook_event) && !cJSON_IsNull(s_webhook_event))
    {
    goto end; //String
    }
    }


    webhook_response_compound_all_of_local_var = webhook_response_compound_all_of_create (
        s_webhook_event && !cJSON_IsNull(s_webhook_event) ? strdup(s_webhook_event->valuestring) : NULL
        );

    return webhook_response_compound_all_of_local_var;
end:
    return NULL;

}
