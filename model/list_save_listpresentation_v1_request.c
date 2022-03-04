#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list_save_listpresentation_v1_request.h"



list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request_create(
    list_t *a_obj_listpresentation
    ) {
    list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request_local_var = malloc(sizeof(list_save_listpresentation_v1_request_t));
    if (!list_save_listpresentation_v1_request_local_var) {
        return NULL;
    }
    list_save_listpresentation_v1_request_local_var->a_obj_listpresentation = a_obj_listpresentation;

    return list_save_listpresentation_v1_request_local_var;
}


void list_save_listpresentation_v1_request_free(list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request) {
    if(NULL == list_save_listpresentation_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (list_save_listpresentation_v1_request->a_obj_listpresentation) {
        list_ForEach(listEntry, list_save_listpresentation_v1_request->a_obj_listpresentation) {
            listpresentation_request_compound_free(listEntry->data);
        }
        list_freeList(list_save_listpresentation_v1_request->a_obj_listpresentation);
        list_save_listpresentation_v1_request->a_obj_listpresentation = NULL;
    }
    free(list_save_listpresentation_v1_request);
}

cJSON *list_save_listpresentation_v1_request_convertToJSON(list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // list_save_listpresentation_v1_request->a_obj_listpresentation
    if (!list_save_listpresentation_v1_request->a_obj_listpresentation) {
        goto fail;
    }
    
    cJSON *a_obj_listpresentation = cJSON_AddArrayToObject(item, "a_objListpresentation");
    if(a_obj_listpresentation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_listpresentationListEntry;
    if (list_save_listpresentation_v1_request->a_obj_listpresentation) {
    list_ForEach(a_obj_listpresentationListEntry, list_save_listpresentation_v1_request->a_obj_listpresentation) {
    cJSON *itemLocal = listpresentation_request_compound_convertToJSON(a_obj_listpresentationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_listpresentation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request_parseFromJSON(cJSON *list_save_listpresentation_v1_requestJSON){

    list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request_local_var = NULL;

    // list_save_listpresentation_v1_request->a_obj_listpresentation
    cJSON *a_obj_listpresentation = cJSON_GetObjectItemCaseSensitive(list_save_listpresentation_v1_requestJSON, "a_objListpresentation");
    if (!a_obj_listpresentation) {
        goto end;
    }

    list_t *a_obj_listpresentationList;
    
    cJSON *a_obj_listpresentation_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_listpresentation)){
        goto end; //nonprimitive container
    }

    a_obj_listpresentationList = list_createList();

    cJSON_ArrayForEach(a_obj_listpresentation_local_nonprimitive,a_obj_listpresentation )
    {
        if(!cJSON_IsObject(a_obj_listpresentation_local_nonprimitive)){
            goto end;
        }
        listpresentation_request_compound_t *a_obj_listpresentationItem = listpresentation_request_compound_parseFromJSON(a_obj_listpresentation_local_nonprimitive);

        list_addElement(a_obj_listpresentationList, a_obj_listpresentationItem);
    }


    list_save_listpresentation_v1_request_local_var = list_save_listpresentation_v1_request_create (
        a_obj_listpresentationList
        );

    return list_save_listpresentation_v1_request_local_var;
end:
    return NULL;

}
