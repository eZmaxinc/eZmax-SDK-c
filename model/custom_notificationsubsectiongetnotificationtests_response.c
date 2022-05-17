#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_notificationsubsectiongetnotificationtests_response.h"



custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_create(
    int pki_notificationsubsection_id,
    int fki_notificationsection_id,
    char *s_notificationsubsection_name_x,
    list_t *a_obj_notificationtest
    ) {
    custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_local_var = malloc(sizeof(custom_notificationsubsectiongetnotificationtests_response_t));
    if (!custom_notificationsubsectiongetnotificationtests_response_local_var) {
        return NULL;
    }
    custom_notificationsubsectiongetnotificationtests_response_local_var->pki_notificationsubsection_id = pki_notificationsubsection_id;
    custom_notificationsubsectiongetnotificationtests_response_local_var->fki_notificationsection_id = fki_notificationsection_id;
    custom_notificationsubsectiongetnotificationtests_response_local_var->s_notificationsubsection_name_x = s_notificationsubsection_name_x;
    custom_notificationsubsectiongetnotificationtests_response_local_var->a_obj_notificationtest = a_obj_notificationtest;

    return custom_notificationsubsectiongetnotificationtests_response_local_var;
}


void custom_notificationsubsectiongetnotificationtests_response_free(custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response) {
    if(NULL == custom_notificationsubsectiongetnotificationtests_response){
        return ;
    }
    listEntry_t *listEntry;
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

    // define the local list for custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest
    list_t *a_obj_notificationtestList = NULL;

    // custom_notificationsubsectiongetnotificationtests_response->pki_notificationsubsection_id
    cJSON *pki_notificationsubsection_id = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "pkiNotificationsubsectionID");
    if (!pki_notificationsubsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationsubsection_id))
    {
    goto end; //Numeric
    }

    // custom_notificationsubsectiongetnotificationtests_response->fki_notificationsection_id
    cJSON *fki_notificationsection_id = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "fkiNotificationsectionID");
    if (!fki_notificationsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_notificationsection_id))
    {
    goto end; //Numeric
    }

    // custom_notificationsubsectiongetnotificationtests_response->s_notificationsubsection_name_x
    cJSON *s_notificationsubsection_name_x = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "sNotificationsubsectionNameX");
    if (!s_notificationsubsection_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationsubsection_name_x))
    {
    goto end; //String
    }

    // custom_notificationsubsectiongetnotificationtests_response->a_obj_notificationtest
    cJSON *a_obj_notificationtest = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_responseJSON, "a_objNotificationtest");
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


    custom_notificationsubsectiongetnotificationtests_response_local_var = custom_notificationsubsectiongetnotificationtests_response_create (
        pki_notificationsubsection_id->valuedouble,
        fki_notificationsection_id->valuedouble,
        strdup(s_notificationsubsection_name_x->valuestring),
        a_obj_notificationtestList
        );

    return custom_notificationsubsectiongetnotificationtests_response_local_var;
end:
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
