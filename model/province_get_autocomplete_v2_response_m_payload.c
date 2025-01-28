#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "province_get_autocomplete_v2_response_m_payload.h"



static province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_province
    ) {
    province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(province_get_autocomplete_v2_response_m_payload_t));
    if (!province_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    province_get_autocomplete_v2_response_m_payload_local_var->a_obj_province = a_obj_province;

    province_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return province_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_province
    ) {
    return province_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_province
        );
}

void province_get_autocomplete_v2_response_m_payload_free(province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload) {
    if(NULL == province_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(province_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "province_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (province_get_autocomplete_v2_response_m_payload->a_obj_province) {
        list_ForEach(listEntry, province_get_autocomplete_v2_response_m_payload->a_obj_province) {
            province_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(province_get_autocomplete_v2_response_m_payload->a_obj_province);
        province_get_autocomplete_v2_response_m_payload->a_obj_province = NULL;
    }
    free(province_get_autocomplete_v2_response_m_payload);
}

cJSON *province_get_autocomplete_v2_response_m_payload_convertToJSON(province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // province_get_autocomplete_v2_response_m_payload->a_obj_province
    if (!province_get_autocomplete_v2_response_m_payload->a_obj_province) {
        goto fail;
    }
    cJSON *a_obj_province = cJSON_AddArrayToObject(item, "a_objProvince");
    if(a_obj_province == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_provinceListEntry;
    if (province_get_autocomplete_v2_response_m_payload->a_obj_province) {
    list_ForEach(a_obj_provinceListEntry, province_get_autocomplete_v2_response_m_payload->a_obj_province) {
    cJSON *itemLocal = province_autocomplete_element_response_convertToJSON(a_obj_provinceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_province, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *province_get_autocomplete_v2_response_m_payloadJSON){

    province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for province_get_autocomplete_v2_response_m_payload->a_obj_province
    list_t *a_obj_provinceList = NULL;

    // province_get_autocomplete_v2_response_m_payload->a_obj_province
    cJSON *a_obj_province = cJSON_GetObjectItemCaseSensitive(province_get_autocomplete_v2_response_m_payloadJSON, "a_objProvince");
    if (cJSON_IsNull(a_obj_province)) {
        a_obj_province = NULL;
    }
    if (!a_obj_province) {
        goto end;
    }

    
    cJSON *a_obj_province_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_province)){
        goto end; //nonprimitive container
    }

    a_obj_provinceList = list_createList();

    cJSON_ArrayForEach(a_obj_province_local_nonprimitive,a_obj_province )
    {
        if(!cJSON_IsObject(a_obj_province_local_nonprimitive)){
            goto end;
        }
        province_autocomplete_element_response_t *a_obj_provinceItem = province_autocomplete_element_response_parseFromJSON(a_obj_province_local_nonprimitive);

        list_addElement(a_obj_provinceList, a_obj_provinceItem);
    }


    province_get_autocomplete_v2_response_m_payload_local_var = province_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_provinceList
        );

    return province_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_provinceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_provinceList) {
            province_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_provinceList);
        a_obj_provinceList = NULL;
    }
    return NULL;

}
