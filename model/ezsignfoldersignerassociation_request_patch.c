#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request_patch.h"



static ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_create_internal(
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message
    ) {
    ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_patch_t));
    if (!ezsignfoldersignerassociation_request_patch_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_request_patch_local_var, 0, sizeof(ezsignfoldersignerassociation_request_patch_t));
    ezsignfoldersignerassociation_request_patch_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_request_patch_local_var->e_ezsignfoldersignerassociation_role = e_ezsignfoldersignerassociation_role;
    ezsignfoldersignerassociation_request_patch_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    return ezsignfoldersignerassociation_request_patch_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_create(
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message
    ) {
    ezsignfoldersignerassociation_request_patch_t *result = ezsignfoldersignerassociation_request_patch_create_internal (
        e_ezsignfoldersignerassociation_role,
        t_ezsignfoldersignerassociation_message
        );
    if (!result) {
    }
    return result;
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

    // ezsignfoldersignerassociation_request_patch->e_ezsignfoldersignerassociation_role
    if(ezsignfoldersignerassociation_request_patch->e_ezsignfoldersignerassociation_role != ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__NULL) {
    cJSON *e_ezsignfoldersignerassociation_role_local_JSON = field_e_ezsignfoldersignerassociation_role_convertToJSON(ezsignfoldersignerassociation_request_patch->e_ezsignfoldersignerassociation_role);
    if(e_ezsignfoldersignerassociation_role_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldersignerassociationRole", e_ezsignfoldersignerassociation_role_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


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

    // define the local variable for ezsignfoldersignerassociation_request_patch->e_ezsignfoldersignerassociation_role
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role_local_nonprim = 0;

    char *t_ezsignfoldersignerassociation_message_local_str = NULL;

    // ezsignfoldersignerassociation_request_patch->e_ezsignfoldersignerassociation_role
    cJSON *e_ezsignfoldersignerassociation_role = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_patchJSON, "eEzsignfoldersignerassociationRole");
    if (cJSON_IsNull(e_ezsignfoldersignerassociation_role)) {
        e_ezsignfoldersignerassociation_role = NULL;
    }
    if (e_ezsignfoldersignerassociation_role) { 
    e_ezsignfoldersignerassociation_role_local_nonprim = field_e_ezsignfoldersignerassociation_role_parseFromJSON(e_ezsignfoldersignerassociation_role); //custom
    }

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


    if (t_ezsignfoldersignerassociation_message && !cJSON_IsNull(t_ezsignfoldersignerassociation_message)) t_ezsignfoldersignerassociation_message_local_str = strdup(t_ezsignfoldersignerassociation_message->valuestring);

    ezsignfoldersignerassociation_request_patch_local_var = ezsignfoldersignerassociation_request_patch_create_internal (
        e_ezsignfoldersignerassociation_role ? e_ezsignfoldersignerassociation_role_local_nonprim : 0,
        t_ezsignfoldersignerassociation_message_local_str
        );

    if (!ezsignfoldersignerassociation_request_patch_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_request_patch_local_var;
end:
    if (e_ezsignfoldersignerassociation_role_local_nonprim) {
        e_ezsignfoldersignerassociation_role_local_nonprim = 0;
    }
    if (t_ezsignfoldersignerassociation_message_local_str) {
        free(t_ezsignfoldersignerassociation_message_local_str);
        t_ezsignfoldersignerassociation_message_local_str = NULL;
    }
    return NULL;

}
