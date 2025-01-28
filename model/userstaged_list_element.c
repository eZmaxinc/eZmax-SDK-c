#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_list_element.h"



static userstaged_list_element_t *userstaged_list_element_create_internal(
    int pki_userstaged_id,
    char *s_email_address,
    char *s_userstaged_firstname,
    char *s_userstaged_lastname,
    char *s_userstaged_externalid
    ) {
    userstaged_list_element_t *userstaged_list_element_local_var = malloc(sizeof(userstaged_list_element_t));
    if (!userstaged_list_element_local_var) {
        return NULL;
    }
    userstaged_list_element_local_var->pki_userstaged_id = pki_userstaged_id;
    userstaged_list_element_local_var->s_email_address = s_email_address;
    userstaged_list_element_local_var->s_userstaged_firstname = s_userstaged_firstname;
    userstaged_list_element_local_var->s_userstaged_lastname = s_userstaged_lastname;
    userstaged_list_element_local_var->s_userstaged_externalid = s_userstaged_externalid;

    userstaged_list_element_local_var->_library_owned = 1;
    return userstaged_list_element_local_var;
}

__attribute__((deprecated)) userstaged_list_element_t *userstaged_list_element_create(
    int pki_userstaged_id,
    char *s_email_address,
    char *s_userstaged_firstname,
    char *s_userstaged_lastname,
    char *s_userstaged_externalid
    ) {
    return userstaged_list_element_create_internal (
        pki_userstaged_id,
        s_email_address,
        s_userstaged_firstname,
        s_userstaged_lastname,
        s_userstaged_externalid
        );
}

void userstaged_list_element_free(userstaged_list_element_t *userstaged_list_element) {
    if(NULL == userstaged_list_element){
        return ;
    }
    if(userstaged_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userstaged_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_list_element->s_email_address) {
        free(userstaged_list_element->s_email_address);
        userstaged_list_element->s_email_address = NULL;
    }
    if (userstaged_list_element->s_userstaged_firstname) {
        free(userstaged_list_element->s_userstaged_firstname);
        userstaged_list_element->s_userstaged_firstname = NULL;
    }
    if (userstaged_list_element->s_userstaged_lastname) {
        free(userstaged_list_element->s_userstaged_lastname);
        userstaged_list_element->s_userstaged_lastname = NULL;
    }
    if (userstaged_list_element->s_userstaged_externalid) {
        free(userstaged_list_element->s_userstaged_externalid);
        userstaged_list_element->s_userstaged_externalid = NULL;
    }
    free(userstaged_list_element);
}

cJSON *userstaged_list_element_convertToJSON(userstaged_list_element_t *userstaged_list_element) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_list_element->pki_userstaged_id
    if (!userstaged_list_element->pki_userstaged_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserstagedID", userstaged_list_element->pki_userstaged_id) == NULL) {
    goto fail; //Numeric
    }


    // userstaged_list_element->s_email_address
    if (!userstaged_list_element->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", userstaged_list_element->s_email_address) == NULL) {
    goto fail; //String
    }


    // userstaged_list_element->s_userstaged_firstname
    if (!userstaged_list_element->s_userstaged_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedFirstname", userstaged_list_element->s_userstaged_firstname) == NULL) {
    goto fail; //String
    }


    // userstaged_list_element->s_userstaged_lastname
    if (!userstaged_list_element->s_userstaged_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedLastname", userstaged_list_element->s_userstaged_lastname) == NULL) {
    goto fail; //String
    }


    // userstaged_list_element->s_userstaged_externalid
    if (!userstaged_list_element->s_userstaged_externalid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedExternalid", userstaged_list_element->s_userstaged_externalid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userstaged_list_element_t *userstaged_list_element_parseFromJSON(cJSON *userstaged_list_elementJSON){

    userstaged_list_element_t *userstaged_list_element_local_var = NULL;

    // userstaged_list_element->pki_userstaged_id
    cJSON *pki_userstaged_id = cJSON_GetObjectItemCaseSensitive(userstaged_list_elementJSON, "pkiUserstagedID");
    if (cJSON_IsNull(pki_userstaged_id)) {
        pki_userstaged_id = NULL;
    }
    if (!pki_userstaged_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_userstaged_id))
    {
    goto end; //Numeric
    }

    // userstaged_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(userstaged_list_elementJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }

    // userstaged_list_element->s_userstaged_firstname
    cJSON *s_userstaged_firstname = cJSON_GetObjectItemCaseSensitive(userstaged_list_elementJSON, "sUserstagedFirstname");
    if (cJSON_IsNull(s_userstaged_firstname)) {
        s_userstaged_firstname = NULL;
    }
    if (!s_userstaged_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userstaged_firstname))
    {
    goto end; //String
    }

    // userstaged_list_element->s_userstaged_lastname
    cJSON *s_userstaged_lastname = cJSON_GetObjectItemCaseSensitive(userstaged_list_elementJSON, "sUserstagedLastname");
    if (cJSON_IsNull(s_userstaged_lastname)) {
        s_userstaged_lastname = NULL;
    }
    if (!s_userstaged_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userstaged_lastname))
    {
    goto end; //String
    }

    // userstaged_list_element->s_userstaged_externalid
    cJSON *s_userstaged_externalid = cJSON_GetObjectItemCaseSensitive(userstaged_list_elementJSON, "sUserstagedExternalid");
    if (cJSON_IsNull(s_userstaged_externalid)) {
        s_userstaged_externalid = NULL;
    }
    if (!s_userstaged_externalid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userstaged_externalid))
    {
    goto end; //String
    }


    userstaged_list_element_local_var = userstaged_list_element_create_internal (
        pki_userstaged_id->valuedouble,
        strdup(s_email_address->valuestring),
        strdup(s_userstaged_firstname->valuestring),
        strdup(s_userstaged_lastname->valuestring),
        strdup(s_userstaged_externalid->valuestring)
        );

    return userstaged_list_element_local_var;
end:
    return NULL;

}
