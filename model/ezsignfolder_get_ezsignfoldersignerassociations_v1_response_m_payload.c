#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload.h"



static ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_create_internal(
    list_t *a_obj_ezsignfoldersignerassociation
    ) {
    ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t));
    if (!ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var->a_obj_ezsignfoldersignerassociation = a_obj_ezsignfoldersignerassociation;

    ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_create(
    list_t *a_obj_ezsignfoldersignerassociation
    ) {
    return ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_create_internal (
        a_obj_ezsignfoldersignerassociation
        );
}

void ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_free(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload){
        return ;
    }
    if(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
        list_ForEach(listEntry, ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
            custom_ezsignfoldersignerassociation_actionable_element_response_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation);
        ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation = NULL;
    }
    free(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload);
}

cJSON *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_convertToJSON(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation
    if (!ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldersignerassociation = cJSON_AddArrayToObject(item, "a_objEzsignfoldersignerassociation");
    if(a_obj_ezsignfoldersignerassociation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldersignerassociationListEntry;
    if (ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
    list_ForEach(a_obj_ezsignfoldersignerassociationListEntry, ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation) {
    cJSON *itemLocal = custom_ezsignfoldersignerassociation_actionable_element_response_convertToJSON(a_obj_ezsignfoldersignerassociationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldersignerassociation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payloadJSON){

    ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_t *ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation
    list_t *a_obj_ezsignfoldersignerassociationList = NULL;

    // ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload->a_obj_ezsignfoldersignerassociation
    cJSON *a_obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payloadJSON, "a_objEzsignfoldersignerassociation");
    if (cJSON_IsNull(a_obj_ezsignfoldersignerassociation)) {
        a_obj_ezsignfoldersignerassociation = NULL;
    }
    if (!a_obj_ezsignfoldersignerassociation) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldersignerassociation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldersignerassociation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldersignerassociationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldersignerassociation_local_nonprimitive,a_obj_ezsignfoldersignerassociation )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldersignerassociation_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfoldersignerassociation_actionable_element_response_t *a_obj_ezsignfoldersignerassociationItem = custom_ezsignfoldersignerassociation_actionable_element_response_parseFromJSON(a_obj_ezsignfoldersignerassociation_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldersignerassociationList, a_obj_ezsignfoldersignerassociationItem);
    }


    ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var = ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_create_internal (
        a_obj_ezsignfoldersignerassociationList
        );

    return ezsignfolder_get_ezsignfoldersignerassociations_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignfoldersignerassociationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldersignerassociationList) {
            custom_ezsignfoldersignerassociation_actionable_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldersignerassociationList);
        a_obj_ezsignfoldersignerassociationList = NULL;
    }
    return NULL;

}
