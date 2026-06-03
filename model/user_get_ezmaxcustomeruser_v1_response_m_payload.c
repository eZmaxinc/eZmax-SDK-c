#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_ezmaxcustomeruser_v1_response_m_payload.h"



static user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload_create_internal(
    custom_ezmaxcustomeruser_response_t *obj_ezmaxcustomeruser
    ) {
    user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload_local_var = malloc(sizeof(user_get_ezmaxcustomeruser_v1_response_m_payload_t));
    if (!user_get_ezmaxcustomeruser_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(user_get_ezmaxcustomeruser_v1_response_m_payload_local_var, 0, sizeof(user_get_ezmaxcustomeruser_v1_response_m_payload_t));
    user_get_ezmaxcustomeruser_v1_response_m_payload_local_var->_library_owned = 1;
    user_get_ezmaxcustomeruser_v1_response_m_payload_local_var->obj_ezmaxcustomeruser = obj_ezmaxcustomeruser;
    return user_get_ezmaxcustomeruser_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload_create(
    custom_ezmaxcustomeruser_response_t *obj_ezmaxcustomeruser
    ) {
    user_get_ezmaxcustomeruser_v1_response_m_payload_t *result = user_get_ezmaxcustomeruser_v1_response_m_payload_create_internal (
        obj_ezmaxcustomeruser
        );
    if (!result) {
    }
    return result;
}

void user_get_ezmaxcustomeruser_v1_response_m_payload_free(user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload) {
    if(NULL == user_get_ezmaxcustomeruser_v1_response_m_payload){
        return ;
    }
    if(user_get_ezmaxcustomeruser_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_get_ezmaxcustomeruser_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser) {
        custom_ezmaxcustomeruser_response_free(user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser);
        user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser = NULL;
    }
    free(user_get_ezmaxcustomeruser_v1_response_m_payload);
}

cJSON *user_get_ezmaxcustomeruser_v1_response_m_payload_convertToJSON(user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser
    if (!user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser) {
        goto fail;
    }
    cJSON *obj_ezmaxcustomeruser_local_JSON = custom_ezmaxcustomeruser_response_convertToJSON(user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser);
    if(obj_ezmaxcustomeruser_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcustomeruser", obj_ezmaxcustomeruser_local_JSON);
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

user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload_parseFromJSON(cJSON *user_get_ezmaxcustomeruser_v1_response_m_payloadJSON){

    user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload_local_var = NULL;

    // define the local variable for user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser
    custom_ezmaxcustomeruser_response_t *obj_ezmaxcustomeruser_local_nonprim = NULL;

    // user_get_ezmaxcustomeruser_v1_response_m_payload->obj_ezmaxcustomeruser
    cJSON *obj_ezmaxcustomeruser = cJSON_GetObjectItemCaseSensitive(user_get_ezmaxcustomeruser_v1_response_m_payloadJSON, "objEzmaxcustomeruser");
    if (cJSON_IsNull(obj_ezmaxcustomeruser)) {
        obj_ezmaxcustomeruser = NULL;
    }
    if (!obj_ezmaxcustomeruser) {
        goto end;
    }

    
    obj_ezmaxcustomeruser_local_nonprim = custom_ezmaxcustomeruser_response_parseFromJSON(obj_ezmaxcustomeruser); //nonprimitive



    user_get_ezmaxcustomeruser_v1_response_m_payload_local_var = user_get_ezmaxcustomeruser_v1_response_m_payload_create_internal (
        obj_ezmaxcustomeruser_local_nonprim
        );

    if (!user_get_ezmaxcustomeruser_v1_response_m_payload_local_var) {
        goto end;
    }

    return user_get_ezmaxcustomeruser_v1_response_m_payload_local_var;
end:
    if (obj_ezmaxcustomeruser_local_nonprim) {
        custom_ezmaxcustomeruser_response_free(obj_ezmaxcustomeruser_local_nonprim);
        obj_ezmaxcustomeruser_local_nonprim = NULL;
    }
    return NULL;

}
