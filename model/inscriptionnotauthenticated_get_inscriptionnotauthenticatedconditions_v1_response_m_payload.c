#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload.h"



static inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_create_internal(
    list_t *a_obj_inscriptionnotauthenticatedcondition
    ) {
    inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var = malloc(sizeof(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t));
    if (!inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var, 0, sizeof(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t));
    inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var->_library_owned = 1;
    inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var->a_obj_inscriptionnotauthenticatedcondition = a_obj_inscriptionnotauthenticatedcondition;
    return inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_create(
    list_t *a_obj_inscriptionnotauthenticatedcondition
    ) {
    inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *result = inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_create_internal (
        a_obj_inscriptionnotauthenticatedcondition
        );
    if (!result) {
    }
    return result;
}

void inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_free(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload) {
    if(NULL == inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload){
        return ;
    }
    if(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition) {
        list_ForEach(listEntry, inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition) {
            inscriptionnotauthenticatedcondition_response_compound_free(listEntry->data);
        }
        list_freeList(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition);
        inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition = NULL;
    }
    free(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload);
}

cJSON *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition
    if (!inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition) {
        goto fail;
    }
    cJSON *a_obj_inscriptionnotauthenticatedcondition = cJSON_AddArrayToObject(item, "a_objInscriptionnotauthenticatedcondition");
    if(a_obj_inscriptionnotauthenticatedcondition == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptionnotauthenticatedconditionListEntry;
    if (inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition) {
    list_ForEach(a_obj_inscriptionnotauthenticatedconditionListEntry, inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition) {
    cJSON *itemLocal = inscriptionnotauthenticatedcondition_response_compound_convertToJSON(a_obj_inscriptionnotauthenticatedconditionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscriptionnotauthenticatedcondition, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payloadJSON){

    inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_t *inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition
    list_t *a_obj_inscriptionnotauthenticatedconditionList = NULL;

    // inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload->a_obj_inscriptionnotauthenticatedcondition
    cJSON *a_obj_inscriptionnotauthenticatedcondition = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payloadJSON, "a_objInscriptionnotauthenticatedcondition");
    if (cJSON_IsNull(a_obj_inscriptionnotauthenticatedcondition)) {
        a_obj_inscriptionnotauthenticatedcondition = NULL;
    }
    if (!a_obj_inscriptionnotauthenticatedcondition) {
        goto end;
    }

    
    cJSON *a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscriptionnotauthenticatedcondition)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptionnotauthenticatedconditionList = list_createList();

    cJSON_ArrayForEach(a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive,a_obj_inscriptionnotauthenticatedcondition )
    {
        if(!cJSON_IsObject(a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive)){
            goto end;
        }
        inscriptionnotauthenticatedcondition_response_compound_t *a_obj_inscriptionnotauthenticatedconditionItem = inscriptionnotauthenticatedcondition_response_compound_parseFromJSON(a_obj_inscriptionnotauthenticatedcondition_local_nonprimitive);

        list_addElement(a_obj_inscriptionnotauthenticatedconditionList, a_obj_inscriptionnotauthenticatedconditionItem);
    }



    inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var = inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_create_internal (
        a_obj_inscriptionnotauthenticatedconditionList
        );

    if (!inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var) {
        goto end;
    }

    return inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_m_payload_local_var;
end:
    if (a_obj_inscriptionnotauthenticatedconditionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptionnotauthenticatedconditionList) {
            inscriptionnotauthenticatedcondition_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptionnotauthenticatedconditionList);
        a_obj_inscriptionnotauthenticatedconditionList = NULL;
    }
    return NULL;

}
