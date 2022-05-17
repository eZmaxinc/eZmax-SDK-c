#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_response_compound_all_of.h"



ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of_create(
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
    ) {
    ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of_local_var = malloc(sizeof(ezsigntemplate_response_compound_all_of_t));
    if (!ezsigntemplate_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsigntemplate_response_compound_all_of_local_var->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    ezsigntemplate_response_compound_all_of_local_var->a_obj_ezsigntemplatesigner = a_obj_ezsigntemplatesigner;

    return ezsigntemplate_response_compound_all_of_local_var;
}


void ezsigntemplate_response_compound_all_of_free(ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of) {
    if(NULL == ezsigntemplate_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument) {
        ezsigntemplatedocument_response_free(ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument);
        ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument = NULL;
    }
    if (ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner) {
        list_ForEach(listEntry, ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner) {
            ezsigntemplatesigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner);
        ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner = NULL;
    }
    free(ezsigntemplate_response_compound_all_of);
}

cJSON *ezsigntemplate_response_compound_all_of_convertToJSON(ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument
    if(ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument) {
    cJSON *obj_ezsigntemplatedocument_local_JSON = ezsigntemplatedocument_response_convertToJSON(ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument);
    if(obj_ezsigntemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocument", obj_ezsigntemplatedocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner
    if (!ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesigner");
    if(a_obj_ezsigntemplatesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignerListEntry;
    if (ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner) {
    list_ForEach(a_obj_ezsigntemplatesignerListEntry, ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner) {
    cJSON *itemLocal = ezsigntemplatesigner_response_compound_convertToJSON(a_obj_ezsigntemplatesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplate_response_compound_all_ofJSON){

    ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of_local_var = NULL;

    // define the local variable for ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument_local_nonprim = NULL;

    // define the local list for ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner
    list_t *a_obj_ezsigntemplatesignerList = NULL;

    // ezsigntemplate_response_compound_all_of->obj_ezsigntemplatedocument
    cJSON *obj_ezsigntemplatedocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_all_ofJSON, "objEzsigntemplatedocument");
    if (obj_ezsigntemplatedocument) { 
    obj_ezsigntemplatedocument_local_nonprim = ezsigntemplatedocument_response_parseFromJSON(obj_ezsigntemplatedocument); //nonprimitive
    }

    // ezsigntemplate_response_compound_all_of->a_obj_ezsigntemplatesigner
    cJSON *a_obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_response_compound_all_ofJSON, "a_objEzsigntemplatesigner");
    if (!a_obj_ezsigntemplatesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesigner_local_nonprimitive,a_obj_ezsigntemplatesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesigner_response_compound_t *a_obj_ezsigntemplatesignerItem = ezsigntemplatesigner_response_compound_parseFromJSON(a_obj_ezsigntemplatesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignerList, a_obj_ezsigntemplatesignerItem);
    }


    ezsigntemplate_response_compound_all_of_local_var = ezsigntemplate_response_compound_all_of_create (
        obj_ezsigntemplatedocument ? obj_ezsigntemplatedocument_local_nonprim : NULL,
        a_obj_ezsigntemplatesignerList
        );

    return ezsigntemplate_response_compound_all_of_local_var;
end:
    if (obj_ezsigntemplatedocument_local_nonprim) {
        ezsigntemplatedocument_response_free(obj_ezsigntemplatedocument_local_nonprim);
        obj_ezsigntemplatedocument_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignerList) {
            ezsigntemplatesigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignerList);
        a_obj_ezsigntemplatesignerList = NULL;
    }
    return NULL;

}
