#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_response.h"



static userstaged_response_t *userstaged_response_create_internal(
    int *pki_userstaged_id,
    int *fki_email_id,
    char *s_email_address,
    char *s_userstaged_firstname,
    char *s_userstaged_lastname,
    char *s_userstaged_externalid
    ) {
    userstaged_response_t *userstaged_response_local_var = malloc(sizeof(userstaged_response_t));
    if (!userstaged_response_local_var) {
        return NULL;
    }
    memset(userstaged_response_local_var, 0, sizeof(userstaged_response_t));
    userstaged_response_local_var->_library_owned = 1;
    userstaged_response_local_var->pki_userstaged_id = pki_userstaged_id;
    userstaged_response_local_var->fki_email_id = fki_email_id;
    userstaged_response_local_var->s_email_address = s_email_address;
    userstaged_response_local_var->s_userstaged_firstname = s_userstaged_firstname;
    userstaged_response_local_var->s_userstaged_lastname = s_userstaged_lastname;
    userstaged_response_local_var->s_userstaged_externalid = s_userstaged_externalid;
    return userstaged_response_local_var;
}

__attribute__((deprecated)) userstaged_response_t *userstaged_response_create(
    int *pki_userstaged_id,
    int *fki_email_id,
    char *s_email_address,
    char *s_userstaged_firstname,
    char *s_userstaged_lastname,
    char *s_userstaged_externalid
    ) {
    int *pki_userstaged_id_copy = NULL;
    if (pki_userstaged_id) {
        pki_userstaged_id_copy = malloc(sizeof(int));
        if (pki_userstaged_id_copy) *pki_userstaged_id_copy = *pki_userstaged_id;
    }
    int *fki_email_id_copy = NULL;
    if (fki_email_id) {
        fki_email_id_copy = malloc(sizeof(int));
        if (fki_email_id_copy) *fki_email_id_copy = *fki_email_id;
    }
    userstaged_response_t *result = userstaged_response_create_internal (
        pki_userstaged_id_copy,
        fki_email_id_copy,
        s_email_address,
        s_userstaged_firstname,
        s_userstaged_lastname,
        s_userstaged_externalid
        );
    if (!result) {
        free(pki_userstaged_id_copy);
        free(fki_email_id_copy);
    }
    return result;
}

void userstaged_response_free(userstaged_response_t *userstaged_response) {
    if(NULL == userstaged_response){
        return ;
    }
    if(userstaged_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userstaged_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_response->pki_userstaged_id) {
        free(userstaged_response->pki_userstaged_id);
        userstaged_response->pki_userstaged_id = NULL;
    }
    if (userstaged_response->fki_email_id) {
        free(userstaged_response->fki_email_id);
        userstaged_response->fki_email_id = NULL;
    }
    if (userstaged_response->s_email_address) {
        free(userstaged_response->s_email_address);
        userstaged_response->s_email_address = NULL;
    }
    if (userstaged_response->s_userstaged_firstname) {
        free(userstaged_response->s_userstaged_firstname);
        userstaged_response->s_userstaged_firstname = NULL;
    }
    if (userstaged_response->s_userstaged_lastname) {
        free(userstaged_response->s_userstaged_lastname);
        userstaged_response->s_userstaged_lastname = NULL;
    }
    if (userstaged_response->s_userstaged_externalid) {
        free(userstaged_response->s_userstaged_externalid);
        userstaged_response->s_userstaged_externalid = NULL;
    }
    free(userstaged_response);
}

