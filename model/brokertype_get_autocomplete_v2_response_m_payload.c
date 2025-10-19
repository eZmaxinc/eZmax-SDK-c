#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "brokertype_get_autocomplete_v2_response_m_payload.h"



static brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_brokertype
    ) {
    brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(brokertype_get_autocomplete_v2_response_m_payload_t));
    if (!brokertype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    brokertype_get_autocomplete_v2_response_m_payload_local_var->a_obj_brokertype = a_obj_brokertype;

    brokertype_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return brokertype_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_brokertype
    ) {
    return brokertype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_brokertype
        );
}

void brokertype_get_autocomplete_v2_response_m_payload_free(brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload) {
    if(NULL == brokertype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(brokertype_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "brokertype_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype) {
        list_ForEach(listEntry, brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype) {
            brokertype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype);
        brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype = NULL;
    }
    free(brokertype_get_autocomplete_v2_response_m_payload);
}

cJSON *brokertype_get_autocomplete_v2_response_m_payload_convertToJSON(brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype
    if (!brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype) {
        goto fail;
    }
    cJSON *a_obj_brokertype = cJSON_AddArrayToObject(item, "a_objBrokertype");
    if(a_obj_brokertype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_brokertypeListEntry;
    if (brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype) {
    list_ForEach(a_obj_brokertypeListEntry, brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype) {
    cJSON *itemLocal = brokertype_autocomplete_element_response_convertToJSON(a_obj_brokertypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_brokertype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *brokertype_get_autocomplete_v2_response_m_payloadJSON){

    brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype
    list_t *a_obj_brokertypeList = NULL;

    // brokertype_get_autocomplete_v2_response_m_payload->a_obj_brokertype
    cJSON *a_obj_brokertype = cJSON_GetObjectItemCaseSensitive(brokertype_get_autocomplete_v2_response_m_payloadJSON, "a_objBrokertype");
    if (cJSON_IsNull(a_obj_brokertype)) {
        a_obj_brokertype = NULL;
    }
    if (!a_obj_brokertype) {
        goto end;
    }

    
    cJSON *a_obj_brokertype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_brokertype)){
        goto end; //nonprimitive container
    }

    a_obj_brokertypeList = list_createList();

    cJSON_ArrayForEach(a_obj_brokertype_local_nonprimitive,a_obj_brokertype )
    {
        if(!cJSON_IsObject(a_obj_brokertype_local_nonprimitive)){
            goto end;
        }
        brokertype_autocomplete_element_response_t *a_obj_brokertypeItem = brokertype_autocomplete_element_response_parseFromJSON(a_obj_brokertype_local_nonprimitive);

        list_addElement(a_obj_brokertypeList, a_obj_brokertypeItem);
    }


    brokertype_get_autocomplete_v2_response_m_payload_local_var = brokertype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_brokertypeList
        );

    return brokertype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_brokertypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_brokertypeList) {
            brokertype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_brokertypeList);
        a_obj_brokertypeList = NULL;
    }
    return NULL;

}
