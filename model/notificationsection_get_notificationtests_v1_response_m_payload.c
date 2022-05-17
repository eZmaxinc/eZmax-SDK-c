#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationsection_get_notificationtests_v1_response_m_payload.h"



notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload_create(
    list_t *a_obj_notificationsubsection
    ) {
    notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload_local_var = malloc(sizeof(notificationsection_get_notificationtests_v1_response_m_payload_t));
    if (!notificationsection_get_notificationtests_v1_response_m_payload_local_var) {
        return NULL;
    }
    notificationsection_get_notificationtests_v1_response_m_payload_local_var->a_obj_notificationsubsection = a_obj_notificationsubsection;

    return notificationsection_get_notificationtests_v1_response_m_payload_local_var;
}


void notificationsection_get_notificationtests_v1_response_m_payload_free(notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload) {
    if(NULL == notificationsection_get_notificationtests_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection) {
        list_ForEach(listEntry, notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection) {
            custom_notificationsubsectiongetnotificationtests_response_free(listEntry->data);
        }
        list_freeList(notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection);
        notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection = NULL;
    }
    free(notificationsection_get_notificationtests_v1_response_m_payload);
}

cJSON *notificationsection_get_notificationtests_v1_response_m_payload_convertToJSON(notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection
    if (!notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection) {
        goto fail;
    }
    cJSON *a_obj_notificationsubsection = cJSON_AddArrayToObject(item, "a_objNotificationsubsection");
    if(a_obj_notificationsubsection == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_notificationsubsectionListEntry;
    if (notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection) {
    list_ForEach(a_obj_notificationsubsectionListEntry, notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection) {
    cJSON *itemLocal = custom_notificationsubsectiongetnotificationtests_response_convertToJSON(a_obj_notificationsubsectionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_notificationsubsection, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload_parseFromJSON(cJSON *notificationsection_get_notificationtests_v1_response_m_payloadJSON){

    notificationsection_get_notificationtests_v1_response_m_payload_t *notificationsection_get_notificationtests_v1_response_m_payload_local_var = NULL;

    // define the local list for notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection
    list_t *a_obj_notificationsubsectionList = NULL;

    // notificationsection_get_notificationtests_v1_response_m_payload->a_obj_notificationsubsection
    cJSON *a_obj_notificationsubsection = cJSON_GetObjectItemCaseSensitive(notificationsection_get_notificationtests_v1_response_m_payloadJSON, "a_objNotificationsubsection");
    if (!a_obj_notificationsubsection) {
        goto end;
    }

    
    cJSON *a_obj_notificationsubsection_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_notificationsubsection)){
        goto end; //nonprimitive container
    }

    a_obj_notificationsubsectionList = list_createList();

    cJSON_ArrayForEach(a_obj_notificationsubsection_local_nonprimitive,a_obj_notificationsubsection )
    {
        if(!cJSON_IsObject(a_obj_notificationsubsection_local_nonprimitive)){
            goto end;
        }
        custom_notificationsubsectiongetnotificationtests_response_t *a_obj_notificationsubsectionItem = custom_notificationsubsectiongetnotificationtests_response_parseFromJSON(a_obj_notificationsubsection_local_nonprimitive);

        list_addElement(a_obj_notificationsubsectionList, a_obj_notificationsubsectionItem);
    }


    notificationsection_get_notificationtests_v1_response_m_payload_local_var = notificationsection_get_notificationtests_v1_response_m_payload_create (
        a_obj_notificationsubsectionList
        );

    return notificationsection_get_notificationtests_v1_response_m_payload_local_var;
end:
    if (a_obj_notificationsubsectionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_notificationsubsectionList) {
            custom_notificationsubsectiongetnotificationtests_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_notificationsubsectionList);
        a_obj_notificationsubsectionList = NULL;
    }
    return NULL;

}
