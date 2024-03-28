#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_autocomplete_element_response.h"



usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    int b_usergroupexternal_isactive
    ) {
    usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response_local_var = malloc(sizeof(usergroupexternal_autocomplete_element_response_t));
    if (!usergroupexternal_autocomplete_element_response_local_var) {
        return NULL;
    }
    usergroupexternal_autocomplete_element_response_local_var->pki_usergroupexternal_id = pki_usergroupexternal_id;
    usergroupexternal_autocomplete_element_response_local_var->s_usergroupexternal_name = s_usergroupexternal_name;
    usergroupexternal_autocomplete_element_response_local_var->b_usergroupexternal_isactive = b_usergroupexternal_isactive;

    return usergroupexternal_autocomplete_element_response_local_var;
}


void usergroupexternal_autocomplete_element_response_free(usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response) {
    if(NULL == usergroupexternal_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_autocomplete_element_response->s_usergroupexternal_name) {
        free(usergroupexternal_autocomplete_element_response->s_usergroupexternal_name);
        usergroupexternal_autocomplete_element_response->s_usergroupexternal_name = NULL;
    }
    free(usergroupexternal_autocomplete_element_response);
}

cJSON *usergroupexternal_autocomplete_element_response_convertToJSON(usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_autocomplete_element_response->pki_usergroupexternal_id
    if (!usergroupexternal_autocomplete_element_response->pki_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupexternalID", usergroupexternal_autocomplete_element_response->pki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternal_autocomplete_element_response->s_usergroupexternal_name
    if (!usergroupexternal_autocomplete_element_response->s_usergroupexternal_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupexternal_autocomplete_element_response->s_usergroupexternal_name) == NULL) {
    goto fail; //String
    }


    // usergroupexternal_autocomplete_element_response->b_usergroupexternal_isactive
    if (!usergroupexternal_autocomplete_element_response->b_usergroupexternal_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUsergroupexternalIsactive", usergroupexternal_autocomplete_element_response->b_usergroupexternal_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response_parseFromJSON(cJSON *usergroupexternal_autocomplete_element_responseJSON){

    usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response_local_var = NULL;

    // usergroupexternal_autocomplete_element_response->pki_usergroupexternal_id
    cJSON *pki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_autocomplete_element_responseJSON, "pkiUsergroupexternalID");
    if (!pki_usergroupexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupexternal_id))
    {
    goto end; //Numeric
    }

    // usergroupexternal_autocomplete_element_response->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupexternal_autocomplete_element_responseJSON, "sUsergroupexternalName");
    if (!s_usergroupexternal_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroupexternal_name))
    {
    goto end; //String
    }

    // usergroupexternal_autocomplete_element_response->b_usergroupexternal_isactive
    cJSON *b_usergroupexternal_isactive = cJSON_GetObjectItemCaseSensitive(usergroupexternal_autocomplete_element_responseJSON, "bUsergroupexternalIsactive");
    if (!b_usergroupexternal_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_usergroupexternal_isactive))
    {
    goto end; //Bool
    }


    usergroupexternal_autocomplete_element_response_local_var = usergroupexternal_autocomplete_element_response_create (
        pki_usergroupexternal_id->valuedouble,
        strdup(s_usergroupexternal_name->valuestring),
        b_usergroupexternal_isactive->valueint
        );

    return usergroupexternal_autocomplete_element_response_local_var;
end:
    return NULL;

}
