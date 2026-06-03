#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxpartner_shortdescription.h"



static multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription_create_internal(
    char *s_ezmaxpartner_shortdescription1,
    char *s_ezmaxpartner_shortdescription2
    ) {
    multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription_local_var = malloc(sizeof(multilingual_ezmaxpartner_shortdescription_t));
    if (!multilingual_ezmaxpartner_shortdescription_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxpartner_shortdescription_local_var, 0, sizeof(multilingual_ezmaxpartner_shortdescription_t));
    multilingual_ezmaxpartner_shortdescription_local_var->_library_owned = 1;
    multilingual_ezmaxpartner_shortdescription_local_var->s_ezmaxpartner_shortdescription1 = s_ezmaxpartner_shortdescription1;
    multilingual_ezmaxpartner_shortdescription_local_var->s_ezmaxpartner_shortdescription2 = s_ezmaxpartner_shortdescription2;
    return multilingual_ezmaxpartner_shortdescription_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription_create(
    char *s_ezmaxpartner_shortdescription1,
    char *s_ezmaxpartner_shortdescription2
    ) {
    multilingual_ezmaxpartner_shortdescription_t *result = multilingual_ezmaxpartner_shortdescription_create_internal (
        s_ezmaxpartner_shortdescription1,
        s_ezmaxpartner_shortdescription2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxpartner_shortdescription_free(multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription) {
    if(NULL == multilingual_ezmaxpartner_shortdescription){
        return ;
    }
    if(multilingual_ezmaxpartner_shortdescription->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxpartner_shortdescription_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription1) {
        free(multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription1);
        multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription1 = NULL;
    }
    if (multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription2) {
        free(multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription2);
        multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription2 = NULL;
    }
    free(multilingual_ezmaxpartner_shortdescription);
}

cJSON *multilingual_ezmaxpartner_shortdescription_convertToJSON(multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription1
    if(multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerShortdescription1", multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription2
    if(multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerShortdescription2", multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription2) == NULL) {
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

multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription_parseFromJSON(cJSON *multilingual_ezmaxpartner_shortdescriptionJSON){

    multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription_local_var = NULL;

    char *s_ezmaxpartner_shortdescription1_local_str = NULL;

    char *s_ezmaxpartner_shortdescription2_local_str = NULL;

    // multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription1
    cJSON *s_ezmaxpartner_shortdescription1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_shortdescriptionJSON, "sEzmaxpartnerShortdescription1");
    if (cJSON_IsNull(s_ezmaxpartner_shortdescription1)) {
        s_ezmaxpartner_shortdescription1 = NULL;
    }
    if (s_ezmaxpartner_shortdescription1) { 
    if(!cJSON_IsString(s_ezmaxpartner_shortdescription1) && !cJSON_IsNull(s_ezmaxpartner_shortdescription1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxpartner_shortdescription->s_ezmaxpartner_shortdescription2
    cJSON *s_ezmaxpartner_shortdescription2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxpartner_shortdescriptionJSON, "sEzmaxpartnerShortdescription2");
    if (cJSON_IsNull(s_ezmaxpartner_shortdescription2)) {
        s_ezmaxpartner_shortdescription2 = NULL;
    }
    if (s_ezmaxpartner_shortdescription2) { 
    if(!cJSON_IsString(s_ezmaxpartner_shortdescription2) && !cJSON_IsNull(s_ezmaxpartner_shortdescription2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxpartner_shortdescription1 && !cJSON_IsNull(s_ezmaxpartner_shortdescription1)) s_ezmaxpartner_shortdescription1_local_str = strdup(s_ezmaxpartner_shortdescription1->valuestring);
    if (s_ezmaxpartner_shortdescription2 && !cJSON_IsNull(s_ezmaxpartner_shortdescription2)) s_ezmaxpartner_shortdescription2_local_str = strdup(s_ezmaxpartner_shortdescription2->valuestring);

    multilingual_ezmaxpartner_shortdescription_local_var = multilingual_ezmaxpartner_shortdescription_create_internal (
        s_ezmaxpartner_shortdescription1_local_str,
        s_ezmaxpartner_shortdescription2_local_str
        );

    if (!multilingual_ezmaxpartner_shortdescription_local_var) {
        goto end;
    }

    return multilingual_ezmaxpartner_shortdescription_local_var;
end:
    if (s_ezmaxpartner_shortdescription1_local_str) {
        free(s_ezmaxpartner_shortdescription1_local_str);
        s_ezmaxpartner_shortdescription1_local_str = NULL;
    }
    if (s_ezmaxpartner_shortdescription2_local_str) {
        free(s_ezmaxpartner_shortdescription2_local_str);
        s_ezmaxpartner_shortdescription2_local_str = NULL;
    }
    return NULL;

}
