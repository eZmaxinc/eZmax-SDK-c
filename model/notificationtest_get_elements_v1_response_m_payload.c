#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationtest_get_elements_v1_response_m_payload.h"



notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload_create(
    int pki_notificationtest_id,
    char *s_notificationtest_function,
    list_t *a_s_variableobject_property,
    list_t *a_obj_variableobject
    ) {
    notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload_local_var = malloc(sizeof(notificationtest_get_elements_v1_response_m_payload_t));
    if (!notificationtest_get_elements_v1_response_m_payload_local_var) {
        return NULL;
    }
    notificationtest_get_elements_v1_response_m_payload_local_var->pki_notificationtest_id = pki_notificationtest_id;
    notificationtest_get_elements_v1_response_m_payload_local_var->s_notificationtest_function = s_notificationtest_function;
    notificationtest_get_elements_v1_response_m_payload_local_var->a_s_variableobject_property = a_s_variableobject_property;
    notificationtest_get_elements_v1_response_m_payload_local_var->a_obj_variableobject = a_obj_variableobject;

    return notificationtest_get_elements_v1_response_m_payload_local_var;
}


void notificationtest_get_elements_v1_response_m_payload_free(notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload) {
    if(NULL == notificationtest_get_elements_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (notificationtest_get_elements_v1_response_m_payload->s_notificationtest_function) {
        free(notificationtest_get_elements_v1_response_m_payload->s_notificationtest_function);
        notificationtest_get_elements_v1_response_m_payload->s_notificationtest_function = NULL;
    }
    if (notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property) {
        list_ForEach(listEntry, notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property) {
            free(listEntry->data);
        }
        list_freeList(notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property);
        notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property = NULL;
    }
    if (notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject) {
        list_ForEach(listEntry, notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject) {
            free(listEntry->data);
        }
        list_freeList(notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject);
        notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject = NULL;
    }
    free(notificationtest_get_elements_v1_response_m_payload);
}

cJSON *notificationtest_get_elements_v1_response_m_payload_convertToJSON(notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // notificationtest_get_elements_v1_response_m_payload->pki_notificationtest_id
    if (!notificationtest_get_elements_v1_response_m_payload->pki_notificationtest_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiNotificationtestID", notificationtest_get_elements_v1_response_m_payload->pki_notificationtest_id) == NULL) {
    goto fail; //Numeric
    }


    // notificationtest_get_elements_v1_response_m_payload->s_notificationtest_function
    if (!notificationtest_get_elements_v1_response_m_payload->s_notificationtest_function) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationtestFunction", notificationtest_get_elements_v1_response_m_payload->s_notificationtest_function) == NULL) {
    goto fail; //String
    }


    // notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property
    if (!notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property) {
        goto fail;
    }
    cJSON *a_s_variableobject_property = cJSON_AddArrayToObject(item, "a_sVariableobjectProperty");
    if(a_s_variableobject_property == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_variableobject_propertyListEntry;
    list_ForEach(a_s_variableobject_propertyListEntry, notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property) {
    if(cJSON_AddStringToObject(a_s_variableobject_property, "", (char*)a_s_variableobject_propertyListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject
    if (!notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject) {
        goto fail;
    }
    cJSON *a_obj_variableobject = cJSON_AddArrayToObject(item, "a_objVariableobject");
    if(a_obj_variableobject == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_obj_variableobjectListEntry;
    list_ForEach(a_obj_variableobjectListEntry, notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject) {
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload_parseFromJSON(cJSON *notificationtest_get_elements_v1_response_m_payloadJSON){

    notificationtest_get_elements_v1_response_m_payload_t *notificationtest_get_elements_v1_response_m_payload_local_var = NULL;

    // define the local list for notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property
    list_t *a_s_variableobject_propertyList = NULL;

    // define the local list for notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject
    list_t *a_obj_variableobjectList = NULL;

    // notificationtest_get_elements_v1_response_m_payload->pki_notificationtest_id
    cJSON *pki_notificationtest_id = cJSON_GetObjectItemCaseSensitive(notificationtest_get_elements_v1_response_m_payloadJSON, "pkiNotificationtestID");
    if (!pki_notificationtest_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationtest_id))
    {
    goto end; //Numeric
    }

    // notificationtest_get_elements_v1_response_m_payload->s_notificationtest_function
    cJSON *s_notificationtest_function = cJSON_GetObjectItemCaseSensitive(notificationtest_get_elements_v1_response_m_payloadJSON, "sNotificationtestFunction");
    if (!s_notificationtest_function) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationtest_function))
    {
    goto end; //String
    }

    // notificationtest_get_elements_v1_response_m_payload->a_s_variableobject_property
    cJSON *a_s_variableobject_property = cJSON_GetObjectItemCaseSensitive(notificationtest_get_elements_v1_response_m_payloadJSON, "a_sVariableobjectProperty");
    if (!a_s_variableobject_property) {
        goto end;
    }

    
    cJSON *a_s_variableobject_property_local = NULL;
    if(!cJSON_IsArray(a_s_variableobject_property)) {
        goto end;//primitive container
    }
    a_s_variableobject_propertyList = list_createList();

    cJSON_ArrayForEach(a_s_variableobject_property_local, a_s_variableobject_property)
    {
        if(!cJSON_IsString(a_s_variableobject_property_local))
        {
            goto end;
        }
        list_addElement(a_s_variableobject_propertyList , strdup(a_s_variableobject_property_local->valuestring));
    }

    // notificationtest_get_elements_v1_response_m_payload->a_obj_variableobject
    cJSON *a_obj_variableobject = cJSON_GetObjectItemCaseSensitive(notificationtest_get_elements_v1_response_m_payloadJSON, "a_objVariableobject");
    if (!a_obj_variableobject) {
        goto end;
    }

    
    cJSON *a_obj_variableobject_local = NULL;
    if(!cJSON_IsArray(a_obj_variableobject)) {
        goto end;//primitive container
    }
    a_obj_variableobjectList = list_createList();

    cJSON_ArrayForEach(a_obj_variableobject_local, a_obj_variableobject)
    {
    }


    notificationtest_get_elements_v1_response_m_payload_local_var = notificationtest_get_elements_v1_response_m_payload_create (
        pki_notificationtest_id->valuedouble,
        strdup(s_notificationtest_function->valuestring),
        a_s_variableobject_propertyList,
        a_obj_variableobjectList
        );

    return notificationtest_get_elements_v1_response_m_payload_local_var;
end:
    if (a_s_variableobject_propertyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_variableobject_propertyList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_variableobject_propertyList);
        a_s_variableobject_propertyList = NULL;
    }
    if (a_obj_variableobjectList) {
        list_freeList(a_obj_variableobjectList);
        a_obj_variableobjectList = NULL;
    }
    return NULL;

}
