#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_create_object_v1_request.h"



static documenttype_create_object_v1_request_t *documenttype_create_object_v1_request_create_internal(
    list_t *a_obj_documenttype
    ) {
    documenttype_create_object_v1_request_t *documenttype_create_object_v1_request_local_var = malloc(sizeof(documenttype_create_object_v1_request_t));
    if (!documenttype_create_object_v1_request_local_var) {
        return NULL;
    }
    memset(documenttype_create_object_v1_request_local_var, 0, sizeof(documenttype_create_object_v1_request_t));
    documenttype_create_object_v1_request_local_var->_library_owned = 1;
    documenttype_create_object_v1_request_local_var->a_obj_documenttype = a_obj_documenttype;
    return documenttype_create_object_v1_request_local_var;
}

__attribute__((deprecated)) documenttype_create_object_v1_request_t *documenttype_create_object_v1_request_create(
    list_t *a_obj_documenttype
    ) {
    documenttype_create_object_v1_request_t *result = documenttype_create_object_v1_request_create_internal (
        a_obj_documenttype
        );
    if (!result) {
    }
    return result;
}

void documenttype_create_object_v1_request_free(documenttype_create_object_v1_request_t *documenttype_create_object_v1_request) {
    if(NULL == documenttype_create_object_v1_request){
        return ;
    }
    if(documenttype_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_create_object_v1_request->a_obj_documenttype) {
        list_ForEach(listEntry, documenttype_create_object_v1_request->a_obj_documenttype) {
            documenttype_request_compound_free(listEntry->data);
        }
        list_freeList(documenttype_create_object_v1_request->a_obj_documenttype);
        documenttype_create_object_v1_request->a_obj_documenttype = NULL;
    }
    free(documenttype_create_object_v1_request);
}

cJSON *documenttype_create_object_v1_request_convertToJSON(documenttype_create_object_v1_request_t *documenttype_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_create_object_v1_request->a_obj_documenttype
    if (!documenttype_create_object_v1_request->a_obj_documenttype) {
        goto fail;
    }
    cJSON *a_obj_documenttype = cJSON_AddArrayToObject(item, "a_objDocumenttype");
    if(a_obj_documenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_documenttypeListEntry;
    if (documenttype_create_object_v1_request->a_obj_documenttype) {
    list_ForEach(a_obj_documenttypeListEntry, documenttype_create_object_v1_request->a_obj_documenttype) {
    cJSON *itemLocal = documenttype_request_compound_convertToJSON(a_obj_documenttypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_documenttype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttype_create_object_v1_request_t *documenttype_create_object_v1_request_parseFromJSON(cJSON *documenttype_create_object_v1_requestJSON){

    documenttype_create_object_v1_request_t *documenttype_create_object_v1_request_local_var = NULL;

    // define the local list for documenttype_create_object_v1_request->a_obj_documenttype
    list_t *a_obj_documenttypeList = NULL;

    // documenttype_create_object_v1_request->a_obj_documenttype
    cJSON *a_obj_documenttype = cJSON_GetObjectItemCaseSensitive(documenttype_create_object_v1_requestJSON, "a_objDocumenttype");
    if (cJSON_IsNull(a_obj_documenttype)) {
        a_obj_documenttype = NULL;
    }
    if (!a_obj_documenttype) {
        goto end;
    }

    
    cJSON *a_obj_documenttype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_documenttype)){
        goto end; //nonprimitive container
    }

    a_obj_documenttypeList = list_createList();

    cJSON_ArrayForEach(a_obj_documenttype_local_nonprimitive,a_obj_documenttype )
    {
        if(!cJSON_IsObject(a_obj_documenttype_local_nonprimitive)){
            goto end;
        }
        documenttype_request_compound_t *a_obj_documenttypeItem = documenttype_request_compound_parseFromJSON(a_obj_documenttype_local_nonprimitive);

        list_addElement(a_obj_documenttypeList, a_obj_documenttypeItem);
    }



    documenttype_create_object_v1_request_local_var = documenttype_create_object_v1_request_create_internal (
        a_obj_documenttypeList
        );

    if (!documenttype_create_object_v1_request_local_var) {
        goto end;
    }

    return documenttype_create_object_v1_request_local_var;
end:
    if (a_obj_documenttypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_documenttypeList) {
            documenttype_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_documenttypeList);
        a_obj_documenttypeList = NULL;
    }
    return NULL;

}
