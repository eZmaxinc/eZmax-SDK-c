#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_apikeyfederation.h"



custom_apikeyfederation_t *custom_apikeyfederation_create(
    char *s_apikeyfederation_key,
    char *s_apikeyfederation_secret
    ) {
    custom_apikeyfederation_t *custom_apikeyfederation_local_var = malloc(sizeof(custom_apikeyfederation_t));
    if (!custom_apikeyfederation_local_var) {
        return NULL;
    }
    custom_apikeyfederation_local_var->s_apikeyfederation_key = s_apikeyfederation_key;
    custom_apikeyfederation_local_var->s_apikeyfederation_secret = s_apikeyfederation_secret;

    return custom_apikeyfederation_local_var;
}


void custom_apikeyfederation_free(custom_apikeyfederation_t *custom_apikeyfederation) {
    if(NULL == custom_apikeyfederation){
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
    if (!s_apikeyfederation_key) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikeyfederation_key))
    {
    goto end; //String
    }

    // custom_apikeyfederation->s_apikeyfederation_secret
    cJSON *s_apikeyfederation_secret = cJSON_GetObjectItemCaseSensitive(custom_apikeyfederationJSON, "sApikeyfederationSecret");
    if (!s_apikeyfederation_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikeyfederation_secret))
    {
    goto end; //String
    }


    custom_apikeyfederation_local_var = custom_apikeyfederation_create (
        strdup(s_apikeyfederation_key->valuestring),
        strdup(s_apikeyfederation_secret->valuestring)
        );

    return custom_apikeyfederation_local_var;
end:
    return NULL;

}
