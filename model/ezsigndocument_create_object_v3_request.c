#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_create_object_v3_request.h"



ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request_create(
    list_t *a_obj_ezsigndocument
    ) {
    ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request_local_var = malloc(sizeof(ezsigndocument_create_object_v3_request_t));
    if (!ezsigndocument_create_object_v3_request_local_var) {
        return NULL;
    }
    ezsigndocument_create_object_v3_request_local_var->a_obj_ezsigndocument = a_obj_ezsigndocument;

    return ezsigndocument_create_object_v3_request_local_var;
}


void ezsigndocument_create_object_v3_request_free(ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request) {
    if(NULL == ezsigndocument_create_object_v3_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_create_object_v3_request->a_obj_ezsigndocument) {
        list_ForEach(listEntry, ezsigndocument_create_object_v3_request->a_obj_ezsigndocument) {
            ezsigndocument_request_free(listEntry->data);
        }
        list_freeList(ezsigndocument_create_object_v3_request->a_obj_ezsigndocument);
        ezsigndocument_create_object_v3_request->a_obj_ezsigndocument = NULL;
    }
    free(ezsigndocument_create_object_v3_request);
}

cJSON *ezsigndocument_create_object_v3_request_convertToJSON(ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_create_object_v3_request->a_obj_ezsigndocument
    if (!ezsigndocument_create_object_v3_request->a_obj_ezsigndocument) {
        goto fail;
    }
    cJSON *a_obj_ezsigndocument = cJSON_AddArrayToObject(item, "a_objEzsigndocument");
    if(a_obj_ezsigndocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndocumentListEntry;
    if (ezsigndocument_create_object_v3_request->a_obj_ezsigndocument) {
    list_ForEach(a_obj_ezsigndocumentListEntry, ezsigndocument_create_object_v3_request->a_obj_ezsigndocument) {
    cJSON *itemLocal = ezsigndocument_request_convertToJSON(a_obj_ezsigndocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndocument, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request_parseFromJSON(cJSON *ezsigndocument_create_object_v3_requestJSON){

    ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request_local_var = NULL;

    // define the local list for ezsigndocument_create_object_v3_request->a_obj_ezsigndocument
    list_t *a_obj_ezsigndocumentList = NULL;

    // ezsigndocument_create_object_v3_request->a_obj_ezsigndocument
    cJSON *a_obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsigndocument_create_object_v3_requestJSON, "a_objEzsigndocument");
    if (!a_obj_ezsigndocument) {
        goto end;
    }

    
    cJSON *a_obj_ezsigndocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigndocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndocument_local_nonprimitive,a_obj_ezsigndocument )
    {
        if(!cJSON_IsObject(a_obj_ezsigndocument_local_nonprimitive)){
            goto end;
        }
        ezsigndocument_request_t *a_obj_ezsigndocumentItem = ezsigndocument_request_parseFromJSON(a_obj_ezsigndocument_local_nonprimitive);

        list_addElement(a_obj_ezsigndocumentList, a_obj_ezsigndocumentItem);
    }


    ezsigndocument_create_object_v3_request_local_var = ezsigndocument_create_object_v3_request_create (
        a_obj_ezsigndocumentList
        );

    return ezsigndocument_create_object_v3_request_local_var;
end:
    if (a_obj_ezsigndocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndocumentList) {
            ezsigndocument_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndocumentList);
        a_obj_ezsigndocumentList = NULL;
    }
    return NULL;

}
