#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_user_user_created_all_of.h"



webhook_user_user_created_all_of_t *webhook_user_user_created_all_of_create(
    user_response_compound_t *obj_user
    ) {
    webhook_user_user_created_all_of_t *webhook_user_user_created_all_of_local_var = malloc(sizeof(webhook_user_user_created_all_of_t));
    if (!webhook_user_user_created_all_of_local_var) {
        return NULL;
    }
    webhook_user_user_created_all_of_local_var->obj_user = obj_user;

    return webhook_user_user_created_all_of_local_var;
}


void webhook_user_user_created_all_of_free(webhook_user_user_created_all_of_t *webhook_user_user_created_all_of) {
    if(NULL == webhook_user_user_created_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_user_user_created_all_of->obj_user) {
        user_response_compound_free(webhook_user_user_created_all_of->obj_user);
        webhook_user_user_created_all_of->obj_user = NULL;
    }
    free(webhook_user_user_created_all_of);
}

cJSON *webhook_user_user_created_all_of_convertToJSON(webhook_user_user_created_all_of_t *webhook_user_user_created_all_of) {
    cJSON *item = cJSON_CreateObject();

    // webhook_user_user_created_all_of->obj_user
    if (!webhook_user_user_created_all_of->obj_user) {
        goto fail;
    }
    cJSON *obj_user_local_JSON = user_response_compound_convertToJSON(webhook_user_user_created_all_of->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_user_user_created_all_of_t *webhook_user_user_created_all_of_parseFromJSON(cJSON *webhook_user_user_created_all_ofJSON){

    webhook_user_user_created_all_of_t *webhook_user_user_created_all_of_local_var = NULL;

    // define the local variable for webhook_user_user_created_all_of->obj_user
    user_response_compound_t *obj_user_local_nonprim = NULL;

    // webhook_user_user_created_all_of->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(webhook_user_user_created_all_ofJSON, "objUser");
    if (!obj_user) {
        goto end;
    }

    
    obj_user_local_nonprim = user_response_compound_parseFromJSON(obj_user); //nonprimitive


    webhook_user_user_created_all_of_local_var = webhook_user_user_created_all_of_create (
        obj_user_local_nonprim
        );

    return webhook_user_user_created_all_of_local_var;
end:
    if (obj_user_local_nonprim) {
        user_response_compound_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    return NULL;

}
