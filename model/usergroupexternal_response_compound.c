#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_response_compound.h"



static usergroupexternal_response_compound_t *usergroupexternal_response_compound_create_internal(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
    ) {
    usergroupexternal_response_compound_t *usergroupexternal_response_compound_local_var = malloc(sizeof(usergroupexternal_response_compound_t));
    if (!usergroupexternal_response_compound_local_var) {
        return NULL;
    }
    usergroupexternal_response_compound_local_var->pki_usergroupexternal_id = pki_usergroupexternal_id;
    usergroupexternal_response_compound_local_var->s_usergroupexternal_name = s_usergroupexternal_name;
    usergroupexternal_response_compound_local_var->s_usergroupexternal_id = s_usergroupexternal_id;

    usergroupexternal_response_compound_local_var->_library_owned = 1;
    return usergroupexternal_response_compound_local_var;
}

__attribute__((deprecated)) usergroupexternal_response_compound_t *usergroupexternal_response_compound_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
    ) {
    return usergroupexternal_response_compound_create_internal (
        pki_usergroupexternal_id,
        s_usergroupexternal_name,
        s_usergroupexternal_id
        );
}

void usergroupexternal_response_compound_free(usergroupexternal_response_compound_t *usergroupexternal_response_compound) {
    if(NULL == usergroupexternal_response_compound){
        return ;
    }
    if(usergroupexternal_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_response_compound->s_usergroupexternal_name) {
        free(usergroupexternal_response_compound->s_usergroupexternal_name);
        usergroupexternal_response_compound->s_usergroupexternal_name = NULL;
    }
    if (usergroupexternal_response_compound->s_usergroupexternal_id) {
        free(usergroupexternal_response_compound->s_usergroupexternal_id);
        usergroupexternal_response_compound->s_usergroupexternal_id = NULL;
    }
    free(usergroupexternal_response_compound);
}

cJSON *usergroupexternal_response_compound_convertToJSON(usergroupexternal_response_compound_t *usergroupexternal_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_response_compound->pki_usergroupexternal_id
    if (!usergroupexternal_response_compound->pki_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupexternalID", usergroupexternal_response_compound->pki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternal_response_compound->s_usergroupexternal_name
    if (!usergroupexternal_response_compound->s_usergroupexternal_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupexternal_response_compound->s_usergroupexternal_name) == NULL) {
    goto fail; //String
    }


    // usergroupexternal_response_compound->s_usergroupexternal_id
    if (!usergroupexternal_response_compound->s_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalID", usergroupexternal_response_compound->s_usergroupexternal_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_response_compound_t *usergroupexternal_response_compound_parseFromJSON(cJSON *usergroupexternal_response_compoundJSON){

    usergroupexternal_response_compound_t *usergroupexternal_response_compound_local_var = NULL;

    // usergroupexternal_response_compound->pki_usergroupexternal_id
    cJSON *pki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_response_compoundJSON, "pkiUsergroupexternalID");
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

    // usergroupexternal_response_compound->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupexternal_response_compoundJSON, "sUsergroupexternalName");
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

    // usergroupexternal_response_compound->s_usergroupexternal_id
    cJSON *s_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_response_compoundJSON, "sUsergroupexternalID");
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


    usergroupexternal_response_compound_local_var = usergroupexternal_response_compound_create_internal (
        pki_usergroupexternal_id->valuedouble,
        strdup(s_usergroupexternal_name->valuestring),
        strdup(s_usergroupexternal_id->valuestring)
        );

    return usergroupexternal_response_compound_local_var;
end:
    return NULL;

}
