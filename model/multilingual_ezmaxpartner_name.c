#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_name.h"



static multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name_create_internal(
    char *s_ezmaxpartner_name1,
    char *s_ezmaxpartner_name2
    ) {
    multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name_local_var = malloc(sizeof(multilingual_ezmaxpartner_name_t));
    if (!multilingual_ezmaxpartner_name_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_name_local_var, 0, sizeof(multilingual_ezmaxpartner_name_t));
    multilingual_ezmaxpartner_name_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_name_local_var->s_ezmaxpartner_name1 = s_ezmaxpartner_name1;
    multilingual_ezmaxpartner_name_local_var->s_ezmaxpartner_name2 = s_ezmaxpartner_name2;
    return multilingual_ezmaxpartner_name_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name_create(
    char *s_ezmaxpartner_name1,
    char *s_ezmaxpartner_name2
    ) {
    multilingual_ezmaxpartner_name_t *result = multilingual_ezmaxpartner_name_create_internal (
        s_ezmaxpartner_name1,
        s_ezmaxpartner_name2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_name_free(multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name) {
    if(NULL == multilingual_ezmaxpartner_name){
        return ;
    }
    if(multilingual_ezmaxpartner_name->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_name_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_name->s_ezmaxpartner_name1) {
        free(multilingual_ezmaxpartner_name->s_ezmaxpartner_name1);
        multilingual_ezmaxpartner_name->s_ezmaxpartner_name1 = NULL;
    }
    if (multilingual_ezmaxpartner_name->s_ezmaxpartner_name2) {
        free(multilingual_ezmaxpartner_name->s_ezmaxpartner_name2);
        multilingual_ezmaxpartner_name->s_ezmaxpartner_name2 = NULL;
    }
    free(multilingual_ezmaxpartner_name);
}

cJSON *multilingual_ezmaxpartner_name_convertToJSON(multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_name->s_ezmaxpartner_name1
    if(multilingual_ezmaxpartner_name->s_ezmaxpartner_name1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerName1", multilingual_ezmaxpartner_name->s_ezmaxpartner_name1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_name->s_ezmaxpartner_name2
    if(multilingual_ezmaxpartner_name->s_ezmaxpartner_name2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerName2", multilingual_ezmaxpartner_name->s_ezmaxpartner_name2) == NULL) {
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

multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name_parseFromJSON(cJSON *multilingual_ezmaxpartner_nameJSON){

    multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name_local_var = NULL;

    char *s_ezmaxpartner_name1_local_str = NULL;

    char *s_ezmaxpartner_name2_local_str = NULL;

    // multilingual_ezmaxpartner_name->s_ezmaxpartner_name1
    cJSON *s_ezmaxpartner_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_nameJSON, "sEzmaxpartnerName1");
    if (cJSON_IsNull(s_ezmaxpartner_name1)) {
        s_ezmaxpartner_name1 = NULL;
    }
    if (s_ezmaxpartner_name1) { 
    if(!cJSON_IsString(s_ezmaxpartner_name1) && !cJSON_IsNull(s_ezmaxpartner_name1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_name->s_ezmaxpartner_name2
    cJSON *s_ezmaxpartner_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_nameJSON, "sEzmaxpartnerName2");
    if (cJSON_IsNull(s_ezmaxpartner_name2)) {
        s_ezmaxpartner_name2 = NULL;
    }
    if (s_ezmaxpartner_name2) { 
    if(!cJSON_IsString(s_ezmaxpartner_name2) && !cJSON_IsNull(s_ezmaxpartner_name2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_name1 && !cJSON_IsNull(s_ezmaxpartner_name1)) s_ezmaxpartner_name1_local_str = strdup(s_ezmaxpartner_name1->valuestring);
    if (s_ezmaxpartner_name2 && !cJSON_IsNull(s_ezmaxpartner_name2)) s_ezmaxpartner_name2_local_str = strdup(s_ezmaxpartner_name2->valuestring);

    multilingual_ezmaxpartner_name_local_var = multilingual_ezmaxpartner_name_create_internal (
        s_ezmaxpartner_name1_local_str,
        s_ezmaxpartner_name2_local_str
        );

    if (!multilingual_ezmaxpartner_name_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_name_local_var;
end:
    if (s_ezmaxpartner_name1_local_str) {
        free(s_ezmaxpartner_name1_local_str);
        s_ezmaxpartner_name1_local_str = NULL;
    }
    if (s_ezmaxpartner_name2_local_str) {
        free(s_ezmaxpartner_name2_local_str);
        s_ezmaxpartner_name2_local_str = NULL;
    }
    return NULL;

}
