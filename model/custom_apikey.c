#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_apikey.h"



custom_apikey_t *custom_apikey_create(
    char *s_apikey_key,
    char *s_apikey_secret
    ) {
    custom_apikey_t *custom_apikey_local_var = malloc(sizeof(custom_apikey_t));
    if (!custom_apikey_local_var) {
        return NULL;
    }
    custom_apikey_local_var->s_apikey_key = s_apikey_key;
    custom_apikey_local_var->s_apikey_secret = s_apikey_secret;

    return custom_apikey_local_var;
}


void custom_apikey_free(custom_apikey_t *custom_apikey) {
    if(NULL == custom_apikey){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_apikey->s_apikey_key) {
        free(custom_apikey->s_apikey_key);
        custom_apikey->s_apikey_key = NULL;
    }
    if (custom_apikey->s_apikey_secret) {
        free(custom_apikey->s_apikey_secret);
        custom_apikey->s_apikey_secret = NULL;
    }
    free(custom_apikey);
}

cJSON *custom_apikey_convertToJSON(custom_apikey_t *custom_apikey) {
    cJSON *item = cJSON_CreateObject();

    // custom_apikey->s_apikey_key
    if (!custom_apikey->s_apikey_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sApikeyKey", custom_apikey->s_apikey_key) == NULL) {
    goto fail; //String
    }


    // custom_apikey->s_apikey_secret
    if (!custom_apikey->s_apikey_secret) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sApikeySecret", custom_apikey->s_apikey_secret) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_apikey_t *custom_apikey_parseFromJSON(cJSON *custom_apikeyJSON){

    custom_apikey_t *custom_apikey_local_var = NULL;

    // custom_apikey->s_apikey_key
    cJSON *s_apikey_key = cJSON_GetObjectItemCaseSensitive(custom_apikeyJSON, "sApikeyKey");
    if (!s_apikey_key) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikey_key))
    {
    goto end; //String
    }

    // custom_apikey->s_apikey_secret
    cJSON *s_apikey_secret = cJSON_GetObjectItemCaseSensitive(custom_apikeyJSON, "sApikeySecret");
    if (!s_apikey_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikey_secret))
    {
    goto end; //String
    }


    custom_apikey_local_var = custom_apikey_create (
        strdup(s_apikey_key->valuestring),
        strdup(s_apikey_secret->valuestring)
        );

    return custom_apikey_local_var;
end:
    return NULL;

}
