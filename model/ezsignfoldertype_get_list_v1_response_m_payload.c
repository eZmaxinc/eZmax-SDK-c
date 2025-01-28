#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_get_list_v1_response_m_payload.h"



static ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsignfoldertype
    ) {
    ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsignfoldertype_get_list_v1_response_m_payload_t));
    if (!ezsignfoldertype_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldertype_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsignfoldertype_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezsignfoldertype_get_list_v1_response_m_payload_local_var->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;

    ezsignfoldertype_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignfoldertype_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsignfoldertype
    ) {
    return ezsignfoldertype_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_ezsignfoldertype
        );
}

void ezsignfoldertype_get_list_v1_response_m_payload_free(ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload) {
    if(NULL == ezsignfoldertype_get_list_v1_response_m_payload){
        return ;
    }
    if(ezsignfoldertype_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype) {
        list_ForEach(listEntry, ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype) {
            ezsignfoldertype_list_element_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype);
        ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype = NULL;
    }
    free(ezsignfoldertype_get_list_v1_response_m_payload);
}

cJSON *ezsignfoldertype_get_list_v1_response_m_payload_convertToJSON(ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_get_list_v1_response_m_payload->i_row_returned
    if (!ezsignfoldertype_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezsignfoldertype_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsignfoldertype_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezsignfoldertype_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype
    if (!ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldertype = cJSON_AddArrayToObject(item, "a_objEzsignfoldertype");
    if(a_obj_ezsignfoldertype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertypeListEntry;
    if (ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype) {
    list_ForEach(a_obj_ezsignfoldertypeListEntry, ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype) {
    cJSON *itemLocal = ezsignfoldertype_list_element_convertToJSON(a_obj_ezsignfoldertypeListEntry->data);
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

ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_list_v1_response_m_payloadJSON){

    ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype
    list_t *a_obj_ezsignfoldertypeList = NULL;

    // ezsignfoldertype_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (cJSON_IsNull(i_row_returned)) {
        i_row_returned = NULL;
    }
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (cJSON_IsNull(i_row_filtered)) {
        i_row_filtered = NULL;
    }
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_get_list_v1_response_m_payload->a_obj_ezsignfoldertype
    cJSON *a_obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_list_v1_response_m_payloadJSON, "a_objEzsignfoldertype");
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
        ezsignfoldertype_list_element_t *a_obj_ezsignfoldertypeItem = ezsignfoldertype_list_element_parseFromJSON(a_obj_ezsignfoldertype_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertypeList, a_obj_ezsignfoldertypeItem);
    }


    ezsignfoldertype_get_list_v1_response_m_payload_local_var = ezsignfoldertype_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_ezsignfoldertypeList
        );

    return ezsignfoldertype_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignfoldertypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldertypeList) {
            ezsignfoldertype_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldertypeList);
        a_obj_ezsignfoldertypeList = NULL;
    }
    return NULL;

}
