#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_create_object_v1_request.h"



variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request_create(
    list_t *a_obj_variableexpense
    ) {
    variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request_local_var = malloc(sizeof(variableexpense_create_object_v1_request_t));
    if (!variableexpense_create_object_v1_request_local_var) {
        return NULL;
    }
    variableexpense_create_object_v1_request_local_var->a_obj_variableexpense = a_obj_variableexpense;

    return variableexpense_create_object_v1_request_local_var;
}


void variableexpense_create_object_v1_request_free(variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request) {
    if(NULL == variableexpense_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_create_object_v1_request->a_obj_variableexpense) {
        list_ForEach(listEntry, variableexpense_create_object_v1_request->a_obj_variableexpense) {
            variableexpense_request_compound_free(listEntry->data);
        }
        list_freeList(variableexpense_create_object_v1_request->a_obj_variableexpense);
        variableexpense_create_object_v1_request->a_obj_variableexpense = NULL;
    }
    free(variableexpense_create_object_v1_request);
}

cJSON *variableexpense_create_object_v1_request_convertToJSON(variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_create_object_v1_request->a_obj_variableexpense
    if (!variableexpense_create_object_v1_request->a_obj_variableexpense) {
        goto fail;
    }
    cJSON *a_obj_variableexpense = cJSON_AddArrayToObject(item, "a_objVariableexpense");
    if(a_obj_variableexpense == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_variableexpenseListEntry;
    if (variableexpense_create_object_v1_request->a_obj_variableexpense) {
    list_ForEach(a_obj_variableexpenseListEntry, variableexpense_create_object_v1_request->a_obj_variableexpense) {
    cJSON *itemLocal = variableexpense_request_compound_convertToJSON(a_obj_variableexpenseListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_variableexpense, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request_parseFromJSON(cJSON *variableexpense_create_object_v1_requestJSON){

    variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request_local_var = NULL;

    // define the local list for variableexpense_create_object_v1_request->a_obj_variableexpense
    list_t *a_obj_variableexpenseList = NULL;

    // variableexpense_create_object_v1_request->a_obj_variableexpense
    cJSON *a_obj_variableexpense = cJSON_GetObjectItemCaseSensitive(variableexpense_create_object_v1_requestJSON, "a_objVariableexpense");
    if (!a_obj_variableexpense) {
        goto end;
    }

    
    cJSON *a_obj_variableexpense_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_variableexpense)){
        goto end; //nonprimitive container
    }

    a_obj_variableexpenseList = list_createList();

    cJSON_ArrayForEach(a_obj_variableexpense_local_nonprimitive,a_obj_variableexpense )
    {
        if(!cJSON_IsObject(a_obj_variableexpense_local_nonprimitive)){
            goto end;
        }
        variableexpense_request_compound_t *a_obj_variableexpenseItem = variableexpense_request_compound_parseFromJSON(a_obj_variableexpense_local_nonprimitive);

        list_addElement(a_obj_variableexpenseList, a_obj_variableexpenseItem);
    }


    variableexpense_create_object_v1_request_local_var = variableexpense_create_object_v1_request_create (
        a_obj_variableexpenseList
        );

    return variableexpense_create_object_v1_request_local_var;
end:
    if (a_obj_variableexpenseList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_variableexpenseList) {
            variableexpense_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_variableexpenseList);
        a_obj_variableexpenseList = NULL;
    }
    return NULL;

}
