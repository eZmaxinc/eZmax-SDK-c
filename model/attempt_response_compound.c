#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attempt_response_compound.h"



attempt_response_compound_t *attempt_response_compound_create(
    char *dt_attempt_start,
    char *s_attempt_result,
    int i_attempt_duration
    ) {
    attempt_response_compound_t *attempt_response_compound_local_var = malloc(sizeof(attempt_response_compound_t));
    if (!attempt_response_compound_local_var) {
        return NULL;
    }
    attempt_response_compound_local_var->dt_attempt_start = dt_attempt_start;
    attempt_response_compound_local_var->s_attempt_result = s_attempt_result;
    attempt_response_compound_local_var->i_attempt_duration = i_attempt_duration;

    return attempt_response_compound_local_var;
}


void attempt_response_compound_free(attempt_response_compound_t *attempt_response_compound) {
    if(NULL == attempt_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (attempt_response_compound->dt_attempt_start) {
        free(attempt_response_compound->dt_attempt_start);
        attempt_response_compound->dt_attempt_start = NULL;
    }
    if (attempt_response_compound->s_attempt_result) {
        free(attempt_response_compound->s_attempt_result);
        attempt_response_compound->s_attempt_result = NULL;
    }
    free(attempt_response_compound);
}

cJSON *attempt_response_compound_convertToJSON(attempt_response_compound_t *attempt_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // attempt_response_compound->dt_attempt_start
    if (!attempt_response_compound->dt_attempt_start) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtAttemptStart", attempt_response_compound->dt_attempt_start) == NULL) {
    goto fail; //String
    }


    // attempt_response_compound->s_attempt_result
    if (!attempt_response_compound->s_attempt_result) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sAttemptResult", attempt_response_compound->s_attempt_result) == NULL) {
    goto fail; //String
    }


    // attempt_response_compound->i_attempt_duration
    if (!attempt_response_compound->i_attempt_duration) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iAttemptDuration", attempt_response_compound->i_attempt_duration) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attempt_response_compound_t *attempt_response_compound_parseFromJSON(cJSON *attempt_response_compoundJSON){

    attempt_response_compound_t *attempt_response_compound_local_var = NULL;

    // attempt_response_compound->dt_attempt_start
    cJSON *dt_attempt_start = cJSON_GetObjectItemCaseSensitive(attempt_response_compoundJSON, "dtAttemptStart");
    if (!dt_attempt_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_attempt_start))
    {
    goto end; //String
    }

    // attempt_response_compound->s_attempt_result
    cJSON *s_attempt_result = cJSON_GetObjectItemCaseSensitive(attempt_response_compoundJSON, "sAttemptResult");
    if (!s_attempt_result) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attempt_result))
    {
    goto end; //String
    }

    // attempt_response_compound->i_attempt_duration
    cJSON *i_attempt_duration = cJSON_GetObjectItemCaseSensitive(attempt_response_compoundJSON, "iAttemptDuration");
    if (!i_attempt_duration) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_attempt_duration))
    {
    goto end; //Numeric
    }


    attempt_response_compound_local_var = attempt_response_compound_create (
        strdup(dt_attempt_start->valuestring),
        strdup(s_attempt_result->valuestring),
        i_attempt_duration->valuedouble
        );

    return attempt_response_compound_local_var;
end:
    return NULL;

}
