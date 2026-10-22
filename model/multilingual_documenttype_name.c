#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_documenttype_name.h"



static multilingual_documenttype_name_t *multilingual_documenttype_name_create_internal(
    char *s_documenttype_name1,
    char *s_documenttype_name2
    ) {
    multilingual_documenttype_name_t *multilingual_documenttype_name_local_var = malloc(sizeof(multilingual_documenttype_name_t));
    if (!multilingual_documenttype_name_local_var) {
        return NULL;
    }
    memset(multilingual_documenttype_name_local_var, 0, sizeof(multilingual_documenttype_name_t));
    multilingual_documenttype_name_local_var->_library_owned = 1;
    multilingual_documenttype_name_local_var->s_documenttype_name1 = s_documenttype_name1;
    multilingual_documenttype_name_local_var->s_documenttype_name2 = s_documenttype_name2;
    return multilingual_documenttype_name_local_var;
}

__attribute__((deprecated)) multilingual_documenttype_name_t *multilingual_documenttype_name_create(
    char *s_documenttype_name1,
    char *s_documenttype_name2
    ) {
    multilingual_documenttype_name_t *result = multilingual_documenttype_name_create_internal (
        s_documenttype_name1,
        s_documenttype_name2
        );
    if (!result) {
    }
    return result;
}

void multilingual_documenttype_name_free(multilingual_documenttype_name_t *multilingual_documenttype_name) {
    if(NULL == multilingual_documenttype_name){
        return ;
    }
    if(multilingual_documenttype_name->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_documenttype_name_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_documenttype_name->s_documenttype_name1) {
        free(multilingual_documenttype_name->s_documenttype_name1);
        multilingual_documenttype_name->s_documenttype_name1 = NULL;
    }
    if (multilingual_documenttype_name->s_documenttype_name2) {
        free(multilingual_documenttype_name->s_documenttype_name2);
        multilingual_documenttype_name->s_documenttype_name2 = NULL;
    }
    free(multilingual_documenttype_name);
}

cJSON *multilingual_documenttype_name_convertToJSON(multilingual_documenttype_name_t *multilingual_documenttype_name) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_documenttype_name->s_documenttype_name1
    if(multilingual_documenttype_name->s_documenttype_name1) {
    if(cJSON_AddStringToObject(item, "sDocumenttypeName1", multilingual_documenttype_name->s_documenttype_name1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_documenttype_name->s_documenttype_name2
    if(multilingual_documenttype_name->s_documenttype_name2) {
    if(cJSON_AddStringToObject(item, "sDocumenttypeName2", multilingual_documenttype_name->s_documenttype_name2) == NULL) {
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

multilingual_documenttype_name_t *multilingual_documenttype_name_parseFromJSON(cJSON *multilingual_documenttype_nameJSON){

    multilingual_documenttype_name_t *multilingual_documenttype_name_local_var = NULL;

    char *s_documenttype_name1_local_str = NULL;

    char *s_documenttype_name2_local_str = NULL;

    // multilingual_documenttype_name->s_documenttype_name1
    cJSON *s_documenttype_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_documenttype_nameJSON, "sDocumenttypeName1");
    if (cJSON_IsNull(s_documenttype_name1)) {
        s_documenttype_name1 = NULL;
    }
    if (s_documenttype_name1) { 
    if(!cJSON_IsString(s_documenttype_name1) && !cJSON_IsNull(s_documenttype_name1))
    {
    goto end; //String
    }
    }

    // multilingual_documenttype_name->s_documenttype_name2
    cJSON *s_documenttype_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_documenttype_nameJSON, "sDocumenttypeName2");
    if (cJSON_IsNull(s_documenttype_name2)) {
        s_documenttype_name2 = NULL;
    }
    if (s_documenttype_name2) { 
    if(!cJSON_IsString(s_documenttype_name2) && !cJSON_IsNull(s_documenttype_name2))
    {
    goto end; //String
    }
    }


    if (s_documenttype_name1 && !cJSON_IsNull(s_documenttype_name1)) s_documenttype_name1_local_str = strdup(s_documenttype_name1->valuestring);
    if (s_documenttype_name2 && !cJSON_IsNull(s_documenttype_name2)) s_documenttype_name2_local_str = strdup(s_documenttype_name2->valuestring);

    multilingual_documenttype_name_local_var = multilingual_documenttype_name_create_internal (
        s_documenttype_name1_local_str,
        s_documenttype_name2_local_str
        );

    if (!multilingual_documenttype_name_local_var) {
        goto end;
    }

    return multilingual_documenttype_name_local_var;
end:
    if (s_documenttype_name1_local_str) {
        free(s_documenttype_name1_local_str);
        s_documenttype_name1_local_str = NULL;
    }
    if (s_documenttype_name2_local_str) {
        free(s_documenttype_name2_local_str);
        s_documenttype_name2_local_str = NULL;
    }
    return NULL;

}
