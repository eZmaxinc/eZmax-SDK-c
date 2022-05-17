#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_create_object_v1_request.h"



ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatedocument
    ) {
    ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatedocument_create_object_v1_request_t));
    if (!ezsigntemplatedocument_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_create_object_v1_request_local_var->a_obj_ezsigntemplatedocument = a_obj_ezsigntemplatedocument;

    return ezsigntemplatedocument_create_object_v1_request_local_var;
}


void ezsigntemplatedocument_create_object_v1_request_free(ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request) {
    if(NULL == ezsigntemplatedocument_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument) {
        list_ForEach(listEntry, ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument) {
            ezsigntemplatedocument_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument);
        ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument = NULL;
    }
    free(ezsigntemplatedocument_create_object_v1_request);
}

cJSON *ezsigntemplatedocument_create_object_v1_request_convertToJSON(ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument
    if (!ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatedocument = cJSON_AddArrayToObject(item, "a_objEzsigntemplatedocument");
    if(a_obj_ezsigntemplatedocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatedocumentListEntry;
    if (ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument) {
    list_ForEach(a_obj_ezsigntemplatedocumentListEntry, ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument) {
    cJSON *itemLocal = ezsigntemplatedocument_request_compound_convertToJSON(a_obj_ezsigntemplatedocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatedocument, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_create_object_v1_requestJSON){

    ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument
    list_t *a_obj_ezsigntemplatedocumentList = NULL;

    // ezsigntemplatedocument_create_object_v1_request->a_obj_ezsigntemplatedocument
    cJSON *a_obj_ezsigntemplatedocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_create_object_v1_requestJSON, "a_objEzsigntemplatedocument");
    if (!a_obj_ezsigntemplatedocument) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatedocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatedocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatedocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatedocument_local_nonprimitive,a_obj_ezsigntemplatedocument )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatedocument_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatedocument_request_compound_t *a_obj_ezsigntemplatedocumentItem = ezsigntemplatedocument_request_compound_parseFromJSON(a_obj_ezsigntemplatedocument_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatedocumentList, a_obj_ezsigntemplatedocumentItem);
    }


    ezsigntemplatedocument_create_object_v1_request_local_var = ezsigntemplatedocument_create_object_v1_request_create (
        a_obj_ezsigntemplatedocumentList
        );

    return ezsigntemplatedocument_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatedocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatedocumentList) {
            ezsigntemplatedocument_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatedocumentList);
        a_obj_ezsigntemplatedocumentList = NULL;
    }
    return NULL;

}
