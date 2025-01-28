#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_create_object_v2_request.h"



static franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request_create_internal(
    list_t *a_obj_franchisereferalincome
    ) {
    franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request_local_var = malloc(sizeof(franchisereferalincome_create_object_v2_request_t));
    if (!franchisereferalincome_create_object_v2_request_local_var) {
        return NULL;
    }
    franchisereferalincome_create_object_v2_request_local_var->a_obj_franchisereferalincome = a_obj_franchisereferalincome;

    franchisereferalincome_create_object_v2_request_local_var->_library_owned = 1;
    return franchisereferalincome_create_object_v2_request_local_var;
}

__attribute__((deprecated)) franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request_create(
    list_t *a_obj_franchisereferalincome
    ) {
    return franchisereferalincome_create_object_v2_request_create_internal (
        a_obj_franchisereferalincome
        );
}

void franchisereferalincome_create_object_v2_request_free(franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request) {
    if(NULL == franchisereferalincome_create_object_v2_request){
        return ;
    }
    if(franchisereferalincome_create_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "franchisereferalincome_create_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome) {
        list_ForEach(listEntry, franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome) {
            franchisereferalincome_request_compound_free(listEntry->data);
        }
        list_freeList(franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome);
        franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome = NULL;
    }
    free(franchisereferalincome_create_object_v2_request);
}

cJSON *franchisereferalincome_create_object_v2_request_convertToJSON(franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome
    if (!franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome) {
        goto fail;
    }
    cJSON *a_obj_franchisereferalincome = cJSON_AddArrayToObject(item, "a_objFranchisereferalincome");
    if(a_obj_franchisereferalincome == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_franchisereferalincomeListEntry;
    if (franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome) {
    list_ForEach(a_obj_franchisereferalincomeListEntry, franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome) {
    cJSON *itemLocal = franchisereferalincome_request_compound_convertToJSON(a_obj_franchisereferalincomeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_franchisereferalincome, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request_parseFromJSON(cJSON *franchisereferalincome_create_object_v2_requestJSON){

    franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request_local_var = NULL;

    // define the local list for franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome
    list_t *a_obj_franchisereferalincomeList = NULL;

    // franchisereferalincome_create_object_v2_request->a_obj_franchisereferalincome
    cJSON *a_obj_franchisereferalincome = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_create_object_v2_requestJSON, "a_objFranchisereferalincome");
    if (cJSON_IsNull(a_obj_franchisereferalincome)) {
        a_obj_franchisereferalincome = NULL;
    }
    if (!a_obj_franchisereferalincome) {
        goto end;
    }

    
    cJSON *a_obj_franchisereferalincome_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_franchisereferalincome)){
        goto end; //nonprimitive container
    }

    a_obj_franchisereferalincomeList = list_createList();

    cJSON_ArrayForEach(a_obj_franchisereferalincome_local_nonprimitive,a_obj_franchisereferalincome )
    {
        if(!cJSON_IsObject(a_obj_franchisereferalincome_local_nonprimitive)){
            goto end;
        }
        franchisereferalincome_request_compound_t *a_obj_franchisereferalincomeItem = franchisereferalincome_request_compound_parseFromJSON(a_obj_franchisereferalincome_local_nonprimitive);

        list_addElement(a_obj_franchisereferalincomeList, a_obj_franchisereferalincomeItem);
    }


    franchisereferalincome_create_object_v2_request_local_var = franchisereferalincome_create_object_v2_request_create_internal (
        a_obj_franchisereferalincomeList
        );

    return franchisereferalincome_create_object_v2_request_local_var;
end:
    if (a_obj_franchisereferalincomeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_franchisereferalincomeList) {
            franchisereferalincome_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_franchisereferalincomeList);
        a_obj_franchisereferalincomeList = NULL;
    }
    return NULL;

}
