#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_get_object_v2_response_m_payload.h"



ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload_create(
    ezdoctemplatedocument_response_compound_t *obj_ezdoctemplatedocument
    ) {
    ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezdoctemplatedocument_get_object_v2_response_m_payload_t));
    if (!ezdoctemplatedocument_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezdoctemplatedocument_get_object_v2_response_m_payload_local_var->obj_ezdoctemplatedocument = obj_ezdoctemplatedocument;

    return ezdoctemplatedocument_get_object_v2_response_m_payload_local_var;
}


void ezdoctemplatedocument_get_object_v2_response_m_payload_free(ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload) {
    if(NULL == ezdoctemplatedocument_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument) {
        ezdoctemplatedocument_response_compound_free(ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument);
        ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument = NULL;
    }
    free(ezdoctemplatedocument_get_object_v2_response_m_payload);
}

cJSON *ezdoctemplatedocument_get_object_v2_response_m_payload_convertToJSON(ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument
    if (!ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument) {
        goto fail;
    }
    cJSON *obj_ezdoctemplatedocument_local_JSON = ezdoctemplatedocument_response_compound_convertToJSON(ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument);
    if(obj_ezdoctemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzdoctemplatedocument", obj_ezdoctemplatedocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezdoctemplatedocument_get_object_v2_response_m_payloadJSON){

    ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument
    ezdoctemplatedocument_response_compound_t *obj_ezdoctemplatedocument_local_nonprim = NULL;

    // ezdoctemplatedocument_get_object_v2_response_m_payload->obj_ezdoctemplatedocument
    cJSON *obj_ezdoctemplatedocument = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_get_object_v2_response_m_payloadJSON, "objEzdoctemplatedocument");
    if (!obj_ezdoctemplatedocument) {
        goto end;
    }

    
    obj_ezdoctemplatedocument_local_nonprim = ezdoctemplatedocument_response_compound_parseFromJSON(obj_ezdoctemplatedocument); //nonprimitive


    ezdoctemplatedocument_get_object_v2_response_m_payload_local_var = ezdoctemplatedocument_get_object_v2_response_m_payload_create (
        obj_ezdoctemplatedocument_local_nonprim
        );

    return ezdoctemplatedocument_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezdoctemplatedocument_local_nonprim) {
        ezdoctemplatedocument_response_compound_free(obj_ezdoctemplatedocument_local_nonprim);
        obj_ezdoctemplatedocument_local_nonprim = NULL;
    }
    return NULL;

}
