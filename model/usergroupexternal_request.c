#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_request.h"



usergroupexternal_request_t *usergroupexternal_request_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
    ) {
    usergroupexternal_request_t *usergroupexternal_request_local_var = malloc(sizeof(usergroupexternal_request_t));
    if (!usergroupexternal_request_local_var) {
        return NULL;
    }
    usergroupexternal_request_local_var->pki_usergroupexternal_id = pki_usergroupexternal_id;
    usergroupexternal_request_local_var->s_usergroupexternal_name = s_usergroupexternal_name;
    usergroupexternal_request_local_var->s_usergroupexternal_id = s_usergroupexternal_id;

    return usergroupexternal_request_local_var;
}


void usergroupexternal_request_free(usergroupexternal_request_t *usergroupexternal_request) {
    if(NULL == usergroupexternal_request){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_request->s_usergroupexternal_name) {
        free(usergroupexternal_request->s_usergroupexternal_name);
        usergroupexternal_request->s_usergroupexternal_name = NULL;
    }
    if (usergroupexternal_request->s_usergroupexternal_id) {
        free(usergroupexternal_request->s_usergroupexternal_id);
        usergroupexternal_request->s_usergroupexternal_id = NULL;
    }
    free(usergroupexternal_request);
}

cJSON *usergroupexternal_request_convertToJSON(usergroupexternal_request_t *usergroupexternal_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_request->pki_usergroupexternal_id
    if(usergroupexternal_request->pki_usergroupexternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiUsergroupexternalID", usergroupexternal_request->pki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupexternal_request->s_usergroupexternal_name
    if (!usergroupexternal_request->s_usergroupexternal_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupexternal_request->s_usergroupexternal_name) == NULL) {
    goto fail; //String
    }


    // usergroupexternal_request->s_usergroupexternal_id
    if (!usergroupexternal_request->s_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalID", usergroupexternal_request->s_usergroupexternal_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_request_t *usergroupexternal_request_parseFromJSON(cJSON *usergroupexternal_requestJSON){

    usergroupexternal_request_t *usergroupexternal_request_local_var = NULL;

    // usergroupexternal_request->pki_usergroupexternal_id
    cJSON *pki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_requestJSON, "pkiUsergroupexternalID");
    if (pki_usergroupexternal_id) { 
    if(!cJSON_IsNumber(pki_usergroupexternal_id))
    {
    goto end; //Numeric
    }
    }

    // usergroupexternal_request->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupexternal_requestJSON, "sUsergroupexternalName");
    if (!s_usergroupexternal_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroupexternal_name))
    {
    goto end; //String
    }

    // usergroupexternal_request->s_usergroupexternal_id
    cJSON *s_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_requestJSON, "sUsergroupexternalID");
    if (!s_usergroupexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroupexternal_id))
    {
    goto end; //String
    }


    usergroupexternal_request_local_var = usergroupexternal_request_create (
        pki_usergroupexternal_id ? pki_usergroupexternal_id->valuedouble : 0,
        strdup(s_usergroupexternal_name->valuestring),
        strdup(s_usergroupexternal_id->valuestring)
        );

    return usergroupexternal_request_local_var;
end:
    return NULL;

}
