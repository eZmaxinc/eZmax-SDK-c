#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_notificationsubsectiongetnotificationtests_response.h"



static custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_create_internal(
    int pki_notificationsubsection_id,
    int fki_notificationsection_id,
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name,
    char *s_notificationsection_name_x,
    char *s_notificationsubsection_name_x,
    list_t *a_obj_notificationtest
    ) {
    custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_local_var = malloc(sizeof(custom_notificationsubsectiongetnotificationtests_response_t));
    if (!custom_notificationsubsectiongetnotificationtests_response_local_var) {
        return NULL;
    }
    custom_notificationsubsectiongetnotificationtests_response_local_var->pki_notificationsubsection_id = pki_notificationsubsection_id;
    custom_notificationsubsectiongetnotificationtests_response_local_var->fki_notificationsection_id = fki_notificationsection_id;
    custom_notificationsubsectiongetnotificationtests_response_local_var->obj_notificationsubsection_name = obj_notificationsubsection_name;
    custom_notificationsubsectiongetnotificationtests_response_local_var->s_notificationsection_name_x = s_notificationsection_name_x;
    custom_notificationsubsectiongetnotificationtests_response_local_var->s_notificationsubsection_name_x = s_notificationsubsection_name_x;
    custom_notificationsubsectiongetnotificationtests_response_local_var->a_obj_notificationtest = a_obj_notificationtest;

    custom_notificationsubsectiongetnotificationtests_response_local_var->_library_owned = 1;
    return custom_notificationsubsectiongetnotificationtests_response_local_var;
}

__attribute__((deprecated)) custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_create(
    int pki_notificationsubsection_id,
    int fki_notificationsection_id,
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name,
    char *s_notificationsection_name_x,
    char *s_notificationsubsection_name_x,
    list_t *a_obj_notificationtest
    ) {
    return custom_notificationsubsectiongetnotificationtests_response_create_internal (
        pki_notificationsubsection_id,
        fki_notificationsection_id,
        obj_notificationsubsection_name,
        s_notificationsection_name_x,
        s_notificationsubsection_name_x,
        a_obj_notificationtest
        );
}

void custom_notificationsubsectiongetnotificationtests_response_free(custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response) {
    if(NULL == custom_notificationsubsectiongetnotificationtests_response){
        return ;
    }
    if(custom_notificationsubsectiongetnotificationtests_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_notificationsubsectiongetnotificationtests_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name) {
        multilingual_notificationsubsection_name_free(custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name);
        custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name = NULL;
    }
    if (custom_notificationsubsectiongetnotificationtests_response->s_notificationsection_name_x) {
        free(custom_notificationsubsectiongetnotificationtests_response->s_notificationsection_name_x);
        custom_notificationsubsectiongetnotificationtests_response->s_notificationsection_name_x = NULL;
    }
    if (custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x) {
        free(custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x);
        custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x = NULL;
    }
    if (custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest) {
        list_ForEach(listEntry, custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest) {
            custom_notificationtestgetnotificationtests_response_free(listEntry->data);
        }
        list_freeList(custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest);
        custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest = NULL;
    }
    free(custom_notificationsubsectiongetnotificationtests_response);
}

