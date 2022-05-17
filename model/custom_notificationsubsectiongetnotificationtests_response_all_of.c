#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_notificationsubsectiongetnotificationtests_response_all_of.h"



custom_notificationsubsectiongetnotificationtests_response_all_of_t *custom_notificationsubsectiongetnotificationtests_response_all_of_create(
    list_t *a_obj_notificationtest
    ) {
    custom_notificationsubsectiongetnotificationtests_response_all_of_t *custom_notificationsubsectiongetnotificationtests_response_all_of_local_var = malloc(sizeof(custom_notificationsubsectiongetnotificationtests_response_all_of_t));
    if (!custom_notificationsubsectiongetnotificationtests_response_all_of_local_var) {
        return NULL;
    }
    custom_notificationsubsectiongetnotificationtests_response_all_of_local_var->a_obj_notificationtest = a_obj_notificationtest;

    return custom_notificationsubsectiongetnotificationtests_response_all_of_local_var;
}


void custom_notificationsubsectiongetnotificationtests_response_all_of_free(custom_notificationsubsectiongetnotificationtests_response_all_of_t *custom_notificationsubsectiongetnotificationtests_response_all_of) {
    if(NULL == custom_notificationsubsectiongetnotificationtests_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest) {
        list_ForEach(listEntry, custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest) {
            custom_notificationtestgetnotificationtests_response_free(listEntry->data);
        }
        list_freeList(custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest);
        custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest = NULL;
    }
    free(custom_notificationsubsectiongetnotificationtests_response_all_of);
}

cJSON *custom_notificationsubsectiongetnotificationtests_response_all_of_convertToJSON(custom_notificationsubsectiongetnotificationtests_response_all_of_t *custom_notificationsubsectiongetnotificationtests_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest
    if (!custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest) {
        goto fail;
    }
    cJSON *a_obj_notificationtest = cJSON_AddArrayToObject(item, "a_objNotificationtest");
    if(a_obj_notificationtest == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_notificationtestListEntry;
    if (custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest) {
    list_ForEach(a_obj_notificationtestListEntry, custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest) {
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

custom_notificationsubsectiongetnotificationtests_response_all_of_t *custom_notificationsubsectiongetnotificationtests_response_all_of_parseFromJSON(cJSON *custom_notificationsubsectiongetnotificationtests_response_all_ofJSON){

    custom_notificationsubsectiongetnotificationtests_response_all_of_t *custom_notificationsubsectiongetnotificationtests_response_all_of_local_var = NULL;

    // define the local list for custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest
    list_t *a_obj_notificationtestList = NULL;

    // custom_notificationsubsectiongetnotificationtests_response_all_of->a_obj_notificationtest
    cJSON *a_obj_notificationtest = cJSON_GetObjectItemCaseSensitive(custom_notificationsubsectiongetnotificationtests_response_all_ofJSON, "a_objNotificationtest");
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


    custom_notificationsubsectiongetnotificationtests_response_all_of_local_var = custom_notificationsubsectiongetnotificationtests_response_all_of_create (
        a_obj_notificationtestList
        );

    return custom_notificationsubsectiongetnotificationtests_response_all_of_local_var;
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
