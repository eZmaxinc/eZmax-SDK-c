#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_get_autocomplete_v2_response_m_payload.h"



static ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezsigntemplate
    ) {
    ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplate_get_autocomplete_v2_response_m_payload_t));
    if (!ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezsigntemplate = a_obj_ezsigntemplate;

    ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntemplate
    ) {
    return ezsigntemplate_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsigntemplate
        );
}

void ezsigntemplate_get_autocomplete_v2_response_m_payload_free(ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezsigntemplate_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplate_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate) {
        list_ForEach(listEntry, ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate) {
            ezsigntemplate_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate);
        ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_get_autocomplete_v2_response_m_payload);
}

cJSON *ezsigntemplate_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate
    if (!ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplate = cJSON_AddArrayToObject(item, "a_objEzsigntemplate");
    if(a_obj_ezsigntemplate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateListEntry;
    if (ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate) {
    list_ForEach(a_obj_ezsigntemplateListEntry, ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate) {
    cJSON *itemLocal = ezsigntemplate_autocomplete_element_response_convertToJSON(a_obj_ezsigntemplateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplate, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_autocomplete_v2_response_m_payloadJSON){

    ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate
    list_t *a_obj_ezsigntemplateList = NULL;

    // ezsigntemplate_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplate
    cJSON *a_obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_autocomplete_v2_response_m_payloadJSON, "a_objEzsigntemplate");
    if (cJSON_IsNull(a_obj_ezsigntemplate)) {
        a_obj_ezsigntemplate = NULL;
    }
    if (!a_obj_ezsigntemplate) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplate_local_nonprimitive,a_obj_ezsigntemplate )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplate_local_nonprimitive)){
            goto end;
        }
        ezsigntemplate_autocomplete_element_response_t *a_obj_ezsigntemplateItem = ezsigntemplate_autocomplete_element_response_parseFromJSON(a_obj_ezsigntemplate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateList, a_obj_ezsigntemplateItem);
    }


    ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var = ezsigntemplate_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsigntemplateList
        );

    return ezsigntemplate_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateList) {
            ezsigntemplate_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateList);
        a_obj_ezsigntemplateList = NULL;
    }
    return NULL;

}
