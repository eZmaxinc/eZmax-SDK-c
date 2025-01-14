#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_generate_federation_token_v1_response_m_payload.h"



activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload_create(
    custom_apikeyfederation_t *obj_apikeyfederation,
    char *s_ezmaxcustomercode_url
    ) {
    activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload_local_var = malloc(sizeof(activesession_generate_federation_token_v1_response_m_payload_t));
    if (!activesession_generate_federation_token_v1_response_m_payload_local_var) {
        return NULL;
    }
    activesession_generate_federation_token_v1_response_m_payload_local_var->obj_apikeyfederation = obj_apikeyfederation;
    activesession_generate_federation_token_v1_response_m_payload_local_var->s_ezmaxcustomercode_url = s_ezmaxcustomercode_url;

    return activesession_generate_federation_token_v1_response_m_payload_local_var;
}


void activesession_generate_federation_token_v1_response_m_payload_free(activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload) {
    if(NULL == activesession_generate_federation_token_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation) {
        custom_apikeyfederation_free(activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation);
        activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation = NULL;
    }
    if (activesession_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url) {
        free(activesession_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url);
        activesession_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url = NULL;
    }
    free(activesession_generate_federation_token_v1_response_m_payload);
}

cJSON *activesession_generate_federation_token_v1_response_m_payload_convertToJSON(activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation
    if (!activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation) {
        goto fail;
    }
    cJSON *obj_apikeyfederation_local_JSON = custom_apikeyfederation_convertToJSON(activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation);
    if(obj_apikeyfederation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikeyfederation", obj_apikeyfederation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // activesession_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url
    if (!activesession_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxcustomercodeUrl", activesession_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload_parseFromJSON(cJSON *activesession_generate_federation_token_v1_response_m_payloadJSON){

    activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload_local_var = NULL;

    // define the local variable for activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation
    custom_apikeyfederation_t *obj_apikeyfederation_local_nonprim = NULL;

    // activesession_generate_federation_token_v1_response_m_payload->obj_apikeyfederation
    cJSON *obj_apikeyfederation = cJSON_GetObjectItemCaseSensitive(activesession_generate_federation_token_v1_response_m_payloadJSON, "objApikeyfederation");
    if (!obj_apikeyfederation) {
        goto end;
    }

    
    obj_apikeyfederation_local_nonprim = custom_apikeyfederation_parseFromJSON(obj_apikeyfederation); //nonprimitive

    // activesession_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url
    cJSON *s_ezmaxcustomercode_url = cJSON_GetObjectItemCaseSensitive(activesession_generate_federation_token_v1_response_m_payloadJSON, "sEzmaxcustomercodeUrl");
    if (!s_ezmaxcustomercode_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxcustomercode_url))
    {
    goto end; //String
    }


    activesession_generate_federation_token_v1_response_m_payload_local_var = activesession_generate_federation_token_v1_response_m_payload_create (
        obj_apikeyfederation_local_nonprim,
        strdup(s_ezmaxcustomercode_url->valuestring)
        );

    return activesession_generate_federation_token_v1_response_m_payload_local_var;
end:
    if (obj_apikeyfederation_local_nonprim) {
        custom_apikeyfederation_free(obj_apikeyfederation_local_nonprim);
        obj_apikeyfederation_local_nonprim = NULL;
    }
    return NULL;

}
