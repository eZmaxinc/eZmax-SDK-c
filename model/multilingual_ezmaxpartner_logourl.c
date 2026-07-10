#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_logourl.h"



static multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl_create_internal(
    char *s_ezmaxpartner_logourl1,
    char *s_ezmaxpartner_logourl2
    ) {
    multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl_local_var = malloc(sizeof(multilingual_ezmaxpartner_logourl_t));
    if (!multilingual_ezmaxpartner_logourl_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_logourl_local_var, 0, sizeof(multilingual_ezmaxpartner_logourl_t));
    multilingual_ezmaxpartner_logourl_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_logourl_local_var->s_ezmaxpartner_logourl1 = s_ezmaxpartner_logourl1;
    multilingual_ezmaxpartner_logourl_local_var->s_ezmaxpartner_logourl2 = s_ezmaxpartner_logourl2;
    return multilingual_ezmaxpartner_logourl_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl_create(
    char *s_ezmaxpartner_logourl1,
    char *s_ezmaxpartner_logourl2
    ) {
    multilingual_ezmaxpartner_logourl_t *result = multilingual_ezmaxpartner_logourl_create_internal (
        s_ezmaxpartner_logourl1,
        s_ezmaxpartner_logourl2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_logourl_free(multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl) {
    if(NULL == multilingual_ezmaxpartner_logourl){
        return ;
    }
    if(multilingual_ezmaxpartner_logourl->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_logourl_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl1) {
        free(multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl1);
        multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl1 = NULL;
    }
    if (multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl2) {
        free(multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl2);
        multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl2 = NULL;
    }
    free(multilingual_ezmaxpartner_logourl);
}

cJSON *multilingual_ezmaxpartner_logourl_convertToJSON(multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl1
    if(multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerLogourl1", multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl2
    if(multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerLogourl2", multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl2) == NULL) {
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

multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl_parseFromJSON(cJSON *multilingual_ezmaxpartner_logourlJSON){

    multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl_local_var = NULL;

    char *s_ezmaxpartner_logourl1_local_str = NULL;

    char *s_ezmaxpartner_logourl2_local_str = NULL;

    // multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl1
    cJSON *s_ezmaxpartner_logourl1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_logourlJSON, "sEzmaxpartnerLogourl1");
    if (cJSON_IsNull(s_ezmaxpartner_logourl1)) {
        s_ezmaxpartner_logourl1 = NULL;
    }
    if (s_ezmaxpartner_logourl1) { 
    if(!cJSON_IsString(s_ezmaxpartner_logourl1) && !cJSON_IsNull(s_ezmaxpartner_logourl1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_logourl->s_ezmaxpartner_logourl2
    cJSON *s_ezmaxpartner_logourl2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_logourlJSON, "sEzmaxpartnerLogourl2");
    if (cJSON_IsNull(s_ezmaxpartner_logourl2)) {
        s_ezmaxpartner_logourl2 = NULL;
    }
    if (s_ezmaxpartner_logourl2) { 
    if(!cJSON_IsString(s_ezmaxpartner_logourl2) && !cJSON_IsNull(s_ezmaxpartner_logourl2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_logourl1 && !cJSON_IsNull(s_ezmaxpartner_logourl1)) s_ezmaxpartner_logourl1_local_str = strdup(s_ezmaxpartner_logourl1->valuestring);
    if (s_ezmaxpartner_logourl2 && !cJSON_IsNull(s_ezmaxpartner_logourl2)) s_ezmaxpartner_logourl2_local_str = strdup(s_ezmaxpartner_logourl2->valuestring);

    multilingual_ezmaxpartner_logourl_local_var = multilingual_ezmaxpartner_logourl_create_internal (
        s_ezmaxpartner_logourl1_local_str,
        s_ezmaxpartner_logourl2_local_str
        );

    if (!multilingual_ezmaxpartner_logourl_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_logourl_local_var;
end:
    if (s_ezmaxpartner_logourl1_local_str) {
        free(s_ezmaxpartner_logourl1_local_str);
        s_ezmaxpartner_logourl1_local_str = NULL;
    }
    if (s_ezmaxpartner_logourl2_local_str) {
        free(s_ezmaxpartner_logourl2_local_str);
        s_ezmaxpartner_logourl2_local_str = NULL;
    }
    return NULL;

}
