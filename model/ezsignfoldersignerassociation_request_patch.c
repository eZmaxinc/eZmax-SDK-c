#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request_patch.h"



static ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_create_internal(
    char *t_ezsignfoldersignerassociation_message
    ) {
    ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_patch_t));
    if (!ezsignfoldersignerassociation_request_patch_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_request_patch_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;

    ezsignfoldersignerassociation_request_patch_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_request_patch_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_create(
    char *t_ezsignfoldersignerassociation_message
    ) {
    return ezsignfoldersignerassociation_request_patch_create_internal (
        t_ezsignfoldersignerassociation_message
        );
}

void ezsignfoldersignerassociation_request_patch_free(ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch) {
    if(NULL == ezsignfoldersignerassociation_request_patch){
        return ;
    }
    if(ezsignfoldersignerassociation_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_request_patch_free");
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
    if (cJSON_IsNull(t_ezsignfoldersignerassociation_message)) {
        t_ezsignfoldersignerassociation_message = NULL;
    }
    if (t_ezsignfoldersignerassociation_message) { 
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message) && !cJSON_IsNull(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }
    }


    ezsignfoldersignerassociation_request_patch_local_var = ezsignfoldersignerassociation_request_patch_create_internal (
        t_ezsignfoldersignerassociation_message && !cJSON_IsNull(t_ezsignfoldersignerassociation_message) ? strdup(t_ezsignfoldersignerassociation_message->valuestring) : NULL
        );

    return ezsignfoldersignerassociation_request_patch_local_var;
end:
    return NULL;

}
