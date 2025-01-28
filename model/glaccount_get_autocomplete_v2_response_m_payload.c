#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "glaccount_get_autocomplete_v2_response_m_payload.h"



static glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_glaccount
    ) {
    glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(glaccount_get_autocomplete_v2_response_m_payload_t));
    if (!glaccount_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    glaccount_get_autocomplete_v2_response_m_payload_local_var->a_obj_glaccount = a_obj_glaccount;

    glaccount_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return glaccount_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_glaccount
    ) {
    return glaccount_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_glaccount
        );
}

void glaccount_get_autocomplete_v2_response_m_payload_free(glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload) {
    if(NULL == glaccount_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(glaccount_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "glaccount_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount) {
        list_ForEach(listEntry, glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount) {
            glaccount_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount);
        glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount = NULL;
    }
    free(glaccount_get_autocomplete_v2_response_m_payload);
}

cJSON *glaccount_get_autocomplete_v2_response_m_payload_convertToJSON(glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount
    if (!glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount) {
        goto fail;
    }
    cJSON *a_obj_glaccount = cJSON_AddArrayToObject(item, "a_objGlaccount");
    if(a_obj_glaccount == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_glaccountListEntry;
    if (glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount) {
    list_ForEach(a_obj_glaccountListEntry, glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount) {
    cJSON *itemLocal = glaccount_autocomplete_element_response_convertToJSON(a_obj_glaccountListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_glaccount, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *glaccount_get_autocomplete_v2_response_m_payloadJSON){

    glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount
    list_t *a_obj_glaccountList = NULL;

    // glaccount_get_autocomplete_v2_response_m_payload->a_obj_glaccount
    cJSON *a_obj_glaccount = cJSON_GetObjectItemCaseSensitive(glaccount_get_autocomplete_v2_response_m_payloadJSON, "a_objGlaccount");
    if (cJSON_IsNull(a_obj_glaccount)) {
        a_obj_glaccount = NULL;
    }
    if (!a_obj_glaccount) {
        goto end;
    }

    
    cJSON *a_obj_glaccount_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_glaccount)){
        goto end; //nonprimitive container
    }

    a_obj_glaccountList = list_createList();

    cJSON_ArrayForEach(a_obj_glaccount_local_nonprimitive,a_obj_glaccount )
    {
        if(!cJSON_IsObject(a_obj_glaccount_local_nonprimitive)){
            goto end;
        }
        glaccount_autocomplete_element_response_t *a_obj_glaccountItem = glaccount_autocomplete_element_response_parseFromJSON(a_obj_glaccount_local_nonprimitive);

        list_addElement(a_obj_glaccountList, a_obj_glaccountItem);
    }


    glaccount_get_autocomplete_v2_response_m_payload_local_var = glaccount_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_glaccountList
        );

    return glaccount_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_glaccountList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_glaccountList) {
            glaccount_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_glaccountList);
        a_obj_glaccountList = NULL;
    }
    return NULL;

}
