#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_discussionconfiguration_response.h"



static custom_discussionconfiguration_response_t *custom_discussionconfiguration_response_create_internal(
    int *b_discussionconfiguration_completehistorywhenadded,
    int *b_discussionconfiguration_createallowed,
    int *b_discussionconfiguration_deleteallowed,
    int *b_discussionconfiguration_deletediscussionmessageallowed,
    int *b_discussionconfiguration_editdiscussionmessageallowed
    ) {
    custom_discussionconfiguration_response_t *custom_discussionconfiguration_response_local_var = malloc(sizeof(custom_discussionconfiguration_response_t));
    if (!custom_discussionconfiguration_response_local_var) {
        return NULL;
    }
    memset(custom_discussionconfiguration_response_local_var, 0, sizeof(custom_discussionconfiguration_response_t));
    custom_discussionconfiguration_response_local_var->_library_owned = 1;
    custom_discussionconfiguration_response_local_var->b_discussionconfiguration_completehistorywhenadded = b_discussionconfiguration_completehistorywhenadded;
    custom_discussionconfiguration_response_local_var->b_discussionconfiguration_createallowed = b_discussionconfiguration_createallowed;
    custom_discussionconfiguration_response_local_var->b_discussionconfiguration_deleteallowed = b_discussionconfiguration_deleteallowed;
    custom_discussionconfiguration_response_local_var->b_discussionconfiguration_deletediscussionmessageallowed = b_discussionconfiguration_deletediscussionmessageallowed;
    custom_discussionconfiguration_response_local_var->b_discussionconfiguration_editdiscussionmessageallowed = b_discussionconfiguration_editdiscussionmessageallowed;
    return custom_discussionconfiguration_response_local_var;
}

__attribute__((deprecated)) custom_discussionconfiguration_response_t *custom_discussionconfiguration_response_create(
    int *b_discussionconfiguration_completehistorywhenadded,
    int *b_discussionconfiguration_createallowed,
    int *b_discussionconfiguration_deleteallowed,
    int *b_discussionconfiguration_deletediscussionmessageallowed,
    int *b_discussionconfiguration_editdiscussionmessageallowed
    ) {
    int *b_discussionconfiguration_completehistorywhenadded_copy = NULL;
    if (b_discussionconfiguration_completehistorywhenadded) {
        b_discussionconfiguration_completehistorywhenadded_copy = malloc(sizeof(int));
        if (b_discussionconfiguration_completehistorywhenadded_copy) *b_discussionconfiguration_completehistorywhenadded_copy = *b_discussionconfiguration_completehistorywhenadded;
    }
    int *b_discussionconfiguration_createallowed_copy = NULL;
    if (b_discussionconfiguration_createallowed) {
        b_discussionconfiguration_createallowed_copy = malloc(sizeof(int));
        if (b_discussionconfiguration_createallowed_copy) *b_discussionconfiguration_createallowed_copy = *b_discussionconfiguration_createallowed;
    }
    int *b_discussionconfiguration_deleteallowed_copy = NULL;
    if (b_discussionconfiguration_deleteallowed) {
        b_discussionconfiguration_deleteallowed_copy = malloc(sizeof(int));
        if (b_discussionconfiguration_deleteallowed_copy) *b_discussionconfiguration_deleteallowed_copy = *b_discussionconfiguration_deleteallowed;
    }
    int *b_discussionconfiguration_deletediscussionmessageallowed_copy = NULL;
    if (b_discussionconfiguration_deletediscussionmessageallowed) {
        b_discussionconfiguration_deletediscussionmessageallowed_copy = malloc(sizeof(int));
        if (b_discussionconfiguration_deletediscussionmessageallowed_copy) *b_discussionconfiguration_deletediscussionmessageallowed_copy = *b_discussionconfiguration_deletediscussionmessageallowed;
    }
    int *b_discussionconfiguration_editdiscussionmessageallowed_copy = NULL;
    if (b_discussionconfiguration_editdiscussionmessageallowed) {
        b_discussionconfiguration_editdiscussionmessageallowed_copy = malloc(sizeof(int));
        if (b_discussionconfiguration_editdiscussionmessageallowed_copy) *b_discussionconfiguration_editdiscussionmessageallowed_copy = *b_discussionconfiguration_editdiscussionmessageallowed;
    }
    custom_discussionconfiguration_response_t *result = custom_discussionconfiguration_response_create_internal (
        b_discussionconfiguration_completehistorywhenadded_copy,
        b_discussionconfiguration_createallowed_copy,
        b_discussionconfiguration_deleteallowed_copy,
        b_discussionconfiguration_deletediscussionmessageallowed_copy,
        b_discussionconfiguration_editdiscussionmessageallowed_copy
        );
    if (!result) {
        free(b_discussionconfiguration_completehistorywhenadded_copy);
        free(b_discussionconfiguration_createallowed_copy);
        free(b_discussionconfiguration_deleteallowed_copy);
        free(b_discussionconfiguration_deletediscussionmessageallowed_copy);
        free(b_discussionconfiguration_editdiscussionmessageallowed_copy);
    }
    return result;
}

