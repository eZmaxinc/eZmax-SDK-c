#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_create_object_v1_request.h"



static documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request_create_internal(
    list_t *a_obj_documenttypechecklist
    ) {
    documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request_local_var = malloc(sizeof(documenttypechecklist_create_object_v1_request_t));
    if (!documenttypechecklist_create_object_v1_request_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_create_object_v1_request_local_var, 0, sizeof(documenttypechecklist_create_object_v1_request_t));
    documenttypechecklist_create_object_v1_request_local_var->_library_owned = 1;
    documenttypechecklist_create_object_v1_request_local_var->a_obj_documenttypechecklist = a_obj_documenttypechecklist;
    return documenttypechecklist_create_object_v1_request_local_var;
}

__attribute__((deprecated)) documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request_create(
    list_t *a_obj_documenttypechecklist
    ) {
    documenttypechecklist_create_object_v1_request_t *result = documenttypechecklist_create_object_v1_request_create_internal (
        a_obj_documenttypechecklist
        );
    if (!result) {
    }
    return result;
}

void documenttypechecklist_create_object_v1_request_free(documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request) {
    if(NULL == documenttypechecklist_create_object_v1_request){
        return ;
    }
    if(documenttypechecklist_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist) {
        list_ForEach(listEntry, documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist) {
            documenttypechecklist_request_compound_free(listEntry->data);
        }
        list_freeList(documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist);
        documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist = NULL;
    }
    free(documenttypechecklist_create_object_v1_request);
}

cJSON *documenttypechecklist_create_object_v1_request_convertToJSON(documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist
    if (!documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist) {
        goto fail;
    }
    cJSON *a_obj_documenttypechecklist = cJSON_AddArrayToObject(item, "a_objDocumenttypechecklist");
    if(a_obj_documenttypechecklist == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_documenttypechecklistListEntry;
    if (documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist) {
    list_ForEach(a_obj_documenttypechecklistListEntry, documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist) {
    cJSON *itemLocal = documenttypechecklist_request_compound_convertToJSON(a_obj_documenttypechecklistListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_documenttypechecklist, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request_parseFromJSON(cJSON *documenttypechecklist_create_object_v1_requestJSON){

    documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request_local_var = NULL;

    // define the local list for documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist
    list_t *a_obj_documenttypechecklistList = NULL;

    // documenttypechecklist_create_object_v1_request->a_obj_documenttypechecklist
    cJSON *a_obj_documenttypechecklist = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_create_object_v1_requestJSON, "a_objDocumenttypechecklist");
    if (cJSON_IsNull(a_obj_documenttypechecklist)) {
        a_obj_documenttypechecklist = NULL;
    }
    if (!a_obj_documenttypechecklist) {
        goto end;
    }

    
    cJSON *a_obj_documenttypechecklist_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_documenttypechecklist)){
        goto end; //nonprimitive container
    }

    a_obj_documenttypechecklistList = list_createList();

    cJSON_ArrayForEach(a_obj_documenttypechecklist_local_nonprimitive,a_obj_documenttypechecklist )
    {
        if(!cJSON_IsObject(a_obj_documenttypechecklist_local_nonprimitive)){
            goto end;
        }
        documenttypechecklist_request_compound_t *a_obj_documenttypechecklistItem = documenttypechecklist_request_compound_parseFromJSON(a_obj_documenttypechecklist_local_nonprimitive);

        list_addElement(a_obj_documenttypechecklistList, a_obj_documenttypechecklistItem);
    }



    documenttypechecklist_create_object_v1_request_local_var = documenttypechecklist_create_object_v1_request_create_internal (
        a_obj_documenttypechecklistList
        );

    if (!documenttypechecklist_create_object_v1_request_local_var) {
        goto end;
    }

    return documenttypechecklist_create_object_v1_request_local_var;
end:
    if (a_obj_documenttypechecklistList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_documenttypechecklistList) {
            documenttypechecklist_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_documenttypechecklistList);
        a_obj_documenttypechecklistList = NULL;
    }
    return NULL;

}
