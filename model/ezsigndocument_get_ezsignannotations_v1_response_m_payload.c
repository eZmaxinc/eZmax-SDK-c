#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_ezsignannotations_v1_response_m_payload.h"



ezsigndocument_get_ezsignannotations_v1_response_m_payload_t *ezsigndocument_get_ezsignannotations_v1_response_m_payload_create(
    list_t *a_obj_ezsignannotation
    ) {
    ezsigndocument_get_ezsignannotations_v1_response_m_payload_t *ezsigndocument_get_ezsignannotations_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_ezsignannotations_v1_response_m_payload_t));
    if (!ezsigndocument_get_ezsignannotations_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_ezsignannotations_v1_response_m_payload_local_var->a_obj_ezsignannotation = a_obj_ezsignannotation;

    return ezsigndocument_get_ezsignannotations_v1_response_m_payload_local_var;
}


void ezsigndocument_get_ezsignannotations_v1_response_m_payload_free(ezsigndocument_get_ezsignannotations_v1_response_m_payload_t *ezsigndocument_get_ezsignannotations_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_ezsignannotations_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation) {
        list_ForEach(listEntry, ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation) {
            ezsignannotation_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation);
        ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation = NULL;
    }
    free(ezsigndocument_get_ezsignannotations_v1_response_m_payload);
}

cJSON *ezsigndocument_get_ezsignannotations_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignannotations_v1_response_m_payload_t *ezsigndocument_get_ezsignannotations_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation
    if (!ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation) {
        goto fail;
    }
    cJSON *a_obj_ezsignannotation = cJSON_AddArrayToObject(item, "a_objEzsignannotation");
    if(a_obj_ezsignannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignannotationListEntry;
    if (ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation) {
    list_ForEach(a_obj_ezsignannotationListEntry, ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation) {
    cJSON *itemLocal = ezsignannotation_response_compound_convertToJSON(a_obj_ezsignannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignannotation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_ezsignannotations_v1_response_m_payload_t *ezsigndocument_get_ezsignannotations_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsignannotations_v1_response_m_payloadJSON){

    ezsigndocument_get_ezsignannotations_v1_response_m_payload_t *ezsigndocument_get_ezsignannotations_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation
    list_t *a_obj_ezsignannotationList = NULL;

    // ezsigndocument_get_ezsignannotations_v1_response_m_payload->a_obj_ezsignannotation
    cJSON *a_obj_ezsignannotation = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsignannotations_v1_response_m_payloadJSON, "a_objEzsignannotation");
    if (!a_obj_ezsignannotation) {
        goto end;
    }

    
    cJSON *a_obj_ezsignannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignannotation_local_nonprimitive,a_obj_ezsignannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsignannotation_local_nonprimitive)){
            goto end;
        }
        ezsignannotation_response_compound_t *a_obj_ezsignannotationItem = ezsignannotation_response_compound_parseFromJSON(a_obj_ezsignannotation_local_nonprimitive);

        list_addElement(a_obj_ezsignannotationList, a_obj_ezsignannotationItem);
    }


    ezsigndocument_get_ezsignannotations_v1_response_m_payload_local_var = ezsigndocument_get_ezsignannotations_v1_response_m_payload_create (
        a_obj_ezsignannotationList
        );

    return ezsigndocument_get_ezsignannotations_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignannotationList) {
            ezsignannotation_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignannotationList);
        a_obj_ezsignannotationList = NULL;
    }
    return NULL;

}
