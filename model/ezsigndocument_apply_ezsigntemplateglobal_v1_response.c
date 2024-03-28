#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_apply_ezsigntemplateglobal_v1_response.h"



ezsigndocument_apply_ezsigntemplateglobal_v1_response_t *ezsigndocument_apply_ezsigntemplateglobal_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    list_t *a_obj_warning
    ) {
    ezsigndocument_apply_ezsigntemplateglobal_v1_response_t *ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var = malloc(sizeof(ezsigndocument_apply_ezsigntemplateglobal_v1_response_t));
    if (!ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var) {
        return NULL;
    }
    ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var->obj_debug = obj_debug;
    ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var->a_obj_warning = a_obj_warning;

    return ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var;
}


void ezsigndocument_apply_ezsigntemplateglobal_v1_response_free(ezsigndocument_apply_ezsigntemplateglobal_v1_response_t *ezsigndocument_apply_ezsigntemplateglobal_v1_response) {
    if(NULL == ezsigndocument_apply_ezsigntemplateglobal_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload);
        ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug);
        ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning) {
        list_ForEach(listEntry, ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning) {
            common_response_warning_free(listEntry->data);
        }
        list_freeList(ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning);
        ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning = NULL;
    }
    free(ezsigndocument_apply_ezsigntemplateglobal_v1_response);
}

cJSON *ezsigndocument_apply_ezsigntemplateglobal_v1_response_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v1_response_t *ezsigndocument_apply_ezsigntemplateglobal_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload
    if (!ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug
    if(ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning
    if(ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning) {
    cJSON *a_obj_warning = cJSON_AddArrayToObject(item, "a_objWarning");
    if(a_obj_warning == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_warningListEntry;
    if (ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning) {
    list_ForEach(a_obj_warningListEntry, ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning) {
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

ezsigndocument_apply_ezsigntemplateglobal_v1_response_t *ezsigndocument_apply_ezsigntemplateglobal_v1_response_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplateglobal_v1_responseJSON){

    ezsigndocument_apply_ezsigntemplateglobal_v1_response_t *ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var = NULL;

    // define the local variable for ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local list for ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning
    list_t *a_obj_warningList = NULL;

    // ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigndocument_apply_ezsigntemplateglobal_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsigndocument_apply_ezsigntemplateglobal_v1_response->a_obj_warning
    cJSON *a_obj_warning = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplateglobal_v1_responseJSON, "a_objWarning");
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


    ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var = ezsigndocument_apply_ezsigntemplateglobal_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        a_obj_warning ? a_obj_warningList : NULL
        );

    return ezsigndocument_apply_ezsigntemplateglobal_v1_response_local_var;
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