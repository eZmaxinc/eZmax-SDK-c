#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_get_autocomplete_v2_response_m_payload.h"



static ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezmaxinvoicing
    ) {
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t));
    if (!ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezmaxinvoicing = a_obj_ezmaxinvoicing;

    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezmaxinvoicing
    ) {
    return ezmaxinvoicing_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezmaxinvoicing
        );
}

void ezmaxinvoicing_get_autocomplete_v2_response_m_payload_free(ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezmaxinvoicing_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezmaxinvoicing_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicing_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing) {
        list_ForEach(listEntry, ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing) {
            ezmaxinvoicing_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing);
        ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing = NULL;
    }
    free(ezmaxinvoicing_get_autocomplete_v2_response_m_payload);
}

cJSON *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing
    if (!ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicing = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicing");
    if(a_obj_ezmaxinvoicing == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingListEntry;
    if (ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing) {
    list_ForEach(a_obj_ezmaxinvoicingListEntry, ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing) {
    cJSON *itemLocal = ezmaxinvoicing_autocomplete_element_response_convertToJSON(a_obj_ezmaxinvoicingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicing, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezmaxinvoicing_get_autocomplete_v2_response_m_payloadJSON){

    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing
    list_t *a_obj_ezmaxinvoicingList = NULL;

    // ezmaxinvoicing_get_autocomplete_v2_response_m_payload->a_obj_ezmaxinvoicing
    cJSON *a_obj_ezmaxinvoicing = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_get_autocomplete_v2_response_m_payloadJSON, "a_objEzmaxinvoicing");
    if (cJSON_IsNull(a_obj_ezmaxinvoicing)) {
        a_obj_ezmaxinvoicing = NULL;
    }
    if (!a_obj_ezmaxinvoicing) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicing_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicing)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicing_local_nonprimitive,a_obj_ezmaxinvoicing )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicing_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicing_autocomplete_element_response_t *a_obj_ezmaxinvoicingItem = ezmaxinvoicing_autocomplete_element_response_parseFromJSON(a_obj_ezmaxinvoicing_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingList, a_obj_ezmaxinvoicingItem);
    }


    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezmaxinvoicingList
        );

    return ezmaxinvoicing_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezmaxinvoicingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingList) {
            ezmaxinvoicing_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingList);
        a_obj_ezmaxinvoicingList = NULL;
    }
    return NULL;

}
