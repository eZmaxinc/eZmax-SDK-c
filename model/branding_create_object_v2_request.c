#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_create_object_v2_request.h"



static branding_create_object_v2_request_t *branding_create_object_v2_request_create_internal(
    list_t *a_obj_branding
    ) {
    branding_create_object_v2_request_t *branding_create_object_v2_request_local_var = malloc(sizeof(branding_create_object_v2_request_t));
    if (!branding_create_object_v2_request_local_var) {
        return NULL;
    }
    branding_create_object_v2_request_local_var->a_obj_branding = a_obj_branding;

    branding_create_object_v2_request_local_var->_library_owned = 1;
    return branding_create_object_v2_request_local_var;
}

__attribute__((deprecated)) branding_create_object_v2_request_t *branding_create_object_v2_request_create(
    list_t *a_obj_branding
    ) {
    return branding_create_object_v2_request_create_internal (
        a_obj_branding
        );
}

void branding_create_object_v2_request_free(branding_create_object_v2_request_t *branding_create_object_v2_request) {
    if(NULL == branding_create_object_v2_request){
        return ;
    }
    if(branding_create_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_create_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_create_object_v2_request->a_obj_branding) {
        list_ForEach(listEntry, branding_create_object_v2_request->a_obj_branding) {
            branding_request_compound_v2_free(listEntry->data);
        }
        list_freeList(branding_create_object_v2_request->a_obj_branding);
        branding_create_object_v2_request->a_obj_branding = NULL;
    }
    free(branding_create_object_v2_request);
}

cJSON *branding_create_object_v2_request_convertToJSON(branding_create_object_v2_request_t *branding_create_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // branding_create_object_v2_request->a_obj_branding
    if (!branding_create_object_v2_request->a_obj_branding) {
        goto fail;
    }
    cJSON *a_obj_branding = cJSON_AddArrayToObject(item, "a_objBranding");
    if(a_obj_branding == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_brandingListEntry;
    if (branding_create_object_v2_request->a_obj_branding) {
    list_ForEach(a_obj_brandingListEntry, branding_create_object_v2_request->a_obj_branding) {
    cJSON *itemLocal = branding_request_compound_v2_convertToJSON(a_obj_brandingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_branding, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_create_object_v2_request_t *branding_create_object_v2_request_parseFromJSON(cJSON *branding_create_object_v2_requestJSON){

    branding_create_object_v2_request_t *branding_create_object_v2_request_local_var = NULL;

    // define the local list for branding_create_object_v2_request->a_obj_branding
    list_t *a_obj_brandingList = NULL;

    // branding_create_object_v2_request->a_obj_branding
    cJSON *a_obj_branding = cJSON_GetObjectItemCaseSensitive(branding_create_object_v2_requestJSON, "a_objBranding");
    if (cJSON_IsNull(a_obj_branding)) {
        a_obj_branding = NULL;
    }
    if (!a_obj_branding) {
        goto end;
    }

    
    cJSON *a_obj_branding_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_branding)){
        goto end; //nonprimitive container
    }

    a_obj_brandingList = list_createList();

    cJSON_ArrayForEach(a_obj_branding_local_nonprimitive,a_obj_branding )
    {
        if(!cJSON_IsObject(a_obj_branding_local_nonprimitive)){
            goto end;
        }
        branding_request_compound_v2_t *a_obj_brandingItem = branding_request_compound_v2_parseFromJSON(a_obj_branding_local_nonprimitive);

        list_addElement(a_obj_brandingList, a_obj_brandingItem);
    }


    branding_create_object_v2_request_local_var = branding_create_object_v2_request_create_internal (
        a_obj_brandingList
        );

    return branding_create_object_v2_request_local_var;
end:
    if (a_obj_brandingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_brandingList) {
            branding_request_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_brandingList);
        a_obj_brandingList = NULL;
    }
    return NULL;

}
