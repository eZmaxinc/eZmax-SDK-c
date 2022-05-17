#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_create_object_v1_request.h"



ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request_create(
    list_t *a_obj_ezsignbulksend
    ) {
    ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request_local_var = malloc(sizeof(ezsignbulksend_create_object_v1_request_t));
    if (!ezsignbulksend_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignbulksend_create_object_v1_request_local_var->a_obj_ezsignbulksend = a_obj_ezsignbulksend;

    return ezsignbulksend_create_object_v1_request_local_var;
}


void ezsignbulksend_create_object_v1_request_free(ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request) {
    if(NULL == ezsignbulksend_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend) {
        list_ForEach(listEntry, ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend) {
            ezsignbulksend_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend);
        ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend = NULL;
    }
    free(ezsignbulksend_create_object_v1_request);
}

cJSON *ezsignbulksend_create_object_v1_request_convertToJSON(ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend
    if (!ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksend = cJSON_AddArrayToObject(item, "a_objEzsignbulksend");
    if(a_obj_ezsignbulksend == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksendListEntry;
    if (ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend) {
    list_ForEach(a_obj_ezsignbulksendListEntry, ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend) {
    cJSON *itemLocal = ezsignbulksend_request_compound_convertToJSON(a_obj_ezsignbulksendListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksend, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request_parseFromJSON(cJSON *ezsignbulksend_create_object_v1_requestJSON){

    ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend
    list_t *a_obj_ezsignbulksendList = NULL;

    // ezsignbulksend_create_object_v1_request->a_obj_ezsignbulksend
    cJSON *a_obj_ezsignbulksend = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_object_v1_requestJSON, "a_objEzsignbulksend");
    if (!a_obj_ezsignbulksend) {
        goto end;
    }

    
    cJSON *a_obj_ezsignbulksend_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignbulksend)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignbulksendList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignbulksend_local_nonprimitive,a_obj_ezsignbulksend )
    {
        if(!cJSON_IsObject(a_obj_ezsignbulksend_local_nonprimitive)){
            goto end;
        }
        ezsignbulksend_request_compound_t *a_obj_ezsignbulksendItem = ezsignbulksend_request_compound_parseFromJSON(a_obj_ezsignbulksend_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksendList, a_obj_ezsignbulksendItem);
    }


    ezsignbulksend_create_object_v1_request_local_var = ezsignbulksend_create_object_v1_request_create (
        a_obj_ezsignbulksendList
        );

    return ezsignbulksend_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignbulksendList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksendList) {
            ezsignbulksend_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksendList);
        a_obj_ezsignbulksendList = NULL;
    }
    return NULL;

}
