#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_get_object_v2_response_m_payload.h"



static inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload_create_internal(
    inscription_response_compound_t *obj_inscription
    ) {
    inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload_local_var = malloc(sizeof(inscription_get_object_v2_response_m_payload_t));
    if (!inscription_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscription_get_object_v2_response_m_payload_local_var, 0, sizeof(inscription_get_object_v2_response_m_payload_t));
    inscription_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    inscription_get_object_v2_response_m_payload_local_var->obj_inscription = obj_inscription;
    return inscription_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload_create(
    inscription_response_compound_t *obj_inscription
    ) {
    inscription_get_object_v2_response_m_payload_t *result = inscription_get_object_v2_response_m_payload_create_internal (
        obj_inscription
        );
    if (!result) {
    }
    return result;
}

void inscription_get_object_v2_response_m_payload_free(inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload) {
    if(NULL == inscription_get_object_v2_response_m_payload){
        return ;
    }
    if(inscription_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_get_object_v2_response_m_payload->obj_inscription) {
        inscription_response_compound_free(inscription_get_object_v2_response_m_payload->obj_inscription);
        inscription_get_object_v2_response_m_payload->obj_inscription = NULL;
    }
    free(inscription_get_object_v2_response_m_payload);
}

cJSON *inscription_get_object_v2_response_m_payload_convertToJSON(inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_get_object_v2_response_m_payload->obj_inscription
    if (!inscription_get_object_v2_response_m_payload->obj_inscription) {
        goto fail;
    }
    cJSON *obj_inscription_local_JSON = inscription_response_compound_convertToJSON(inscription_get_object_v2_response_m_payload->obj_inscription);
    if(obj_inscription_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objInscription", obj_inscription_local_JSON);
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

inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload_parseFromJSON(cJSON *inscription_get_object_v2_response_m_payloadJSON){

    inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for inscription_get_object_v2_response_m_payload->obj_inscription
    inscription_response_compound_t *obj_inscription_local_nonprim = NULL;

    // inscription_get_object_v2_response_m_payload->obj_inscription
    cJSON *obj_inscription = cJSON_GetObjectItemCaseSensitive(inscription_get_object_v2_response_m_payloadJSON, "objInscription");
    if (cJSON_IsNull(obj_inscription)) {
        obj_inscription = NULL;
    }
    if (!obj_inscription) {
        goto end;
    }

    
    obj_inscription_local_nonprim = inscription_response_compound_parseFromJSON(obj_inscription); //nonprimitive



    inscription_get_object_v2_response_m_payload_local_var = inscription_get_object_v2_response_m_payload_create_internal (
        obj_inscription_local_nonprim
        );

    if (!inscription_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return inscription_get_object_v2_response_m_payload_local_var;
end:
    if (obj_inscription_local_nonprim) {
        inscription_response_compound_free(obj_inscription_local_nonprim);
        obj_inscription_local_nonprim = NULL;
    }
    return NULL;

}
