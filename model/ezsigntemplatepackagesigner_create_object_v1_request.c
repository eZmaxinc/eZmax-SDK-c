#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_create_object_v1_request.h"



ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepackagesigner
    ) {
    ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepackagesigner_create_object_v1_request_t));
    if (!ezsigntemplatepackagesigner_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_create_object_v1_request_local_var->a_obj_ezsigntemplatepackagesigner = a_obj_ezsigntemplatepackagesigner;

    return ezsigntemplatepackagesigner_create_object_v1_request_local_var;
}


void ezsigntemplatepackagesigner_create_object_v1_request_free(ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request) {
    if(NULL == ezsigntemplatepackagesigner_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner) {
        list_ForEach(listEntry, ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner) {
            ezsigntemplatepackagesigner_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner);
        ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner = NULL;
    }
    free(ezsigntemplatepackagesigner_create_object_v1_request);
}

cJSON *ezsigntemplatepackagesigner_create_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner
    if (!ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesigner");
    if(a_obj_ezsigntemplatepackagesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignerListEntry;
    if (ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner) {
    list_ForEach(a_obj_ezsigntemplatepackagesignerListEntry, ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner) {
    cJSON *itemLocal = ezsigntemplatepackagesigner_request_compound_convertToJSON(a_obj_ezsigntemplatepackagesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackagesigner_create_object_v1_requestJSON){

    ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner
    list_t *a_obj_ezsigntemplatepackagesignerList = NULL;

    // ezsigntemplatepackagesigner_create_object_v1_request->a_obj_ezsigntemplatepackagesigner
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_create_object_v1_requestJSON, "a_objEzsigntemplatepackagesigner");
    if (!a_obj_ezsigntemplatepackagesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesigner_local_nonprimitive,a_obj_ezsigntemplatepackagesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesigner_request_compound_t *a_obj_ezsigntemplatepackagesignerItem = ezsigntemplatepackagesigner_request_compound_parseFromJSON(a_obj_ezsigntemplatepackagesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignerList, a_obj_ezsigntemplatepackagesignerItem);
    }


    ezsigntemplatepackagesigner_create_object_v1_request_local_var = ezsigntemplatepackagesigner_create_object_v1_request_create (
        a_obj_ezsigntemplatepackagesignerList
        );

    return ezsigntemplatepackagesigner_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatepackagesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignerList) {
            ezsigntemplatepackagesigner_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignerList);
        a_obj_ezsigntemplatepackagesignerList = NULL;
    }
    return NULL;

}
