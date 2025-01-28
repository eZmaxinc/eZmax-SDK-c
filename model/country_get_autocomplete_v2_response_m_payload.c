#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_get_autocomplete_v2_response_m_payload.h"



static country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_country
    ) {
    country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(country_get_autocomplete_v2_response_m_payload_t));
    if (!country_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    country_get_autocomplete_v2_response_m_payload_local_var->a_obj_country = a_obj_country;

    country_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return country_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_country
    ) {
    return country_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_country
        );
}

void country_get_autocomplete_v2_response_m_payload_free(country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload) {
    if(NULL == country_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(country_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "country_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (country_get_autocomplete_v2_response_m_payload->a_obj_country) {
        list_ForEach(listEntry, country_get_autocomplete_v2_response_m_payload->a_obj_country) {
            country_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(country_get_autocomplete_v2_response_m_payload->a_obj_country);
        country_get_autocomplete_v2_response_m_payload->a_obj_country = NULL;
    }
    free(country_get_autocomplete_v2_response_m_payload);
}

cJSON *country_get_autocomplete_v2_response_m_payload_convertToJSON(country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // country_get_autocomplete_v2_response_m_payload->a_obj_country
    if (!country_get_autocomplete_v2_response_m_payload->a_obj_country) {
        goto fail;
    }
    cJSON *a_obj_country = cJSON_AddArrayToObject(item, "a_objCountry");
    if(a_obj_country == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_countryListEntry;
    if (country_get_autocomplete_v2_response_m_payload->a_obj_country) {
    list_ForEach(a_obj_countryListEntry, country_get_autocomplete_v2_response_m_payload->a_obj_country) {
    cJSON *itemLocal = country_autocomplete_element_response_convertToJSON(a_obj_countryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_country, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *country_get_autocomplete_v2_response_m_payloadJSON){

    country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for country_get_autocomplete_v2_response_m_payload->a_obj_country
    list_t *a_obj_countryList = NULL;

    // country_get_autocomplete_v2_response_m_payload->a_obj_country
    cJSON *a_obj_country = cJSON_GetObjectItemCaseSensitive(country_get_autocomplete_v2_response_m_payloadJSON, "a_objCountry");
    if (cJSON_IsNull(a_obj_country)) {
        a_obj_country = NULL;
    }
    if (!a_obj_country) {
        goto end;
    }

    
    cJSON *a_obj_country_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_country)){
        goto end; //nonprimitive container
    }

    a_obj_countryList = list_createList();

    cJSON_ArrayForEach(a_obj_country_local_nonprimitive,a_obj_country )
    {
        if(!cJSON_IsObject(a_obj_country_local_nonprimitive)){
            goto end;
        }
        country_autocomplete_element_response_t *a_obj_countryItem = country_autocomplete_element_response_parseFromJSON(a_obj_country_local_nonprimitive);

        list_addElement(a_obj_countryList, a_obj_countryItem);
    }


    country_get_autocomplete_v2_response_m_payload_local_var = country_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_countryList
        );

    return country_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_countryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_countryList) {
            country_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_countryList);
        a_obj_countryList = NULL;
    }
    return NULL;

}
