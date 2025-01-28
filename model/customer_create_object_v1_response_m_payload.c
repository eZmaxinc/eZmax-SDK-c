#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_create_object_v1_response_m_payload.h"



static customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_customer_id
    ) {
    customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload_local_var = malloc(sizeof(customer_create_object_v1_response_m_payload_t));
    if (!customer_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    customer_create_object_v1_response_m_payload_local_var->a_pki_customer_id = a_pki_customer_id;

    customer_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return customer_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload_create(
    list_t *a_pki_customer_id
    ) {
    return customer_create_object_v1_response_m_payload_create_internal (
        a_pki_customer_id
        );
}

void customer_create_object_v1_response_m_payload_free(customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload) {
    if(NULL == customer_create_object_v1_response_m_payload){
        return ;
    }
    if(customer_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_create_object_v1_response_m_payload->a_pki_customer_id) {
        list_ForEach(listEntry, customer_create_object_v1_response_m_payload->a_pki_customer_id) {
            free(listEntry->data);
        }
        list_freeList(customer_create_object_v1_response_m_payload->a_pki_customer_id);
        customer_create_object_v1_response_m_payload->a_pki_customer_id = NULL;
    }
    free(customer_create_object_v1_response_m_payload);
}

cJSON *customer_create_object_v1_response_m_payload_convertToJSON(customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // customer_create_object_v1_response_m_payload->a_pki_customer_id
    if (!customer_create_object_v1_response_m_payload->a_pki_customer_id) {
        goto fail;
    }
    cJSON *a_pki_customer_id = cJSON_AddArrayToObject(item, "a_pkiCustomerID");
    if(a_pki_customer_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_customer_idListEntry;
    list_ForEach(a_pki_customer_idListEntry, customer_create_object_v1_response_m_payload->a_pki_customer_id) {
    if(cJSON_AddNumberToObject(a_pki_customer_id, "", *(double *)a_pki_customer_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload_parseFromJSON(cJSON *customer_create_object_v1_response_m_payloadJSON){

    customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for customer_create_object_v1_response_m_payload->a_pki_customer_id
    list_t *a_pki_customer_idList = NULL;

    // customer_create_object_v1_response_m_payload->a_pki_customer_id
    cJSON *a_pki_customer_id = cJSON_GetObjectItemCaseSensitive(customer_create_object_v1_response_m_payloadJSON, "a_pkiCustomerID");
    if (cJSON_IsNull(a_pki_customer_id)) {
        a_pki_customer_id = NULL;
    }
    if (!a_pki_customer_id) {
        goto end;
    }

    
    cJSON *a_pki_customer_id_local = NULL;
    if(!cJSON_IsArray(a_pki_customer_id)) {
        goto end;//primitive container
    }
    a_pki_customer_idList = list_createList();

    cJSON_ArrayForEach(a_pki_customer_id_local, a_pki_customer_id)
    {
        if(!cJSON_IsNumber(a_pki_customer_id_local))
        {
            goto end;
        }
        double *a_pki_customer_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_customer_id_local_value)
        {
            goto end;
        }
        *a_pki_customer_id_local_value = a_pki_customer_id_local->valuedouble;
        list_addElement(a_pki_customer_idList , a_pki_customer_id_local_value);
    }


    customer_create_object_v1_response_m_payload_local_var = customer_create_object_v1_response_m_payload_create_internal (
        a_pki_customer_idList
        );

    return customer_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_customer_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_customer_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_customer_idList);
        a_pki_customer_idList = NULL;
    }
    return NULL;

}
