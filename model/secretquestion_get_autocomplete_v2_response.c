#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "secretquestion_get_autocomplete_v2_response.h"



secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response_create(
    secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response_local_var = malloc(sizeof(secretquestion_get_autocomplete_v2_response_t));
    if (!secretquestion_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    secretquestion_get_autocomplete_v2_response_local_var->m_payload = m_payload;
    secretquestion_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    secretquestion_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;

    return secretquestion_get_autocomplete_v2_response_local_var;
}


void secretquestion_get_autocomplete_v2_response_free(secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response) {
    if(NULL == secretquestion_get_autocomplete_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (secretquestion_get_autocomplete_v2_response->m_payload) {
        secretquestion_get_autocomplete_v2_response_m_payload_free(secretquestion_get_autocomplete_v2_response->m_payload);
        secretquestion_get_autocomplete_v2_response->m_payload = NULL;
    }
    if (secretquestion_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(secretquestion_get_autocomplete_v2_response->obj_debug_payload);
        secretquestion_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (secretquestion_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(secretquestion_get_autocomplete_v2_response->obj_debug);
        secretquestion_get_autocomplete_v2_response->obj_debug = NULL;
    }
    free(secretquestion_get_autocomplete_v2_response);
}

cJSON *secretquestion_get_autocomplete_v2_response_convertToJSON(secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // secretquestion_get_autocomplete_v2_response->m_payload
    if (!secretquestion_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = secretquestion_get_autocomplete_v2_response_m_payload_convertToJSON(secretquestion_get_autocomplete_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // secretquestion_get_autocomplete_v2_response->obj_debug_payload
    if(secretquestion_get_autocomplete_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(secretquestion_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // secretquestion_get_autocomplete_v2_response->obj_debug
    if(secretquestion_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(secretquestion_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
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

secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response_parseFromJSON(cJSON *secretquestion_get_autocomplete_v2_responseJSON){

    secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for secretquestion_get_autocomplete_v2_response->m_payload
    secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for secretquestion_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for secretquestion_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // secretquestion_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(secretquestion_get_autocomplete_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = secretquestion_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // secretquestion_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(secretquestion_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // secretquestion_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(secretquestion_get_autocomplete_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    secretquestion_get_autocomplete_v2_response_local_var = secretquestion_get_autocomplete_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return secretquestion_get_autocomplete_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        secretquestion_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    return NULL;

}
