#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_list_element.h"



static usergroupexternal_list_element_t *usergroupexternal_list_element_create_internal(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
    ) {
    usergroupexternal_list_element_t *usergroupexternal_list_element_local_var = malloc(sizeof(usergroupexternal_list_element_t));
    if (!usergroupexternal_list_element_local_var) {
        return NULL;
    }
    usergroupexternal_list_element_local_var->pki_usergroupexternal_id = pki_usergroupexternal_id;
    usergroupexternal_list_element_local_var->s_usergroupexternal_name = s_usergroupexternal_name;
    usergroupexternal_list_element_local_var->s_usergroupexternal_id = s_usergroupexternal_id;

    usergroupexternal_list_element_local_var->_library_owned = 1;
    return usergroupexternal_list_element_local_var;
}

__attribute__((deprecated)) usergroupexternal_list_element_t *usergroupexternal_list_element_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
    ) {
    return usergroupexternal_list_element_create_internal (
        pki_usergroupexternal_id,
        s_usergroupexternal_name,
        s_usergroupexternal_id
        );
}

void usergroupexternal_list_element_free(usergroupexternal_list_element_t *usergroupexternal_list_element) {
    if(NULL == usergroupexternal_list_element){
        return ;
    }
    if(usergroupexternal_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_list_element->s_usergroupexternal_name) {
        free(usergroupexternal_list_element->s_usergroupexternal_name);
        usergroupexternal_list_element->s_usergroupexternal_name = NULL;
    }
    if (usergroupexternal_list_element->s_usergroupexternal_id) {
        free(usergroupexternal_list_element->s_usergroupexternal_id);
        usergroupexternal_list_element->s_usergroupexternal_id = NULL;
    }
    free(usergroupexternal_list_element);
}

cJSON *usergroupexternal_list_element_convertToJSON(usergroupexternal_list_element_t *usergroupexternal_list_element) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_list_element->pki_usergroupexternal_id
    if (!usergroupexternal_list_element->pki_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupexternalID", usergroupexternal_list_element->pki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternal_list_element->s_usergroupexternal_name
    if (!usergroupexternal_list_element->s_usergroupexternal_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupexternal_list_element->s_usergroupexternal_name) == NULL) {
    goto fail; //String
    }


    // usergroupexternal_list_element->s_usergroupexternal_id
    if (!usergroupexternal_list_element->s_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalID", usergroupexternal_list_element->s_usergroupexternal_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_list_element_t *usergroupexternal_list_element_parseFromJSON(cJSON *usergroupexternal_list_elementJSON){

    usergroupexternal_list_element_t *usergroupexternal_list_element_local_var = NULL;

    // usergroupexternal_list_element->pki_usergroupexternal_id
    cJSON *pki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_list_elementJSON, "pkiUsergroupexternalID");
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

    // usergroupexternal_list_element->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupexternal_list_elementJSON, "sUsergroupexternalName");
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

    // usergroupexternal_list_element->s_usergroupexternal_id
    cJSON *s_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_list_elementJSON, "sUsergroupexternalID");
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


    usergroupexternal_list_element_local_var = usergroupexternal_list_element_create_internal (
        pki_usergroupexternal_id->valuedouble,
        strdup(s_usergroupexternal_name->valuestring),
        strdup(s_usergroupexternal_id->valuestring)
        );

    return usergroupexternal_list_element_local_var;
end:
    return NULL;

}
