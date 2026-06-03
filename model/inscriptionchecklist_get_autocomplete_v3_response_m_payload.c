#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionchecklist_get_autocomplete_v3_response_m_payload.h"



static inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *inscriptionchecklist_get_autocomplete_v3_response_m_payload_create_internal(
    list_t *a_obj_inscriptionchecklist
    ) {
    inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var = malloc(sizeof(inscriptionchecklist_get_autocomplete_v3_response_m_payload_t));
    if (!inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var, 0, sizeof(inscriptionchecklist_get_autocomplete_v3_response_m_payload_t));
    inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var->_library_owned = 1;
    inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var->a_obj_inscriptionchecklist = a_obj_inscriptionchecklist;
    return inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *inscriptionchecklist_get_autocomplete_v3_response_m_payload_create(
    list_t *a_obj_inscriptionchecklist
    ) {
    inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *result = inscriptionchecklist_get_autocomplete_v3_response_m_payload_create_internal (
        a_obj_inscriptionchecklist
        );
    if (!result) {
    }
    return result;
}

void inscriptionchecklist_get_autocomplete_v3_response_m_payload_free(inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *inscriptionchecklist_get_autocomplete_v3_response_m_payload) {
    if(NULL == inscriptionchecklist_get_autocomplete_v3_response_m_payload){
        return ;
    }
    if(inscriptionchecklist_get_autocomplete_v3_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionchecklist_get_autocomplete_v3_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist) {
        list_ForEach(listEntry, inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist) {
            inscriptionchecklist_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist);
        inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist = NULL;
    }
    free(inscriptionchecklist_get_autocomplete_v3_response_m_payload);
}

cJSON *inscriptionchecklist_get_autocomplete_v3_response_m_payload_convertToJSON(inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *inscriptionchecklist_get_autocomplete_v3_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist
    if (!inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist) {
        goto fail;
    }
    cJSON *a_obj_inscriptionchecklist = cJSON_AddArrayToObject(item, "a_objInscriptionchecklist");
    if(a_obj_inscriptionchecklist == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptionchecklistListEntry;
    if (inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist) {
    list_ForEach(a_obj_inscriptionchecklistListEntry, inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist) {
    cJSON *itemLocal = inscriptionchecklist_autocomplete_element_response_convertToJSON(a_obj_inscriptionchecklistListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscriptionchecklist, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *inscriptionchecklist_get_autocomplete_v3_response_m_payload_parseFromJSON(cJSON *inscriptionchecklist_get_autocomplete_v3_response_m_payloadJSON){

    inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var = NULL;

    // define the local list for inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist
    list_t *a_obj_inscriptionchecklistList = NULL;

    // inscriptionchecklist_get_autocomplete_v3_response_m_payload->a_obj_inscriptionchecklist
    cJSON *a_obj_inscriptionchecklist = cJSON_GetObjectItemCaseSensitive(inscriptionchecklist_get_autocomplete_v3_response_m_payloadJSON, "a_objInscriptionchecklist");
    if (cJSON_IsNull(a_obj_inscriptionchecklist)) {
        a_obj_inscriptionchecklist = NULL;
    }
    if (!a_obj_inscriptionchecklist) {
        goto end;
    }

    
    cJSON *a_obj_inscriptionchecklist_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscriptionchecklist)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptionchecklistList = list_createList();

    cJSON_ArrayForEach(a_obj_inscriptionchecklist_local_nonprimitive,a_obj_inscriptionchecklist )
    {
        if(!cJSON_IsObject(a_obj_inscriptionchecklist_local_nonprimitive)){
            goto end;
        }
        inscriptionchecklist_autocomplete_element_response_t *a_obj_inscriptionchecklistItem = inscriptionchecklist_autocomplete_element_response_parseFromJSON(a_obj_inscriptionchecklist_local_nonprimitive);

        list_addElement(a_obj_inscriptionchecklistList, a_obj_inscriptionchecklistItem);
    }



    inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var = inscriptionchecklist_get_autocomplete_v3_response_m_payload_create_internal (
        a_obj_inscriptionchecklistList
        );

    if (!inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var) {
        goto end;
    }

    return inscriptionchecklist_get_autocomplete_v3_response_m_payload_local_var;
end:
    if (a_obj_inscriptionchecklistList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptionchecklistList) {
            inscriptionchecklist_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptionchecklistList);
        a_obj_inscriptionchecklistList = NULL;
    }
    return NULL;

}
