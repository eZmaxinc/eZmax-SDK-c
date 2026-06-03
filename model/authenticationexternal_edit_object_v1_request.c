#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_edit_object_v1_request.h"



static authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request_create_internal(
    authenticationexternal_request_compound_t *obj_authenticationexternal
    ) {
    authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request_local_var = malloc(sizeof(authenticationexternal_edit_object_v1_request_t));
    if (!authenticationexternal_edit_object_v1_request_local_var) {
        return NULL;
    }
    memset(authenticationexternal_edit_object_v1_request_local_var, 0, sizeof(authenticationexternal_edit_object_v1_request_t));
    authenticationexternal_edit_object_v1_request_local_var->_library_owned = 1;
    authenticationexternal_edit_object_v1_request_local_var->obj_authenticationexternal = obj_authenticationexternal;
    return authenticationexternal_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request_create(
    authenticationexternal_request_compound_t *obj_authenticationexternal
    ) {
    authenticationexternal_edit_object_v1_request_t *result = authenticationexternal_edit_object_v1_request_create_internal (
        obj_authenticationexternal
        );
    if (!result) {
    }
    return result;
}

void authenticationexternal_edit_object_v1_request_free(authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request) {
    if(NULL == authenticationexternal_edit_object_v1_request){
        return ;
    }
    if(authenticationexternal_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_edit_object_v1_request->obj_authenticationexternal) {
        authenticationexternal_request_compound_free(authenticationexternal_edit_object_v1_request->obj_authenticationexternal);
        authenticationexternal_edit_object_v1_request->obj_authenticationexternal = NULL;
    }
    free(authenticationexternal_edit_object_v1_request);
}

cJSON *authenticationexternal_edit_object_v1_request_convertToJSON(authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_edit_object_v1_request->obj_authenticationexternal
    if (!authenticationexternal_edit_object_v1_request->obj_authenticationexternal) {
        goto fail;
    }
    cJSON *obj_authenticationexternal_local_JSON = authenticationexternal_request_compound_convertToJSON(authenticationexternal_edit_object_v1_request->obj_authenticationexternal);
    if(obj_authenticationexternal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAuthenticationexternal", obj_authenticationexternal_local_JSON);
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

authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request_parseFromJSON(cJSON *authenticationexternal_edit_object_v1_requestJSON){

    authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request_local_var = NULL;

    // define the local variable for authenticationexternal_edit_object_v1_request->obj_authenticationexternal
    authenticationexternal_request_compound_t *obj_authenticationexternal_local_nonprim = NULL;

    // authenticationexternal_edit_object_v1_request->obj_authenticationexternal
    cJSON *obj_authenticationexternal = cJSON_GetObjectItemCaseSensitive(authenticationexternal_edit_object_v1_requestJSON, "objAuthenticationexternal");
    if (cJSON_IsNull(obj_authenticationexternal)) {
        obj_authenticationexternal = NULL;
    }
    if (!obj_authenticationexternal) {
        goto end;
    }

    
    obj_authenticationexternal_local_nonprim = authenticationexternal_request_compound_parseFromJSON(obj_authenticationexternal); //nonprimitive



    authenticationexternal_edit_object_v1_request_local_var = authenticationexternal_edit_object_v1_request_create_internal (
        obj_authenticationexternal_local_nonprim
        );

    if (!authenticationexternal_edit_object_v1_request_local_var) {
        goto end;
    }

    return authenticationexternal_edit_object_v1_request_local_var;
end:
    if (obj_authenticationexternal_local_nonprim) {
        authenticationexternal_request_compound_free(obj_authenticationexternal_local_nonprim);
        obj_authenticationexternal_local_nonprim = NULL;
    }
    return NULL;

}
