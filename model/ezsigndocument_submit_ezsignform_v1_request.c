#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_submit_ezsignform_v1_request.h"



ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_create(
    int b_ezsignform_isdraft,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_local_var = malloc(sizeof(ezsigndocument_submit_ezsignform_v1_request_t));
    if (!ezsigndocument_submit_ezsignform_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_submit_ezsignform_v1_request_local_var->b_ezsignform_isdraft = b_ezsignform_isdraft;
    ezsigndocument_submit_ezsignform_v1_request_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;

    return ezsigndocument_submit_ezsignform_v1_request_local_var;
}


void ezsigndocument_submit_ezsignform_v1_request_free(ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request) {
    if(NULL == ezsigndocument_submit_ezsignform_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup) {
            object_free(listEntry->data);
        }
        list_freeList(ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup);
        ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup = NULL;
    }
    free(ezsigndocument_submit_ezsignform_v1_request);
}

cJSON *ezsigndocument_submit_ezsignform_v1_request_convertToJSON(ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft
    if (!ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignformIsdraft", ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft) == NULL) {
    goto fail; //Bool
    }


    // ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup
    if (!ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup) {
    cJSON *itemLocal = object_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_parseFromJSON(cJSON *ezsigndocument_submit_ezsignform_v1_requestJSON){

    ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_local_var = NULL;

    // define the local list for ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft
    cJSON *b_ezsignform_isdraft = cJSON_GetObjectItemCaseSensitive(ezsigndocument_submit_ezsignform_v1_requestJSON, "bEzsignformIsdraft");
    if (!b_ezsignform_isdraft) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignform_isdraft))
    {
    goto end; //Bool
    }

    // ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigndocument_submit_ezsignform_v1_requestJSON, "a_objEzsignformfieldgroup");
    if (!a_obj_ezsignformfieldgroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfieldgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroup_local_nonprimitive,a_obj_ezsignformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroup_local_nonprimitive)){
            goto end;
        }
        object_t *a_obj_ezsignformfieldgroupItem = object_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }


    ezsigndocument_submit_ezsignform_v1_request_local_var = ezsigndocument_submit_ezsignform_v1_request_create (
        b_ezsignform_isdraft->valueint,
        a_obj_ezsignformfieldgroupList
        );

    return ezsigndocument_submit_ezsignform_v1_request_local_var;
end:
    if (a_obj_ezsignformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupList);
        a_obj_ezsignformfieldgroupList = NULL;
    }
    return NULL;

}
