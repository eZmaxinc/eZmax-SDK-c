#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_impersonate_v1_request.h"



static user_impersonate_v1_request_t *user_impersonate_v1_request_create_internal(
    int *fki_user_id,
    int *i_expiration_minutes
    ) {
    user_impersonate_v1_request_t *user_impersonate_v1_request_local_var = malloc(sizeof(user_impersonate_v1_request_t));
    if (!user_impersonate_v1_request_local_var) {
        return NULL;
    }
    memset(user_impersonate_v1_request_local_var, 0, sizeof(user_impersonate_v1_request_t));
    user_impersonate_v1_request_local_var->_library_owned = 1;
    user_impersonate_v1_request_local_var->fki_user_id = fki_user_id;
    user_impersonate_v1_request_local_var->i_expiration_minutes = i_expiration_minutes;
    return user_impersonate_v1_request_local_var;
}

__attribute__((deprecated)) user_impersonate_v1_request_t *user_impersonate_v1_request_create(
    int *fki_user_id,
    int *i_expiration_minutes
    ) {
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *i_expiration_minutes_copy = NULL;
    if (i_expiration_minutes) {
        i_expiration_minutes_copy = malloc(sizeof(int));
        if (i_expiration_minutes_copy) *i_expiration_minutes_copy = *i_expiration_minutes;
    }
    user_impersonate_v1_request_t *result = user_impersonate_v1_request_create_internal (
        fki_user_id_copy,
        i_expiration_minutes_copy
        );
    if (!result) {
        free(fki_user_id_copy);
        free(i_expiration_minutes_copy);
    }
    return result;
}

void user_impersonate_v1_request_free(user_impersonate_v1_request_t *user_impersonate_v1_request) {
    if(NULL == user_impersonate_v1_request){
        return ;
    }
    if(user_impersonate_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_impersonate_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_impersonate_v1_request->fki_user_id) {
        free(user_impersonate_v1_request->fki_user_id);
        user_impersonate_v1_request->fki_user_id = NULL;
    }
    if (user_impersonate_v1_request->i_expiration_minutes) {
        free(user_impersonate_v1_request->i_expiration_minutes);
        user_impersonate_v1_request->i_expiration_minutes = NULL;
    }
    free(user_impersonate_v1_request);
}

cJSON *user_impersonate_v1_request_convertToJSON(user_impersonate_v1_request_t *user_impersonate_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // user_impersonate_v1_request->fki_user_id
    if (!user_impersonate_v1_request->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", *user_impersonate_v1_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // user_impersonate_v1_request->i_expiration_minutes
    if (!user_impersonate_v1_request->i_expiration_minutes) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iExpirationMinutes", *user_impersonate_v1_request->i_expiration_minutes) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_impersonate_v1_request_t *user_impersonate_v1_request_parseFromJSON(cJSON *user_impersonate_v1_requestJSON){

    user_impersonate_v1_request_t *user_impersonate_v1_request_local_var = NULL;

    // define the local variable for user_impersonate_v1_request->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for user_impersonate_v1_request->i_expiration_minutes
    int *i_expiration_minutes_local_var = NULL;

    // user_impersonate_v1_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(user_impersonate_v1_requestJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;

    // user_impersonate_v1_request->i_expiration_minutes
    cJSON *i_expiration_minutes = cJSON_GetObjectItemCaseSensitive(user_impersonate_v1_requestJSON, "iExpirationMinutes");
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



    user_impersonate_v1_request_local_var = user_impersonate_v1_request_create_internal (
        fki_user_id_local_var,
        i_expiration_minutes_local_var
        );

    if (!user_impersonate_v1_request_local_var) {
        goto end;
    }

    return user_impersonate_v1_request_local_var;
end:
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (i_expiration_minutes_local_var) {
        free(i_expiration_minutes_local_var);
        i_expiration_minutes_local_var = NULL;
    }
    return NULL;

}
