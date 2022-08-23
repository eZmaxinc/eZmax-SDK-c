#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_create_object_v1_request.h"



branding_create_object_v1_request_t *branding_create_object_v1_request_create(
    list_t *a_obj_branding
    ) {
    branding_create_object_v1_request_t *branding_create_object_v1_request_local_var = malloc(sizeof(branding_create_object_v1_request_t));
    if (!branding_create_object_v1_request_local_var) {
        return NULL;
    }
    branding_create_object_v1_request_local_var->a_obj_branding = a_obj_branding;

    return branding_create_object_v1_request_local_var;
}


void branding_create_object_v1_request_free(branding_create_object_v1_request_t *branding_create_object_v1_request) {
    if(NULL == branding_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_create_object_v1_request->a_obj_branding) {
        list_ForEach(listEntry, branding_create_object_v1_request->a_obj_branding) {
            branding_request_compound_free(listEntry->data);
        }
        list_freeList(branding_create_object_v1_request->a_obj_branding);
        branding_create_object_v1_request->a_obj_branding = NULL;
    }
    free(branding_create_object_v1_request);
}

cJSON *branding_create_object_v1_request_convertToJSON(branding_create_object_v1_request_t *branding_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // branding_create_object_v1_request->a_obj_branding
    if (!branding_create_object_v1_request->a_obj_branding) {
        goto fail;
    }
    cJSON *a_obj_branding = cJSON_AddArrayToObject(item, "a_objBranding");
    if(a_obj_branding == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_brandingListEntry;
    if (branding_create_object_v1_request->a_obj_branding) {
    list_ForEach(a_obj_brandingListEntry, branding_create_object_v1_request->a_obj_branding) {
    cJSON *itemLocal = branding_request_compound_convertToJSON(a_obj_brandingListEntry->data);
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

branding_create_object_v1_request_t *branding_create_object_v1_request_parseFromJSON(cJSON *branding_create_object_v1_requestJSON){

    branding_create_object_v1_request_t *branding_create_object_v1_request_local_var = NULL;

    // define the local list for branding_create_object_v1_request->a_obj_branding
    list_t *a_obj_brandingList = NULL;

    // branding_create_object_v1_request->a_obj_branding
    cJSON *a_obj_branding = cJSON_GetObjectItemCaseSensitive(branding_create_object_v1_requestJSON, "a_objBranding");
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
        branding_request_compound_t *a_obj_brandingItem = branding_request_compound_parseFromJSON(a_obj_branding_local_nonprimitive);

        list_addElement(a_obj_brandingList, a_obj_brandingItem);
    }


    branding_create_object_v1_request_local_var = branding_create_object_v1_request_create (
        a_obj_brandingList
        );

    return branding_create_object_v1_request_local_var;
end:
    if (a_obj_brandingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_brandingList) {
            branding_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_brandingList);
        a_obj_brandingList = NULL;
    }
    return NULL;

}
