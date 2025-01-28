#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_response.h"



static usergroupexternal_response_t *usergroupexternal_response_create_internal(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
    ) {
    usergroupexternal_response_t *usergroupexternal_response_local_var = malloc(sizeof(usergroupexternal_response_t));
    if (!usergroupexternal_response_local_var) {
        return NULL;
    }
    usergroupexternal_response_local_var->pki_usergroupexternal_id = pki_usergroupexternal_id;
    usergroupexternal_response_local_var->s_usergroupexternal_name = s_usergroupexternal_name;
    usergroupexternal_response_local_var->s_usergroupexternal_id = s_usergroupexternal_id;

    usergroupexternal_response_local_var->_library_owned = 1;
    return usergroupexternal_response_local_var;
}

__attribute__((deprecated)) usergroupexternal_response_t *usergroupexternal_response_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
    ) {
    return usergroupexternal_response_create_internal (
        pki_usergroupexternal_id,
        s_usergroupexternal_name,
        s_usergroupexternal_id
        );
}

void usergroupexternal_response_free(usergroupexternal_response_t *usergroupexternal_response) {
    if(NULL == usergroupexternal_response){
        return ;
    }
    if(usergroupexternal_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_response->s_usergroupexternal_name) {
        free(usergroupexternal_response->s_usergroupexternal_name);
        usergroupexternal_response->s_usergroupexternal_name = NULL;
    }
    if (usergroupexternal_response->s_usergroupexternal_id) {
        free(usergroupexternal_response->s_usergroupexternal_id);
        usergroupexternal_response->s_usergroupexternal_id = NULL;
    }
    free(usergroupexternal_response);
}

cJSON *usergroupexternal_response_convertToJSON(usergroupexternal_response_t *usergroupexternal_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_response->pki_usergroupexternal_id
    if (!usergroupexternal_response->pki_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupexternalID", usergroupexternal_response->pki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternal_response->s_usergroupexternal_name
    if (!usergroupexternal_response->s_usergroupexternal_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupexternal_response->s_usergroupexternal_name) == NULL) {
    goto fail; //String
    }


    // usergroupexternal_response->s_usergroupexternal_id
    if (!usergroupexternal_response->s_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalID", usergroupexternal_response->s_usergroupexternal_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_response_t *usergroupexternal_response_parseFromJSON(cJSON *usergroupexternal_responseJSON){

    usergroupexternal_response_t *usergroupexternal_response_local_var = NULL;

    // usergroupexternal_response->pki_usergroupexternal_id
    cJSON *pki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_responseJSON, "pkiUsergroupexternalID");
    if (cJSON_IsNull(pki_usergroupexternal_id)) {
        pki_usergroupexternal_id = NULL;
    }
    if (!pki_usergroupexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupexternal_id))
    {
    goto end; //Numeric
    }

    // usergroupexternal_response->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupexternal_responseJSON, "sUsergroupexternalName");
    if (cJSON_IsNull(s_usergroupexternal_name)) {
        s_usergroupexternal_name = NULL;
    }
    if (!s_usergroupexternal_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroupexternal_name))
    {
    goto end; //String
    }

    // usergroupexternal_response->s_usergroupexternal_id
    cJSON *s_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_responseJSON, "sUsergroupexternalID");
    if (cJSON_IsNull(s_usergroupexternal_id)) {
        s_usergroupexternal_id = NULL;
    }
    if (!s_usergroupexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroupexternal_id))
    {
    goto end; //String
    }


    usergroupexternal_response_local_var = usergroupexternal_response_create_internal (
        pki_usergroupexternal_id->valuedouble,
        strdup(s_usergroupexternal_name->valuestring),
        strdup(s_usergroupexternal_id->valuestring)
        );

    return usergroupexternal_response_local_var;
end:
    return NULL;

}
