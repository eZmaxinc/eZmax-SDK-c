#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincometype_get_autocomplete_v2_response_m_payload.h"



static otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_otherincometype
    ) {
    otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(otherincometype_get_autocomplete_v2_response_m_payload_t));
    if (!otherincometype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    otherincometype_get_autocomplete_v2_response_m_payload_local_var->a_obj_otherincometype = a_obj_otherincometype;

    otherincometype_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return otherincometype_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_otherincometype
    ) {
    return otherincometype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_otherincometype
        );
}

void otherincometype_get_autocomplete_v2_response_m_payload_free(otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload) {
    if(NULL == otherincometype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(otherincometype_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "otherincometype_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype) {
        list_ForEach(listEntry, otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype) {
            otherincometype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype);
        otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype = NULL;
    }
    free(otherincometype_get_autocomplete_v2_response_m_payload);
}

cJSON *otherincometype_get_autocomplete_v2_response_m_payload_convertToJSON(otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype
    if (!otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype) {
        goto fail;
    }
    cJSON *a_obj_otherincometype = cJSON_AddArrayToObject(item, "a_objOtherincometype");
    if(a_obj_otherincometype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_otherincometypeListEntry;
    if (otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype) {
    list_ForEach(a_obj_otherincometypeListEntry, otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype) {
    cJSON *itemLocal = otherincometype_autocomplete_element_response_convertToJSON(a_obj_otherincometypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_otherincometype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *otherincometype_get_autocomplete_v2_response_m_payloadJSON){

    otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype
    list_t *a_obj_otherincometypeList = NULL;

    // otherincometype_get_autocomplete_v2_response_m_payload->a_obj_otherincometype
    cJSON *a_obj_otherincometype = cJSON_GetObjectItemCaseSensitive(otherincometype_get_autocomplete_v2_response_m_payloadJSON, "a_objOtherincometype");
    if (cJSON_IsNull(a_obj_otherincometype)) {
        a_obj_otherincometype = NULL;
    }
    if (!a_obj_otherincometype) {
        goto end;
    }

    
    cJSON *a_obj_otherincometype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_otherincometype)){
        goto end; //nonprimitive container
    }

    a_obj_otherincometypeList = list_createList();

    cJSON_ArrayForEach(a_obj_otherincometype_local_nonprimitive,a_obj_otherincometype )
    {
        if(!cJSON_IsObject(a_obj_otherincometype_local_nonprimitive)){
            goto end;
        }
        otherincometype_autocomplete_element_response_t *a_obj_otherincometypeItem = otherincometype_autocomplete_element_response_parseFromJSON(a_obj_otherincometype_local_nonprimitive);

        list_addElement(a_obj_otherincometypeList, a_obj_otherincometypeItem);
    }


    otherincometype_get_autocomplete_v2_response_m_payload_local_var = otherincometype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_otherincometypeList
        );

    return otherincometype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_otherincometypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_otherincometypeList) {
            otherincometype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_otherincometypeList);
        a_obj_otherincometypeList = NULL;
    }
    return NULL;

}
