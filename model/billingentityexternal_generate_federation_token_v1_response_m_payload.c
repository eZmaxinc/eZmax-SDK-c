#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_generate_federation_token_v1_response_m_payload.h"



billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload_create(
    custom_apikeyfederation_t *obj_apikeyfederation,
    char *s_ezmaxcustomercode_url
    ) {
    billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload_local_var = malloc(sizeof(billingentityexternal_generate_federation_token_v1_response_m_payload_t));
    if (!billingentityexternal_generate_federation_token_v1_response_m_payload_local_var) {
        return NULL;
    }
    billingentityexternal_generate_federation_token_v1_response_m_payload_local_var->obj_apikeyfederation = obj_apikeyfederation;
    billingentityexternal_generate_federation_token_v1_response_m_payload_local_var->s_ezmaxcustomercode_url = s_ezmaxcustomercode_url;

    return billingentityexternal_generate_federation_token_v1_response_m_payload_local_var;
}


void billingentityexternal_generate_federation_token_v1_response_m_payload_free(billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload) {
    if(NULL == billingentityexternal_generate_federation_token_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation) {
        custom_apikeyfederation_free(billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation);
        billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation = NULL;
    }
    if (billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url) {
        free(billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url);
        billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url = NULL;
    }
    free(billingentityexternal_generate_federation_token_v1_response_m_payload);
}

cJSON *billingentityexternal_generate_federation_token_v1_response_m_payload_convertToJSON(billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation
    if (!billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation) {
        goto fail;
    }
    cJSON *obj_apikeyfederation_local_JSON = custom_apikeyfederation_convertToJSON(billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation);
    if(obj_apikeyfederation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikeyfederation", obj_apikeyfederation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url
    if (!billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxcustomercodeUrl", billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload_parseFromJSON(cJSON *billingentityexternal_generate_federation_token_v1_response_m_payloadJSON){

    billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload_local_var = NULL;

    // define the local variable for billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation
    custom_apikeyfederation_t *obj_apikeyfederation_local_nonprim = NULL;

    // billingentityexternal_generate_federation_token_v1_response_m_payload->obj_apikeyfederation
    cJSON *obj_apikeyfederation = cJSON_GetObjectItemCaseSensitive(billingentityexternal_generate_federation_token_v1_response_m_payloadJSON, "objApikeyfederation");
    if (!obj_apikeyfederation) {
        goto end;
    }

    
    obj_apikeyfederation_local_nonprim = custom_apikeyfederation_parseFromJSON(obj_apikeyfederation); //nonprimitive

    // billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url
    cJSON *s_ezmaxcustomercode_url = cJSON_GetObjectItemCaseSensitive(billingentityexternal_generate_federation_token_v1_response_m_payloadJSON, "sEzmaxcustomercodeUrl");
    if (!s_ezmaxcustomercode_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxcustomercode_url))
    {
    goto end; //String
    }


    billingentityexternal_generate_federation_token_v1_response_m_payload_local_var = billingentityexternal_generate_federation_token_v1_response_m_payload_create (
        obj_apikeyfederation_local_nonprim,
        strdup(s_ezmaxcustomercode_url->valuestring)
        );

    return billingentityexternal_generate_federation_token_v1_response_m_payload_local_var;
end:
    if (obj_apikeyfederation_local_nonprim) {
        custom_apikeyfederation_free(obj_apikeyfederation_local_nonprim);
        obj_apikeyfederation_local_nonprim = NULL;
    }
    return NULL;

}
