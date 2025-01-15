#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_object_v2_response_m_payload.h"



user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload_create(
    user_response_t *obj_user
    ) {
    user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload_local_var = malloc(sizeof(user_get_object_v2_response_m_payload_t));
    if (!user_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    user_get_object_v2_response_m_payload_local_var->obj_user = obj_user;

    return user_get_object_v2_response_m_payload_local_var;
}


void user_get_object_v2_response_m_payload_free(user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload) {
    if(NULL == user_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_object_v2_response_m_payload->obj_user) {
        user_response_free(user_get_object_v2_response_m_payload->obj_user);
        user_get_object_v2_response_m_payload->obj_user = NULL;
    }
    free(user_get_object_v2_response_m_payload);
}

cJSON *user_get_object_v2_response_m_payload_convertToJSON(user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_object_v2_response_m_payload->obj_user
    if (!user_get_object_v2_response_m_payload->obj_user) {
        goto fail;
    }
    cJSON *obj_user_local_JSON = user_response_convertToJSON(user_get_object_v2_response_m_payload->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
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

user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload_parseFromJSON(cJSON *user_get_object_v2_response_m_payloadJSON){

    user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for user_get_object_v2_response_m_payload->obj_user
    user_response_t *obj_user_local_nonprim = NULL;

    // user_get_object_v2_response_m_payload->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(user_get_object_v2_response_m_payloadJSON, "objUser");
    if (!obj_user) {
        goto end;
    }

    
    obj_user_local_nonprim = user_response_parseFromJSON(obj_user); //nonprimitive


    user_get_object_v2_response_m_payload_local_var = user_get_object_v2_response_m_payload_create (
        obj_user_local_nonprim
        );

    return user_get_object_v2_response_m_payload_local_var;
end:
    if (obj_user_local_nonprim) {
        user_response_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    return NULL;

}
