#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_apikeyfederation.h"



static custom_apikeyfederation_t *custom_apikeyfederation_create_internal(
    char *s_apikeyfederation_key,
    char *s_apikeyfederation_secret
    ) {
    custom_apikeyfederation_t *custom_apikeyfederation_local_var = malloc(sizeof(custom_apikeyfederation_t));
    if (!custom_apikeyfederation_local_var) {
        return NULL;
    }
    custom_apikeyfederation_local_var->s_apikeyfederation_key = s_apikeyfederation_key;
    custom_apikeyfederation_local_var->s_apikeyfederation_secret = s_apikeyfederation_secret;

    custom_apikeyfederation_local_var->_library_owned = 1;
    return custom_apikeyfederation_local_var;
}

__attribute__((deprecated)) custom_apikeyfederation_t *custom_apikeyfederation_create(
    char *s_apikeyfederation_key,
    char *s_apikeyfederation_secret
    ) {
    return custom_apikeyfederation_create_internal (
        s_apikeyfederation_key,
        s_apikeyfederation_secret
        );
}

void custom_apikeyfederation_free(custom_apikeyfederation_t *custom_apikeyfederation) {
    if(NULL == custom_apikeyfederation){
        return ;
    }
    if(custom_apikeyfederation->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_apikeyfederation_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_apikeyfederation->s_apikeyfederation_key) {
        free(custom_apikeyfederation->s_apikeyfederation_key);
        custom_apikeyfederation->s_apikeyfederation_key = NULL;
    }
    if (custom_apikeyfederation->s_apikeyfederation_secret) {
        free(custom_apikeyfederation->s_apikeyfederation_secret);
        custom_apikeyfederation->s_apikeyfederation_secret = NULL;
    }
    free(custom_apikeyfederation);
}

cJSON *custom_apikeyfederation_convertToJSON(custom_apikeyfederation_t *custom_apikeyfederation) {
    cJSON *item = cJSON_CreateObject();

    // custom_apikeyfederation->s_apikeyfederation_key
    if (!custom_apikeyfederation->s_apikeyfederation_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sApikeyfederationKey", custom_apikeyfederation->s_apikeyfederation_key) == NULL) {
    goto fail; //String
    }


    // custom_apikeyfederation->s_apikeyfederation_secret
    if (!custom_apikeyfederation->s_apikeyfederation_secret) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sApikeyfederationSecret", custom_apikeyfederation->s_apikeyfederation_secret) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_apikeyfederation_t *custom_apikeyfederation_parseFromJSON(cJSON *custom_apikeyfederationJSON){

    custom_apikeyfederation_t *custom_apikeyfederation_local_var = NULL;

    // custom_apikeyfederation->s_apikeyfederation_key
    cJSON *s_apikeyfederation_key = cJSON_GetObjectItemCaseSensitive(custom_apikeyfederationJSON, "sApikeyfederationKey");
    if (cJSON_IsNull(s_apikeyfederation_key)) {
        s_apikeyfederation_key = NULL;
    }
    if (!s_apikeyfederation_key) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikeyfederation_key))
    {
    goto end; //String
    }

    // custom_apikeyfederation->s_apikeyfederation_secret
    cJSON *s_apikeyfederation_secret = cJSON_GetObjectItemCaseSensitive(custom_apikeyfederationJSON, "sApikeyfederationSecret");
    if (cJSON_IsNull(s_apikeyfederation_secret)) {
        s_apikeyfederation_secret = NULL;
    }
    if (!s_apikeyfederation_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikeyfederation_secret))
    {
    goto end; //String
    }


    custom_apikeyfederation_local_var = custom_apikeyfederation_create_internal (
        strdup(s_apikeyfederation_key->valuestring),
        strdup(s_apikeyfederation_secret->valuestring)
        );

    return custom_apikeyfederation_local_var;
end:
    return NULL;

}
