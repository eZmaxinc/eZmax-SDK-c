#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_prefill_ezsignform_v1_request.h"



static ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request_create_internal(
    list_t *a_obj_prefillezsignformvalue
    ) {
    ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request_local_var = malloc(sizeof(ezsigndocument_prefill_ezsignform_v1_request_t));
    if (!ezsigndocument_prefill_ezsignform_v1_request_local_var) {
        return NULL;
    }
    memset(ezsigndocument_prefill_ezsignform_v1_request_local_var, 0, sizeof(ezsigndocument_prefill_ezsignform_v1_request_t));
    ezsigndocument_prefill_ezsignform_v1_request_local_var->_library_owned = 1;
    ezsigndocument_prefill_ezsignform_v1_request_local_var->a_obj_prefillezsignformvalue = a_obj_prefillezsignformvalue;
    return ezsigndocument_prefill_ezsignform_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request_create(
    list_t *a_obj_prefillezsignformvalue
    ) {
    ezsigndocument_prefill_ezsignform_v1_request_t *result = ezsigndocument_prefill_ezsignform_v1_request_create_internal (
        a_obj_prefillezsignformvalue
        );
    if (!result) {
    }
    return result;
}

void ezsigndocument_prefill_ezsignform_v1_request_free(ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request) {
    if(NULL == ezsigndocument_prefill_ezsignform_v1_request){
        return ;
    }
    if(ezsigndocument_prefill_ezsignform_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_prefill_ezsignform_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue) {
        list_ForEach(listEntry, ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue) {
            custom_prefill_ezsignform_value_request_free(listEntry->data);
        }
        list_freeList(ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue);
        ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue = NULL;
    }
    free(ezsigndocument_prefill_ezsignform_v1_request);
}

cJSON *ezsigndocument_prefill_ezsignform_v1_request_convertToJSON(ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue
    if (!ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue) {
        goto fail;
    }
    cJSON *a_obj_prefillezsignformvalue = cJSON_AddArrayToObject(item, "a_objPrefillezsignformvalue");
    if(a_obj_prefillezsignformvalue == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_prefillezsignformvalueListEntry;
    if (ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue) {
    list_ForEach(a_obj_prefillezsignformvalueListEntry, ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue) {
    cJSON *itemLocal = custom_prefill_ezsignform_value_request_convertToJSON(a_obj_prefillezsignformvalueListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_prefillezsignformvalue, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request_parseFromJSON(cJSON *ezsigndocument_prefill_ezsignform_v1_requestJSON){

    ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request_local_var = NULL;

    // define the local list for ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue
    list_t *a_obj_prefillezsignformvalueList = NULL;

    // ezsigndocument_prefill_ezsignform_v1_request->a_obj_prefillezsignformvalue
    cJSON *a_obj_prefillezsignformvalue = cJSON_GetObjectItemCaseSensitive(ezsigndocument_prefill_ezsignform_v1_requestJSON, "a_objPrefillezsignformvalue");
    if (cJSON_IsNull(a_obj_prefillezsignformvalue)) {
        a_obj_prefillezsignformvalue = NULL;
    }
    if (!a_obj_prefillezsignformvalue) {
        goto end;
    }

    
    cJSON *a_obj_prefillezsignformvalue_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_prefillezsignformvalue)){
        goto end; //nonprimitive container
    }

    a_obj_prefillezsignformvalueList = list_createList();

    cJSON_ArrayForEach(a_obj_prefillezsignformvalue_local_nonprimitive,a_obj_prefillezsignformvalue )
    {
        if(!cJSON_IsObject(a_obj_prefillezsignformvalue_local_nonprimitive)){
            goto end;
        }
        custom_prefill_ezsignform_value_request_t *a_obj_prefillezsignformvalueItem = custom_prefill_ezsignform_value_request_parseFromJSON(a_obj_prefillezsignformvalue_local_nonprimitive);

        list_addElement(a_obj_prefillezsignformvalueList, a_obj_prefillezsignformvalueItem);
    }



    ezsigndocument_prefill_ezsignform_v1_request_local_var = ezsigndocument_prefill_ezsignform_v1_request_create_internal (
        a_obj_prefillezsignformvalueList
        );

    if (!ezsigndocument_prefill_ezsignform_v1_request_local_var) {
        goto end;
    }

    return ezsigndocument_prefill_ezsignform_v1_request_local_var;
end:
    if (a_obj_prefillezsignformvalueList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_prefillezsignformvalueList) {
            custom_prefill_ezsignform_value_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_prefillezsignformvalueList);
        a_obj_prefillezsignformvalueList = NULL;
    }
    return NULL;

}
