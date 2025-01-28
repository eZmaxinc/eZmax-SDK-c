#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_ezsigndiscussions_v1_response_m_payload.h"



static ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_create_internal(
    list_t *a_obj_ezsigndiscussion
    ) {
    ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t));
    if (!ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var->a_obj_ezsigndiscussion = a_obj_ezsigndiscussion;

    ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_create(
    list_t *a_obj_ezsigndiscussion
    ) {
    return ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_create_internal (
        a_obj_ezsigndiscussion
        );
}

void ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_free(ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_ezsigndiscussions_v1_response_m_payload){
        return ;
    }
    if(ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion) {
        list_ForEach(listEntry, ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion) {
            ezsigndiscussion_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion);
        ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion = NULL;
    }
    free(ezsigndocument_get_ezsigndiscussions_v1_response_m_payload);
}

cJSON *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion
    if (!ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion) {
        goto fail;
    }
    cJSON *a_obj_ezsigndiscussion = cJSON_AddArrayToObject(item, "a_objEzsigndiscussion");
    if(a_obj_ezsigndiscussion == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndiscussionListEntry;
    if (ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion) {
    list_ForEach(a_obj_ezsigndiscussionListEntry, ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion) {
    cJSON *itemLocal = ezsigndiscussion_response_convertToJSON(a_obj_ezsigndiscussionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndiscussion, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsigndiscussions_v1_response_m_payloadJSON){

    ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_t *ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion
    list_t *a_obj_ezsigndiscussionList = NULL;

    // ezsigndocument_get_ezsigndiscussions_v1_response_m_payload->a_obj_ezsigndiscussion
    cJSON *a_obj_ezsigndiscussion = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsigndiscussions_v1_response_m_payloadJSON, "a_objEzsigndiscussion");
    if (cJSON_IsNull(a_obj_ezsigndiscussion)) {
        a_obj_ezsigndiscussion = NULL;
    }
    if (!a_obj_ezsigndiscussion) {
        goto end;
    }

    
    cJSON *a_obj_ezsigndiscussion_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigndiscussion)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndiscussionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndiscussion_local_nonprimitive,a_obj_ezsigndiscussion )
    {
        if(!cJSON_IsObject(a_obj_ezsigndiscussion_local_nonprimitive)){
            goto end;
        }
        ezsigndiscussion_response_t *a_obj_ezsigndiscussionItem = ezsigndiscussion_response_parseFromJSON(a_obj_ezsigndiscussion_local_nonprimitive);

        list_addElement(a_obj_ezsigndiscussionList, a_obj_ezsigndiscussionItem);
    }


    ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var = ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_create_internal (
        a_obj_ezsigndiscussionList
        );

    return ezsigndocument_get_ezsigndiscussions_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigndiscussionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndiscussionList) {
            ezsigndiscussion_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndiscussionList);
        a_obj_ezsigndiscussionList = NULL;
    }
    return NULL;

}
