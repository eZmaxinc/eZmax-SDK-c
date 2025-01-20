#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_ezsignpages_v1_response_m_payload.h"



ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload_create(
    list_t *a_obj_ezsignpage
    ) {
    ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_ezsignpages_v1_response_m_payload_t));
    if (!ezsigndocument_get_ezsignpages_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_ezsignpages_v1_response_m_payload_local_var->a_obj_ezsignpage = a_obj_ezsignpage;

    return ezsigndocument_get_ezsignpages_v1_response_m_payload_local_var;
}


void ezsigndocument_get_ezsignpages_v1_response_m_payload_free(ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_ezsignpages_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage) {
        list_ForEach(listEntry, ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage) {
            ezsignpage_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage);
        ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage = NULL;
    }
    free(ezsigndocument_get_ezsignpages_v1_response_m_payload);
}

cJSON *ezsigndocument_get_ezsignpages_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage
    if (!ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage) {
        goto fail;
    }
    cJSON *a_obj_ezsignpage = cJSON_AddArrayToObject(item, "a_objEzsignpage");
    if(a_obj_ezsignpage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignpageListEntry;
    if (ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage) {
    list_ForEach(a_obj_ezsignpageListEntry, ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage) {
    cJSON *itemLocal = ezsignpage_response_convertToJSON(a_obj_ezsignpageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignpage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsignpages_v1_response_m_payloadJSON){

    ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage
    list_t *a_obj_ezsignpageList = NULL;

    // ezsigndocument_get_ezsignpages_v1_response_m_payload->a_obj_ezsignpage
    cJSON *a_obj_ezsignpage = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsignpages_v1_response_m_payloadJSON, "a_objEzsignpage");
    if (!a_obj_ezsignpage) {
        goto end;
    }

    
    cJSON *a_obj_ezsignpage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignpage)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignpageList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignpage_local_nonprimitive,a_obj_ezsignpage )
    {
        if(!cJSON_IsObject(a_obj_ezsignpage_local_nonprimitive)){
            goto end;
        }
        ezsignpage_response_t *a_obj_ezsignpageItem = ezsignpage_response_parseFromJSON(a_obj_ezsignpage_local_nonprimitive);

        list_addElement(a_obj_ezsignpageList, a_obj_ezsignpageItem);
    }


    ezsigndocument_get_ezsignpages_v1_response_m_payload_local_var = ezsigndocument_get_ezsignpages_v1_response_m_payload_create (
        a_obj_ezsignpageList
        );

    return ezsigndocument_get_ezsignpages_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignpageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignpageList) {
            ezsignpage_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignpageList);
        a_obj_ezsignpageList = NULL;
    }
    return NULL;

}
