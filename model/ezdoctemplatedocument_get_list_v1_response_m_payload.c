#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_get_list_v1_response_m_payload.h"



ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezdoctemplatedocument
    ) {
    ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezdoctemplatedocument_get_list_v1_response_m_payload_t));
    if (!ezdoctemplatedocument_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezdoctemplatedocument_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezdoctemplatedocument_get_list_v1_response_m_payload_local_var->a_obj_ezdoctemplatedocument = a_obj_ezdoctemplatedocument;

    return ezdoctemplatedocument_get_list_v1_response_m_payload_local_var;
}


void ezdoctemplatedocument_get_list_v1_response_m_payload_free(ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload) {
    if(NULL == ezdoctemplatedocument_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument) {
        list_ForEach(listEntry, ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument) {
            ezdoctemplatedocument_list_element_free(listEntry->data);
        }
        list_freeList(ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument);
        ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument = NULL;
    }
    free(ezdoctemplatedocument_get_list_v1_response_m_payload);
}

cJSON *ezdoctemplatedocument_get_list_v1_response_m_payload_convertToJSON(ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_returned
    if (!ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_filtered
    if (!ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument
    if (!ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument) {
        goto fail;
    }
    cJSON *a_obj_ezdoctemplatedocument = cJSON_AddArrayToObject(item, "a_objEzdoctemplatedocument");
    if(a_obj_ezdoctemplatedocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezdoctemplatedocumentListEntry;
    if (ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument) {
    list_ForEach(a_obj_ezdoctemplatedocumentListEntry, ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument) {
    cJSON *itemLocal = ezdoctemplatedocument_list_element_convertToJSON(a_obj_ezdoctemplatedocumentListEntry->data);
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

ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezdoctemplatedocument_get_list_v1_response_m_payloadJSON){

    ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument
    list_t *a_obj_ezdoctemplatedocumentList = NULL;

    // ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // ezdoctemplatedocument_get_list_v1_response_m_payload->a_obj_ezdoctemplatedocument
    cJSON *a_obj_ezdoctemplatedocument = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_get_list_v1_response_m_payloadJSON, "a_objEzdoctemplatedocument");
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
        ezdoctemplatedocument_list_element_t *a_obj_ezdoctemplatedocumentItem = ezdoctemplatedocument_list_element_parseFromJSON(a_obj_ezdoctemplatedocument_local_nonprimitive);

        list_addElement(a_obj_ezdoctemplatedocumentList, a_obj_ezdoctemplatedocumentItem);
    }


    ezdoctemplatedocument_get_list_v1_response_m_payload_local_var = ezdoctemplatedocument_get_list_v1_response_m_payload_create (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_ezdoctemplatedocumentList
        );

    return ezdoctemplatedocument_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_ezdoctemplatedocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezdoctemplatedocumentList) {
            ezdoctemplatedocument_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezdoctemplatedocumentList);
        a_obj_ezdoctemplatedocumentList = NULL;
    }
    return NULL;

}
