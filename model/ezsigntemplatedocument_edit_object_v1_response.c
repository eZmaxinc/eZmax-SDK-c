#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_object_v1_response.h"



ezsigntemplatedocument_edit_object_v1_response_t *ezsigntemplatedocument_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    list_t *a_obj_warning
    ) {
    ezsigntemplatedocument_edit_object_v1_response_t *ezsigntemplatedocument_edit_object_v1_response_local_var = malloc(sizeof(ezsigntemplatedocument_edit_object_v1_response_t));
    if (!ezsigntemplatedocument_edit_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatedocument_edit_object_v1_response_local_var->obj_debug = obj_debug;
    ezsigntemplatedocument_edit_object_v1_response_local_var->a_obj_warning = a_obj_warning;

    return ezsigntemplatedocument_edit_object_v1_response_local_var;
}


void ezsigntemplatedocument_edit_object_v1_response_free(ezsigntemplatedocument_edit_object_v1_response_t *ezsigntemplatedocument_edit_object_v1_response) {
    if(NULL == ezsigntemplatedocument_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload);
        ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatedocument_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatedocument_edit_object_v1_response->obj_debug);
        ezsigntemplatedocument_edit_object_v1_response->obj_debug = NULL;
    }
    if (ezsigntemplatedocument_edit_object_v1_response->a_obj_warning) {
        list_ForEach(listEntry, ezsigntemplatedocument_edit_object_v1_response->a_obj_warning) {
            common_response_warning_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_edit_object_v1_response->a_obj_warning);
        ezsigntemplatedocument_edit_object_v1_response->a_obj_warning = NULL;
    }
    free(ezsigntemplatedocument_edit_object_v1_response);
}

cJSON *ezsigntemplatedocument_edit_object_v1_response_convertToJSON(ezsigntemplatedocument_edit_object_v1_response_t *ezsigntemplatedocument_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload
    if(ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatedocument_edit_object_v1_response->obj_debug
    if(ezsigntemplatedocument_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatedocument_edit_object_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatedocument_edit_object_v1_response->a_obj_warning
    if(ezsigntemplatedocument_edit_object_v1_response->a_obj_warning) {
    cJSON *a_obj_warning = cJSON_AddArrayToObject(item, "a_objWarning");
    if(a_obj_warning == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_warningListEntry;
    if (ezsigntemplatedocument_edit_object_v1_response->a_obj_warning) {
    list_ForEach(a_obj_warningListEntry, ezsigntemplatedocument_edit_object_v1_response->a_obj_warning) {
    cJSON *itemLocal = common_response_warning_convertToJSON(a_obj_warningListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_warning, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_edit_object_v1_response_t *ezsigntemplatedocument_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplatedocument_edit_object_v1_responseJSON){

    ezsigntemplatedocument_edit_object_v1_response_t *ezsigntemplatedocument_edit_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatedocument_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local list for ezsigntemplatedocument_edit_object_v1_response->a_obj_warning
    list_t *a_obj_warningList = NULL;

    // ezsigntemplatedocument_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplatedocument_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsigntemplatedocument_edit_object_v1_response->a_obj_warning
    cJSON *a_obj_warning = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_object_v1_responseJSON, "a_objWarning");
    if (a_obj_warning) { 
    cJSON *a_obj_warning_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_warning)){
        goto end; //nonprimitive container
    }

    a_obj_warningList = list_createList();

    cJSON_ArrayForEach(a_obj_warning_local_nonprimitive,a_obj_warning )
    {
        if(!cJSON_IsObject(a_obj_warning_local_nonprimitive)){
            goto end;
        }
        common_response_warning_t *a_obj_warningItem = common_response_warning_parseFromJSON(a_obj_warning_local_nonprimitive);

        list_addElement(a_obj_warningList, a_obj_warningItem);
    }
    }


    ezsigntemplatedocument_edit_object_v1_response_local_var = ezsigntemplatedocument_edit_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL,
        a_obj_warning ? a_obj_warningList : NULL
        );

    return ezsigntemplatedocument_edit_object_v1_response_local_var;
end:
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    if (a_obj_warningList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_warningList) {
            common_response_warning_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_warningList);
        a_obj_warningList = NULL;
    }
    return NULL;

}
