#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatetype_get_autocomplete_v2_response_m_payload.h"



ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezdoctemplatetype
    ) {
    ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t));
    if (!ezdoctemplatetype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezdoctemplatetype_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezdoctemplatetype = a_obj_ezdoctemplatetype;

    return ezdoctemplatetype_get_autocomplete_v2_response_m_payload_local_var;
}


void ezdoctemplatetype_get_autocomplete_v2_response_m_payload_free(ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezdoctemplatetype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype) {
        list_ForEach(listEntry, ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype) {
            ezdoctemplatetype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype);
        ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype = NULL;
    }
    free(ezdoctemplatetype_get_autocomplete_v2_response_m_payload);
}

cJSON *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype
    if (!ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype) {
        goto fail;
    }
    cJSON *a_obj_ezdoctemplatetype = cJSON_AddArrayToObject(item, "a_objEzdoctemplatetype");
    if(a_obj_ezdoctemplatetype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezdoctemplatetypeListEntry;
    if (ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype) {
    list_ForEach(a_obj_ezdoctemplatetypeListEntry, ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype) {
    cJSON *itemLocal = ezdoctemplatetype_autocomplete_element_response_convertToJSON(a_obj_ezdoctemplatetypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezdoctemplatetype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezdoctemplatetype_get_autocomplete_v2_response_m_payloadJSON){

    ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype
    list_t *a_obj_ezdoctemplatetypeList = NULL;

    // ezdoctemplatetype_get_autocomplete_v2_response_m_payload->a_obj_ezdoctemplatetype
    cJSON *a_obj_ezdoctemplatetype = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_get_autocomplete_v2_response_m_payloadJSON, "a_objEzdoctemplatetype");
    if (!a_obj_ezdoctemplatetype) {
        goto end;
    }

    
    cJSON *a_obj_ezdoctemplatetype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezdoctemplatetype)){
        goto end; //nonprimitive container
    }

    a_obj_ezdoctemplatetypeList = list_createList();

    cJSON_ArrayForEach(a_obj_ezdoctemplatetype_local_nonprimitive,a_obj_ezdoctemplatetype )
    {
        if(!cJSON_IsObject(a_obj_ezdoctemplatetype_local_nonprimitive)){
            goto end;
        }
        ezdoctemplatetype_autocomplete_element_response_t *a_obj_ezdoctemplatetypeItem = ezdoctemplatetype_autocomplete_element_response_parseFromJSON(a_obj_ezdoctemplatetype_local_nonprimitive);

        list_addElement(a_obj_ezdoctemplatetypeList, a_obj_ezdoctemplatetypeItem);
    }


    ezdoctemplatetype_get_autocomplete_v2_response_m_payload_local_var = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_create (
        a_obj_ezdoctemplatetypeList
        );

    return ezdoctemplatetype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezdoctemplatetypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezdoctemplatetypeList) {
            ezdoctemplatetype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezdoctemplatetypeList);
        a_obj_ezdoctemplatetypeList = NULL;
    }
    return NULL;

}
