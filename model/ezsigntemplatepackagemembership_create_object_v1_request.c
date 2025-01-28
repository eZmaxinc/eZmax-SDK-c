#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_create_object_v1_request.h"



static ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigntemplatepackagemembership
    ) {
    ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepackagemembership_create_object_v1_request_t));
    if (!ezsigntemplatepackagemembership_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_create_object_v1_request_local_var->a_obj_ezsigntemplatepackagemembership = a_obj_ezsigntemplatepackagemembership;

    ezsigntemplatepackagemembership_create_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatepackagemembership_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepackagemembership
    ) {
    return ezsigntemplatepackagemembership_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatepackagemembership
        );
}

void ezsigntemplatepackagemembership_create_object_v1_request_free(ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request) {
    if(NULL == ezsigntemplatepackagemembership_create_object_v1_request){
        return ;
    }
    if(ezsigntemplatepackagemembership_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagemembership_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership) {
        list_ForEach(listEntry, ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership) {
            ezsigntemplatepackagemembership_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership);
        ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership = NULL;
    }
    free(ezsigntemplatepackagemembership_create_object_v1_request);
}

cJSON *ezsigntemplatepackagemembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership
    if (!ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagemembership");
    if(a_obj_ezsigntemplatepackagemembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagemembershipListEntry;
    if (ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership) {
    list_ForEach(a_obj_ezsigntemplatepackagemembershipListEntry, ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership) {
    cJSON *itemLocal = ezsigntemplatepackagemembership_request_compound_convertToJSON(a_obj_ezsigntemplatepackagemembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagemembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackagemembership_create_object_v1_requestJSON){

    ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership
    list_t *a_obj_ezsigntemplatepackagemembershipList = NULL;

    // ezsigntemplatepackagemembership_create_object_v1_request->a_obj_ezsigntemplatepackagemembership
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_create_object_v1_requestJSON, "a_objEzsigntemplatepackagemembership");
    if (cJSON_IsNull(a_obj_ezsigntemplatepackagemembership)) {
        a_obj_ezsigntemplatepackagemembership = NULL;
    }
    if (!a_obj_ezsigntemplatepackagemembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagemembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagemembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagemembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagemembership_local_nonprimitive,a_obj_ezsigntemplatepackagemembership )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagemembership_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagemembership_request_compound_t *a_obj_ezsigntemplatepackagemembershipItem = ezsigntemplatepackagemembership_request_compound_parseFromJSON(a_obj_ezsigntemplatepackagemembership_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagemembershipList, a_obj_ezsigntemplatepackagemembershipItem);
    }


    ezsigntemplatepackagemembership_create_object_v1_request_local_var = ezsigntemplatepackagemembership_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatepackagemembershipList
        );

    return ezsigntemplatepackagemembership_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatepackagemembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagemembershipList) {
            ezsigntemplatepackagemembership_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagemembershipList);
        a_obj_ezsigntemplatepackagemembershipList = NULL;
    }
    return NULL;

}
