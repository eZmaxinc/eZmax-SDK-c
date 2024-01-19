#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_create_ezsignelements_positioned_by_word_v1_request.h"



ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_create(
    list_t *a_obj_ezsignformfieldgroup,
    list_t *a_obj_ezsignsignature
    ) {
    ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var = malloc(sizeof(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t));
    if (!ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var->a_obj_ezsignsignature = a_obj_ezsignsignature;

    return ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var;
}


void ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_free(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request) {
    if(NULL == ezsigndocument_create_ezsignelements_positioned_by_word_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup) {
            custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_free(listEntry->data);
        }
        list_freeList(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup);
        ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup = NULL;
    }
    if (ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature) {
        list_ForEach(listEntry, ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature) {
            custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_free(listEntry->data);
        }
        list_freeList(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature);
        ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature = NULL;
    }
    free(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request);
}

cJSON *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_convertToJSON(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup
    if (!ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup) {
    cJSON *itemLocal = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroup, itemLocal);
    }
    }


    // ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature
    if (!ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignature = cJSON_AddArrayToObject(item, "a_objEzsignsignature");
    if(a_obj_ezsignsignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignatureListEntry;
    if (ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature) {
    list_ForEach(a_obj_ezsignsignatureListEntry, ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature) {
    cJSON *itemLocal = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_convertToJSON(a_obj_ezsignsignatureListEntry->data);
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

ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_parseFromJSON(cJSON *ezsigndocument_create_ezsignelements_positioned_by_word_v1_requestJSON){

    ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var = NULL;

    // define the local list for ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // define the local list for ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature
    list_t *a_obj_ezsignsignatureList = NULL;

    // ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigndocument_create_ezsignelements_positioned_by_word_v1_requestJSON, "a_objEzsignformfieldgroup");
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
        custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *a_obj_ezsignformfieldgroupItem = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }

    // ezsigndocument_create_ezsignelements_positioned_by_word_v1_request->a_obj_ezsignsignature
    cJSON *a_obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsigndocument_create_ezsignelements_positioned_by_word_v1_requestJSON, "a_objEzsignsignature");
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
        custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t *a_obj_ezsignsignatureItem = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_parseFromJSON(a_obj_ezsignsignature_local_nonprimitive);

        list_addElement(a_obj_ezsignsignatureList, a_obj_ezsignsignatureItem);
    }


    ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var = ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_create (
        a_obj_ezsignformfieldgroupList,
        a_obj_ezsignsignatureList
        );

    return ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_local_var;
end:
    if (a_obj_ezsignformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupList) {
            custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupList);
        a_obj_ezsignformfieldgroupList = NULL;
    }
    if (a_obj_ezsignsignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignatureList) {
            custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignatureList);
        a_obj_ezsignsignatureList = NULL;
    }
    return NULL;

}
