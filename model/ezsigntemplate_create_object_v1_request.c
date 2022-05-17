#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_create_object_v1_request.h"



ezsigntemplate_create_object_v1_request_t *ezsigntemplate_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplate
    ) {
    ezsigntemplate_create_object_v1_request_t *ezsigntemplate_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplate_create_object_v1_request_t));
    if (!ezsigntemplate_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplate_create_object_v1_request_local_var->a_obj_ezsigntemplate = a_obj_ezsigntemplate;

    return ezsigntemplate_create_object_v1_request_local_var;
}


void ezsigntemplate_create_object_v1_request_free(ezsigntemplate_create_object_v1_request_t *ezsigntemplate_create_object_v1_request) {
    if(NULL == ezsigntemplate_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate) {
        list_ForEach(listEntry, ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate) {
            ezsigntemplate_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate);
        ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_create_object_v1_request);
}

cJSON *ezsigntemplate_create_object_v1_request_convertToJSON(ezsigntemplate_create_object_v1_request_t *ezsigntemplate_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate
    if (!ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplate = cJSON_AddArrayToObject(item, "a_objEzsigntemplate");
    if(a_obj_ezsigntemplate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateListEntry;
    if (ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate) {
    list_ForEach(a_obj_ezsigntemplateListEntry, ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate) {
    cJSON *itemLocal = ezsigntemplate_request_compound_convertToJSON(a_obj_ezsigntemplateListEntry->data);
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

ezsigntemplate_create_object_v1_request_t *ezsigntemplate_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplate_create_object_v1_requestJSON){

    ezsigntemplate_create_object_v1_request_t *ezsigntemplate_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate
    list_t *a_obj_ezsigntemplateList = NULL;

    // ezsigntemplate_create_object_v1_request->a_obj_ezsigntemplate
    cJSON *a_obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_create_object_v1_requestJSON, "a_objEzsigntemplate");
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
        ezsigntemplate_request_compound_t *a_obj_ezsigntemplateItem = ezsigntemplate_request_compound_parseFromJSON(a_obj_ezsigntemplate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateList, a_obj_ezsigntemplateItem);
    }


    ezsigntemplate_create_object_v1_request_local_var = ezsigntemplate_create_object_v1_request_create (
        a_obj_ezsigntemplateList
        );

    return ezsigntemplate_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateList) {
            ezsigntemplate_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateList);
        a_obj_ezsigntemplateList = NULL;
    }
    return NULL;

}