void custom_discussionconfiguration_response_free(custom_discussionconfiguration_response_t *custom_discussionconfiguration_response) {
    if(NULL == custom_discussionconfiguration_response){
        return ;
    }
    if(custom_discussionconfiguration_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_discussionconfiguration_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded) {
        free(custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded);
        custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded = NULL;
    }
    if (custom_discussionconfiguration_response->b_discussionconfiguration_createallowed) {
        free(custom_discussionconfiguration_response->b_discussionconfiguration_createallowed);
        custom_discussionconfiguration_response->b_discussionconfiguration_createallowed = NULL;
    }
    if (custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed) {
        free(custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed);
        custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed = NULL;
    }
    if (custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed) {
        free(custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed);
        custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed = NULL;
    }
    if (custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed) {
        free(custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed);
        custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed = NULL;
    }
    free(custom_discussionconfiguration_response);
}

cJSON *custom_discussionconfiguration_response_convertToJSON(custom_discussionconfiguration_response_t *custom_discussionconfiguration_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded
    if (!custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDiscussionconfigurationCompletehistorywhenadded", *custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded) == NULL) {
    goto fail; //Bool
    }


    // custom_discussionconfiguration_response->b_discussionconfiguration_createallowed
    if (!custom_discussionconfiguration_response->b_discussionconfiguration_createallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDiscussionconfigurationCreateallowed", *custom_discussionconfiguration_response->b_discussionconfiguration_createallowed) == NULL) {
    goto fail; //Bool
    }


    // custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed
    if (!custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDiscussionconfigurationDeleteallowed", *custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed) == NULL) {
    goto fail; //Bool
    }


    // custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed
    if (!custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDiscussionconfigurationDeletediscussionmessageallowed", *custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed) == NULL) {
    goto fail; //Bool
    }


    // custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed
    if (!custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDiscussionconfigurationEditdiscussionmessageallowed", *custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_discussionconfiguration_response_t *custom_discussionconfiguration_response_parseFromJSON(cJSON *custom_discussionconfiguration_responseJSON){

    custom_discussionconfiguration_response_t *custom_discussionconfiguration_response_local_var = NULL;

    // define the local variable for custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded
    int *b_discussionconfiguration_completehistorywhenadded_local_var = NULL;

    // define the local variable for custom_discussionconfiguration_response->b_discussionconfiguration_createallowed
    int *b_discussionconfiguration_createallowed_local_var = NULL;

    // define the local variable for custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed
    int *b_discussionconfiguration_deleteallowed_local_var = NULL;

    // define the local variable for custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed
    int *b_discussionconfiguration_deletediscussionmessageallowed_local_var = NULL;

    // define the local variable for custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed
    int *b_discussionconfiguration_editdiscussionmessageallowed_local_var = NULL;

    // custom_discussionconfiguration_response->b_discussionconfiguration_completehistorywhenadded
    cJSON *b_discussionconfiguration_completehistorywhenadded = cJSON_GetObjectItemCaseSensitive(custom_discussionconfiguration_responseJSON, "bDiscussionconfigurationCompletehistorywhenadded");
    if (cJSON_IsNull(b_discussionconfiguration_completehistorywhenadded)) {
        b_discussionconfiguration_completehistorywhenadded = NULL;
    }
    if (!b_discussionconfiguration_completehistorywhenadded) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussionconfiguration_completehistorywhenadded))
    {
    goto end; //Bool
    }
    b_discussionconfiguration_completehistorywhenadded_local_var = malloc(sizeof(int));
    if(!b_discussionconfiguration_completehistorywhenadded_local_var)
    {
        goto end;
    }
    *b_discussionconfiguration_completehistorywhenadded_local_var = b_discussionconfiguration_completehistorywhenadded->valueint;

    // custom_discussionconfiguration_response->b_discussionconfiguration_createallowed
    cJSON *b_discussionconfiguration_createallowed = cJSON_GetObjectItemCaseSensitive(custom_discussionconfiguration_responseJSON, "bDiscussionconfigurationCreateallowed");
    if (cJSON_IsNull(b_discussionconfiguration_createallowed)) {
        b_discussionconfiguration_createallowed = NULL;
    }
    if (!b_discussionconfiguration_createallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussionconfiguration_createallowed))
    {
    goto end; //Bool
    }
    b_discussionconfiguration_createallowed_local_var = malloc(sizeof(int));
    if(!b_discussionconfiguration_createallowed_local_var)
    {
        goto end;
    }
    *b_discussionconfiguration_createallowed_local_var = b_discussionconfiguration_createallowed->valueint;

    // custom_discussionconfiguration_response->b_discussionconfiguration_deleteallowed
    cJSON *b_discussionconfiguration_deleteallowed = cJSON_GetObjectItemCaseSensitive(custom_discussionconfiguration_responseJSON, "bDiscussionconfigurationDeleteallowed");
    if (cJSON_IsNull(b_discussionconfiguration_deleteallowed)) {
        b_discussionconfiguration_deleteallowed = NULL;
    }
    if (!b_discussionconfiguration_deleteallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussionconfiguration_deleteallowed))
    {
    goto end; //Bool
    }
    b_discussionconfiguration_deleteallowed_local_var = malloc(sizeof(int));
    if(!b_discussionconfiguration_deleteallowed_local_var)
    {
        goto end;
    }
    *b_discussionconfiguration_deleteallowed_local_var = b_discussionconfiguration_deleteallowed->valueint;

    // custom_discussionconfiguration_response->b_discussionconfiguration_deletediscussionmessageallowed
    cJSON *b_discussionconfiguration_deletediscussionmessageallowed = cJSON_GetObjectItemCaseSensitive(custom_discussionconfiguration_responseJSON, "bDiscussionconfigurationDeletediscussionmessageallowed");
    if (cJSON_IsNull(b_discussionconfiguration_deletediscussionmessageallowed)) {
        b_discussionconfiguration_deletediscussionmessageallowed = NULL;
    }
    if (!b_discussionconfiguration_deletediscussionmessageallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussionconfiguration_deletediscussionmessageallowed))
    {
    goto end; //Bool
    }
    b_discussionconfiguration_deletediscussionmessageallowed_local_var = malloc(sizeof(int));
    if(!b_discussionconfiguration_deletediscussionmessageallowed_local_var)
    {
        goto end;
    }
    *b_discussionconfiguration_deletediscussionmessageallowed_local_var = b_discussionconfiguration_deletediscussionmessageallowed->valueint;

    // custom_discussionconfiguration_response->b_discussionconfiguration_editdiscussionmessageallowed
    cJSON *b_discussionconfiguration_editdiscussionmessageallowed = cJSON_GetObjectItemCaseSensitive(custom_discussionconfiguration_responseJSON, "bDiscussionconfigurationEditdiscussionmessageallowed");
    if (cJSON_IsNull(b_discussionconfiguration_editdiscussionmessageallowed)) {
        b_discussionconfiguration_editdiscussionmessageallowed = NULL;
    }
    if (!b_discussionconfiguration_editdiscussionmessageallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussionconfiguration_editdiscussionmessageallowed))
    {
    goto end; //Bool
    }
    b_discussionconfiguration_editdiscussionmessageallowed_local_var = malloc(sizeof(int));
    if(!b_discussionconfiguration_editdiscussionmessageallowed_local_var)
    {
        goto end;
    }
    *b_discussionconfiguration_editdiscussionmessageallowed_local_var = b_discussionconfiguration_editdiscussionmessageallowed->valueint;



    custom_discussionconfiguration_response_local_var = custom_discussionconfiguration_response_create_internal (
        b_discussionconfiguration_completehistorywhenadded_local_var,
        b_discussionconfiguration_createallowed_local_var,
        b_discussionconfiguration_deleteallowed_local_var,
        b_discussionconfiguration_deletediscussionmessageallowed_local_var,
        b_discussionconfiguration_editdiscussionmessageallowed_local_var
        );

    if (!custom_discussionconfiguration_response_local_var) {
        goto end;
    }

    return custom_discussionconfiguration_response_local_var;
end:
    if (b_discussionconfiguration_completehistorywhenadded_local_var) {
        free(b_discussionconfiguration_completehistorywhenadded_local_var);
        b_discussionconfiguration_completehistorywhenadded_local_var = NULL;
    }
    if (b_discussionconfiguration_createallowed_local_var) {
        free(b_discussionconfiguration_createallowed_local_var);
        b_discussionconfiguration_createallowed_local_var = NULL;
    }
    if (b_discussionconfiguration_deleteallowed_local_var) {
        free(b_discussionconfiguration_deleteallowed_local_var);
        b_discussionconfiguration_deleteallowed_local_var = NULL;
    }
    if (b_discussionconfiguration_deletediscussionmessageallowed_local_var) {
        free(b_discussionconfiguration_deletediscussionmessageallowed_local_var);
        b_discussionconfiguration_deletediscussionmessageallowed_local_var = NULL;
    }
    if (b_discussionconfiguration_editdiscussionmessageallowed_local_var) {
        free(b_discussionconfiguration_editdiscussionmessageallowed_local_var);
        b_discussionconfiguration_editdiscussionmessageallowed_local_var = NULL;
    }
    return NULL;

}
