#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxproduct_get_autocomplete_v2_response_m_payload.h"



ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezmaxproduct
    ) {
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezmaxproduct_get_autocomplete_v2_response_m_payload_t));
    if (!ezmaxproduct_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezmaxproduct_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezmaxproduct = a_obj_ezmaxproduct;

    return ezmaxproduct_get_autocomplete_v2_response_m_payload_local_var;
}


void ezmaxproduct_get_autocomplete_v2_response_m_payload_free(ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezmaxproduct_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct) {
        list_ForEach(listEntry, ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct) {
            ezmaxproduct_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct);
        ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct = NULL;
    }
    free(ezmaxproduct_get_autocomplete_v2_response_m_payload);
}

cJSON *ezmaxproduct_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct
    if(ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct) {
    cJSON *a_obj_ezmaxproduct = cJSON_AddArrayToObject(item, "a_objEzmaxproduct");
    if(a_obj_ezmaxproduct == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxproductListEntry;
    if (ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct) {
    list_ForEach(a_obj_ezmaxproductListEntry, ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct) {
    cJSON *itemLocal = ezmaxproduct_autocomplete_element_response_convertToJSON(a_obj_ezmaxproductListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxproduct, itemLocal);
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

ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezmaxproduct_get_autocomplete_v2_response_m_payloadJSON){

    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct
    list_t *a_obj_ezmaxproductList = NULL;

    // ezmaxproduct_get_autocomplete_v2_response_m_payload->a_obj_ezmaxproduct
    cJSON *a_obj_ezmaxproduct = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_get_autocomplete_v2_response_m_payloadJSON, "a_objEzmaxproduct");
    if (a_obj_ezmaxproduct) { 
    cJSON *a_obj_ezmaxproduct_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxproduct)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxproductList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxproduct_local_nonprimitive,a_obj_ezmaxproduct )
    {
        if(!cJSON_IsObject(a_obj_ezmaxproduct_local_nonprimitive)){
            goto end;
        }
        ezmaxproduct_autocomplete_element_response_t *a_obj_ezmaxproductItem = ezmaxproduct_autocomplete_element_response_parseFromJSON(a_obj_ezmaxproduct_local_nonprimitive);

        list_addElement(a_obj_ezmaxproductList, a_obj_ezmaxproductItem);
    }
    }


    ezmaxproduct_get_autocomplete_v2_response_m_payload_local_var = ezmaxproduct_get_autocomplete_v2_response_m_payload_create (
        a_obj_ezmaxproduct ? a_obj_ezmaxproductList : NULL
        );

    return ezmaxproduct_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezmaxproductList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxproductList) {
            ezmaxproduct_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxproductList);
        a_obj_ezmaxproductList = NULL;
    }
    return NULL;

}
