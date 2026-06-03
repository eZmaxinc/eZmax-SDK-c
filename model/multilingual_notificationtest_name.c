#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_notificationtest_name.h"



static multilingual_notificationtest_name_t *multilingual_notificationtest_name_create_internal(
    char *s_notificationtest_name1,
    char *s_notificationtest_name2
    ) {
    multilingual_notificationtest_name_t *multilingual_notificationtest_name_local_var = malloc(sizeof(multilingual_notificationtest_name_t));
    if (!multilingual_notificationtest_name_local_var) {
        return NULL;
    }
    memset(multilingual_notificationtest_name_local_var, 0, sizeof(multilingual_notificationtest_name_t));
    multilingual_notificationtest_name_local_var->_library_owned = 1;
    multilingual_notificationtest_name_local_var->s_notificationtest_name1 = s_notificationtest_name1;
    multilingual_notificationtest_name_local_var->s_notificationtest_name2 = s_notificationtest_name2;
    return multilingual_notificationtest_name_local_var;
}

__attribute__((deprecated)) multilingual_notificationtest_name_t *multilingual_notificationtest_name_create(
    char *s_notificationtest_name1,
    char *s_notificationtest_name2
    ) {
    multilingual_notificationtest_name_t *result = multilingual_notificationtest_name_create_internal (
        s_notificationtest_name1,
        s_notificationtest_name2
        );
    if (!result) {
    }
    return result;
}

void multilingual_notificationtest_name_free(multilingual_notificationtest_name_t *multilingual_notificationtest_name) {
    if(NULL == multilingual_notificationtest_name){
        return ;
    }
    if(multilingual_notificationtest_name->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_notificationtest_name_free");
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

    char *s_notificationtest_name1_local_str = NULL;

    char *s_notificationtest_name2_local_str = NULL;

    // multilingual_notificationtest_name->s_notificationtest_name1
    cJSON *s_notificationtest_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_notificationtest_nameJSON, "sNotificationtestName1");
    if (cJSON_IsNull(s_notificationtest_name1)) {
        s_notificationtest_name1 = NULL;
    }
    if (s_notificationtest_name1) { 
    if(!cJSON_IsString(s_notificationtest_name1) && !cJSON_IsNull(s_notificationtest_name1))
    {
    goto end; //String
    }
    }

    // multilingual_notificationtest_name->s_notificationtest_name2
    cJSON *s_notificationtest_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_notificationtest_nameJSON, "sNotificationtestName2");
    if (cJSON_IsNull(s_notificationtest_name2)) {
        s_notificationtest_name2 = NULL;
    }
    if (s_notificationtest_name2) { 
    if(!cJSON_IsString(s_notificationtest_name2) && !cJSON_IsNull(s_notificationtest_name2))
    {
    goto end; //String
    }
    }


    if (s_notificationtest_name1 && !cJSON_IsNull(s_notificationtest_name1)) s_notificationtest_name1_local_str = strdup(s_notificationtest_name1->valuestring);
    if (s_notificationtest_name2 && !cJSON_IsNull(s_notificationtest_name2)) s_notificationtest_name2_local_str = strdup(s_notificationtest_name2->valuestring);

    multilingual_notificationtest_name_local_var = multilingual_notificationtest_name_create_internal (
        s_notificationtest_name1_local_str,
        s_notificationtest_name2_local_str
        );

    if (!multilingual_notificationtest_name_local_var) {
        goto end;
    }

    return multilingual_notificationtest_name_local_var;
end:
    if (s_notificationtest_name1_local_str) {
        free(s_notificationtest_name1_local_str);
        s_notificationtest_name1_local_str = NULL;
    }
    if (s_notificationtest_name2_local_str) {
        free(s_notificationtest_name2_local_str);
        s_notificationtest_name2_local_str = NULL;
    }
    return NULL;

}
