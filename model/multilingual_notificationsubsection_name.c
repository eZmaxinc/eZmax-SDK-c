#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_notificationsubsection_name.h"



multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name_create(
    char *s_notificationsubsection_name1,
    char *s_notificationsubsection_name2
    ) {
    multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name_local_var = malloc(sizeof(multilingual_notificationsubsection_name_t));
    if (!multilingual_notificationsubsection_name_local_var) {
        return NULL;
    }
    multilingual_notificationsubsection_name_local_var->s_notificationsubsection_name1 = s_notificationsubsection_name1;
    multilingual_notificationsubsection_name_local_var->s_notificationsubsection_name2 = s_notificationsubsection_name2;

    return multilingual_notificationsubsection_name_local_var;
}


void multilingual_notificationsubsection_name_free(multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name) {
    if(NULL == multilingual_notificationsubsection_name){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_notificationsubsection_name->s_notificationsubsection_name1) {
        free(multilingual_notificationsubsection_name->s_notificationsubsection_name1);
        multilingual_notificationsubsection_name->s_notificationsubsection_name1 = NULL;
    }
    if (multilingual_notificationsubsection_name->s_notificationsubsection_name2) {
        free(multilingual_notificationsubsection_name->s_notificationsubsection_name2);
        multilingual_notificationsubsection_name->s_notificationsubsection_name2 = NULL;
    }
    free(multilingual_notificationsubsection_name);
}

cJSON *multilingual_notificationsubsection_name_convertToJSON(multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_notificationsubsection_name->s_notificationsubsection_name1
    if(multilingual_notificationsubsection_name->s_notificationsubsection_name1) {
    if(cJSON_AddStringToObject(item, "sNotificationsubsectionName1", multilingual_notificationsubsection_name->s_notificationsubsection_name1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_notificationsubsection_name->s_notificationsubsection_name2
    if(multilingual_notificationsubsection_name->s_notificationsubsection_name2) {
    if(cJSON_AddStringToObject(item, "sNotificationsubsectionName2", multilingual_notificationsubsection_name->s_notificationsubsection_name2) == NULL) {
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

multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name_parseFromJSON(cJSON *multilingual_notificationsubsection_nameJSON){

    multilingual_notificationsubsection_name_t *multilingual_notificationsubsection_name_local_var = NULL;

    // multilingual_notificationsubsection_name->s_notificationsubsection_name1
    cJSON *s_notificationsubsection_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_notificationsubsection_nameJSON, "sNotificationsubsectionName1");
    if (s_notificationsubsection_name1) { 
    if(!cJSON_IsString(s_notificationsubsection_name1))
    {
    goto end; //String
    }
    }

    // multilingual_notificationsubsection_name->s_notificationsubsection_name2
    cJSON *s_notificationsubsection_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_notificationsubsection_nameJSON, "sNotificationsubsectionName2");
    if (s_notificationsubsection_name2) { 
    if(!cJSON_IsString(s_notificationsubsection_name2))
    {
    goto end; //String
    }
    }


    multilingual_notificationsubsection_name_local_var = multilingual_notificationsubsection_name_create (
        s_notificationsubsection_name1 ? strdup(s_notificationsubsection_name1->valuestring) : NULL,
        s_notificationsubsection_name2 ? strdup(s_notificationsubsection_name2->valuestring) : NULL
        );

    return multilingual_notificationsubsection_name_local_var;
end:
    return NULL;

}
