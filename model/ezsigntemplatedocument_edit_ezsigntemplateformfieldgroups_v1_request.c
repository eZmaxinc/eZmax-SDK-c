#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request.h"



ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_create(
    list_t *a_obj_ezsigntemplateformfieldgroup
    ) {
    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_local_var = malloc(sizeof(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t));
    if (!ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_local_var->a_obj_ezsigntemplateformfieldgroup = a_obj_ezsigntemplateformfieldgroup;

    return ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_local_var;
}


void ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_free(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request) {
    if(NULL == ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup) {
        list_ForEach(listEntry, ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup) {
            ezsigntemplateformfieldgroup_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup);
        ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup = NULL;
    }
    free(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);
}

cJSON *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup
    if (!ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfieldgroup");
    if(a_obj_ezsigntemplateformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldgroupListEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup) {
    list_ForEach(a_obj_ezsigntemplateformfieldgroupListEntry, ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup) {
    cJSON *itemLocal = ezsigntemplateformfieldgroup_request_compound_convertToJSON(a_obj_ezsigntemplateformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_requestJSON){

    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup
    list_t *a_obj_ezsigntemplateformfieldgroupList = NULL;

    // ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request->a_obj_ezsigntemplateformfieldgroup
    cJSON *a_obj_ezsigntemplateformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_requestJSON, "a_objEzsigntemplateformfieldgroup");
    if (!a_obj_ezsigntemplateformfieldgroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfieldgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive,a_obj_ezsigntemplateformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfieldgroup_request_compound_t *a_obj_ezsigntemplateformfieldgroupItem = ezsigntemplateformfieldgroup_request_compound_parseFromJSON(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldgroupList, a_obj_ezsigntemplateformfieldgroupItem);
    }


    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_local_var = ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_create (
        a_obj_ezsigntemplateformfieldgroupList
        );

    return ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_local_var;
end:
    if (a_obj_ezsigntemplateformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldgroupList) {
            ezsigntemplateformfieldgroup_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldgroupList);
        a_obj_ezsigntemplateformfieldgroupList = NULL;
    }
    return NULL;

}
