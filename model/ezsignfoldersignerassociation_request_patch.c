#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request_patch.h"



ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_create(
    char *t_ezsignfoldersignerassociation_message
    ) {
    ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_patch_t));
    if (!ezsignfoldersignerassociation_request_patch_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_request_patch_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;

    return ezsignfoldersignerassociation_request_patch_local_var;
}


void ezsignfoldersignerassociation_request_patch_free(ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch) {
    if(NULL == ezsignfoldersignerassociation_request_patch){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_request_patch->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_request_patch->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_request_patch->t_ezsignfoldersignerassociation_message = NULL;
    }
    free(ezsignfoldersignerassociation_request_patch);
}

cJSON *ezsignfoldersignerassociation_request_patch_convertToJSON(ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_request_patch->t_ezsignfoldersignerassociation_message
    if(ezsignfoldersignerassociation_request_patch->t_ezsignfoldersignerassociation_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_request_patch->t_ezsignfoldersignerassociation_message) == NULL) {
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

ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_patchJSON){

    ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_local_var = NULL;

    // ezsignfoldersignerassociation_request_patch->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_patchJSON, "tEzsignfoldersignerassociationMessage");
    if (t_ezsignfoldersignerassociation_message) { 
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }
    }


    ezsignfoldersignerassociation_request_patch_local_var = ezsignfoldersignerassociation_request_patch_create (
        t_ezsignfoldersignerassociation_message ? strdup(t_ezsignfoldersignerassociation_message->valuestring) : NULL
        );

    return ezsignfoldersignerassociation_request_patch_local_var;
end:
    return NULL;

}
