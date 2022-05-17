#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload.h"



ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_t *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_create(
    list_t *a_obj_ezsignbulksendtransmission
    ) {
    ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_t *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_t));
    if (!ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_local_var->a_obj_ezsignbulksendtransmission = a_obj_ezsignbulksendtransmission;

    return ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_local_var;
}


void ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_free(ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_t *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload) {
    if(NULL == ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission) {
        list_ForEach(listEntry, ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission) {
            ezsignbulksendtransmission_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission);
        ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission = NULL;
    }
    free(ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload);
}

cJSON *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_convertToJSON(ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_t *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission
    if (!ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksendtransmission = cJSON_AddArrayToObject(item, "a_objEzsignbulksendtransmission");
    if(a_obj_ezsignbulksendtransmission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksendtransmissionListEntry;
    if (ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission) {
    list_ForEach(a_obj_ezsignbulksendtransmissionListEntry, ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission) {
    cJSON *itemLocal = ezsignbulksendtransmission_response_compound_convertToJSON(a_obj_ezsignbulksendtransmissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksendtransmission, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_t *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payloadJSON){

    ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_t *ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission
    list_t *a_obj_ezsignbulksendtransmissionList = NULL;

    // ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload->a_obj_ezsignbulksendtransmission
    cJSON *a_obj_ezsignbulksendtransmission = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payloadJSON, "a_objEzsignbulksendtransmission");
    if (!a_obj_ezsignbulksendtransmission) {
        goto end;
    }

    
    cJSON *a_obj_ezsignbulksendtransmission_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignbulksendtransmission)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignbulksendtransmissionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignbulksendtransmission_local_nonprimitive,a_obj_ezsignbulksendtransmission )
    {
        if(!cJSON_IsObject(a_obj_ezsignbulksendtransmission_local_nonprimitive)){
            goto end;
        }
        ezsignbulksendtransmission_response_compound_t *a_obj_ezsignbulksendtransmissionItem = ezsignbulksendtransmission_response_compound_parseFromJSON(a_obj_ezsignbulksendtransmission_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksendtransmissionList, a_obj_ezsignbulksendtransmissionItem);
    }


    ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_local_var = ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_create (
        a_obj_ezsignbulksendtransmissionList
        );

    return ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignbulksendtransmissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksendtransmissionList) {
            ezsignbulksendtransmission_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksendtransmissionList);
        a_obj_ezsignbulksendtransmissionList = NULL;
    }
    return NULL;

}
