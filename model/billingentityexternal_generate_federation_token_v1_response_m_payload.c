#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_generate_federation_token_v1_response_m_payload.h"



static billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload_create_internal(
    custom_apikeyfederation_t *obj_apikeyfederation,
    char *s_ezmaxcustomercode_url
    ) {
    billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload_local_var = malloc(sizeof(billingentityexternal_generate_federation_token_v1_response_m_payload_t));
    if (!billingentityexternal_generate_federation_token_v1_response_m_payload_local_var) {
        return NULL;
    }
    billingentityexternal_generate_federation_token_v1_response_m_payload_local_var->obj_apikeyfederation = obj_apikeyfederation;
    billingentityexternal_generate_federation_token_v1_response_m_payload_local_var->s_ezmaxcustomercode_url = s_ezmaxcustomercode_url;

    billingentityexternal_generate_federation_token_v1_response_m_payload_local_var->_library_owned = 1;
    return billingentityexternal_generate_federation_token_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload_create(
    custom_apikeyfederation_t *obj_apikeyfederation,
    char *s_ezmaxcustomercode_url
    ) {
    return billingentityexternal_generate_federation_token_v1_response_m_payload_create_internal (
        obj_apikeyfederation,
        s_ezmaxcustomercode_url
        );
}

void billingentityexternal_generate_federation_token_v1_response_m_payload_free(billingentityexternal_generate_federation_token_v1_response_m_payload_t *billingentityexternal_generate_federation_token_v1_response_m_payload) {
    if(NULL == billingentityexternal_generate_federation_token_v1_response_m_payload){
        return ;
    }
    if(billingentityexternal_generate_federation_token_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityexternal_generate_federation_token_v1_response_m_payload_free");
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
    if (cJSON_IsNull(obj_apikeyfederation)) {
        obj_apikeyfederation = NULL;
    }
    if (!obj_apikeyfederation) {
        goto end;
    }

    
    obj_apikeyfederation_local_nonprim = custom_apikeyfederation_parseFromJSON(obj_apikeyfederation); //nonprimitive

    // billingentityexternal_generate_federation_token_v1_response_m_payload->s_ezmaxcustomercode_url
    cJSON *s_ezmaxcustomercode_url = cJSON_GetObjectItemCaseSensitive(billingentityexternal_generate_federation_token_v1_response_m_payloadJSON, "sEzmaxcustomercodeUrl");
    if (cJSON_IsNull(s_ezmaxcustomercode_url)) {
        s_ezmaxcustomercode_url = NULL;
    }
    if (!s_ezmaxcustomercode_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxcustomercode_url))
    {
    goto end; //String
    }


    billingentityexternal_generate_federation_token_v1_response_m_payload_local_var = billingentityexternal_generate_federation_token_v1_response_m_payload_create_internal (
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
