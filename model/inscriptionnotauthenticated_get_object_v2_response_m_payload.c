#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_get_object_v2_response_m_payload.h"



static inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload_create_internal(
    inscriptionnotauthenticated_response_compound_t *obj_inscriptionnotauthenticated
    ) {
    inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var = malloc(sizeof(inscriptionnotauthenticated_get_object_v2_response_m_payload_t));
    if (!inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var, 0, sizeof(inscriptionnotauthenticated_get_object_v2_response_m_payload_t));
    inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var->obj_inscriptionnotauthenticated = obj_inscriptionnotauthenticated;
    return inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload_create(
    inscriptionnotauthenticated_response_compound_t *obj_inscriptionnotauthenticated
    ) {
    inscriptionnotauthenticated_get_object_v2_response_m_payload_t *result = inscriptionnotauthenticated_get_object_v2_response_m_payload_create_internal (
        obj_inscriptionnotauthenticated
        );
    if (!result) {
    }
    return result;
}

void inscriptionnotauthenticated_get_object_v2_response_m_payload_free(inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload) {
    if(NULL == inscriptionnotauthenticated_get_object_v2_response_m_payload){
        return ;
    }
    if(inscriptionnotauthenticated_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionnotauthenticated_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated) {
        inscriptionnotauthenticated_response_compound_free(inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated);
        inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated = NULL;
    }
    free(inscriptionnotauthenticated_get_object_v2_response_m_payload);
}

cJSON *inscriptionnotauthenticated_get_object_v2_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated
    if (!inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated) {
        goto fail;
    }
    cJSON *obj_inscriptionnotauthenticated_local_JSON = inscriptionnotauthenticated_response_compound_convertToJSON(inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated);
    if(obj_inscriptionnotauthenticated_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objInscriptionnotauthenticated", obj_inscriptionnotauthenticated_local_JSON);
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

inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_object_v2_response_m_payloadJSON){

    inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated
    inscriptionnotauthenticated_response_compound_t *obj_inscriptionnotauthenticated_local_nonprim = NULL;

    // inscriptionnotauthenticated_get_object_v2_response_m_payload->obj_inscriptionnotauthenticated
    cJSON *obj_inscriptionnotauthenticated = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_object_v2_response_m_payloadJSON, "objInscriptionnotauthenticated");
    if (cJSON_IsNull(obj_inscriptionnotauthenticated)) {
        obj_inscriptionnotauthenticated = NULL;
    }
    if (!obj_inscriptionnotauthenticated) {
        goto end;
    }

    
    obj_inscriptionnotauthenticated_local_nonprim = inscriptionnotauthenticated_response_compound_parseFromJSON(obj_inscriptionnotauthenticated); //nonprimitive



    inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var = inscriptionnotauthenticated_get_object_v2_response_m_payload_create_internal (
        obj_inscriptionnotauthenticated_local_nonprim
        );

    if (!inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return inscriptionnotauthenticated_get_object_v2_response_m_payload_local_var;
end:
    if (obj_inscriptionnotauthenticated_local_nonprim) {
        inscriptionnotauthenticated_response_compound_free(obj_inscriptionnotauthenticated_local_nonprim);
        obj_inscriptionnotauthenticated_local_nonprim = NULL;
    }
    return NULL;

}
