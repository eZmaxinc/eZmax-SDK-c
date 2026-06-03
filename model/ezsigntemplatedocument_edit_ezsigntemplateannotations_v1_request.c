#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request.h"



static ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_create_internal(
    list_t *a_obj_ezsigntemplateannotation
    ) {
    ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var = malloc(sizeof(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t));
    if (!ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var) {
        return NULL;
    }
    memset(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var, 0, sizeof(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t));
    ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var->_library_owned = 1;
    ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var->a_obj_ezsigntemplateannotation = a_obj_ezsigntemplateannotation;
    return ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_create(
    list_t *a_obj_ezsigntemplateannotation
    ) {
    ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *result = ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_create_internal (
        a_obj_ezsigntemplateannotation
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_free(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request) {
    if(NULL == ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request){
        return ;
    }
    if(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation) {
        list_ForEach(listEntry, ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation) {
            ezsigntemplateannotation_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation);
        ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation = NULL;
    }
    free(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request);
}

cJSON *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation
    if (!ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateannotation = cJSON_AddArrayToObject(item, "a_objEzsigntemplateannotation");
    if(a_obj_ezsigntemplateannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateannotationListEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation) {
    list_ForEach(a_obj_ezsigntemplateannotationListEntry, ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation) {
    cJSON *itemLocal = ezsigntemplateannotation_request_compound_convertToJSON(a_obj_ezsigntemplateannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateannotation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_requestJSON){

    ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation
    list_t *a_obj_ezsigntemplateannotationList = NULL;

    // ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request->a_obj_ezsigntemplateannotation
    cJSON *a_obj_ezsigntemplateannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_requestJSON, "a_objEzsigntemplateannotation");
    if (cJSON_IsNull(a_obj_ezsigntemplateannotation)) {
        a_obj_ezsigntemplateannotation = NULL;
    }
    if (!a_obj_ezsigntemplateannotation) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateannotation_local_nonprimitive,a_obj_ezsigntemplateannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateannotation_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateannotation_request_compound_t *a_obj_ezsigntemplateannotationItem = ezsigntemplateannotation_request_compound_parseFromJSON(a_obj_ezsigntemplateannotation_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateannotationList, a_obj_ezsigntemplateannotationItem);
    }



    ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var = ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_create_internal (
        a_obj_ezsigntemplateannotationList
        );

    if (!ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var) {
        goto end;
    }

    return ezsigntemplatedocument_edit_ezsigntemplateannotations_v1_request_local_var;
end:
    if (a_obj_ezsigntemplateannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateannotationList) {
            ezsigntemplateannotation_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateannotationList);
        a_obj_ezsigntemplateannotationList = NULL;
    }
    return NULL;

}
