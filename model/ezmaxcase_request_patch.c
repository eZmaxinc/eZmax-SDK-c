#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcase_request_patch.h"



static ezmaxcase_request_patch_t *ezmaxcase_request_patch_create_internal(
    int fki_ezmaxcasequeue_id,
    int fki_ezmaxcasepriority_id,
    int fki_ezmaxcasestate_id,
    int fki_ezmaxfeaturerequest_id,
    int fki_ezmaxknownissue_id,
    int fki_user_id_owner
    ) {
    ezmaxcase_request_patch_t *ezmaxcase_request_patch_local_var = malloc(sizeof(ezmaxcase_request_patch_t));
    if (!ezmaxcase_request_patch_local_var) {
        return NULL;
    }
    ezmaxcase_request_patch_local_var->fki_ezmaxcasequeue_id = fki_ezmaxcasequeue_id;
    ezmaxcase_request_patch_local_var->fki_ezmaxcasepriority_id = fki_ezmaxcasepriority_id;
    ezmaxcase_request_patch_local_var->fki_ezmaxcasestate_id = fki_ezmaxcasestate_id;
    ezmaxcase_request_patch_local_var->fki_ezmaxfeaturerequest_id = fki_ezmaxfeaturerequest_id;
    ezmaxcase_request_patch_local_var->fki_ezmaxknownissue_id = fki_ezmaxknownissue_id;
    ezmaxcase_request_patch_local_var->fki_user_id_owner = fki_user_id_owner;

    ezmaxcase_request_patch_local_var->_library_owned = 1;
    return ezmaxcase_request_patch_local_var;
}

__attribute__((deprecated)) ezmaxcase_request_patch_t *ezmaxcase_request_patch_create(
    int fki_ezmaxcasequeue_id,
    int fki_ezmaxcasepriority_id,
    int fki_ezmaxcasestate_id,
    int fki_ezmaxfeaturerequest_id,
    int fki_ezmaxknownissue_id,
    int fki_user_id_owner
    ) {
    return ezmaxcase_request_patch_create_internal (
        fki_ezmaxcasequeue_id,
        fki_ezmaxcasepriority_id,
        fki_ezmaxcasestate_id,
        fki_ezmaxfeaturerequest_id,
        fki_ezmaxknownissue_id,
        fki_user_id_owner
        );
}

void ezmaxcase_request_patch_free(ezmaxcase_request_patch_t *ezmaxcase_request_patch) {
    if(NULL == ezmaxcase_request_patch){
        return ;
    }
    if(ezmaxcase_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcase_request_patch_free");
        return ;
    }
    listEntry_t *listEntry;
    free(ezmaxcase_request_patch);
}

