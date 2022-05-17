#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_edit_ezsignformfieldgroups_v1_request.h"



ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request_create(
    list_t *a_obj_ezsignformfieldgroup
    ) {
    ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request_local_var = malloc(sizeof(ezsigndocument_edit_ezsignformfieldgroups_v1_request_t));
    if (!ezsigndocument_edit_ezsignformfieldgroups_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_edit_ezsignformfieldgroups_v1_request_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;

    return ezsigndocument_edit_ezsignformfieldgroups_v1_request_local_var;
}


void ezsigndocument_edit_ezsignformfieldgroups_v1_request_free(ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request) {
    if(NULL == ezsigndocument_edit_ezsignformfieldgroups_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup) {
            ezsignformfieldgroup_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup);
        ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup = NULL;
    }
    free(ezsigndocument_edit_ezsignformfieldgroups_v1_request);
}

cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_request_convertToJSON(ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup
    if (!ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup) {
    cJSON *itemLocal = ezsignformfieldgroup_request_compound_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
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

ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request_parseFromJSON(cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_requestJSON){

    ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request_local_var = NULL;

    // define the local list for ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // ezsigndocument_edit_ezsignformfieldgroups_v1_request->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigndocument_edit_ezsignformfieldgroups_v1_requestJSON, "a_objEzsignformfieldgroup");
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
        ezsignformfieldgroup_request_compound_t *a_obj_ezsignformfieldgroupItem = ezsignformfieldgroup_request_compound_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }


    ezsigndocument_edit_ezsignformfieldgroups_v1_request_local_var = ezsigndocument_edit_ezsignformfieldgroups_v1_request_create (
        a_obj_ezsignformfieldgroupList
        );

    return ezsigndocument_edit_ezsignformfieldgroups_v1_request_local_var;
end:
    if (a_obj_ezsignformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupList) {
            ezsignformfieldgroup_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupList);
        a_obj_ezsignformfieldgroupList = NULL;
    }
    return NULL;

}
