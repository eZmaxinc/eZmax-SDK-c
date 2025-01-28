#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacttitle_get_autocomplete_v2_response_m_payload.h"



static contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_contacttitle
    ) {
    contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(contacttitle_get_autocomplete_v2_response_m_payload_t));
    if (!contacttitle_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    contacttitle_get_autocomplete_v2_response_m_payload_local_var->a_obj_contacttitle = a_obj_contacttitle;

    contacttitle_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return contacttitle_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_contacttitle
    ) {
    return contacttitle_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_contacttitle
        );
}

void contacttitle_get_autocomplete_v2_response_m_payload_free(contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload) {
    if(NULL == contacttitle_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(contacttitle_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "contacttitle_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle) {
        list_ForEach(listEntry, contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle) {
            contacttitle_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle);
        contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle = NULL;
    }
    free(contacttitle_get_autocomplete_v2_response_m_payload);
}

cJSON *contacttitle_get_autocomplete_v2_response_m_payload_convertToJSON(contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle
    if (!contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle) {
        goto fail;
    }
    cJSON *a_obj_contacttitle = cJSON_AddArrayToObject(item, "a_objContacttitle");
    if(a_obj_contacttitle == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_contacttitleListEntry;
    if (contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle) {
    list_ForEach(a_obj_contacttitleListEntry, contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle) {
    cJSON *itemLocal = contacttitle_autocomplete_element_response_convertToJSON(a_obj_contacttitleListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_contacttitle, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *contacttitle_get_autocomplete_v2_response_m_payloadJSON){

    contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle
    list_t *a_obj_contacttitleList = NULL;

    // contacttitle_get_autocomplete_v2_response_m_payload->a_obj_contacttitle
    cJSON *a_obj_contacttitle = cJSON_GetObjectItemCaseSensitive(contacttitle_get_autocomplete_v2_response_m_payloadJSON, "a_objContacttitle");
    if (cJSON_IsNull(a_obj_contacttitle)) {
        a_obj_contacttitle = NULL;
    }
    if (!a_obj_contacttitle) {
        goto end;
    }

    
    cJSON *a_obj_contacttitle_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_contacttitle)){
        goto end; //nonprimitive container
    }

    a_obj_contacttitleList = list_createList();

    cJSON_ArrayForEach(a_obj_contacttitle_local_nonprimitive,a_obj_contacttitle )
    {
        if(!cJSON_IsObject(a_obj_contacttitle_local_nonprimitive)){
            goto end;
        }
        contacttitle_autocomplete_element_response_t *a_obj_contacttitleItem = contacttitle_autocomplete_element_response_parseFromJSON(a_obj_contacttitle_local_nonprimitive);

        list_addElement(a_obj_contacttitleList, a_obj_contacttitleItem);
    }


    contacttitle_get_autocomplete_v2_response_m_payload_local_var = contacttitle_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_contacttitleList
        );

    return contacttitle_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_contacttitleList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_contacttitleList) {
            contacttitle_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_contacttitleList);
        a_obj_contacttitleList = NULL;
    }
    return NULL;

}