cJSON *custom_notificationsubsectiongetnotificationtests_response_convertToJSON(custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_notificationsubsectiongetnotificationtests_response->pki_notificationsubsection_id
    if (!custom_notificationsubsectiongetnotificationtests_response->pki_notificationsubsection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiNotificationsubsectionID", custom_notificationsubsectiongetnotificationtests_response->pki_notificationsubsection_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_notificationsubsectiongetnotificationtests_response->fki_notificationsection_id
    if (!custom_notificationsubsectiongetnotificationtests_response->fki_notificationsection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiNotificationsectionID", custom_notificationsubsectiongetnotificationtests_response->fki_notificationsection_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name
    if(custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name) {
    cJSON *obj_notificationsubsection_name_local_JSON = multilingual_notificationsubsection_name_convertToJSON(custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name);
    if(obj_notificationsubsection_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objNotificationsubsectionName", obj_notificationsubsection_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_notificationsubsectiongetnotificationtests_response->s_notificationsection_name_x
    if(custom_notificationsubsectiongetnotificationtests_response->s_notificationsection_name_x) {
    if(cJSON_AddStringToObject(item, "sNotificationsectionNameX", custom_notificationsubsectiongetnotificationtests_response->s_notificationsection_name_x) == NULL) {
    goto fail; //String
    }
    }


    // custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x
    if (!custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationsubsectionNameX", custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x) == NULL) {
    goto fail; //String
    }


    // custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest
    if (!custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest) {
        goto fail;
    }
    cJSON *a_obj_notificationtest = cJSON_AddArrayToObject(item, "a_objNotificationtest");
    if(a_obj_notificationtest == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_notificationtestListEntry;
    if (custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest) {
    list_ForEach(a_obj_notificationtestListEntry, custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest) {
    cJSON *itemLocal = custom_notificationtestgetnotificationtests_response_convertToJSON(a_obj_notificationtestListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_notificationtest, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_parseFromJSON(cJSON *custom_notificationsubsectiongetnotificationtests_responseJSON){

    custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_local_var = NULL;

    // define the local variable for custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name_local_nonprim = NULL;

    // define the local list for custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest
    list_t *a_obj_notificationtestList = NULL;

    // custom_notificationsubsectiongetnotificationtests_response->pki_notificationsubsection_id
    cJSON *pki_notificationsubsection_id = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "pkiNotificationsubsectionID");
    if (cJSON_IsNull(pki_notificationsubsection_id)) {
        pki_notificationsubsection_id = NULL;
    }
    if (!pki_notificationsubsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationsubsection_id))
    {
    goto end; //Numeric
    }

    // custom_notificationsubsectiongetnotificationtests_response->fki_notificationsection_id
    cJSON *fki_notificationsection_id = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "fkiNotificationsectionID");
    if (cJSON_IsNull(fki_notificationsection_id)) {
        fki_notificationsection_id = NULL;
    }
    if (!fki_notificationsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_notificationsection_id))
    {
    goto end; //Numeric
    }

    // custom_notificationsubsectiongetnotificationtests_response->obj_notificationsubsection_name
    cJSON *obj_notificationsubsection_name = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "objNotificationsubsectionName");
    if (cJSON_IsNull(obj_notificationsubsection_name)) {
        obj_notificationsubsection_name = NULL;
    }
    if (obj_notificationsubsection_name) { 
    obj_notificationsubsection_name_local_nonprim = multilingual_notificationsubsection_name_parseFromJSON(obj_notificationsubsection_name); //nonprimitive
    }

    // custom_notificationsubsectiongetnotificationtests_response->s_notificationsection_name_x
    cJSON *s_notificationsection_name_x = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "sNotificationsectionNameX");
    if (cJSON_IsNull(s_notificationsection_name_x)) {
        s_notificationsection_name_x = NULL;
    }
    if (s_notificationsection_name_x) { 
    if(!cJSON_IsString(s_notificationsection_name_x) && !cJSON_IsNull(s_notificationsection_name_x))
    {
    goto end; //String
    }
    }

    // custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x
    cJSON *s_notificationsubsection_name_x = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "sNotificationsubsectionNameX");
    if (cJSON_IsNull(s_notificationsubsection_name_x)) {
        s_notificationsubsection_name_x = NULL;
    }
    if (!s_notificationsubsection_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationsubsection_name_x))
    {
    goto end; //String
    }

    // custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest
    cJSON *a_obj_notificationtest = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "a_objNotificationtest");
    if (cJSON_IsNull(a_obj_notificationtest)) {
        a_obj_notificationtest = NULL;
    }
    if (!a_obj_notificationtest) {
        goto end;
    }

    
    cJSON *a_obj_notificationtest_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_notificationtest)){
        goto end; //nonprimitive container
    }

    a_obj_notificationtestList = list_createList();

    cJSON_ArrayForEach(a_obj_notificationtest_local_nonprimitive,a_obj_notificationtest )
    {
        if(!cJSON_IsObject(a_obj_notificationtest_local_nonprimitive)){
            goto end;
        }
        custom_notificationtestgetnotificationtests_response_t *a_obj_notificationtestItem = custom_notificationtestgetnotificationtests_response_parseFromJSON(a_obj_notificationtest_local_nonprimitive);

        list_addElement(a_obj_notificationtestList, a_obj_notificationtestItem);
    }


    custom_notificationsubsectiongetnotificationtests_response_local_var = custom_notificationsubsectiongetnotificationtests_response_create_internal (
        pki_notificationsubsection_id->valuedouble,
        fki_notificationsection_id->valuedouble,
        obj_notificationsubsection_name ? obj_notificationsubsection_name_local_nonprim : NULL,
        s_notificationsection_name_x && !cJSON_IsNull(s_notificationsection_name_x) ? strdup(s_notificationsection_name_x->valuestring) : NULL,
        strdup(s_notificationsubsection_name_x->valuestring),
        a_obj_notificationtestList
        );

    return custom_notificationsubsectiongetnotificationtests_response_local_var;
end:
    if (obj_notificationsubsection_name_local_nonprim) {
        multilingual_notificationsubsection_name_free(obj_notificationsubsection_name_local_nonprim);
        obj_notificationsubsection_name_local_nonprim = NULL;
    }
    if (a_obj_notificationtestList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_notificationtestList) {
            custom_notificationtestgetnotificationtests_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_notificationtestList);
        a_obj_notificationtestList = NULL;
    }
    return NULL;

}
