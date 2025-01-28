#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_create_object_v3_request.h"



static ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request_create_internal(
    list_t *a_obj_ezsigntemplate
    ) {
    ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request_local_var = malloc(sizeof(ezsigntemplate_create_object_v3_request_t));
    if (!ezsigntemplate_create_object_v3_request_local_var) {
        return NULL;
    }
    ezsigntemplate_create_object_v3_request_local_var->a_obj_ezsigntemplate = a_obj_ezsigntemplate;

    ezsigntemplate_create_object_v3_request_local_var->_library_owned = 1;
    return ezsigntemplate_create_object_v3_request_local_var;
}

__attribute__((deprecated)) ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request_create(
    list_t *a_obj_ezsigntemplate
    ) {
    return ezsigntemplate_create_object_v3_request_create_internal (
        a_obj_ezsigntemplate
        );
}

void ezsigntemplate_create_object_v3_request_free(ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request) {
    if(NULL == ezsigntemplate_create_object_v3_request){
        return ;
    }
    if(ezsigntemplate_create_object_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_create_object_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate) {
        list_ForEach(listEntry, ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate) {
            ezsigntemplate_request_compound_v3_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate);
        ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_create_object_v3_request);
}

cJSON *ezsigntemplate_create_object_v3_request_convertToJSON(ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate
    if (!ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplate = cJSON_AddArrayToObject(item, "a_objEzsigntemplate");
    if(a_obj_ezsigntemplate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateListEntry;
    if (ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate) {
    list_ForEach(a_obj_ezsigntemplateListEntry, ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate) {
    cJSON *itemLocal = ezsigntemplate_request_compound_v3_convertToJSON(a_obj_ezsigntemplateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplate, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request_parseFromJSON(cJSON *ezsigntemplate_create_object_v3_requestJSON){

    ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request_local_var = NULL;

    // define the local list for ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate
    list_t *a_obj_ezsigntemplateList = NULL;

    // ezsigntemplate_create_object_v3_request->a_obj_ezsigntemplate
    cJSON *a_obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_create_object_v3_requestJSON, "a_objEzsigntemplate");
    if (cJSON_IsNull(a_obj_ezsigntemplate)) {
        a_obj_ezsigntemplate = NULL;
    }
    if (!a_obj_ezsigntemplate) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplate_local_nonprimitive,a_obj_ezsigntemplate )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplate_local_nonprimitive)){
            goto end;
        }
        ezsigntemplate_request_compound_v3_t *a_obj_ezsigntemplateItem = ezsigntemplate_request_compound_v3_parseFromJSON(a_obj_ezsigntemplate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateList, a_obj_ezsigntemplateItem);
    }


    ezsigntemplate_create_object_v3_request_local_var = ezsigntemplate_create_object_v3_request_create_internal (
        a_obj_ezsigntemplateList
        );

    return ezsigntemplate_create_object_v3_request_local_var;
end:
    if (a_obj_ezsigntemplateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateList) {
            ezsigntemplate_request_compound_v3_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateList);
        a_obj_ezsigntemplateList = NULL;
    }
    return NULL;

}
