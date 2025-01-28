#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_request.h"



static email_request_t *email_request_create_internal(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
    ) {
    email_request_t *email_request_local_var = malloc(sizeof(email_request_t));
    if (!email_request_local_var) {
        return NULL;
    }
    email_request_local_var->pki_email_id = pki_email_id;
    email_request_local_var->fki_emailtype_id = fki_emailtype_id;
    email_request_local_var->s_email_address = s_email_address;

    email_request_local_var->_library_owned = 1;
    return email_request_local_var;
}

__attribute__((deprecated)) email_request_t *email_request_create(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
    ) {
    return email_request_create_internal (
        pki_email_id,
        fki_emailtype_id,
        s_email_address
        );
}

void email_request_free(email_request_t *email_request) {
    if(NULL == email_request){
        return ;
    }
    if(email_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "email_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (email_request->s_email_address) {
        free(email_request->s_email_address);
        email_request->s_email_address = NULL;
    }
    free(email_request);
}

cJSON *email_request_convertToJSON(email_request_t *email_request) {
    cJSON *item = cJSON_CreateObject();

    // email_request->pki_email_id
    if(email_request->pki_email_id) {
    if(cJSON_AddNumberToObject(item, "pkiEmailID", email_request->pki_email_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // email_request->fki_emailtype_id
    if (!email_request->fki_emailtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEmailtypeID", email_request->fki_emailtype_id) == NULL) {
    goto fail; //Numeric
    }


    // email_request->s_email_address
    if (!email_request->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", email_request->s_email_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

email_request_t *email_request_parseFromJSON(cJSON *email_requestJSON){

    email_request_t *email_request_local_var = NULL;

    // email_request->pki_email_id
    cJSON *pki_email_id = cJSON_GetObjectItemCaseSensitive(email_requestJSON, "pkiEmailID");
    if (cJSON_IsNull(pki_email_id)) {
        pki_email_id = NULL;
    }
    if (pki_email_id) { 
    if(!cJSON_IsNumber(pki_email_id))
    {
    goto end; //Numeric
    }
    }

    // email_request->fki_emailtype_id
    cJSON *fki_emailtype_id = cJSON_GetObjectItemCaseSensitive(email_requestJSON, "fkiEmailtypeID");
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

    // email_request->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(email_requestJSON, "sEmailAddress");
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


    email_request_local_var = email_request_create_internal (
        pki_email_id ? pki_email_id->valuedouble : 0,
        fki_emailtype_id->valuedouble,
        strdup(s_email_address->valuestring)
        );

    return email_request_local_var;
end:
    return NULL;

}
