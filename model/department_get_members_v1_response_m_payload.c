#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "department_get_members_v1_response_m_payload.h"



department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload_create(
    list_t *a_fki_agent_id,
    list_t *a_fki_broker_id,
    list_t *a_fki_customer_id,
    list_t *a_fki_employee_id
    ) {
    department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload_local_var = malloc(sizeof(department_get_members_v1_response_m_payload_t));
    if (!department_get_members_v1_response_m_payload_local_var) {
        return NULL;
    }
    department_get_members_v1_response_m_payload_local_var->a_fki_agent_id = a_fki_agent_id;
    department_get_members_v1_response_m_payload_local_var->a_fki_broker_id = a_fki_broker_id;
    department_get_members_v1_response_m_payload_local_var->a_fki_customer_id = a_fki_customer_id;
    department_get_members_v1_response_m_payload_local_var->a_fki_employee_id = a_fki_employee_id;

    return department_get_members_v1_response_m_payload_local_var;
}


void department_get_members_v1_response_m_payload_free(department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload) {
    if(NULL == department_get_members_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (department_get_members_v1_response_m_payload->a_fki_agent_id) {
        list_ForEach(listEntry, department_get_members_v1_response_m_payload->a_fki_agent_id) {
            free(listEntry->data);
        }
        list_freeList(department_get_members_v1_response_m_payload->a_fki_agent_id);
        department_get_members_v1_response_m_payload->a_fki_agent_id = NULL;
    }
    if (department_get_members_v1_response_m_payload->a_fki_broker_id) {
        list_ForEach(listEntry, department_get_members_v1_response_m_payload->a_fki_broker_id) {
            free(listEntry->data);
        }
        list_freeList(department_get_members_v1_response_m_payload->a_fki_broker_id);
        department_get_members_v1_response_m_payload->a_fki_broker_id = NULL;
    }
    if (department_get_members_v1_response_m_payload->a_fki_customer_id) {
        list_ForEach(listEntry, department_get_members_v1_response_m_payload->a_fki_customer_id) {
            free(listEntry->data);
        }
        list_freeList(department_get_members_v1_response_m_payload->a_fki_customer_id);
        department_get_members_v1_response_m_payload->a_fki_customer_id = NULL;
    }
    if (department_get_members_v1_response_m_payload->a_fki_employee_id) {
        list_ForEach(listEntry, department_get_members_v1_response_m_payload->a_fki_employee_id) {
            free(listEntry->data);
        }
        list_freeList(department_get_members_v1_response_m_payload->a_fki_employee_id);
        department_get_members_v1_response_m_payload->a_fki_employee_id = NULL;
    }
    free(department_get_members_v1_response_m_payload);
}

cJSON *department_get_members_v1_response_m_payload_convertToJSON(department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // department_get_members_v1_response_m_payload->a_fki_agent_id
    if(department_get_members_v1_response_m_payload->a_fki_agent_id) {
    cJSON *a_fki_agent_id = cJSON_AddArrayToObject(item, "a_fkiAgentID");
    if(a_fki_agent_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_agent_idListEntry;
    list_ForEach(a_fki_agent_idListEntry, department_get_members_v1_response_m_payload->a_fki_agent_id) {
    if(cJSON_AddNumberToObject(a_fki_agent_id, "", *(double *)a_fki_agent_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // department_get_members_v1_response_m_payload->a_fki_broker_id
    if(department_get_members_v1_response_m_payload->a_fki_broker_id) {
    cJSON *a_fki_broker_id = cJSON_AddArrayToObject(item, "a_fkiBrokerID");
    if(a_fki_broker_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_broker_idListEntry;
    list_ForEach(a_fki_broker_idListEntry, department_get_members_v1_response_m_payload->a_fki_broker_id) {
    if(cJSON_AddNumberToObject(a_fki_broker_id, "", *(double *)a_fki_broker_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // department_get_members_v1_response_m_payload->a_fki_customer_id
    if(department_get_members_v1_response_m_payload->a_fki_customer_id) {
    cJSON *a_fki_customer_id = cJSON_AddArrayToObject(item, "a_fkiCustomerID");
    if(a_fki_customer_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_customer_idListEntry;
    list_ForEach(a_fki_customer_idListEntry, department_get_members_v1_response_m_payload->a_fki_customer_id) {
    if(cJSON_AddNumberToObject(a_fki_customer_id, "", *(double *)a_fki_customer_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // department_get_members_v1_response_m_payload->a_fki_employee_id
    if(department_get_members_v1_response_m_payload->a_fki_employee_id) {
    cJSON *a_fki_employee_id = cJSON_AddArrayToObject(item, "a_fkiEmployeeID");
    if(a_fki_employee_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_employee_idListEntry;
    list_ForEach(a_fki_employee_idListEntry, department_get_members_v1_response_m_payload->a_fki_employee_id) {
    if(cJSON_AddNumberToObject(a_fki_employee_id, "", *(double *)a_fki_employee_idListEntry->data) == NULL)
    {
        goto fail;
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

department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload_parseFromJSON(cJSON *department_get_members_v1_response_m_payloadJSON){

    department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload_local_var = NULL;

    // define the local list for department_get_members_v1_response_m_payload->a_fki_agent_id
    list_t *a_fki_agent_idList = NULL;

    // define the local list for department_get_members_v1_response_m_payload->a_fki_broker_id
    list_t *a_fki_broker_idList = NULL;

    // define the local list for department_get_members_v1_response_m_payload->a_fki_customer_id
    list_t *a_fki_customer_idList = NULL;

    // define the local list for department_get_members_v1_response_m_payload->a_fki_employee_id
    list_t *a_fki_employee_idList = NULL;

    // department_get_members_v1_response_m_payload->a_fki_agent_id
    cJSON *a_fki_agent_id = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_response_m_payloadJSON, "a_fkiAgentID");
    if (a_fki_agent_id) { 
    cJSON *a_fki_agent_id_local = NULL;
    if(!cJSON_IsArray(a_fki_agent_id)) {
        goto end;//primitive container
    }
    a_fki_agent_idList = list_createList();

    cJSON_ArrayForEach(a_fki_agent_id_local, a_fki_agent_id)
    {
        if(!cJSON_IsNumber(a_fki_agent_id_local))
        {
            goto end;
        }
        double *a_fki_agent_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_agent_id_local_value)
        {
            goto end;
        }
        *a_fki_agent_id_local_value = a_fki_agent_id_local->valuedouble;
        list_addElement(a_fki_agent_idList , a_fki_agent_id_local_value);
    }
    }

    // department_get_members_v1_response_m_payload->a_fki_broker_id
    cJSON *a_fki_broker_id = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_response_m_payloadJSON, "a_fkiBrokerID");
    if (a_fki_broker_id) { 
    cJSON *a_fki_broker_id_local = NULL;
    if(!cJSON_IsArray(a_fki_broker_id)) {
        goto end;//primitive container
    }
    a_fki_broker_idList = list_createList();

    cJSON_ArrayForEach(a_fki_broker_id_local, a_fki_broker_id)
    {
        if(!cJSON_IsNumber(a_fki_broker_id_local))
        {
            goto end;
        }
        double *a_fki_broker_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_broker_id_local_value)
        {
            goto end;
        }
        *a_fki_broker_id_local_value = a_fki_broker_id_local->valuedouble;
        list_addElement(a_fki_broker_idList , a_fki_broker_id_local_value);
    }
    }

    // department_get_members_v1_response_m_payload->a_fki_customer_id
    cJSON *a_fki_customer_id = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_response_m_payloadJSON, "a_fkiCustomerID");
    if (a_fki_customer_id) { 
    cJSON *a_fki_customer_id_local = NULL;
    if(!cJSON_IsArray(a_fki_customer_id)) {
        goto end;//primitive container
    }
    a_fki_customer_idList = list_createList();

    cJSON_ArrayForEach(a_fki_customer_id_local, a_fki_customer_id)
    {
        if(!cJSON_IsNumber(a_fki_customer_id_local))
        {
            goto end;
        }
        double *a_fki_customer_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_customer_id_local_value)
        {
            goto end;
        }
        *a_fki_customer_id_local_value = a_fki_customer_id_local->valuedouble;
        list_addElement(a_fki_customer_idList , a_fki_customer_id_local_value);
    }
    }

    // department_get_members_v1_response_m_payload->a_fki_employee_id
    cJSON *a_fki_employee_id = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_response_m_payloadJSON, "a_fkiEmployeeID");
    if (a_fki_employee_id) { 
    cJSON *a_fki_employee_id_local = NULL;
    if(!cJSON_IsArray(a_fki_employee_id)) {
        goto end;//primitive container
    }
    a_fki_employee_idList = list_createList();

    cJSON_ArrayForEach(a_fki_employee_id_local, a_fki_employee_id)
    {
        if(!cJSON_IsNumber(a_fki_employee_id_local))
        {
            goto end;
        }
        double *a_fki_employee_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_employee_id_local_value)
        {
            goto end;
        }
        *a_fki_employee_id_local_value = a_fki_employee_id_local->valuedouble;
        list_addElement(a_fki_employee_idList , a_fki_employee_id_local_value);
    }
    }


    department_get_members_v1_response_m_payload_local_var = department_get_members_v1_response_m_payload_create (
        a_fki_agent_id ? a_fki_agent_idList : NULL,
        a_fki_broker_id ? a_fki_broker_idList : NULL,
        a_fki_customer_id ? a_fki_customer_idList : NULL,
        a_fki_employee_id ? a_fki_employee_idList : NULL
        );

    return department_get_members_v1_response_m_payload_local_var;
end:
    if (a_fki_agent_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_agent_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_agent_idList);
        a_fki_agent_idList = NULL;
    }
    if (a_fki_broker_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_broker_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_broker_idList);
        a_fki_broker_idList = NULL;
    }
    if (a_fki_customer_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_customer_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_customer_idList);
        a_fki_customer_idList = NULL;
    }
    if (a_fki_employee_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_employee_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_employee_idList);
        a_fki_employee_idList = NULL;
    }
    return NULL;

}
