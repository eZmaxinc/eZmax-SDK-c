#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_create_object_v1_request.h"



usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request_create(
    list_t *a_obj_usergroupexternal
    ) {
    usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request_local_var = malloc(sizeof(usergroupexternal_create_object_v1_request_t));
    if (!usergroupexternal_create_object_v1_request_local_var) {
        return NULL;
    }
    usergroupexternal_create_object_v1_request_local_var->a_obj_usergroupexternal = a_obj_usergroupexternal;

    return usergroupexternal_create_object_v1_request_local_var;
}


void usergroupexternal_create_object_v1_request_free(usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request) {
    if(NULL == usergroupexternal_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_create_object_v1_request->a_obj_usergroupexternal) {
        list_ForEach(listEntry, usergroupexternal_create_object_v1_request->a_obj_usergroupexternal) {
            usergroupexternal_request_compound_free(listEntry->data);
        }
        list_freeList(usergroupexternal_create_object_v1_request->a_obj_usergroupexternal);
        usergroupexternal_create_object_v1_request->a_obj_usergroupexternal = NULL;
    }
    free(usergroupexternal_create_object_v1_request);
}

cJSON *usergroupexternal_create_object_v1_request_convertToJSON(usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_create_object_v1_request->a_obj_usergroupexternal
    if (!usergroupexternal_create_object_v1_request->a_obj_usergroupexternal) {
        goto fail;
    }
    cJSON *a_obj_usergroupexternal = cJSON_AddArrayToObject(item, "a_objUsergroupexternal");
    if(a_obj_usergroupexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupexternalListEntry;
    if (usergroupexternal_create_object_v1_request->a_obj_usergroupexternal) {
    list_ForEach(a_obj_usergroupexternalListEntry, usergroupexternal_create_object_v1_request->a_obj_usergroupexternal) {
    cJSON *itemLocal = usergroupexternal_request_compound_convertToJSON(a_obj_usergroupexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroupexternal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request_parseFromJSON(cJSON *usergroupexternal_create_object_v1_requestJSON){

    usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request_local_var = NULL;

    // define the local list for usergroupexternal_create_object_v1_request->a_obj_usergroupexternal
    list_t *a_obj_usergroupexternalList = NULL;

    // usergroupexternal_create_object_v1_request->a_obj_usergroupexternal
    cJSON *a_obj_usergroupexternal = cJSON_GetObjectItemCaseSensitive(usergroupexternal_create_object_v1_requestJSON, "a_objUsergroupexternal");
    if (!a_obj_usergroupexternal) {
        goto end;
    }

    
    cJSON *a_obj_usergroupexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroupexternal)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroupexternal_local_nonprimitive,a_obj_usergroupexternal )
    {
        if(!cJSON_IsObject(a_obj_usergroupexternal_local_nonprimitive)){
            goto end;
        }
        usergroupexternal_request_compound_t *a_obj_usergroupexternalItem = usergroupexternal_request_compound_parseFromJSON(a_obj_usergroupexternal_local_nonprimitive);

        list_addElement(a_obj_usergroupexternalList, a_obj_usergroupexternalItem);
    }


    usergroupexternal_create_object_v1_request_local_var = usergroupexternal_create_object_v1_request_create (
        a_obj_usergroupexternalList
        );

    return usergroupexternal_create_object_v1_request_local_var;
end:
    if (a_obj_usergroupexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupexternalList) {
            usergroupexternal_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupexternalList);
        a_obj_usergroupexternalList = NULL;
    }
    return NULL;

}
