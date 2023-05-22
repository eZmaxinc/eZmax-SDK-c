#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_response_compound.h"



userstaged_response_compound_t *userstaged_response_compound_create(
    int pki_userstaged_id,
    int fki_email_id,
    char *s_userstaged_firstname,
    char *s_userstaged_lastname,
    char *s_userstaged_externalid
    ) {
    userstaged_response_compound_t *userstaged_response_compound_local_var = malloc(sizeof(userstaged_response_compound_t));
    if (!userstaged_response_compound_local_var) {
        return NULL;
    }
    userstaged_response_compound_local_var->pki_userstaged_id = pki_userstaged_id;
    userstaged_response_compound_local_var->fki_email_id = fki_email_id;
    userstaged_response_compound_local_var->s_userstaged_firstname = s_userstaged_firstname;
    userstaged_response_compound_local_var->s_userstaged_lastname = s_userstaged_lastname;
    userstaged_response_compound_local_var->s_userstaged_externalid = s_userstaged_externalid;

    return userstaged_response_compound_local_var;
}


void userstaged_response_compound_free(userstaged_response_compound_t *userstaged_response_compound) {
    if(NULL == userstaged_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_response_compound->s_userstaged_firstname) {
        free(userstaged_response_compound->s_userstaged_firstname);
        userstaged_response_compound->s_userstaged_firstname = NULL;
    }
    if (userstaged_response_compound->s_userstaged_lastname) {
        free(userstaged_response_compound->s_userstaged_lastname);
        userstaged_response_compound->s_userstaged_lastname = NULL;
    }
    if (userstaged_response_compound->s_userstaged_externalid) {
        free(userstaged_response_compound->s_userstaged_externalid);
        userstaged_response_compound->s_userstaged_externalid = NULL;
    }
    free(userstaged_response_compound);
}

cJSON *userstaged_response_compound_convertToJSON(userstaged_response_compound_t *userstaged_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_response_compound->pki_userstaged_id
    if (!userstaged_response_compound->pki_userstaged_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserstagedID", userstaged_response_compound->pki_userstaged_id) == NULL) {
    goto fail; //Numeric
    }


    // userstaged_response_compound->fki_email_id
    if (!userstaged_response_compound->fki_email_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEmailID", userstaged_response_compound->fki_email_id) == NULL) {
    goto fail; //Numeric
    }


    // userstaged_response_compound->s_userstaged_firstname
    if (!userstaged_response_compound->s_userstaged_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedFirstname", userstaged_response_compound->s_userstaged_firstname) == NULL) {
    goto fail; //String
    }


    // userstaged_response_compound->s_userstaged_lastname
    if (!userstaged_response_compound->s_userstaged_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedLastname", userstaged_response_compound->s_userstaged_lastname) == NULL) {
    goto fail; //String
    }


    // userstaged_response_compound->s_userstaged_externalid
    if (!userstaged_response_compound->s_userstaged_externalid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserstagedExternalid", userstaged_response_compound->s_userstaged_externalid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userstaged_response_compound_t *userstaged_response_compound_parseFromJSON(cJSON *userstaged_response_compoundJSON){

    userstaged_response_compound_t *userstaged_response_compound_local_var = NULL;

    // userstaged_response_compound->pki_userstaged_id
    cJSON *pki_userstaged_id = cJSON_GetObjectItemCaseSensitive(userstaged_response_compoundJSON, "pkiUserstagedID");
    if (!pki_userstaged_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_userstaged_id))
    {
    goto end; //Numeric
    }

    // userstaged_response_compound->fki_email_id
    cJSON *fki_email_id = cJSON_GetObjectItemCaseSensitive(userstaged_response_compoundJSON, "fkiEmailID");
    if (!fki_email_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_email_id))
    {
    goto end; //Numeric
    }

    // userstaged_response_compound->s_userstaged_firstname
    cJSON *s_userstaged_firstname = cJSON_GetObjectItemCaseSensitive(userstaged_response_compoundJSON, "sUserstagedFirstname");
    if (!s_userstaged_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userstaged_firstname))
    {
    goto end; //String
    }

    // userstaged_response_compound->s_userstaged_lastname
    cJSON *s_userstaged_lastname = cJSON_GetObjectItemCaseSensitive(userstaged_response_compoundJSON, "sUserstagedLastname");
    if (!s_userstaged_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userstaged_lastname))
    {
    goto end; //String
    }

    // userstaged_response_compound->s_userstaged_externalid
    cJSON *s_userstaged_externalid = cJSON_GetObjectItemCaseSensitive(userstaged_response_compoundJSON, "sUserstagedExternalid");
    if (!s_userstaged_externalid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userstaged_externalid))
    {
    goto end; //String
    }


    userstaged_response_compound_local_var = userstaged_response_compound_create (
        pki_userstaged_id->valuedouble,
        fki_email_id->valuedouble,
        strdup(s_userstaged_firstname->valuestring),
        strdup(s_userstaged_lastname->valuestring),
        strdup(s_userstaged_externalid->valuestring)
        );

    return userstaged_response_compound_local_var;
end:
    return NULL;

}
