#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_get_autocomplete_v2_response_m_payload.h"



static ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezdoctemplatedocument
    ) {
    ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t));
    if (!ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezdoctemplatedocument = a_obj_ezdoctemplatedocument;

    ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezdoctemplatedocument
    ) {
    return ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezdoctemplatedocument
        );
}

void ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_free(ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezdoctemplatedocument_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument) {
        list_ForEach(listEntry, ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument) {
            ezdoctemplatedocument_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument);
        ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument = NULL;
    }
    free(ezdoctemplatedocument_get_autocomplete_v2_response_m_payload);
}

cJSON *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_convertToJSON(ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument
    if (!ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument) {
        goto fail;
    }
    cJSON *a_obj_ezdoctemplatedocument = cJSON_AddArrayToObject(item, "a_objEzdoctemplatedocument");
    if(a_obj_ezdoctemplatedocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezdoctemplatedocumentListEntry;
    if (ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument) {
    list_ForEach(a_obj_ezdoctemplatedocumentListEntry, ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument) {
    cJSON *itemLocal = ezdoctemplatedocument_autocomplete_element_response_convertToJSON(a_obj_ezdoctemplatedocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezdoctemplatedocument, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezdoctemplatedocument_get_autocomplete_v2_response_m_payloadJSON){

    ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument
    list_t *a_obj_ezdoctemplatedocumentList = NULL;

    // ezdoctemplatedocument_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatedocument
    cJSON *a_obj_ezdoctemplatedocument = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_get_autocomplete_v2_response_m_payloadJSON, "a_objEzdoctemplatedocument");
    if (cJSON_IsNull(a_obj_ezdoctemplatedocument)) {
        a_obj_ezdoctemplatedocument = NULL;
    }
    if (!a_obj_ezdoctemplatedocument) {
        goto end;
    }

    
    cJSON *a_obj_ezdoctemplatedocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezdoctemplatedocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezdoctemplatedocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezdoctemplatedocument_local_nonprimitive,a_obj_ezdoctemplatedocument )
    {
        if(!cJSON_IsObject(a_obj_ezdoctemplatedocument_local_nonprimitive)){
            goto end;
        }
        ezdoctemplatedocument_autocomplete_element_response_t *a_obj_ezdoctemplatedocumentItem = ezdoctemplatedocument_autocomplete_element_response_parseFromJSON(a_obj_ezdoctemplatedocument_local_nonprimitive);

        list_addElement(a_obj_ezdoctemplatedocumentList, a_obj_ezdoctemplatedocumentItem);
    }


    ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var = ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezdoctemplatedocumentList
        );

    return ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezdoctemplatedocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezdoctemplatedocumentList) {
            ezdoctemplatedocument_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezdoctemplatedocumentList);
        a_obj_ezdoctemplatedocumentList = NULL;
    }
    return NULL;

}
