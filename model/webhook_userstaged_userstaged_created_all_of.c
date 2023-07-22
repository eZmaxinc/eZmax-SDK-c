#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_userstaged_userstaged_created_all_of.h"



webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of_create(
    userstaged_response_compound_t *obj_userstaged
    ) {
    webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of_local_var = malloc(sizeof(webhook_userstaged_userstaged_created_all_of_t));
    if (!webhook_userstaged_userstaged_created_all_of_local_var) {
        return NULL;
    }
    webhook_userstaged_userstaged_created_all_of_local_var->obj_userstaged = obj_userstaged;

    return webhook_userstaged_userstaged_created_all_of_local_var;
}


void webhook_userstaged_userstaged_created_all_of_free(webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of) {
    if(NULL == webhook_userstaged_userstaged_created_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_userstaged_userstaged_created_all_of->obj_userstaged) {
        userstaged_response_compound_free(webhook_userstaged_userstaged_created_all_of->obj_userstaged);
        webhook_userstaged_userstaged_created_all_of->obj_userstaged = NULL;
    }
    free(webhook_userstaged_userstaged_created_all_of);
}

cJSON *webhook_userstaged_userstaged_created_all_of_convertToJSON(webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of) {
    cJSON *item = cJSON_CreateObject();

    // webhook_userstaged_userstaged_created_all_of->obj_userstaged
    if (!webhook_userstaged_userstaged_created_all_of->obj_userstaged) {
        goto fail;
    }
    cJSON *obj_userstaged_local_JSON = userstaged_response_compound_convertToJSON(webhook_userstaged_userstaged_created_all_of->obj_userstaged);
    if(obj_userstaged_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserstaged", obj_userstaged_local_JSON);
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

webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of_parseFromJSON(cJSON *webhook_userstaged_userstaged_created_all_ofJSON){

    webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of_local_var = NULL;

    // define the local variable for webhook_userstaged_userstaged_created_all_of->obj_userstaged
    userstaged_response_compound_t *obj_userstaged_local_nonprim = NULL;

    // webhook_userstaged_userstaged_created_all_of->obj_userstaged
    cJSON *obj_userstaged = cJSON_GetObjectItemCaseSensitive(webhook_userstaged_userstaged_created_all_ofJSON, "objUserstaged");
    if (!obj_userstaged) {
        goto end;
    }

    
    obj_userstaged_local_nonprim = userstaged_response_compound_parseFromJSON(obj_userstaged); //nonprimitive


    webhook_userstaged_userstaged_created_all_of_local_var = webhook_userstaged_userstaged_created_all_of_create (
        obj_userstaged_local_nonprim
        );

    return webhook_userstaged_userstaged_created_all_of_local_var;
end:
    if (obj_userstaged_local_nonprim) {
        userstaged_response_compound_free(obj_userstaged_local_nonprim);
        obj_userstaged_local_nonprim = NULL;
    }
    return NULL;

}
