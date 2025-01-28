#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_get_object_v2_response_m_payload.h"



static domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload_create_internal(
    domain_response_compound_t *obj_domain
    ) {
    domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload_local_var = malloc(sizeof(domain_get_object_v2_response_m_payload_t));
    if (!domain_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    domain_get_object_v2_response_m_payload_local_var->obj_domain = obj_domain;

    domain_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return domain_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload_create(
    domain_response_compound_t *obj_domain
    ) {
    return domain_get_object_v2_response_m_payload_create_internal (
        obj_domain
        );
}

void domain_get_object_v2_response_m_payload_free(domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload) {
    if(NULL == domain_get_object_v2_response_m_payload){
        return ;
    }
    if(domain_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_get_object_v2_response_m_payload->obj_domain) {
        domain_response_compound_free(domain_get_object_v2_response_m_payload->obj_domain);
        domain_get_object_v2_response_m_payload->obj_domain = NULL;
    }
    free(domain_get_object_v2_response_m_payload);
}

cJSON *domain_get_object_v2_response_m_payload_convertToJSON(domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // domain_get_object_v2_response_m_payload->obj_domain
    if (!domain_get_object_v2_response_m_payload->obj_domain) {
        goto fail;
    }
    cJSON *obj_domain_local_JSON = domain_response_compound_convertToJSON(domain_get_object_v2_response_m_payload->obj_domain);
    if(obj_domain_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDomain", obj_domain_local_JSON);
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

domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload_parseFromJSON(cJSON *domain_get_object_v2_response_m_payloadJSON){

    domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for domain_get_object_v2_response_m_payload->obj_domain
    domain_response_compound_t *obj_domain_local_nonprim = NULL;

    // domain_get_object_v2_response_m_payload->obj_domain
    cJSON *obj_domain = cJSON_GetObjectItemCaseSensitive(domain_get_object_v2_response_m_payloadJSON, "objDomain");
    if (cJSON_IsNull(obj_domain)) {
        obj_domain = NULL;
    }
    if (!obj_domain) {
        goto end;
    }

    
    obj_domain_local_nonprim = domain_response_compound_parseFromJSON(obj_domain); //nonprimitive


    domain_get_object_v2_response_m_payload_local_var = domain_get_object_v2_response_m_payload_create_internal (
        obj_domain_local_nonprim
        );

    return domain_get_object_v2_response_m_payload_local_var;
end:
    if (obj_domain_local_nonprim) {
        domain_response_compound_free(obj_domain_local_nonprim);
        obj_domain_local_nonprim = NULL;
    }
    return NULL;

}
