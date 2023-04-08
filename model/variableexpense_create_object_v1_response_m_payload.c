#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_create_object_v1_response_m_payload.h"



variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload_create(
    list_t *a_pki_variableexpense_id
    ) {
    variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload_local_var = malloc(sizeof(variableexpense_create_object_v1_response_m_payload_t));
    if (!variableexpense_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    variableexpense_create_object_v1_response_m_payload_local_var->a_pki_variableexpense_id = a_pki_variableexpense_id;

    return variableexpense_create_object_v1_response_m_payload_local_var;
}


void variableexpense_create_object_v1_response_m_payload_free(variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload) {
    if(NULL == variableexpense_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id) {
        list_ForEach(listEntry, variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id) {
            free(listEntry->data);
        }
        list_freeList(variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id);
        variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id = NULL;
    }
    free(variableexpense_create_object_v1_response_m_payload);
}

cJSON *variableexpense_create_object_v1_response_m_payload_convertToJSON(variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id
    if (!variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id) {
        goto fail;
    }
    cJSON *a_pki_variableexpense_id = cJSON_AddArrayToObject(item, "a_pkiVariableexpenseID");
    if(a_pki_variableexpense_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_variableexpense_idListEntry;
    list_ForEach(a_pki_variableexpense_idListEntry, variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id) {
    if(cJSON_AddNumberToObject(a_pki_variableexpense_id, "", *(double *)a_pki_variableexpense_idListEntry->data) == NULL)
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

variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload_parseFromJSON(cJSON *variableexpense_create_object_v1_response_m_payloadJSON){

    variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id
    list_t *a_pki_variableexpense_idList = NULL;

    // variableexpense_create_object_v1_response_m_payload->a_pki_variableexpense_id
    cJSON *a_pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_create_object_v1_response_m_payloadJSON, "a_pkiVariableexpenseID");
    if (!a_pki_variableexpense_id) {
        goto end;
    }

    
    cJSON *a_pki_variableexpense_id_local = NULL;
    if(!cJSON_IsArray(a_pki_variableexpense_id)) {
        goto end;//primitive container
    }
    a_pki_variableexpense_idList = list_createList();

    cJSON_ArrayForEach(a_pki_variableexpense_id_local, a_pki_variableexpense_id)
    {
        if(!cJSON_IsNumber(a_pki_variableexpense_id_local))
        {
            goto end;
        }
        double *a_pki_variableexpense_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_variableexpense_id_local_value)
        {
            goto end;
        }
        *a_pki_variableexpense_id_local_value = a_pki_variableexpense_id_local->valuedouble;
        list_addElement(a_pki_variableexpense_idList , a_pki_variableexpense_id_local_value);
    }


    variableexpense_create_object_v1_response_m_payload_local_var = variableexpense_create_object_v1_response_m_payload_create (
        a_pki_variableexpense_idList
        );

    return variableexpense_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_variableexpense_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_variableexpense_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_variableexpense_idList);
        a_pki_variableexpense_idList = NULL;
    }
    return NULL;

}
