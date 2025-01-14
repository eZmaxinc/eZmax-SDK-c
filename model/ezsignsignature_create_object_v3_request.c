#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_create_object_v3_request.h"



ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request_create(
    list_t *a_obj_ezsignsignature
    ) {
    ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request_local_var = malloc(sizeof(ezsignsignature_create_object_v3_request_t));
    if (!ezsignsignature_create_object_v3_request_local_var) {
        return NULL;
    }
    ezsignsignature_create_object_v3_request_local_var->a_obj_ezsignsignature = a_obj_ezsignsignature;

    return ezsignsignature_create_object_v3_request_local_var;
}


void ezsignsignature_create_object_v3_request_free(ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request) {
    if(NULL == ezsignsignature_create_object_v3_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_create_object_v3_request->a_obj_ezsignsignature) {
        list_ForEach(listEntry, ezsignsignature_create_object_v3_request->a_obj_ezsignsignature) {
            ezsignsignature_request_compound_v2_free(listEntry->data);
        }
        list_freeList(ezsignsignature_create_object_v3_request->a_obj_ezsignsignature);
        ezsignsignature_create_object_v3_request->a_obj_ezsignsignature = NULL;
    }
    free(ezsignsignature_create_object_v3_request);
}

cJSON *ezsignsignature_create_object_v3_request_convertToJSON(ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_create_object_v3_request->a_obj_ezsignsignature
    if (!ezsignsignature_create_object_v3_request->a_obj_ezsignsignature) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignature = cJSON_AddArrayToObject(item, "a_objEzsignsignature");
    if(a_obj_ezsignsignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignatureListEntry;
    if (ezsignsignature_create_object_v3_request->a_obj_ezsignsignature) {
    list_ForEach(a_obj_ezsignsignatureListEntry, ezsignsignature_create_object_v3_request->a_obj_ezsignsignature) {
    cJSON *itemLocal = ezsignsignature_request_compound_v2_convertToJSON(a_obj_ezsignsignatureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignature, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request_parseFromJSON(cJSON *ezsignsignature_create_object_v3_requestJSON){

    ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request_local_var = NULL;

    // define the local list for ezsignsignature_create_object_v3_request->a_obj_ezsignsignature
    list_t *a_obj_ezsignsignatureList = NULL;

    // ezsignsignature_create_object_v3_request->a_obj_ezsignsignature
    cJSON *a_obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v3_requestJSON, "a_objEzsignsignature");
    if (!a_obj_ezsignsignature) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsignature_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignature)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignatureList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignature_local_nonprimitive,a_obj_ezsignsignature )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignature_local_nonprimitive)){
            goto end;
        }
        ezsignsignature_request_compound_v2_t *a_obj_ezsignsignatureItem = ezsignsignature_request_compound_v2_parseFromJSON(a_obj_ezsignsignature_local_nonprimitive);

        list_addElement(a_obj_ezsignsignatureList, a_obj_ezsignsignatureItem);
    }


    ezsignsignature_create_object_v3_request_local_var = ezsignsignature_create_object_v3_request_create (
        a_obj_ezsignsignatureList
        );

    return ezsignsignature_create_object_v3_request_local_var;
end:
    if (a_obj_ezsignsignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignatureList) {
            ezsignsignature_request_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignatureList);
        a_obj_ezsignsignatureList = NULL;
    }
    return NULL;

}
