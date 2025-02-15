#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "global_ezmaxclient_version_v1_response.h"



static global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response_create_internal(
    char *s_ezmaxclient_version,
    char *s_ezmaxclient_oslatestversion
    ) {
    global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response_local_var = malloc(sizeof(global_ezmaxclient_version_v1_response_t));
    if (!global_ezmaxclient_version_v1_response_local_var) {
        return NULL;
    }
    global_ezmaxclient_version_v1_response_local_var->s_ezmaxclient_version = s_ezmaxclient_version;
    global_ezmaxclient_version_v1_response_local_var->s_ezmaxclient_oslatestversion = s_ezmaxclient_oslatestversion;

    global_ezmaxclient_version_v1_response_local_var->_library_owned = 1;
    return global_ezmaxclient_version_v1_response_local_var;
}

__attribute__((deprecated)) global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response_create(
    char *s_ezmaxclient_version,
    char *s_ezmaxclient_oslatestversion
    ) {
    return global_ezmaxclient_version_v1_response_create_internal (
        s_ezmaxclient_version,
        s_ezmaxclient_oslatestversion
        );
}

void global_ezmaxclient_version_v1_response_free(global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response) {
    if(NULL == global_ezmaxclient_version_v1_response){
        return ;
    }
    if(global_ezmaxclient_version_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "global_ezmaxclient_version_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (global_ezmaxclient_version_v1_response->s_ezmaxclient_version) {
        free(global_ezmaxclient_version_v1_response->s_ezmaxclient_version);
        global_ezmaxclient_version_v1_response->s_ezmaxclient_version = NULL;
    }
    if (global_ezmaxclient_version_v1_response->s_ezmaxclient_oslatestversion) {
        free(global_ezmaxclient_version_v1_response->s_ezmaxclient_oslatestversion);
        global_ezmaxclient_version_v1_response->s_ezmaxclient_oslatestversion = NULL;
    }
    free(global_ezmaxclient_version_v1_response);
}

cJSON *global_ezmaxclient_version_v1_response_convertToJSON(global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // global_ezmaxclient_version_v1_response->s_ezmaxclient_version
    if (!global_ezmaxclient_version_v1_response->s_ezmaxclient_version) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxclientVersion", global_ezmaxclient_version_v1_response->s_ezmaxclient_version) == NULL) {
    goto fail; //String
    }


    // global_ezmaxclient_version_v1_response->s_ezmaxclient_oslatestversion
    if (!global_ezmaxclient_version_v1_response->s_ezmaxclient_oslatestversion) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxclientOslatestversion", global_ezmaxclient_version_v1_response->s_ezmaxclient_oslatestversion) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response_parseFromJSON(cJSON *global_ezmaxclient_version_v1_responseJSON){

    global_ezmaxclient_version_v1_response_t *global_ezmaxclient_version_v1_response_local_var = NULL;

    // global_ezmaxclient_version_v1_response->s_ezmaxclient_version
    cJSON *s_ezmaxclient_version = cJSON_GetObjectItemCaseSensitive(global_ezmaxclient_version_v1_responseJSON, "sEzmaxclientVersion");
    if (cJSON_IsNull(s_ezmaxclient_version)) {
        s_ezmaxclient_version = NULL;
    }
    if (!s_ezmaxclient_version) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxclient_version))
    {
    goto end; //String
    }

    // global_ezmaxclient_version_v1_response->s_ezmaxclient_oslatestversion
    cJSON *s_ezmaxclient_oslatestversion = cJSON_GetObjectItemCaseSensitive(global_ezmaxclient_version_v1_responseJSON, "sEzmaxclientOslatestversion");
    if (cJSON_IsNull(s_ezmaxclient_oslatestversion)) {
        s_ezmaxclient_oslatestversion = NULL;
    }
    if (!s_ezmaxclient_oslatestversion) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxclient_oslatestversion))
    {
    goto end; //String
    }


    global_ezmaxclient_version_v1_response_local_var = global_ezmaxclient_version_v1_response_create_internal (
        strdup(s_ezmaxclient_version->valuestring),
        strdup(s_ezmaxclient_oslatestversion->valuestring)
        );

    return global_ezmaxclient_version_v1_response_local_var;
end:
    return NULL;

}
