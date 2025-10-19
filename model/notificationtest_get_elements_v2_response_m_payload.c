#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationtest_get_elements_v2_response_m_payload.h"



static notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload_create_internal(
    custom_notificationtestgetelements_response_t *obj_notificationtest
    ) {
    notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload_local_var = malloc(sizeof(notificationtest_get_elements_v2_response_m_payload_t));
    if (!notificationtest_get_elements_v2_response_m_payload_local_var) {
        return NULL;
    }
    notificationtest_get_elements_v2_response_m_payload_local_var->obj_notificationtest = obj_notificationtest;

    notificationtest_get_elements_v2_response_m_payload_local_var->_library_owned = 1;
    return notificationtest_get_elements_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload_create(
    custom_notificationtestgetelements_response_t *obj_notificationtest
    ) {
    return notificationtest_get_elements_v2_response_m_payload_create_internal (
        obj_notificationtest
        );
}

void notificationtest_get_elements_v2_response_m_payload_free(notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload) {
    if(NULL == notificationtest_get_elements_v2_response_m_payload){
        return ;
    }
    if(notificationtest_get_elements_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "notificationtest_get_elements_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (notificationtest_get_elements_v2_response_m_payload->obj_notificationtest) {
        custom_notificationtestgetelements_response_free(notificationtest_get_elements_v2_response_m_payload->obj_notificationtest);
        notificationtest_get_elements_v2_response_m_payload->obj_notificationtest = NULL;
    }
    free(notificationtest_get_elements_v2_response_m_payload);
}

cJSON *notificationtest_get_elements_v2_response_m_payload_convertToJSON(notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // notificationtest_get_elements_v2_response_m_payload->obj_notificationtest
    if (!notificationtest_get_elements_v2_response_m_payload->obj_notificationtest) {
        goto fail;
    }
    cJSON *obj_notificationtest_local_JSON = custom_notificationtestgetelements_response_convertToJSON(notificationtest_get_elements_v2_response_m_payload->obj_notificationtest);
    if(obj_notificationtest_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objNotificationtest", obj_notificationtest_local_JSON);
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

notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload_parseFromJSON(cJSON *notificationtest_get_elements_v2_response_m_payloadJSON){

    notificationtest_get_elements_v2_response_m_payload_t *notificationtest_get_elements_v2_response_m_payload_local_var = NULL;

    // define the local variable for notificationtest_get_elements_v2_response_m_payload->obj_notificationtest
    custom_notificationtestgetelements_response_t *obj_notificationtest_local_nonprim = NULL;

    // notificationtest_get_elements_v2_response_m_payload->obj_notificationtest
    cJSON *obj_notificationtest = cJSON_GetObjectItemCaseSensitive(notificationtest_get_elements_v2_response_m_payloadJSON, "objNotificationtest");
    if (cJSON_IsNull(obj_notificationtest)) {
        obj_notificationtest = NULL;
    }
    if (!obj_notificationtest) {
        goto end;
    }

    
    obj_notificationtest_local_nonprim = custom_notificationtestgetelements_response_parseFromJSON(obj_notificationtest); //nonprimitive


    notificationtest_get_elements_v2_response_m_payload_local_var = notificationtest_get_elements_v2_response_m_payload_create_internal (
        obj_notificationtest_local_nonprim
        );

    return notificationtest_get_elements_v2_response_m_payload_local_var;
end:
    if (obj_notificationtest_local_nonprim) {
        custom_notificationtestgetelements_response_free(obj_notificationtest_local_nonprim);
        obj_notificationtest_local_nonprim = NULL;
    }
    return NULL;

}
