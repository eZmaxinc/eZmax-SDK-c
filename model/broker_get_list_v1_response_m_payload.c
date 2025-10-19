#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "broker_get_list_v1_response_m_payload.h"



static broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_broker
    ) {
    broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload_local_var = malloc(sizeof(broker_get_list_v1_response_m_payload_t));
    if (!broker_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    broker_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    broker_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    broker_get_list_v1_response_m_payload_local_var->a_obj_broker = a_obj_broker;

    broker_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return broker_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_broker
    ) {
    return broker_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_broker
        );
}

void broker_get_list_v1_response_m_payload_free(broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload) {
    if(NULL == broker_get_list_v1_response_m_payload){
        return ;
    }
    if(broker_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "broker_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (broker_get_list_v1_response_m_payload->a_obj_broker) {
        list_ForEach(listEntry, broker_get_list_v1_response_m_payload->a_obj_broker) {
            broker_list_element_free(listEntry->data);
        }
        list_freeList(broker_get_list_v1_response_m_payload->a_obj_broker);
        broker_get_list_v1_response_m_payload->a_obj_broker = NULL;
    }
    free(broker_get_list_v1_response_m_payload);
}

cJSON *broker_get_list_v1_response_m_payload_convertToJSON(broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // broker_get_list_v1_response_m_payload->i_row_returned
    if (!broker_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", broker_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // broker_get_list_v1_response_m_payload->i_row_filtered
    if (!broker_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", broker_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // broker_get_list_v1_response_m_payload->a_obj_broker
    if (!broker_get_list_v1_response_m_payload->a_obj_broker) {
        goto fail;
    }
    cJSON *a_obj_broker = cJSON_AddArrayToObject(item, "a_objBroker");
    if(a_obj_broker == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_brokerListEntry;
    if (broker_get_list_v1_response_m_payload->a_obj_broker) {
    list_ForEach(a_obj_brokerListEntry, broker_get_list_v1_response_m_payload->a_obj_broker) {
    cJSON *itemLocal = broker_list_element_convertToJSON(a_obj_brokerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_broker, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload_parseFromJSON(cJSON *broker_get_list_v1_response_m_payloadJSON){

    broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for broker_get_list_v1_response_m_payload->a_obj_broker
    list_t *a_obj_brokerList = NULL;

    // broker_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(broker_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (cJSON_IsNull(i_row_returned)) {
        i_row_returned = NULL;
    }
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // broker_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(broker_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (cJSON_IsNull(i_row_filtered)) {
        i_row_filtered = NULL;
    }
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // broker_get_list_v1_response_m_payload->a_obj_broker
    cJSON *a_obj_broker = cJSON_GetObjectItemCaseSensitive(broker_get_list_v1_response_m_payloadJSON, "a_objBroker");
    if (cJSON_IsNull(a_obj_broker)) {
        a_obj_broker = NULL;
    }
    if (!a_obj_broker) {
        goto end;
    }

    
    cJSON *a_obj_broker_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_broker)){
        goto end; //nonprimitive container
    }

    a_obj_brokerList = list_createList();

    cJSON_ArrayForEach(a_obj_broker_local_nonprimitive,a_obj_broker )
    {
        if(!cJSON_IsObject(a_obj_broker_local_nonprimitive)){
            goto end;
        }
        broker_list_element_t *a_obj_brokerItem = broker_list_element_parseFromJSON(a_obj_broker_local_nonprimitive);

        list_addElement(a_obj_brokerList, a_obj_brokerItem);
    }


    broker_get_list_v1_response_m_payload_local_var = broker_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_brokerList
        );

    return broker_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_brokerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_brokerList) {
            broker_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_brokerList);
        a_obj_brokerList = NULL;
    }
    return NULL;

}
