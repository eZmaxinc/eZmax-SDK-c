#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_notificationtestgetelements_response.h"



static custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response_create_internal(
    int *pki_notificationtest_id,
    char *s_notificationtest_function,
    list_t *a_s_variableobject_property,
    list_t *a_obj_variableobject
    ) {
    custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response_local_var = malloc(sizeof(custom_notificationtestgetelements_response_t));
    if (!custom_notificationtestgetelements_response_local_var) {
        return NULL;
    }
    memset(custom_notificationtestgetelements_response_local_var, 0, sizeof(custom_notificationtestgetelements_response_t));
    custom_notificationtestgetelements_response_local_var->_library_owned = 1;
    custom_notificationtestgetelements_response_local_var->pki_notificationtest_id = pki_notificationtest_id;
    custom_notificationtestgetelements_response_local_var->s_notificationtest_function = s_notificationtest_function;
    custom_notificationtestgetelements_response_local_var->a_s_variableobject_property = a_s_variableobject_property;
    custom_notificationtestgetelements_response_local_var->a_obj_variableobject = a_obj_variableobject;
    return custom_notificationtestgetelements_response_local_var;
}

__attribute__((deprecated)) custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response_create(
    int *pki_notificationtest_id,
    char *s_notificationtest_function,
    list_t *a_s_variableobject_property,
    list_t *a_obj_variableobject
    ) {
    int *pki_notificationtest_id_copy = NULL;
    if (pki_notificationtest_id) {
        pki_notificationtest_id_copy = malloc(sizeof(int));
        if (pki_notificationtest_id_copy) *pki_notificationtest_id_copy = *pki_notificationtest_id;
    }
    custom_notificationtestgetelements_response_t *result = custom_notificationtestgetelements_response_create_internal (
        pki_notificationtest_id_copy,
        s_notificationtest_function,
        a_s_variableobject_property,
        a_obj_variableobject
        );
    if (!result) {
        free(pki_notificationtest_id_copy);
    }
    return result;
}

void custom_notificationtestgetelements_response_free(custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response) {
    if(NULL == custom_notificationtestgetelements_response){
        return ;
    }
    if(custom_notificationtestgetelements_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_notificationtestgetelements_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_notificationtestgetelements_response->pki_notificationtest_id) {
        free(custom_notificationtestgetelements_response->pki_notificationtest_id);
        custom_notificationtestgetelements_response->pki_notificationtest_id = NULL;
    }
    if (custom_notificationtestgetelements_response->s_notificationtest_function) {
        free(custom_notificationtestgetelements_response->s_notificationtest_function);
        custom_notificationtestgetelements_response->s_notificationtest_function = NULL;
    }
    if (custom_notificationtestgetelements_response->a_s_variableobject_property) {
        list_ForEach(listEntry, custom_notificationtestgetelements_response->a_s_variableobject_property) {
            free(listEntry->data);
        }
        list_freeList(custom_notificationtestgetelements_response->a_s_variableobject_property);
        custom_notificationtestgetelements_response->a_s_variableobject_property = NULL;
    }
    if (custom_notificationtestgetelements_response->a_obj_variableobject) {
        list_ForEach(listEntry, custom_notificationtestgetelements_response->a_obj_variableobject) {
            free(listEntry->data);
        }
        list_freeList(custom_notificationtestgetelements_response->a_obj_variableobject);
        custom_notificationtestgetelements_response->a_obj_variableobject = NULL;
    }
    free(custom_notificationtestgetelements_response);
}

