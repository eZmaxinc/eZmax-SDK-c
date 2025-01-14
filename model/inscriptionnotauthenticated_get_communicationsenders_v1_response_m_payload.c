#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload.h"



inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t));
    if (!inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;

    return inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_local_var;
}


void inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_free(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload) {
    if(NULL == inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload);
}

cJSON *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
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

inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payloadJSON){

    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
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


    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_local_var = inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_create (
        a_obj_communicationsendersList
        );

    return inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_local_var;
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
