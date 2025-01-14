#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_get_communicationsenders_v1_response_m_payload.h"



inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *inscriptiontemp_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *inscriptiontemp_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(inscriptiontemp_get_communicationsenders_v1_response_m_payload_t));
    if (!inscriptiontemp_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptiontemp_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;

    return inscriptiontemp_get_communicationsenders_v1_response_m_payload_local_var;
}


void inscriptiontemp_get_communicationsenders_v1_response_m_payload_free(inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *inscriptiontemp_get_communicationsenders_v1_response_m_payload) {
    if(NULL == inscriptiontemp_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(inscriptiontemp_get_communicationsenders_v1_response_m_payload);
}

cJSON *inscriptiontemp_get_communicationsenders_v1_response_m_payload_convertToJSON(inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *inscriptiontemp_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    cJSON *itemLocal = custom_communicationsender_response_convertToJSON(a_obj_communicationsendersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationsenders, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *inscriptiontemp_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_get_communicationsenders_v1_response_m_payloadJSON){

    inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *inscriptiontemp_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // inscriptiontemp_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
    if (!a_obj_communicationsenders) {
        goto end;
    }

    
    cJSON *a_obj_communicationsenders_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationsenders)){
        goto end; //nonprimitive container
    }

    a_obj_communicationsendersList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationsenders_local_nonprimitive,a_obj_communicationsenders )
    {
        if(!cJSON_IsObject(a_obj_communicationsenders_local_nonprimitive)){
            goto end;
        }
        custom_communicationsender_response_t *a_obj_communicationsendersItem = custom_communicationsender_response_parseFromJSON(a_obj_communicationsenders_local_nonprimitive);

        list_addElement(a_obj_communicationsendersList, a_obj_communicationsendersItem);
    }


    inscriptiontemp_get_communicationsenders_v1_response_m_payload_local_var = inscriptiontemp_get_communicationsenders_v1_response_m_payload_create (
        a_obj_communicationsendersList
        );

    return inscriptiontemp_get_communicationsenders_v1_response_m_payload_local_var;
end:
    if (a_obj_communicationsendersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationsendersList) {
            custom_communicationsender_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationsendersList);
        a_obj_communicationsendersList = NULL;
    }
    return NULL;

}
