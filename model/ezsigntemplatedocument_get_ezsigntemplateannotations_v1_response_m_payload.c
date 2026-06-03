#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload.h"



static ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_create_internal(
    list_t *a_obj_ezsigntemplateannotation
    ) {
    ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var, 0, sizeof(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t));
    ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var->_library_owned = 1;
    ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var->a_obj_ezsigntemplateannotation = a_obj_ezsigntemplateannotation;
    return ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplateannotation
    ) {
    ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *result = ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_create_internal (
        a_obj_ezsigntemplateannotation
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_free(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation) {
        list_ForEach(listEntry, ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation) {
            ezsigntemplateannotation_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation);
        ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation = NULL;
    }
    free(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation
    if (!ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateannotation = cJSON_AddArrayToObject(item, "a_objEzsigntemplateannotation");
    if(a_obj_ezsigntemplateannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateannotationListEntry;
    if (ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation) {
    list_ForEach(a_obj_ezsigntemplateannotationListEntry, ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation) {
    cJSON *itemLocal = ezsigntemplateannotation_response_compound_convertToJSON(a_obj_ezsigntemplateannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateannotation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payloadJSON){

    ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation
    list_t *a_obj_ezsigntemplateannotationList = NULL;

    // ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload->a_obj_ezsigntemplateannotation
    cJSON *a_obj_ezsigntemplateannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payloadJSON, "a_objEzsigntemplateannotation");
    if (cJSON_IsNull(a_obj_ezsigntemplateannotation)) {
        a_obj_ezsigntemplateannotation = NULL;
    }
    if (!a_obj_ezsigntemplateannotation) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateannotation_local_nonprimitive,a_obj_ezsigntemplateannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateannotation_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateannotation_response_compound_t *a_obj_ezsigntemplateannotationItem = ezsigntemplateannotation_response_compound_parseFromJSON(a_obj_ezsigntemplateannotation_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateannotationList, a_obj_ezsigntemplateannotationItem);
    }



    ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var = ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_create_internal (
        a_obj_ezsigntemplateannotationList
        );

    if (!ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsigntemplatedocument_get_ezsigntemplateannotations_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplateannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateannotationList) {
            ezsigntemplateannotation_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateannotationList);
        a_obj_ezsigntemplateannotationList = NULL;
    }
    return NULL;

}
