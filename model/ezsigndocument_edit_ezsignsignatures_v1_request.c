#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_edit_ezsignsignatures_v1_request.h"



ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request_create(
    list_t *a_obj_ezsignsignature
    ) {
    ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request_local_var = malloc(sizeof(ezsigndocument_edit_ezsignsignatures_v1_request_t));
    if (!ezsigndocument_edit_ezsignsignatures_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_edit_ezsignsignatures_v1_request_local_var->a_obj_ezsignsignature = a_obj_ezsignsignature;

    return ezsigndocument_edit_ezsignsignatures_v1_request_local_var;
}


void ezsigndocument_edit_ezsignsignatures_v1_request_free(ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request) {
    if(NULL == ezsigndocument_edit_ezsignsignatures_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature) {
        list_ForEach(listEntry, ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature) {
            ezsignsignature_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature);
        ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature = NULL;
    }
    free(ezsigndocument_edit_ezsignsignatures_v1_request);
}

cJSON *ezsigndocument_edit_ezsignsignatures_v1_request_convertToJSON(ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature
    if (!ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignature = cJSON_AddArrayToObject(item, "a_objEzsignsignature");
    if(a_obj_ezsignsignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignatureListEntry;
    if (ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature) {
    list_ForEach(a_obj_ezsignsignatureListEntry, ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature) {
    cJSON *itemLocal = ezsignsignature_request_compound_convertToJSON(a_obj_ezsignsignatureListEntry->data);
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

ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request_parseFromJSON(cJSON *ezsigndocument_edit_ezsignsignatures_v1_requestJSON){

    ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request_local_var = NULL;

    // define the local list for ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature
    list_t *a_obj_ezsignsignatureList = NULL;

    // ezsigndocument_edit_ezsignsignatures_v1_request->a_obj_ezsignsignature
    cJSON *a_obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsigndocument_edit_ezsignsignatures_v1_requestJSON, "a_objEzsignsignature");
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
        ezsignsignature_request_compound_t *a_obj_ezsignsignatureItem = ezsignsignature_request_compound_parseFromJSON(a_obj_ezsignsignature_local_nonprimitive);

        list_addElement(a_obj_ezsignsignatureList, a_obj_ezsignsignatureItem);
    }


    ezsigndocument_edit_ezsignsignatures_v1_request_local_var = ezsigndocument_edit_ezsignsignatures_v1_request_create (
        a_obj_ezsignsignatureList
        );

    return ezsigndocument_edit_ezsignsignatures_v1_request_local_var;
end:
    if (a_obj_ezsignsignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignatureList) {
            ezsignsignature_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignatureList);
        a_obj_ezsignsignatureList = NULL;
    }
    return NULL;

}
