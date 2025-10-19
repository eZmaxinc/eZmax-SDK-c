#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agenttype_get_autocomplete_v2_response_m_payload.h"



static agenttype_get_autocomplete_v2_response_m_payload_t *agenttype_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_agenttype
    ) {
    agenttype_get_autocomplete_v2_response_m_payload_t *agenttype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(agenttype_get_autocomplete_v2_response_m_payload_t));
    if (!agenttype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    agenttype_get_autocomplete_v2_response_m_payload_local_var->a_obj_agenttype = a_obj_agenttype;

    agenttype_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return agenttype_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) agenttype_get_autocomplete_v2_response_m_payload_t *agenttype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_agenttype
    ) {
    return agenttype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_agenttype
        );
}

void agenttype_get_autocomplete_v2_response_m_payload_free(agenttype_get_autocomplete_v2_response_m_payload_t *agenttype_get_autocomplete_v2_response_m_payload) {
    if(NULL == agenttype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(agenttype_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agenttype_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype) {
        list_ForEach(listEntry, agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype) {
            agenttype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype);
        agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype = NULL;
    }
    free(agenttype_get_autocomplete_v2_response_m_payload);
}

cJSON *agenttype_get_autocomplete_v2_response_m_payload_convertToJSON(agenttype_get_autocomplete_v2_response_m_payload_t *agenttype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype
    if (!agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype) {
        goto fail;
    }
    cJSON *a_obj_agenttype = cJSON_AddArrayToObject(item, "a_objAgenttype");
    if(a_obj_agenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_agenttypeListEntry;
    if (agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype) {
    list_ForEach(a_obj_agenttypeListEntry, agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype) {
    cJSON *itemLocal = agenttype_autocomplete_element_response_convertToJSON(a_obj_agenttypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_agenttype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agenttype_get_autocomplete_v2_response_m_payload_t *agenttype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *agenttype_get_autocomplete_v2_response_m_payloadJSON){

    agenttype_get_autocomplete_v2_response_m_payload_t *agenttype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype
    list_t *a_obj_agenttypeList = NULL;

    // agenttype_get_autocomplete_v2_response_m_payload->a_obj_agenttype
    cJSON *a_obj_agenttype = cJSON_GetObjectItemCaseSensitive(agenttype_get_autocomplete_v2_response_m_payloadJSON, "a_objAgenttype");
    if (cJSON_IsNull(a_obj_agenttype)) {
        a_obj_agenttype = NULL;
    }
    if (!a_obj_agenttype) {
        goto end;
    }

    
    cJSON *a_obj_agenttype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_agenttype)){
        goto end; //nonprimitive container
    }

    a_obj_agenttypeList = list_createList();

    cJSON_ArrayForEach(a_obj_agenttype_local_nonprimitive,a_obj_agenttype )
    {
        if(!cJSON_IsObject(a_obj_agenttype_local_nonprimitive)){
            goto end;
        }
        agenttype_autocomplete_element_response_t *a_obj_agenttypeItem = agenttype_autocomplete_element_response_parseFromJSON(a_obj_agenttype_local_nonprimitive);

        list_addElement(a_obj_agenttypeList, a_obj_agenttypeItem);
    }


    agenttype_get_autocomplete_v2_response_m_payload_local_var = agenttype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_agenttypeList
        );

    return agenttype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_agenttypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_agenttypeList) {
            agenttype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_agenttypeList);
        a_obj_agenttypeList = NULL;
    }
    return NULL;

}