cJSON *userstaged_response_convertToJSON(userstaged_response_t *userstaged_response) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_response->pki_userstaged_id
    if (!userstaged_response->pki_userstaged_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserstagedID", *userstaged_response->pki_userstaged_id) == NULL) {
    goto fail; //Numeric
    }


    // userstaged_response->fki_email_id
    if (!userstaged_response->fki_email_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEmailID", *userstaged_response->fki_email_id) == NULL) {
    goto fail; //Numeric
    }


    // userstaged_response->s_email_address
    if (!userstaged_response->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", userstaged_response->s_email_address) == NULL) {
    goto fail; //String
    }


    // userstaged_response->s_userstaged_firstname
    if (!userstaged_response->s_userstaged_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedFirstname", userstaged_response->s_userstaged_firstname) == NULL) {
    goto fail; //String
    }


    // userstaged_response->s_userstaged_lastname
    if (!userstaged_response->s_userstaged_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedLastname", userstaged_response->s_userstaged_lastname) == NULL) {
    goto fail; //String
    }


    // userstaged_response->s_userstaged_externalid
    if (!userstaged_response->s_userstaged_externalid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedExternalid", userstaged_response->s_userstaged_externalid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userstaged_response_t *userstaged_response_parseFromJSON(cJSON *userstaged_responseJSON){

    userstaged_response_t *userstaged_response_local_var = NULL;

    // define the local variable for userstaged_response->pki_userstaged_id
    int *pki_userstaged_id_local_var = NULL;

    // define the local variable for userstaged_response->fki_email_id
    int *fki_email_id_local_var = NULL;

    char *s_email_address_local_str = NULL;

    char *s_userstaged_firstname_local_str = NULL;

    char *s_userstaged_lastname_local_str = NULL;

    char *s_userstaged_externalid_local_str = NULL;

    // userstaged_response->pki_userstaged_id
    cJSON *pki_userstaged_id = cJSON_GetObjectItemCaseSensitive(userstaged_responseJSON, "pkiUserstagedID");
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
    pki_userstaged_id_local_var = malloc(sizeof(int));
    if(!pki_userstaged_id_local_var)
    {
        goto end;
    }
    *pki_userstaged_id_local_var = pki_userstaged_id->valuedouble;

    // userstaged_response->fki_email_id
    cJSON *fki_email_id = cJSON_GetObjectItemCaseSensitive(userstaged_responseJSON, "fkiEmailID");
    if (cJSON_IsNull(fki_email_id)) {
        fki_email_id = NULL;
    }
    if (!fki_email_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_email_id))
    {
    goto end; //Numeric
    }
    fki_email_id_local_var = malloc(sizeof(int));
    if(!fki_email_id_local_var)
    {
        goto end;
    }
    *fki_email_id_local_var = fki_email_id->valuedouble;

    // userstaged_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(userstaged_responseJSON, "sEmailAddress");
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

    // userstaged_response->s_userstaged_firstname
    cJSON *s_userstaged_firstname = cJSON_GetObjectItemCaseSensitive(userstaged_responseJSON, "sUserstagedFirstname");
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

    // userstaged_response->s_userstaged_lastname
    cJSON *s_userstaged_lastname = cJSON_GetObjectItemCaseSensitive(userstaged_responseJSON, "sUserstagedLastname");
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

    // userstaged_response->s_userstaged_externalid
    cJSON *s_userstaged_externalid = cJSON_GetObjectItemCaseSensitive(userstaged_responseJSON, "sUserstagedExternalid");
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


    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_userstaged_firstname && !cJSON_IsNull(s_userstaged_firstname)) s_userstaged_firstname_local_str = strdup(s_userstaged_firstname->valuestring);
    if (s_userstaged_lastname && !cJSON_IsNull(s_userstaged_lastname)) s_userstaged_lastname_local_str = strdup(s_userstaged_lastname->valuestring);
    if (s_userstaged_externalid && !cJSON_IsNull(s_userstaged_externalid)) s_userstaged_externalid_local_str = strdup(s_userstaged_externalid->valuestring);

    userstaged_response_local_var = userstaged_response_create_internal (
        pki_userstaged_id_local_var,
        fki_email_id_local_var,
        s_email_address_local_str,
        s_userstaged_firstname_local_str,
        s_userstaged_lastname_local_str,
        s_userstaged_externalid_local_str
        );

    if (!userstaged_response_local_var) {
        goto end;
    }

    return userstaged_response_local_var;
end:
    if (pki_userstaged_id_local_var) {
        free(pki_userstaged_id_local_var);
        pki_userstaged_id_local_var = NULL;
    }
    if (fki_email_id_local_var) {
        free(fki_email_id_local_var);
        fki_email_id_local_var = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    if (s_userstaged_firstname_local_str) {
        free(s_userstaged_firstname_local_str);
        s_userstaged_firstname_local_str = NULL;
    }
    if (s_userstaged_lastname_local_str) {
        free(s_userstaged_lastname_local_str);
        s_userstaged_lastname_local_str = NULL;
    }
    if (s_userstaged_externalid_local_str) {
        free(s_userstaged_externalid_local_str);
        s_userstaged_externalid_local_str = NULL;
    }
    return NULL;

}
