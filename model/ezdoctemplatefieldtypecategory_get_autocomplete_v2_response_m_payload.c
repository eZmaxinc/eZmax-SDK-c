#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload.h"



static ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezdoctemplatefieldtypecategory
    ) {
    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t));
    if (!ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezdoctemplatefieldtypecategory = a_obj_ezdoctemplatefieldtypecategory;

    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezdoctemplatefieldtypecategory
    ) {
    return ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezdoctemplatefieldtypecategory
        );
}

void ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_free(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory) {
        list_ForEach(listEntry, ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory) {
            ezdoctemplatefieldtypecategory_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory);
        ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory = NULL;
    }
    free(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload);
}

cJSON *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_convertToJSON(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory
    if (!ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory) {
        goto fail;
    }
    cJSON *a_obj_ezdoctemplatefieldtypecategory = cJSON_AddArrayToObject(item, "a_objEzdoctemplatefieldtypecategory");
    if(a_obj_ezdoctemplatefieldtypecategory == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezdoctemplatefieldtypecategoryListEntry;
    if (ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory) {
    list_ForEach(a_obj_ezdoctemplatefieldtypecategoryListEntry, ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory) {
    cJSON *itemLocal = ezdoctemplatefieldtypecategory_autocomplete_element_response_convertToJSON(a_obj_ezdoctemplatefieldtypecategoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezdoctemplatefieldtypecategory, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payloadJSON){

    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory
    list_t *a_obj_ezdoctemplatefieldtypecategoryList = NULL;

    // ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatefieldtypecategory
    cJSON *a_obj_ezdoctemplatefieldtypecategory = cJSON_GetObjectItemCaseSensitive(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payloadJSON, "a_objEzdoctemplatefieldtypecategory");
    if (cJSON_IsNull(a_obj_ezdoctemplatefieldtypecategory)) {
        a_obj_ezdoctemplatefieldtypecategory = NULL;
    }
    if (!a_obj_ezdoctemplatefieldtypecategory) {
        goto end;
    }

    
    cJSON *a_obj_ezdoctemplatefieldtypecategory_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezdoctemplatefieldtypecategory)){
        goto end; //nonprimitive container
    }

    a_obj_ezdoctemplatefieldtypecategoryList = list_createList();

    cJSON_ArrayForEach(a_obj_ezdoctemplatefieldtypecategory_local_nonprimitive,a_obj_ezdoctemplatefieldtypecategory )
    {
        if(!cJSON_IsObject(a_obj_ezdoctemplatefieldtypecategory_local_nonprimitive)){
            goto end;
        }
        ezdoctemplatefieldtypecategory_autocomplete_element_response_t *a_obj_ezdoctemplatefieldtypecategoryItem = ezdoctemplatefieldtypecategory_autocomplete_element_response_parseFromJSON(a_obj_ezdoctemplatefieldtypecategory_local_nonprimitive);

        list_addElement(a_obj_ezdoctemplatefieldtypecategoryList, a_obj_ezdoctemplatefieldtypecategoryItem);
    }


    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var = ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezdoctemplatefieldtypecategoryList
        );

    return ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezdoctemplatefieldtypecategoryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezdoctemplatefieldtypecategoryList) {
            ezdoctemplatefieldtypecategory_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezdoctemplatefieldtypecategoryList);
        a_obj_ezdoctemplatefieldtypecategoryList = NULL;
    }
    return NULL;

}
