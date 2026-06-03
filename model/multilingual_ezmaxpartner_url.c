#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_url.h"



static multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url_create_internal(
    char *s_ezmaxpartner_url1,
    char *s_ezmaxpartner_url2
    ) {
    multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url_local_var = malloc(sizeof(multilingual_ezmaxpartner_url_t));
    if (!multilingual_ezmaxpartner_url_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_url_local_var, 0, sizeof(multilingual_ezmaxpartner_url_t));
    multilingual_ezmaxpartner_url_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_url_local_var->s_ezmaxpartner_url1 = s_ezmaxpartner_url1;
    multilingual_ezmaxpartner_url_local_var->s_ezmaxpartner_url2 = s_ezmaxpartner_url2;
    return multilingual_ezmaxpartner_url_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url_create(
    char *s_ezmaxpartner_url1,
    char *s_ezmaxpartner_url2
    ) {
    multilingual_ezmaxpartner_url_t *result = multilingual_ezmaxpartner_url_create_internal (
        s_ezmaxpartner_url1,
        s_ezmaxpartner_url2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_url_free(multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url) {
    if(NULL == multilingual_ezmaxpartner_url){
        return ;
    }
    if(multilingual_ezmaxpartner_url->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_url_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_url->s_ezmaxpartner_url1) {
        free(multilingual_ezmaxpartner_url->s_ezmaxpartner_url1);
        multilingual_ezmaxpartner_url->s_ezmaxpartner_url1 = NULL;
    }
    if (multilingual_ezmaxpartner_url->s_ezmaxpartner_url2) {
        free(multilingual_ezmaxpartner_url->s_ezmaxpartner_url2);
        multilingual_ezmaxpartner_url->s_ezmaxpartner_url2 = NULL;
    }
    free(multilingual_ezmaxpartner_url);
}

cJSON *multilingual_ezmaxpartner_url_convertToJSON(multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_url->s_ezmaxpartner_url1
    if(multilingual_ezmaxpartner_url->s_ezmaxpartner_url1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerUrl1", multilingual_ezmaxpartner_url->s_ezmaxpartner_url1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_url->s_ezmaxpartner_url2
    if(multilingual_ezmaxpartner_url->s_ezmaxpartner_url2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerUrl2", multilingual_ezmaxpartner_url->s_ezmaxpartner_url2) == NULL) {
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

multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url_parseFromJSON(cJSON *multilingual_ezmaxpartner_urlJSON){

    multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url_local_var = NULL;

    char *s_ezmaxpartner_url1_local_str = NULL;

    char *s_ezmaxpartner_url2_local_str = NULL;

    // multilingual_ezmaxpartner_url->s_ezmaxpartner_url1
    cJSON *s_ezmaxpartner_url1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_urlJSON, "sEzmaxpartnerUrl1");
    if (cJSON_IsNull(s_ezmaxpartner_url1)) {
        s_ezmaxpartner_url1 = NULL;
    }
    if (s_ezmaxpartner_url1) { 
    if(!cJSON_IsString(s_ezmaxpartner_url1) && !cJSON_IsNull(s_ezmaxpartner_url1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_url->s_ezmaxpartner_url2
    cJSON *s_ezmaxpartner_url2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_urlJSON, "sEzmaxpartnerUrl2");
    if (cJSON_IsNull(s_ezmaxpartner_url2)) {
        s_ezmaxpartner_url2 = NULL;
    }
    if (s_ezmaxpartner_url2) { 
    if(!cJSON_IsString(s_ezmaxpartner_url2) && !cJSON_IsNull(s_ezmaxpartner_url2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_url1 && !cJSON_IsNull(s_ezmaxpartner_url1)) s_ezmaxpartner_url1_local_str = strdup(s_ezmaxpartner_url1->valuestring);
    if (s_ezmaxpartner_url2 && !cJSON_IsNull(s_ezmaxpartner_url2)) s_ezmaxpartner_url2_local_str = strdup(s_ezmaxpartner_url2->valuestring);

    multilingual_ezmaxpartner_url_local_var = multilingual_ezmaxpartner_url_create_internal (
        s_ezmaxpartner_url1_local_str,
        s_ezmaxpartner_url2_local_str
        );

    if (!multilingual_ezmaxpartner_url_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_url_local_var;
end:
    if (s_ezmaxpartner_url1_local_str) {
        free(s_ezmaxpartner_url1_local_str);
        s_ezmaxpartner_url1_local_str = NULL;
    }
    if (s_ezmaxpartner_url2_local_str) {
        free(s_ezmaxpartner_url2_local_str);
        s_ezmaxpartner_url2_local_str = NULL;
    }
    return NULL;

}
