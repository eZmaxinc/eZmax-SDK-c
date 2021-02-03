#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_ezsign_folder_completed_all_of.h"



webhook_ezsign_folder_completed_all_of_t *webhook_ezsign_folder_completed_all_of_create(
    ezsignfolder_response_t *obj_ezsignfolder
    ) {
    webhook_ezsign_folder_completed_all_of_t *webhook_ezsign_folder_completed_all_of_local_var = malloc(sizeof(webhook_ezsign_folder_completed_all_of_t));
    if (!webhook_ezsign_folder_completed_all_of_local_var) {
        return NULL;
    }
    webhook_ezsign_folder_completed_all_of_local_var->obj_ezsignfolder = obj_ezsignfolder;

    return webhook_ezsign_folder_completed_all_of_local_var;
}


void webhook_ezsign_folder_completed_all_of_free(webhook_ezsign_folder_completed_all_of_t *webhook_ezsign_folder_completed_all_of) {
    if(NULL == webhook_ezsign_folder_completed_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_ezsign_folder_completed_all_of->obj_ezsignfolder) {
        ezsignfolder_response_free(webhook_ezsign_folder_completed_all_of->obj_ezsignfolder);
        webhook_ezsign_folder_completed_all_of->obj_ezsignfolder = NULL;
    }
    free(webhook_ezsign_folder_completed_all_of);
}

cJSON *webhook_ezsign_folder_completed_all_of_convertToJSON(webhook_ezsign_folder_completed_all_of_t *webhook_ezsign_folder_completed_all_of) {
    cJSON *item = cJSON_CreateObject();

    // webhook_ezsign_folder_completed_all_of->obj_ezsignfolder
    if (!webhook_ezsign_folder_completed_all_of->obj_ezsignfolder) {
        goto fail;
    }
    
    cJSON *obj_ezsignfolder_local_JSON = ezsignfolder_response_convertToJSON(webhook_ezsign_folder_completed_all_of->obj_ezsignfolder);
    if(obj_ezsignfolder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfolder", obj_ezsignfolder_local_JSON);
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

webhook_ezsign_folder_completed_all_of_t *webhook_ezsign_folder_completed_all_of_parseFromJSON(cJSON *webhook_ezsign_folder_completed_all_ofJSON){

    webhook_ezsign_folder_completed_all_of_t *webhook_ezsign_folder_completed_all_of_local_var = NULL;

    // webhook_ezsign_folder_completed_all_of->obj_ezsignfolder
    cJSON *obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_folder_completed_all_ofJSON, "objEzsignfolder");
    if (!obj_ezsignfolder) {
        goto end;
    }

    ezsignfolder_response_t *obj_ezsignfolder_local_nonprim = NULL;
    
    obj_ezsignfolder_local_nonprim = ezsignfolder_response_parseFromJSON(obj_ezsignfolder); //nonprimitive


    webhook_ezsign_folder_completed_all_of_local_var = webhook_ezsign_folder_completed_all_of_create (
        obj_ezsignfolder_local_nonprim
        );

    return webhook_ezsign_folder_completed_all_of_local_var;
end:
    if (obj_ezsignfolder_local_nonprim) {
        ezsignfolder_response_free(obj_ezsignfolder_local_nonprim);
        obj_ezsignfolder_local_nonprim = NULL;
    }
    return NULL;

}
