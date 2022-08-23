#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezsignfoldertype_name.h"



multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name_create(
    char *s_ezsignfoldertype_name1,
    char *s_ezsignfoldertype_name2
    ) {
    multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name_local_var = malloc(sizeof(multilingual_ezsignfoldertype_name_t));
    if (!multilingual_ezsignfoldertype_name_local_var) {
        return NULL;
    }
    multilingual_ezsignfoldertype_name_local_var->s_ezsignfoldertype_name1 = s_ezsignfoldertype_name1;
    multilingual_ezsignfoldertype_name_local_var->s_ezsignfoldertype_name2 = s_ezsignfoldertype_name2;

    return multilingual_ezsignfoldertype_name_local_var;
}


void multilingual_ezsignfoldertype_name_free(multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name) {
    if(NULL == multilingual_ezsignfoldertype_name){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name1) {
        free(multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name1);
        multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name1 = NULL;
    }
    if (multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name2) {
        free(multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name2);
        multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name2 = NULL;
    }
    free(multilingual_ezsignfoldertype_name);
}

cJSON *multilingual_ezsignfoldertype_name_convertToJSON(multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name1
    if(multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name1) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeName1", multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name2
    if(multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name2) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeName2", multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name2) == NULL) {
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

multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name_parseFromJSON(cJSON *multilingual_ezsignfoldertype_nameJSON){

    multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name_local_var = NULL;

    // multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name1
    cJSON *s_ezsignfoldertype_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezsignfoldertype_nameJSON, "sEzsignfoldertypeName1");
    if (s_ezsignfoldertype_name1) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name1))
    {
    goto end; //String
    }
    }

    // multilingual_ezsignfoldertype_name->s_ezsignfoldertype_name2
    cJSON *s_ezsignfoldertype_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezsignfoldertype_nameJSON, "sEzsignfoldertypeName2");
    if (s_ezsignfoldertype_name2) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name2))
    {
    goto end; //String
    }
    }


    multilingual_ezsignfoldertype_name_local_var = multilingual_ezsignfoldertype_name_create (
        s_ezsignfoldertype_name1 ? strdup(s_ezsignfoldertype_name1->valuestring) : NULL,
        s_ezsignfoldertype_name2 ? strdup(s_ezsignfoldertype_name2->valuestring) : NULL
        );

    return multilingual_ezsignfoldertype_name_local_var;
end:
    return NULL;

}