cJSON *ezmaxcase_request_patch_convertToJSON(ezmaxcase_request_patch_t *ezmaxcase_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcase_request_patch->fki_ezmaxcasequeue_id
    if(ezmaxcase_request_patch->fki_ezmaxcasequeue_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxcasequeueID", ezmaxcase_request_patch->fki_ezmaxcasequeue_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxcase_request_patch->fki_ezmaxcasepriority_id
    if(ezmaxcase_request_patch->fki_ezmaxcasepriority_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxcasepriorityID", ezmaxcase_request_patch->fki_ezmaxcasepriority_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxcase_request_patch->fki_ezmaxcasestate_id
    if(ezmaxcase_request_patch->fki_ezmaxcasestate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxcasestateID", ezmaxcase_request_patch->fki_ezmaxcasestate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxcase_request_patch->fki_ezmaxfeaturerequest_id
    if(ezmaxcase_request_patch->fki_ezmaxfeaturerequest_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxfeaturerequestID", ezmaxcase_request_patch->fki_ezmaxfeaturerequest_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxcase_request_patch->fki_ezmaxknownissue_id
    if(ezmaxcase_request_patch->fki_ezmaxknownissue_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxknownissueID", ezmaxcase_request_patch->fki_ezmaxknownissue_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxcase_request_patch->fki_user_id_owner
    if(ezmaxcase_request_patch->fki_user_id_owner) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDOwner", ezmaxcase_request_patch->fki_user_id_owner) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxcase_request_patch_t *ezmaxcase_request_patch_parseFromJSON(cJSON *ezmaxcase_request_patchJSON){

    ezmaxcase_request_patch_t *ezmaxcase_request_patch_local_var = NULL;

    // ezmaxcase_request_patch->fki_ezmaxcasequeue_id
    cJSON *fki_ezmaxcasequeue_id = cJSON_GetObjectItemCaseSensitive(ezmaxcase_request_patchJSON, "fkiEzmaxcasequeueID");
    if (cJSON_IsNull(fki_ezmaxcasequeue_id)) {
        fki_ezmaxcasequeue_id = NULL;
    }
    if (fki_ezmaxcasequeue_id) { 
    if(!cJSON_IsNumber(fki_ezmaxcasequeue_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxcase_request_patch->fki_ezmaxcasepriority_id
    cJSON *fki_ezmaxcasepriority_id = cJSON_GetObjectItemCaseSensitive(ezmaxcase_request_patchJSON, "fkiEzmaxcasepriorityID");
    if (cJSON_IsNull(fki_ezmaxcasepriority_id)) {
        fki_ezmaxcasepriority_id = NULL;
    }
    if (fki_ezmaxcasepriority_id) { 
    if(!cJSON_IsNumber(fki_ezmaxcasepriority_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxcase_request_patch->fki_ezmaxcasestate_id
    cJSON *fki_ezmaxcasestate_id = cJSON_GetObjectItemCaseSensitive(ezmaxcase_request_patchJSON, "fkiEzmaxcasestateID");
    if (cJSON_IsNull(fki_ezmaxcasestate_id)) {
        fki_ezmaxcasestate_id = NULL;
    }
    if (fki_ezmaxcasestate_id) { 
    if(!cJSON_IsNumber(fki_ezmaxcasestate_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxcase_request_patch->fki_ezmaxfeaturerequest_id
    cJSON *fki_ezmaxfeaturerequest_id = cJSON_GetObjectItemCaseSensitive(ezmaxcase_request_patchJSON, "fkiEzmaxfeaturerequestID");
    if (cJSON_IsNull(fki_ezmaxfeaturerequest_id)) {
        fki_ezmaxfeaturerequest_id = NULL;
    }
    if (fki_ezmaxfeaturerequest_id) { 
    if(!cJSON_IsNumber(fki_ezmaxfeaturerequest_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxcase_request_patch->fki_ezmaxknownissue_id
    cJSON *fki_ezmaxknownissue_id = cJSON_GetObjectItemCaseSensitive(ezmaxcase_request_patchJSON, "fkiEzmaxknownissueID");
    if (cJSON_IsNull(fki_ezmaxknownissue_id)) {
        fki_ezmaxknownissue_id = NULL;
    }
    if (fki_ezmaxknownissue_id) { 
    if(!cJSON_IsNumber(fki_ezmaxknownissue_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxcase_request_patch->fki_user_id_owner
    cJSON *fki_user_id_owner = cJSON_GetObjectItemCaseSensitive(ezmaxcase_request_patchJSON, "fkiUserIDOwner");
    if (cJSON_IsNull(fki_user_id_owner)) {
        fki_user_id_owner = NULL;
    }
    if (fki_user_id_owner) { 
    if(!cJSON_IsNumber(fki_user_id_owner))
    {
    goto end; //Numeric
    }
    }


    ezmaxcase_request_patch_local_var = ezmaxcase_request_patch_create_internal (
        fki_ezmaxcasequeue_id ? fki_ezmaxcasequeue_id->valuedouble : 0,
        fki_ezmaxcasepriority_id ? fki_ezmaxcasepriority_id->valuedouble : 0,
        fki_ezmaxcasestate_id ? fki_ezmaxcasestate_id->valuedouble : 0,
        fki_ezmaxfeaturerequest_id ? fki_ezmaxfeaturerequest_id->valuedouble : 0,
        fki_ezmaxknownissue_id ? fki_ezmaxknownissue_id->valuedouble : 0,
        fki_user_id_owner ? fki_user_id_owner->valuedouble : 0
        );

    return ezmaxcase_request_patch_local_var;
end:
    return NULL;

}
