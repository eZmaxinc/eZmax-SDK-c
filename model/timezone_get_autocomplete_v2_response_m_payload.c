#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_get_autocomplete_v2_response_m_payload.h"



static timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_timezone
    ) {
    timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(timezone_get_autocomplete_v2_response_m_payload_t));
    if (!timezone_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    timezone_get_autocomplete_v2_response_m_payload_local_var->a_obj_timezone = a_obj_timezone;

    timezone_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return timezone_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_timezone
    ) {
    return timezone_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_timezone
        );
}

void timezone_get_autocomplete_v2_response_m_payload_free(timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload) {
    if(NULL == timezone_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(timezone_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "timezone_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone) {
        list_ForEach(listEntry, timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone) {
            timezone_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone);
        timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone = NULL;
    }
    free(timezone_get_autocomplete_v2_response_m_payload);
}

cJSON *timezone_get_autocomplete_v2_response_m_payload_convertToJSON(timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone
    if (!timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone) {
        goto fail;
    }
    cJSON *a_obj_timezone = cJSON_AddArrayToObject(item, "a_objTimezone");
    if(a_obj_timezone == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_timezoneListEntry;
    if (timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone) {
    list_ForEach(a_obj_timezoneListEntry, timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone) {
    cJSON *itemLocal = timezone_autocomplete_element_response_convertToJSON(a_obj_timezoneListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_timezone, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *timezone_get_autocomplete_v2_response_m_payloadJSON){

    timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone
    list_t *a_obj_timezoneList = NULL;

    // timezone_get_autocomplete_v2_response_m_payload->a_obj_timezone
    cJSON *a_obj_timezone = cJSON_GetObjectItemCaseSensitive(timezone_get_autocomplete_v2_response_m_payloadJSON, "a_objTimezone");
    if (cJSON_IsNull(a_obj_timezone)) {
        a_obj_timezone = NULL;
    }
    if (!a_obj_timezone) {
        goto end;
    }

    
    cJSON *a_obj_timezone_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_timezone)){
        goto end; //nonprimitive container
    }

    a_obj_timezoneList = list_createList();

    cJSON_ArrayForEach(a_obj_timezone_local_nonprimitive,a_obj_timezone )
    {
        if(!cJSON_IsObject(a_obj_timezone_local_nonprimitive)){
            goto end;
        }
        timezone_autocomplete_element_response_t *a_obj_timezoneItem = timezone_autocomplete_element_response_parseFromJSON(a_obj_timezone_local_nonprimitive);

        list_addElement(a_obj_timezoneList, a_obj_timezoneItem);
    }


    timezone_get_autocomplete_v2_response_m_payload_local_var = timezone_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_timezoneList
        );

    return timezone_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_timezoneList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_timezoneList) {
            timezone_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_timezoneList);
        a_obj_timezoneList = NULL;
    }
    return NULL;

}
