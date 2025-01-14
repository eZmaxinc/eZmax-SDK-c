#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_create_object_v1_response_m_payload.h"



ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezdoctemplatedocument_id
    ) {
    ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezdoctemplatedocument_create_object_v1_response_m_payload_t));
    if (!ezdoctemplatedocument_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_create_object_v1_response_m_payload_local_var->a_pki_ezdoctemplatedocument_id = a_pki_ezdoctemplatedocument_id;

    return ezdoctemplatedocument_create_object_v1_response_m_payload_local_var;
}


void ezdoctemplatedocument_create_object_v1_response_m_payload_free(ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload) {
    if(NULL == ezdoctemplatedocument_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id) {
        list_ForEach(listEntry, ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id) {
            free(listEntry->data);
        }
        list_freeList(ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id);
        ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id = NULL;
    }
    free(ezdoctemplatedocument_create_object_v1_response_m_payload);
}

cJSON *ezdoctemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id
    if (!ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id) {
        goto fail;
    }
    cJSON *a_pki_ezdoctemplatedocument_id = cJSON_AddArrayToObject(item, "a_pkiEzdoctemplatedocumentID");
    if(a_pki_ezdoctemplatedocument_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezdoctemplatedocument_idListEntry;
    list_ForEach(a_pki_ezdoctemplatedocument_idListEntry, ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(a_pki_ezdoctemplatedocument_id, "", *(double *)a_pki_ezdoctemplatedocument_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezdoctemplatedocument_create_object_v1_response_m_payloadJSON){

    ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id
    list_t *a_pki_ezdoctemplatedocument_idList = NULL;

    // ezdoctemplatedocument_create_object_v1_response_m_payload->a_pki_ezdoctemplatedocument_id
    cJSON *a_pki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_create_object_v1_response_m_payloadJSON, "a_pkiEzdoctemplatedocumentID");
    if (!a_pki_ezdoctemplatedocument_id) {
        goto end;
    }

    
    cJSON *a_pki_ezdoctemplatedocument_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezdoctemplatedocument_id)) {
        goto end;//primitive container
    }
    a_pki_ezdoctemplatedocument_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezdoctemplatedocument_id_local, a_pki_ezdoctemplatedocument_id)
    {
        if(!cJSON_IsNumber(a_pki_ezdoctemplatedocument_id_local))
        {
            goto end;
        }
        double *a_pki_ezdoctemplatedocument_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezdoctemplatedocument_id_local_value)
        {
            goto end;
        }
        *a_pki_ezdoctemplatedocument_id_local_value = a_pki_ezdoctemplatedocument_id_local->valuedouble;
        list_addElement(a_pki_ezdoctemplatedocument_idList , a_pki_ezdoctemplatedocument_id_local_value);
    }


    ezdoctemplatedocument_create_object_v1_response_m_payload_local_var = ezdoctemplatedocument_create_object_v1_response_m_payload_create (
        a_pki_ezdoctemplatedocument_idList
        );

    return ezdoctemplatedocument_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezdoctemplatedocument_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezdoctemplatedocument_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezdoctemplatedocument_idList);
        a_pki_ezdoctemplatedocument_idList = NULL;
    }
    return NULL;

}
