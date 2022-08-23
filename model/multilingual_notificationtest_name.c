#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_notificationtest_name.h"



multilingual_notificationtest_name_t *multilingual_notificationtest_name_create(
    char *s_notificationtest_name1,
    char *s_notificationtest_name2
    ) {
    multilingual_notificationtest_name_t *multilingual_notificationtest_name_local_var = malloc(sizeof(multilingual_notificationtest_name_t));
    if (!multilingual_notificationtest_name_local_var) {
        return NULL;
    }
    multilingual_notificationtest_name_local_var->s_notificationtest_name1 = s_notificationtest_name1;
    multilingual_notificationtest_name_local_var->s_notificationtest_name2 = s_notificationtest_name2;

    return multilingual_notificationtest_name_local_var;
}


void multilingual_notificationtest_name_free(multilingual_notificationtest_name_t *multilingual_notificationtest_name) {
    if(NULL == multilingual_notificationtest_name){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_notificationtest_name->s_notificationtest_name1) {
        free(multilingual_notificationtest_name->s_notificationtest_name1);
        multilingual_notificationtest_name->s_notificationtest_name1 = NULL;
    }
    if (multilingual_notificationtest_name->s_notificationtest_name2) {
        free(multilingual_notificationtest_name->s_notificationtest_name2);
        multilingual_notificationtest_name->s_notificationtest_name2 = NULL;
    }
    free(multilingual_notificationtest_name);
}

cJSON *multilingual_notificationtest_name_convertToJSON(multilingual_notificationtest_name_t *multilingual_notificationtest_name) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_notificationtest_name->s_notificationtest_name1
    if(multilingual_notificationtest_name->s_notificationtest_name1) {
    if(cJSON_AddStringToObject(item, "sNotificationtestName1", multilingual_notificationtest_name->s_notificationtest_name1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_notificationtest_name->s_notificationtest_name2
    if(multilingual_notificationtest_name->s_notificationtest_name2) {
    if(cJSON_AddStringToObject(item, "sNotificationtestName2", multilingual_notificationtest_name->s_notificationtest_name2) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

multilingual_notificationtest_name_t *multilingual_notificationtest_name_parseFromJSON(cJSON *multilingual_notificationtest_nameJSON){

    multilingual_notificationtest_name_t *multilingual_notificationtest_name_local_var = NULL;

    // multilingual_notificationtest_name->s_notificationtest_name1
    cJSON *s_notificationtest_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_notificationtest_nameJSON, "sNotificationtestName1");
    if (s_notificationtest_name1) { 
    if(!cJSON_IsString(s_notificationtest_name1))
    {
    goto end; //String
    }
    }

    // multilingual_notificationtest_name->s_notificationtest_name2
    cJSON *s_notificationtest_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_notificationtest_nameJSON, "sNotificationtestName2");
    if (s_notificationtest_name2) { 
    if(!cJSON_IsString(s_notificationtest_name2))
    {
    goto end; //String
    }
    }


    multilingual_notificationtest_name_local_var = multilingual_notificationtest_name_create (
        s_notificationtest_name1 ? strdup(s_notificationtest_name1->valuestring) : NULL,
        s_notificationtest_name2 ? strdup(s_notificationtest_name2->valuestring) : NULL
        );

    return multilingual_notificationtest_name_local_var;
end:
    return NULL;

}
