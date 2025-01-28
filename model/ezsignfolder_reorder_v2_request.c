#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_reorder_v2_request.h"



static ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_create_internal(
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    list_t *a_obj_ezsigndocument
    ) {
    ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_local_var = malloc(sizeof(ezsignfolder_reorder_v2_request_t));
    if (!ezsignfolder_reorder_v2_request_local_var) {
        return NULL;
    }
    ezsignfolder_reorder_v2_request_local_var->e_ezsignfolder_documentdependency = e_ezsignfolder_documentdependency;
    ezsignfolder_reorder_v2_request_local_var->a_obj_ezsigndocument = a_obj_ezsigndocument;

    ezsignfolder_reorder_v2_request_local_var->_library_owned = 1;
    return ezsignfolder_reorder_v2_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_create(
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    list_t *a_obj_ezsigndocument
    ) {
    return ezsignfolder_reorder_v2_request_create_internal (
        e_ezsignfolder_documentdependency,
        a_obj_ezsigndocument
        );
}

void ezsignfolder_reorder_v2_request_free(ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request) {
    if(NULL == ezsignfolder_reorder_v2_request){
        return ;
    }
    if(ezsignfolder_reorder_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_reorder_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_reorder_v2_request->a_obj_ezsigndocument) {
        list_ForEach(listEntry, ezsignfolder_reorder_v2_request->a_obj_ezsigndocument) {
            custom_ezsigndocument_request_free(listEntry->data);
        }
        list_freeList(ezsignfolder_reorder_v2_request->a_obj_ezsigndocument);
        ezsignfolder_reorder_v2_request->a_obj_ezsigndocument = NULL;
    }
    free(ezsignfolder_reorder_v2_request);
}

cJSON *ezsignfolder_reorder_v2_request_convertToJSON(ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_reorder_v2_request->e_ezsignfolder_documentdependency
    if(ezsignfolder_reorder_v2_request->e_ezsignfolder_documentdependency != ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__NULL) {
    cJSON *e_ezsignfolder_documentdependency_local_JSON = field_e_ezsignfolder_documentdependency_convertToJSON(ezsignfolder_reorder_v2_request->e_ezsignfolder_documentdependency);
    if(e_ezsignfolder_documentdependency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderDocumentdependency", e_ezsignfolder_documentdependency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_reorder_v2_request->a_obj_ezsigndocument
    if (!ezsignfolder_reorder_v2_request->a_obj_ezsigndocument) {
        goto fail;
    }
    cJSON *a_obj_ezsigndocument = cJSON_AddArrayToObject(item, "a_objEzsigndocument");
    if(a_obj_ezsigndocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndocumentListEntry;
    if (ezsignfolder_reorder_v2_request->a_obj_ezsigndocument) {
    list_ForEach(a_obj_ezsigndocumentListEntry, ezsignfolder_reorder_v2_request->a_obj_ezsigndocument) {
    cJSON *itemLocal = custom_ezsigndocument_request_convertToJSON(a_obj_ezsigndocumentListEntry->data);
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

ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_parseFromJSON(cJSON *ezsignfolder_reorder_v2_requestJSON){

    ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_local_var = NULL;

    // define the local variable for ezsignfolder_reorder_v2_request->e_ezsignfolder_documentdependency
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency_local_nonprim = 0;

    // define the local list for ezsignfolder_reorder_v2_request->a_obj_ezsigndocument
    list_t *a_obj_ezsigndocumentList = NULL;

    // ezsignfolder_reorder_v2_request->e_ezsignfolder_documentdependency
    cJSON *e_ezsignfolder_documentdependency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_reorder_v2_requestJSON, "eEzsignfolderDocumentdependency");
    if (cJSON_IsNull(e_ezsignfolder_documentdependency)) {
        e_ezsignfolder_documentdependency = NULL;
    }
    if (e_ezsignfolder_documentdependency) { 
    e_ezsignfolder_documentdependency_local_nonprim = field_e_ezsignfolder_documentdependency_parseFromJSON(e_ezsignfolder_documentdependency); //custom
    }

    // ezsignfolder_reorder_v2_request->a_obj_ezsigndocument
    cJSON *a_obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignfolder_reorder_v2_requestJSON, "a_objEzsigndocument");
    if (cJSON_IsNull(a_obj_ezsigndocument)) {
        a_obj_ezsigndocument = NULL;
    }
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
        custom_ezsigndocument_request_t *a_obj_ezsigndocumentItem = custom_ezsigndocument_request_parseFromJSON(a_obj_ezsigndocument_local_nonprimitive);

        list_addElement(a_obj_ezsigndocumentList, a_obj_ezsigndocumentItem);
    }


    ezsignfolder_reorder_v2_request_local_var = ezsignfolder_reorder_v2_request_create_internal (
        e_ezsignfolder_documentdependency ? e_ezsignfolder_documentdependency_local_nonprim : 0,
        a_obj_ezsigndocumentList
        );

    return ezsignfolder_reorder_v2_request_local_var;
end:
    if (e_ezsignfolder_documentdependency_local_nonprim) {
        e_ezsignfolder_documentdependency_local_nonprim = 0;
    }
    if (a_obj_ezsigndocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndocumentList) {
            custom_ezsigndocument_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndocumentList);
        a_obj_ezsigndocumentList = NULL;
    }
    return NULL;

}
