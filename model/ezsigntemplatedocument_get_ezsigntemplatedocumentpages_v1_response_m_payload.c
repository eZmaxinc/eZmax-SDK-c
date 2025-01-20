#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload.h"



ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplatedocumentpage
    ) {
    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_local_var->a_obj_ezsigntemplatedocumentpage = a_obj_ezsigntemplatedocumentpage;

    return ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_local_var;
}


void ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_free(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage) {
        list_ForEach(listEntry, ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage) {
            ezsigntemplatedocumentpage_response_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage);
        ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage = NULL;
    }
    free(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage
    if (!ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatedocumentpage = cJSON_AddArrayToObject(item, "a_objEzsigntemplatedocumentpage");
    if(a_obj_ezsigntemplatedocumentpage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatedocumentpageListEntry;
    if (ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage) {
    list_ForEach(a_obj_ezsigntemplatedocumentpageListEntry, ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage) {
    cJSON *itemLocal = ezsigntemplatedocumentpage_response_convertToJSON(a_obj_ezsigntemplatedocumentpageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatedocumentpage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payloadJSON){

    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage
    list_t *a_obj_ezsigntemplatedocumentpageList = NULL;

    // ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload->a_obj_ezsigntemplatedocumentpage
    cJSON *a_obj_ezsigntemplatedocumentpage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payloadJSON, "a_objEzsigntemplatedocumentpage");
    if (!a_obj_ezsigntemplatedocumentpage) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatedocumentpage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatedocumentpage)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatedocumentpageList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatedocumentpage_local_nonprimitive,a_obj_ezsigntemplatedocumentpage )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatedocumentpage_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatedocumentpage_response_t *a_obj_ezsigntemplatedocumentpageItem = ezsigntemplatedocumentpage_response_parseFromJSON(a_obj_ezsigntemplatedocumentpage_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatedocumentpageList, a_obj_ezsigntemplatedocumentpageItem);
    }


    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_local_var = ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_create (
        a_obj_ezsigntemplatedocumentpageList
        );

    return ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplatedocumentpageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatedocumentpageList) {
            ezsigntemplatedocumentpage_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatedocumentpageList);
        a_obj_ezsigntemplatedocumentpageList = NULL;
    }
    return NULL;

}
