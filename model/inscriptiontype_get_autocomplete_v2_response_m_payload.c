#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontype_get_autocomplete_v2_response_m_payload.h"



static inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_inscriptiontype
    ) {
    inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(inscriptiontype_get_autocomplete_v2_response_m_payload_t));
    if (!inscriptiontype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscriptiontype_get_autocomplete_v2_response_m_payload_local_var, 0, sizeof(inscriptiontype_get_autocomplete_v2_response_m_payload_t));
    inscriptiontype_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    inscriptiontype_get_autocomplete_v2_response_m_payload_local_var->a_obj_inscriptiontype = a_obj_inscriptiontype;
    return inscriptiontype_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_inscriptiontype
    ) {
    inscriptiontype_get_autocomplete_v2_response_m_payload_t *result = inscriptiontype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_inscriptiontype
        );
    if (!result) {
    }
    return result;
}

void inscriptiontype_get_autocomplete_v2_response_m_payload_free(inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload) {
    if(NULL == inscriptiontype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(inscriptiontype_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontype_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype) {
        list_ForEach(listEntry, inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype) {
            inscriptiontype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype);
        inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype = NULL;
    }
    free(inscriptiontype_get_autocomplete_v2_response_m_payload);
}

cJSON *inscriptiontype_get_autocomplete_v2_response_m_payload_convertToJSON(inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype
    if (!inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype) {
        goto fail;
    }
    cJSON *a_obj_inscriptiontype = cJSON_AddArrayToObject(item, "a_objInscriptiontype");
    if(a_obj_inscriptiontype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptiontypeListEntry;
    if (inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype) {
    list_ForEach(a_obj_inscriptiontypeListEntry, inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype) {
    cJSON *itemLocal = inscriptiontype_autocomplete_element_response_convertToJSON(a_obj_inscriptiontypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscriptiontype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *inscriptiontype_get_autocomplete_v2_response_m_payloadJSON){

    inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype
    list_t *a_obj_inscriptiontypeList = NULL;

    // inscriptiontype_get_autocomplete_v2_response_m_payload->a_obj_inscriptiontype
    cJSON *a_obj_inscriptiontype = cJSON_GetObjectItemCaseSensitive(inscriptiontype_get_autocomplete_v2_response_m_payloadJSON, "a_objInscriptiontype");
    if (cJSON_IsNull(a_obj_inscriptiontype)) {
        a_obj_inscriptiontype = NULL;
    }
    if (!a_obj_inscriptiontype) {
        goto end;
    }

    
    cJSON *a_obj_inscriptiontype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscriptiontype)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptiontypeList = list_createList();

    cJSON_ArrayForEach(a_obj_inscriptiontype_local_nonprimitive,a_obj_inscriptiontype )
    {
        if(!cJSON_IsObject(a_obj_inscriptiontype_local_nonprimitive)){
            goto end;
        }
        inscriptiontype_autocomplete_element_response_t *a_obj_inscriptiontypeItem = inscriptiontype_autocomplete_element_response_parseFromJSON(a_obj_inscriptiontype_local_nonprimitive);

        list_addElement(a_obj_inscriptiontypeList, a_obj_inscriptiontypeItem);
    }



    inscriptiontype_get_autocomplete_v2_response_m_payload_local_var = inscriptiontype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_inscriptiontypeList
        );

    if (!inscriptiontype_get_autocomplete_v2_response_m_payload_local_var) {
        goto end;
    }

    return inscriptiontype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_inscriptiontypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptiontypeList) {
            inscriptiontype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptiontypeList);
        a_obj_inscriptiontypeList = NULL;
    }
    return NULL;

}
