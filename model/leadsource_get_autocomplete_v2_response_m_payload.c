#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leadsource_get_autocomplete_v2_response_m_payload.h"



static leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_leadsource
    ) {
    leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(leadsource_get_autocomplete_v2_response_m_payload_t));
    if (!leadsource_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    leadsource_get_autocomplete_v2_response_m_payload_local_var->a_obj_leadsource = a_obj_leadsource;

    leadsource_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return leadsource_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_leadsource
    ) {
    return leadsource_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_leadsource
        );
}

void leadsource_get_autocomplete_v2_response_m_payload_free(leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload) {
    if(NULL == leadsource_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(leadsource_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "leadsource_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource) {
        list_ForEach(listEntry, leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource) {
            leadsource_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource);
        leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource = NULL;
    }
    free(leadsource_get_autocomplete_v2_response_m_payload);
}

cJSON *leadsource_get_autocomplete_v2_response_m_payload_convertToJSON(leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource
    if (!leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource) {
        goto fail;
    }
    cJSON *a_obj_leadsource = cJSON_AddArrayToObject(item, "a_objLeadsource");
    if(a_obj_leadsource == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_leadsourceListEntry;
    if (leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource) {
    list_ForEach(a_obj_leadsourceListEntry, leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource) {
    cJSON *itemLocal = leadsource_autocomplete_element_response_convertToJSON(a_obj_leadsourceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_leadsource, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *leadsource_get_autocomplete_v2_response_m_payloadJSON){

    leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource
    list_t *a_obj_leadsourceList = NULL;

    // leadsource_get_autocomplete_v2_response_m_payload->a_obj_leadsource
    cJSON *a_obj_leadsource = cJSON_GetObjectItemCaseSensitive(leadsource_get_autocomplete_v2_response_m_payloadJSON, "a_objLeadsource");
    if (cJSON_IsNull(a_obj_leadsource)) {
        a_obj_leadsource = NULL;
    }
    if (!a_obj_leadsource) {
        goto end;
    }

    
    cJSON *a_obj_leadsource_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_leadsource)){
        goto end; //nonprimitive container
    }

    a_obj_leadsourceList = list_createList();

    cJSON_ArrayForEach(a_obj_leadsource_local_nonprimitive,a_obj_leadsource )
    {
        if(!cJSON_IsObject(a_obj_leadsource_local_nonprimitive)){
            goto end;
        }
        leadsource_autocomplete_element_response_t *a_obj_leadsourceItem = leadsource_autocomplete_element_response_parseFromJSON(a_obj_leadsource_local_nonprimitive);

        list_addElement(a_obj_leadsourceList, a_obj_leadsourceItem);
    }


    leadsource_get_autocomplete_v2_response_m_payload_local_var = leadsource_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_leadsourceList
        );

    return leadsource_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_leadsourceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_leadsourceList) {
            leadsource_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_leadsourceList);
        a_obj_leadsourceList = NULL;
    }
    return NULL;

}
