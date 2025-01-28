#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_object_v2_response_m_payload.h"



static usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload_create_internal(
    usergroup_response_compound_t *obj_usergroup
    ) {
    usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload_local_var = malloc(sizeof(usergroup_get_object_v2_response_m_payload_t));
    if (!usergroup_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    usergroup_get_object_v2_response_m_payload_local_var->obj_usergroup = obj_usergroup;

    usergroup_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return usergroup_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload_create(
    usergroup_response_compound_t *obj_usergroup
    ) {
    return usergroup_get_object_v2_response_m_payload_create_internal (
        obj_usergroup
        );
}

void usergroup_get_object_v2_response_m_payload_free(usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload) {
    if(NULL == usergroup_get_object_v2_response_m_payload){
        return ;
    }
    if(usergroup_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_object_v2_response_m_payload->obj_usergroup) {
        usergroup_response_compound_free(usergroup_get_object_v2_response_m_payload->obj_usergroup);
        usergroup_get_object_v2_response_m_payload->obj_usergroup = NULL;
    }
    free(usergroup_get_object_v2_response_m_payload);
}

cJSON *usergroup_get_object_v2_response_m_payload_convertToJSON(usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_object_v2_response_m_payload->obj_usergroup
    if (!usergroup_get_object_v2_response_m_payload->obj_usergroup) {
        goto fail;
    }
    cJSON *obj_usergroup_local_JSON = usergroup_response_compound_convertToJSON(usergroup_get_object_v2_response_m_payload->obj_usergroup);
    if(obj_usergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroup", obj_usergroup_local_JSON);
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

usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroup_get_object_v2_response_m_payloadJSON){

    usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for usergroup_get_object_v2_response_m_payload->obj_usergroup
    usergroup_response_compound_t *obj_usergroup_local_nonprim = NULL;

    // usergroup_get_object_v2_response_m_payload->obj_usergroup
    cJSON *obj_usergroup = cJSON_GetObjectItemCaseSensitive(usergroup_get_object_v2_response_m_payloadJSON, "objUsergroup");
    if (cJSON_IsNull(obj_usergroup)) {
        obj_usergroup = NULL;
    }
    if (!obj_usergroup) {
        goto end;
    }

    
    obj_usergroup_local_nonprim = usergroup_response_compound_parseFromJSON(obj_usergroup); //nonprimitive


    usergroup_get_object_v2_response_m_payload_local_var = usergroup_get_object_v2_response_m_payload_create_internal (
        obj_usergroup_local_nonprim
        );

    return usergroup_get_object_v2_response_m_payload_local_var;
end:
    if (obj_usergroup_local_nonprim) {
        usergroup_response_compound_free(obj_usergroup_local_nonprim);
        obj_usergroup_local_nonprim = NULL;
    }
    return NULL;

}
