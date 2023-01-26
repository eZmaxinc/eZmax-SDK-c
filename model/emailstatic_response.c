#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "emailstatic_response.h"



emailstatic_response_t *emailstatic_response_create(
    int pki_emailstatic_id,
    char *s_emailstatic_address
    ) {
    emailstatic_response_t *emailstatic_response_local_var = malloc(sizeof(emailstatic_response_t));
    if (!emailstatic_response_local_var) {
        return NULL;
    }
    emailstatic_response_local_var->pki_emailstatic_id = pki_emailstatic_id;
    emailstatic_response_local_var->s_emailstatic_address = s_emailstatic_address;

    return emailstatic_response_local_var;
}


void emailstatic_response_free(emailstatic_response_t *emailstatic_response) {
    if(NULL == emailstatic_response){
        return ;
    }
    listEntry_t *listEntry;
    if (emailstatic_response->s_emailstatic_address) {
        free(emailstatic_response->s_emailstatic_address);
        emailstatic_response->s_emailstatic_address = NULL;
    }
    free(emailstatic_response);
}

cJSON *emailstatic_response_convertToJSON(emailstatic_response_t *emailstatic_response) {
    cJSON *item = cJSON_CreateObject();

    // emailstatic_response->pki_emailstatic_id
    if (!emailstatic_response->pki_emailstatic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEmailstaticID", emailstatic_response->pki_emailstatic_id) == NULL) {
    goto fail; //Numeric
    }


    // emailstatic_response->s_emailstatic_address
    if (!emailstatic_response->s_emailstatic_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailstaticAddress", emailstatic_response->s_emailstatic_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

emailstatic_response_t *emailstatic_response_parseFromJSON(cJSON *emailstatic_responseJSON){

    emailstatic_response_t *emailstatic_response_local_var = NULL;

    // emailstatic_response->pki_emailstatic_id
    cJSON *pki_emailstatic_id = cJSON_GetObjectItemCaseSensitive(emailstatic_responseJSON, "pkiEmailstaticID");
    if (!pki_emailstatic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_emailstatic_id))
    {
    goto end; //Numeric
    }

    // emailstatic_response->s_emailstatic_address
    cJSON *s_emailstatic_address = cJSON_GetObjectItemCaseSensitive(emailstatic_responseJSON, "sEmailstaticAddress");
    if (!s_emailstatic_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_emailstatic_address))
    {
    goto end; //String
    }


    emailstatic_response_local_var = emailstatic_response_create (
        pki_emailstatic_id->valuedouble,
        strdup(s_emailstatic_address->valuestring)
        );

    return emailstatic_response_local_var;
end:
    return NULL;

}
