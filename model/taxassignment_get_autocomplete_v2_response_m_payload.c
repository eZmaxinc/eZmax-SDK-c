#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "taxassignment_get_autocomplete_v2_response_m_payload.h"



static taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_taxassignment
    ) {
    taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(taxassignment_get_autocomplete_v2_response_m_payload_t));
    if (!taxassignment_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    taxassignment_get_autocomplete_v2_response_m_payload_local_var->a_obj_taxassignment = a_obj_taxassignment;

    taxassignment_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return taxassignment_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_taxassignment
    ) {
    return taxassignment_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_taxassignment
        );
}

void taxassignment_get_autocomplete_v2_response_m_payload_free(taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload) {
    if(NULL == taxassignment_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(taxassignment_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "taxassignment_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment) {
        list_ForEach(listEntry, taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment) {
            taxassignment_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment);
        taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment = NULL;
    }
    free(taxassignment_get_autocomplete_v2_response_m_payload);
}

cJSON *taxassignment_get_autocomplete_v2_response_m_payload_convertToJSON(taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment
    if (!taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment) {
        goto fail;
    }
    cJSON *a_obj_taxassignment = cJSON_AddArrayToObject(item, "a_objTaxassignment");
    if(a_obj_taxassignment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_taxassignmentListEntry;
    if (taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment) {
    list_ForEach(a_obj_taxassignmentListEntry, taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment) {
    cJSON *itemLocal = taxassignment_autocomplete_element_response_convertToJSON(a_obj_taxassignmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_taxassignment, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *taxassignment_get_autocomplete_v2_response_m_payloadJSON){

    taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment
    list_t *a_obj_taxassignmentList = NULL;

    // taxassignment_get_autocomplete_v2_response_m_payload->a_obj_taxassignment
    cJSON *a_obj_taxassignment = cJSON_GetObjectItemCaseSensitive(taxassignment_get_autocomplete_v2_response_m_payloadJSON, "a_objTaxassignment");
    if (cJSON_IsNull(a_obj_taxassignment)) {
        a_obj_taxassignment = NULL;
    }
    if (!a_obj_taxassignment) {
        goto end;
    }

    
    cJSON *a_obj_taxassignment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_taxassignment)){
        goto end; //nonprimitive container
    }

    a_obj_taxassignmentList = list_createList();

    cJSON_ArrayForEach(a_obj_taxassignment_local_nonprimitive,a_obj_taxassignment )
    {
        if(!cJSON_IsObject(a_obj_taxassignment_local_nonprimitive)){
            goto end;
        }
        taxassignment_autocomplete_element_response_t *a_obj_taxassignmentItem = taxassignment_autocomplete_element_response_parseFromJSON(a_obj_taxassignment_local_nonprimitive);

        list_addElement(a_obj_taxassignmentList, a_obj_taxassignmentItem);
    }


    taxassignment_get_autocomplete_v2_response_m_payload_local_var = taxassignment_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_taxassignmentList
        );

    return taxassignment_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_taxassignmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_taxassignmentList) {
            taxassignment_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_taxassignmentList);
        a_obj_taxassignmentList = NULL;
    }
    return NULL;

}