cJSON *custom_notificationtestgetelements_response_convertToJSON(custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_notificationtestgetelements_response->pki_notificationtest_id
    if (!custom_notificationtestgetelements_response->pki_notificationtest_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiNotificationtestID", *custom_notificationtestgetelements_response->pki_notificationtest_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_notificationtestgetelements_response->s_notificationtest_function
    if (!custom_notificationtestgetelements_response->s_notificationtest_function) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationtestFunction", custom_notificationtestgetelements_response->s_notificationtest_function) == NULL) {
    goto fail; //String
    }


    // custom_notificationtestgetelements_response->a_s_variableobject_property
    if (!custom_notificationtestgetelements_response->a_s_variableobject_property) {
        goto fail;
    }
    cJSON *a_s_variableobject_property = cJSON_AddArrayToObject(item, "a_sVariableobjectProperty");
    if(a_s_variableobject_property == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_variableobject_propertyListEntry;
    list_ForEach(a_s_variableobject_propertyListEntry, custom_notificationtestgetelements_response->a_s_variableobject_property) {
    if(cJSON_AddStringToObject(a_s_variableobject_property, "", a_s_variableobject_propertyListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // custom_notificationtestgetelements_response->a_obj_variableobject
    if (!custom_notificationtestgetelements_response->a_obj_variableobject) {
        goto fail;
    }
    cJSON *a_obj_variableobject = cJSON_AddArrayToObject(item, "a_objVariableobject");
    if(a_obj_variableobject == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_obj_variableobjectListEntry;
    list_ForEach(a_obj_variableobjectListEntry, custom_notificationtestgetelements_response->a_obj_variableobject) {
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response_parseFromJSON(cJSON *custom_notificationtestgetelements_responseJSON){

    custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response_local_var = NULL;

    // define the local variable for custom_notificationtestgetelements_response->pki_notificationtest_id
    int *pki_notificationtest_id_local_var = NULL;

    char *s_notificationtest_function_local_str = NULL;

    // define the local list for custom_notificationtestgetelements_response->a_s_variableobject_property
    list_t *a_s_variableobject_propertyList = NULL;

    // define the local list for custom_notificationtestgetelements_response->a_obj_variableobject
    list_t *a_obj_variableobjectList = NULL;

    // custom_notificationtestgetelements_response->pki_notificationtest_id
    cJSON *pki_notificationtest_id = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetelements_responseJSON, "pkiNotificationtestID");
    if (cJSON_IsNull(pki_notificationtest_id)) {
        pki_notificationtest_id = NULL;
    }
    if (!pki_notificationtest_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationtest_id))
    {
    goto end; //Numeric
    }
    pki_notificationtest_id_local_var = malloc(sizeof(int));
    if(!pki_notificationtest_id_local_var)
    {
        goto end;
    }
    *pki_notificationtest_id_local_var = pki_notificationtest_id->valuedouble;

    // custom_notificationtestgetelements_response->s_notificationtest_function
    cJSON *s_notificationtest_function = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetelements_responseJSON, "sNotificationtestFunction");
    if (cJSON_IsNull(s_notificationtest_function)) {
        s_notificationtest_function = NULL;
    }
    if (!s_notificationtest_function) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationtest_function))
    {
    goto end; //String
    }

    // custom_notificationtestgetelements_response->a_s_variableobject_property
    cJSON *a_s_variableobject_property = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetelements_responseJSON, "a_sVariableobjectProperty");
    if (cJSON_IsNull(a_s_variableobject_property)) {
        a_s_variableobject_property = NULL;
    }
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

    // custom_notificationtestgetelements_response->a_obj_variableobject
    cJSON *a_obj_variableobject = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetelements_responseJSON, "a_objVariableobject");
    if (cJSON_IsNull(a_obj_variableobject)) {
        a_obj_variableobject = NULL;
    }
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


    if (s_notificationtest_function && !cJSON_IsNull(s_notificationtest_function)) s_notificationtest_function_local_str = strdup(s_notificationtest_function->valuestring);

    custom_notificationtestgetelements_response_local_var = custom_notificationtestgetelements_response_create_internal (
        pki_notificationtest_id_local_var,
        s_notificationtest_function_local_str,
        a_s_variableobject_propertyList,
        a_obj_variableobjectList
        );

    if (!custom_notificationtestgetelements_response_local_var) {
        goto end;
    }

    return custom_notificationtestgetelements_response_local_var;
end:
    if (pki_notificationtest_id_local_var) {
        free(pki_notificationtest_id_local_var);
        pki_notificationtest_id_local_var = NULL;
    }
    if (s_notificationtest_function_local_str) {
        free(s_notificationtest_function_local_str);
        s_notificationtest_function_local_str = NULL;
    }
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
