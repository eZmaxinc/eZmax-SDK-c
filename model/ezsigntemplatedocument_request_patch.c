#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_request_patch.h"



static ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch_create_internal(
    char *s_ezsigntemplatedocument_name
    ) {
    ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch_local_var = malloc(sizeof(ezsigntemplatedocument_request_patch_t));
    if (!ezsigntemplatedocument_request_patch_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_request_patch_local_var->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;

    ezsigntemplatedocument_request_patch_local_var->_library_owned = 1;
    return ezsigntemplatedocument_request_patch_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch_create(
    char *s_ezsigntemplatedocument_name
    ) {
    return ezsigntemplatedocument_request_patch_create_internal (
        s_ezsigntemplatedocument_name
        );
}

void ezsigntemplatedocument_request_patch_free(ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch) {
    if(NULL == ezsigntemplatedocument_request_patch){
        return ;
    }
    if(ezsigntemplatedocument_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_request_patch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_request_patch->s_ezsigntemplatedocument_name) {
        free(ezsigntemplatedocument_request_patch->s_ezsigntemplatedocument_name);
        ezsigntemplatedocument_request_patch->s_ezsigntemplatedocument_name = NULL;
    }
    free(ezsigntemplatedocument_request_patch);
}

cJSON *ezsigntemplatedocument_request_patch_convertToJSON(ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_request_patch->s_ezsigntemplatedocument_name
    if(ezsigntemplatedocument_request_patch->s_ezsigntemplatedocument_name) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentName", ezsigntemplatedocument_request_patch->s_ezsigntemplatedocument_name) == NULL) {
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

ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch_parseFromJSON(cJSON *ezsigntemplatedocument_request_patchJSON){

    ezsigntemplatedocument_request_patch_t *ezsigntemplatedocument_request_patch_local_var = NULL;

    // ezsigntemplatedocument_request_patch->s_ezsigntemplatedocument_name
    cJSON *s_ezsigntemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_patchJSON, "sEzsigntemplatedocumentName");
    if (cJSON_IsNull(s_ezsigntemplatedocument_name)) {
        s_ezsigntemplatedocument_name = NULL;
    }
    if (s_ezsigntemplatedocument_name) { 
    if(!cJSON_IsString(s_ezsigntemplatedocument_name) && !cJSON_IsNull(s_ezsigntemplatedocument_name))
    {
    goto end; //String
    }
    }


    ezsigntemplatedocument_request_patch_local_var = ezsigntemplatedocument_request_patch_create_internal (
        s_ezsigntemplatedocument_name && !cJSON_IsNull(s_ezsigntemplatedocument_name) ? strdup(s_ezsigntemplatedocument_name->valuestring) : NULL
        );

    return ezsigntemplatedocument_request_patch_local_var;
end:
    return NULL;

}
