#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_create_object_v1_request.h"



static authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request_create_internal(
    list_t *a_obj_authenticationexternal
    ) {
    authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request_local_var = malloc(sizeof(authenticationexternal_create_object_v1_request_t));
    if (!authenticationexternal_create_object_v1_request_local_var) {
        return NULL;
    }
    authenticationexternal_create_object_v1_request_local_var->a_obj_authenticationexternal = a_obj_authenticationexternal;

    authenticationexternal_create_object_v1_request_local_var->_library_owned = 1;
    return authenticationexternal_create_object_v1_request_local_var;
}

__attribute__((deprecated)) authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request_create(
    list_t *a_obj_authenticationexternal
    ) {
    return authenticationexternal_create_object_v1_request_create_internal (
        a_obj_authenticationexternal
        );
}

void authenticationexternal_create_object_v1_request_free(authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request) {
    if(NULL == authenticationexternal_create_object_v1_request){
        return ;
    }
    if(authenticationexternal_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_create_object_v1_request->a_obj_authenticationexternal) {
        list_ForEach(listEntry, authenticationexternal_create_object_v1_request->a_obj_authenticationexternal) {
            authenticationexternal_request_compound_free(listEntry->data);
        }
        list_freeList(authenticationexternal_create_object_v1_request->a_obj_authenticationexternal);
        authenticationexternal_create_object_v1_request->a_obj_authenticationexternal = NULL;
    }
    free(authenticationexternal_create_object_v1_request);
}

cJSON *authenticationexternal_create_object_v1_request_convertToJSON(authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_create_object_v1_request->a_obj_authenticationexternal
    if (!authenticationexternal_create_object_v1_request->a_obj_authenticationexternal) {
        goto fail;
    }
    cJSON *a_obj_authenticationexternal = cJSON_AddArrayToObject(item, "a_objAuthenticationexternal");
    if(a_obj_authenticationexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_authenticationexternalListEntry;
    if (authenticationexternal_create_object_v1_request->a_obj_authenticationexternal) {
    list_ForEach(a_obj_authenticationexternalListEntry, authenticationexternal_create_object_v1_request->a_obj_authenticationexternal) {
    cJSON *itemLocal = authenticationexternal_request_compound_convertToJSON(a_obj_authenticationexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_authenticationexternal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request_parseFromJSON(cJSON *authenticationexternal_create_object_v1_requestJSON){

    authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request_local_var = NULL;

    // define the local list for authenticationexternal_create_object_v1_request->a_obj_authenticationexternal
    list_t *a_obj_authenticationexternalList = NULL;

    // authenticationexternal_create_object_v1_request->a_obj_authenticationexternal
    cJSON *a_obj_authenticationexternal = cJSON_GetObjectItemCaseSensitive(authenticationexternal_create_object_v1_requestJSON, "a_objAuthenticationexternal");
    if (cJSON_IsNull(a_obj_authenticationexternal)) {
        a_obj_authenticationexternal = NULL;
    }
    if (!a_obj_authenticationexternal) {
        goto end;
    }

    
    cJSON *a_obj_authenticationexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_authenticationexternal)){
        goto end; //nonprimitive container
    }

    a_obj_authenticationexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_authenticationexternal_local_nonprimitive,a_obj_authenticationexternal )
    {
        if(!cJSON_IsObject(a_obj_authenticationexternal_local_nonprimitive)){
            goto end;
        }
        authenticationexternal_request_compound_t *a_obj_authenticationexternalItem = authenticationexternal_request_compound_parseFromJSON(a_obj_authenticationexternal_local_nonprimitive);

        list_addElement(a_obj_authenticationexternalList, a_obj_authenticationexternalItem);
    }


    authenticationexternal_create_object_v1_request_local_var = authenticationexternal_create_object_v1_request_create_internal (
        a_obj_authenticationexternalList
        );

    return authenticationexternal_create_object_v1_request_local_var;
end:
    if (a_obj_authenticationexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_authenticationexternalList) {
            authenticationexternal_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_authenticationexternalList);
        a_obj_authenticationexternalList = NULL;
    }
    return NULL;

}
