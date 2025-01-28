#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_usergroup_name.h"



static multilingual_usergroup_name_t *multilingual_usergroup_name_create_internal(
    char *s_usergroup_name1,
    char *s_usergroup_name2
    ) {
    multilingual_usergroup_name_t *multilingual_usergroup_name_local_var = malloc(sizeof(multilingual_usergroup_name_t));
    if (!multilingual_usergroup_name_local_var) {
        return NULL;
    }
    multilingual_usergroup_name_local_var->s_usergroup_name1 = s_usergroup_name1;
    multilingual_usergroup_name_local_var->s_usergroup_name2 = s_usergroup_name2;

    multilingual_usergroup_name_local_var->_library_owned = 1;
    return multilingual_usergroup_name_local_var;
}

__attribute__((deprecated)) multilingual_usergroup_name_t *multilingual_usergroup_name_create(
    char *s_usergroup_name1,
    char *s_usergroup_name2
    ) {
    return multilingual_usergroup_name_create_internal (
        s_usergroup_name1,
        s_usergroup_name2
        );
}

void multilingual_usergroup_name_free(multilingual_usergroup_name_t *multilingual_usergroup_name) {
    if(NULL == multilingual_usergroup_name){
        return ;
    }
    if(multilingual_usergroup_name->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_usergroup_name_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_usergroup_name->s_usergroup_name1) {
        free(multilingual_usergroup_name->s_usergroup_name1);
        multilingual_usergroup_name->s_usergroup_name1 = NULL;
    }
    if (multilingual_usergroup_name->s_usergroup_name2) {
        free(multilingual_usergroup_name->s_usergroup_name2);
        multilingual_usergroup_name->s_usergroup_name2 = NULL;
    }
    free(multilingual_usergroup_name);
}

cJSON *multilingual_usergroup_name_convertToJSON(multilingual_usergroup_name_t *multilingual_usergroup_name) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_usergroup_name->s_usergroup_name1
    if(multilingual_usergroup_name->s_usergroup_name1) {
    if(cJSON_AddStringToObject(item, "sUsergroupName1", multilingual_usergroup_name->s_usergroup_name1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_usergroup_name->s_usergroup_name2
    if(multilingual_usergroup_name->s_usergroup_name2) {
    if(cJSON_AddStringToObject(item, "sUsergroupName2", multilingual_usergroup_name->s_usergroup_name2) == NULL) {
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

multilingual_usergroup_name_t *multilingual_usergroup_name_parseFromJSON(cJSON *multilingual_usergroup_nameJSON){

    multilingual_usergroup_name_t *multilingual_usergroup_name_local_var = NULL;

    // multilingual_usergroup_name->s_usergroup_name1
    cJSON *s_usergroup_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_usergroup_nameJSON, "sUsergroupName1");
    if (cJSON_IsNull(s_usergroup_name1)) {
        s_usergroup_name1 = NULL;
    }
    if (s_usergroup_name1) { 
    if(!cJSON_IsString(s_usergroup_name1) && !cJSON_IsNull(s_usergroup_name1))
    {
    goto end; //String
    }
    }

    // multilingual_usergroup_name->s_usergroup_name2
    cJSON *s_usergroup_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_usergroup_nameJSON, "sUsergroupName2");
    if (cJSON_IsNull(s_usergroup_name2)) {
        s_usergroup_name2 = NULL;
    }
    if (s_usergroup_name2) { 
    if(!cJSON_IsString(s_usergroup_name2) && !cJSON_IsNull(s_usergroup_name2))
    {
    goto end; //String
    }
    }


    multilingual_usergroup_name_local_var = multilingual_usergroup_name_create_internal (
        s_usergroup_name1 && !cJSON_IsNull(s_usergroup_name1) ? strdup(s_usergroup_name1->valuestring) : NULL,
        s_usergroup_name2 && !cJSON_IsNull(s_usergroup_name2) ? strdup(s_usergroup_name2->valuestring) : NULL
        );

    return multilingual_usergroup_name_local_var;
end:
    return NULL;

}
