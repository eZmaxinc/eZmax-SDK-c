#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_submit_ezsignform_v1_request.h"



static ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_create_internal(
    int *b_ezsignform_isdraft,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_local_var = malloc(sizeof(ezsigndocument_submit_ezsignform_v1_request_t));
    if (!ezsigndocument_submit_ezsignform_v1_request_local_var) {
        return NULL;
    }
    memset(ezsigndocument_submit_ezsignform_v1_request_local_var, 0, sizeof(ezsigndocument_submit_ezsignform_v1_request_t));
    ezsigndocument_submit_ezsignform_v1_request_local_var->_library_owned = 1;
    ezsigndocument_submit_ezsignform_v1_request_local_var->b_ezsignform_isdraft = b_ezsignform_isdraft;
    ezsigndocument_submit_ezsignform_v1_request_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    return ezsigndocument_submit_ezsignform_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_create(
    int *b_ezsignform_isdraft,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    int *b_ezsignform_isdraft_copy = NULL;
    if (b_ezsignform_isdraft) {
        b_ezsignform_isdraft_copy = malloc(sizeof(int));
        if (b_ezsignform_isdraft_copy) *b_ezsignform_isdraft_copy = *b_ezsignform_isdraft;
    }
    ezsigndocument_submit_ezsignform_v1_request_t *result = ezsigndocument_submit_ezsignform_v1_request_create_internal (
        b_ezsignform_isdraft_copy,
        a_obj_ezsignformfieldgroup
        );
    if (!result) {
        free(b_ezsignform_isdraft_copy);
    }
    return result;
}

void ezsigndocument_submit_ezsignform_v1_request_free(ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request) {
    if(NULL == ezsigndocument_submit_ezsignform_v1_request){
        return ;
    }
    if(ezsigndocument_submit_ezsignform_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_submit_ezsignform_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft) {
        free(ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft);
        ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft = NULL;
    }
    if (ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup) {
            custom_ezsignformfieldgroup_request_free(listEntry->data);
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
    if(cJSON_AddBoolToObject(item, "bEzsignformIsdraft", *ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft) == NULL) {
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
    cJSON *itemLocal = custom_ezsignformfieldgroup_request_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
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

    // define the local variable for ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft
    int *b_ezsignform_isdraft_local_var = NULL;

    // define the local list for ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // ezsigndocument_submit_ezsignform_v1_request->b_ezsignform_isdraft
    cJSON *b_ezsignform_isdraft = cJSON_GetObjectItemCaseSensitive(ezsigndocument_submit_ezsignform_v1_requestJSON, "bEzsignformIsdraft");
    if (cJSON_IsNull(b_ezsignform_isdraft)) {
        b_ezsignform_isdraft = NULL;
    }
    if (!b_ezsignform_isdraft) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignform_isdraft))
    {
    goto end; //Bool
    }
    b_ezsignform_isdraft_local_var = malloc(sizeof(int));
    if(!b_ezsignform_isdraft_local_var)
    {
        goto end;
    }
    *b_ezsignform_isdraft_local_var = b_ezsignform_isdraft->valueint;

    // ezsigndocument_submit_ezsignform_v1_request->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigndocument_submit_ezsignform_v1_requestJSON, "a_objEzsignformfieldgroup");
    if (cJSON_IsNull(a_obj_ezsignformfieldgroup)) {
        a_obj_ezsignformfieldgroup = NULL;
    }
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
        custom_ezsignformfieldgroup_request_t *a_obj_ezsignformfieldgroupItem = custom_ezsignformfieldgroup_request_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }



    ezsigndocument_submit_ezsignform_v1_request_local_var = ezsigndocument_submit_ezsignform_v1_request_create_internal (
        b_ezsignform_isdraft_local_var,
        a_obj_ezsignformfieldgroupList
        );

    if (!ezsigndocument_submit_ezsignform_v1_request_local_var) {
        goto end;
    }

    return ezsigndocument_submit_ezsignform_v1_request_local_var;
end:
    if (b_ezsignform_isdraft_local_var) {
        free(b_ezsignform_isdraft_local_var);
        b_ezsignform_isdraft_local_var = NULL;
    }
    if (a_obj_ezsignformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupList) {
            custom_ezsignformfieldgroup_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupList);
        a_obj_ezsignformfieldgroupList = NULL;
    }
    return NULL;

}
