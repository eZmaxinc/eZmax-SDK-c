#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attempt_response.h"



attempt_response_t *attempt_response_create(
    char *dt_attempt_start,
    char *s_attempt_result,
    int i_attempt_duration
    ) {
    attempt_response_t *attempt_response_local_var = malloc(sizeof(attempt_response_t));
    if (!attempt_response_local_var) {
        return NULL;
    }
    attempt_response_local_var->dt_attempt_start = dt_attempt_start;
    attempt_response_local_var->s_attempt_result = s_attempt_result;
    attempt_response_local_var->i_attempt_duration = i_attempt_duration;

    return attempt_response_local_var;
}


void attempt_response_free(attempt_response_t *attempt_response) {
    if(NULL == attempt_response){
        return ;
    }
    listEntry_t *listEntry;
    if (attempt_response->dt_attempt_start) {
        free(attempt_response->dt_attempt_start);
        attempt_response->dt_attempt_start = NULL;
    }
    if (attempt_response->s_attempt_result) {
        free(attempt_response->s_attempt_result);
        attempt_response->s_attempt_result = NULL;
    }
    free(attempt_response);
}

cJSON *attempt_response_convertToJSON(attempt_response_t *attempt_response) {
    cJSON *item = cJSON_CreateObject();

    // attempt_response->dt_attempt_start
    if (!attempt_response->dt_attempt_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtAttemptStart", attempt_response->dt_attempt_start) == NULL) {
    goto fail; //String
    }


    // attempt_response->s_attempt_result
    if (!attempt_response->s_attempt_result) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttemptResult", attempt_response->s_attempt_result) == NULL) {
    goto fail; //String
    }


    // attempt_response->i_attempt_duration
    if (!attempt_response->i_attempt_duration) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAttemptDuration", attempt_response->i_attempt_duration) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attempt_response_t *attempt_response_parseFromJSON(cJSON *attempt_responseJSON){

    attempt_response_t *attempt_response_local_var = NULL;

    // attempt_response->dt_attempt_start
    cJSON *dt_attempt_start = cJSON_GetObjectItemCaseSensitive(attempt_responseJSON, "dtAttemptStart");
    if (!dt_attempt_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_attempt_start))
    {
    goto end; //String
    }

    // attempt_response->s_attempt_result
    cJSON *s_attempt_result = cJSON_GetObjectItemCaseSensitive(attempt_responseJSON, "sAttemptResult");
    if (!s_attempt_result) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attempt_result))
    {
    goto end; //String
    }

    // attempt_response->i_attempt_duration
    cJSON *i_attempt_duration = cJSON_GetObjectItemCaseSensitive(attempt_responseJSON, "iAttemptDuration");
    if (!i_attempt_duration) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_attempt_duration))
    {
    goto end; //Numeric
    }


    attempt_response_local_var = attempt_response_create (
        strdup(dt_attempt_start->valuestring),
        strdup(s_attempt_result->valuestring),
        i_attempt_duration->valuedouble
        );

    return attempt_response_local_var;
end:
    return NULL;

}
