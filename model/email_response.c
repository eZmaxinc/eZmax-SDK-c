#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_response.h"



static email_response_t *email_response_create_internal(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
    ) {
    email_response_t *email_response_local_var = malloc(sizeof(email_response_t));
    if (!email_response_local_var) {
        return NULL;
    }
    email_response_local_var->pki_email_id = pki_email_id;
    email_response_local_var->fki_emailtype_id = fki_emailtype_id;
    email_response_local_var->s_email_address = s_email_address;

    email_response_local_var->_library_owned = 1;
    return email_response_local_var;
}

__attribute__((deprecated)) email_response_t *email_response_create(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
    ) {
    return email_response_create_internal (
        pki_email_id,
        fki_emailtype_id,
        s_email_address
        );
}

void email_response_free(email_response_t *email_response) {
    if(NULL == email_response){
        return ;
    }
    if(email_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "email_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (email_response->s_email_address) {
        free(email_response->s_email_address);
        email_response->s_email_address = NULL;
    }
    free(email_response);
}

cJSON *email_response_convertToJSON(email_response_t *email_response) {
    cJSON *item = cJSON_CreateObject();

    // email_response->pki_email_id
    if (!email_response->pki_email_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEmailID", email_response->pki_email_id) == NULL) {
    goto fail; //Numeric
    }


    // email_response->fki_emailtype_id
    if (!email_response->fki_emailtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEmailtypeID", email_response->fki_emailtype_id) == NULL) {
    goto fail; //Numeric
    }


    // email_response->s_email_address
    if (!email_response->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", email_response->s_email_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

email_response_t *email_response_parseFromJSON(cJSON *email_responseJSON){

    email_response_t *email_response_local_var = NULL;

    // email_response->pki_email_id
    cJSON *pki_email_id = cJSON_GetObjectItemCaseSensitive(email_responseJSON, "pkiEmailID");
    if (cJSON_IsNull(pki_email_id)) {
        pki_email_id = NULL;
    }
    if (!pki_email_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_email_id))
    {
    goto end; //Numeric
    }

    // email_response->fki_emailtype_id
    cJSON *fki_emailtype_id = cJSON_GetObjectItemCaseSensitive(email_responseJSON, "fkiEmailtypeID");
    if (cJSON_IsNull(fki_emailtype_id)) {
        fki_emailtype_id = NULL;
    }
    if (!fki_emailtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_emailtype_id))
    {
    goto end; //Numeric
    }

    // email_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(email_responseJSON, "sEmailAddress");
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


    email_response_local_var = email_response_create_internal (
        pki_email_id->valuedouble,
        fki_emailtype_id->valuedouble,
        strdup(s_email_address->valuestring)
        );

    return email_response_local_var;
end:
    return NULL;

}
