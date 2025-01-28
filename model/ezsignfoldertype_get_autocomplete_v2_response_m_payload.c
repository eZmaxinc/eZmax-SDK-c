#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_get_autocomplete_v2_response_m_payload.h"



static ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezsignfoldertype
    ) {
    ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezsignfoldertype_get_autocomplete_v2_response_m_payload_t));
    if (!ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;

    ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsignfoldertype
    ) {
    return ezsignfoldertype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsignfoldertype
        );
}

void ezsignfoldertype_get_autocomplete_v2_response_m_payload_free(ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezsignfoldertype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezsignfoldertype_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype) {
        list_ForEach(listEntry, ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype) {
            ezsignfoldertype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype);
        ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype = NULL;
    }
    free(ezsignfoldertype_get_autocomplete_v2_response_m_payload);
}

cJSON *ezsignfoldertype_get_autocomplete_v2_response_m_payload_convertToJSON(ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype
    if (!ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldertype = cJSON_AddArrayToObject(item, "a_objEzsignfoldertype");
    if(a_obj_ezsignfoldertype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertypeListEntry;
    if (ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype) {
    list_ForEach(a_obj_ezsignfoldertypeListEntry, ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype) {
    cJSON *itemLocal = ezsignfoldertype_autocomplete_element_response_convertToJSON(a_obj_ezsignfoldertypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldertype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_autocomplete_v2_response_m_payloadJSON){

    ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype
    list_t *a_obj_ezsignfoldertypeList = NULL;

    // ezsignfoldertype_get_autocomplete_v2_response_m_payload->a_obj_ezsignfoldertype
    cJSON *a_obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_autocomplete_v2_response_m_payloadJSON, "a_objEzsignfoldertype");
    if (cJSON_IsNull(a_obj_ezsignfoldertype)) {
        a_obj_ezsignfoldertype = NULL;
    }
    if (!a_obj_ezsignfoldertype) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldertype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldertype)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldertypeList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldertype_local_nonprimitive,a_obj_ezsignfoldertype )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldertype_local_nonprimitive)){
            goto end;
        }
        ezsignfoldertype_autocomplete_element_response_t *a_obj_ezsignfoldertypeItem = ezsignfoldertype_autocomplete_element_response_parseFromJSON(a_obj_ezsignfoldertype_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertypeList, a_obj_ezsignfoldertypeItem);
    }


    ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var = ezsignfoldertype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsignfoldertypeList
        );

    return ezsignfoldertype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezsignfoldertypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldertypeList) {
            ezsignfoldertype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldertypeList);
        a_obj_ezsignfoldertypeList = NULL;
    }
    return NULL;

}
