#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_request_compound.h"



static email_request_compound_t *email_request_compound_create_internal(
    int *pki_email_id,
    int *fki_emailtype_id,
    char *s_email_address
    ) {
    email_request_compound_t *email_request_compound_local_var = malloc(sizeof(email_request_compound_t));
    if (!email_request_compound_local_var) {
        return NULL;
    }
    memset(email_request_compound_local_var, 0, sizeof(email_request_compound_t));
    email_request_compound_local_var->_library_owned = 1;
    email_request_compound_local_var->pki_email_id = pki_email_id;
    email_request_compound_local_var->fki_emailtype_id = fki_emailtype_id;
    email_request_compound_local_var->s_email_address = s_email_address;
    return email_request_compound_local_var;
}

__attribute__((deprecated)) email_request_compound_t *email_request_compound_create(
    int *pki_email_id,
    int *fki_emailtype_id,
    char *s_email_address
    ) {
    int *pki_email_id_copy = NULL;
    if (pki_email_id) {
        pki_email_id_copy = malloc(sizeof(int));
        if (pki_email_id_copy) *pki_email_id_copy = *pki_email_id;
    }
    int *fki_emailtype_id_copy = NULL;
    if (fki_emailtype_id) {
        fki_emailtype_id_copy = malloc(sizeof(int));
        if (fki_emailtype_id_copy) *fki_emailtype_id_copy = *fki_emailtype_id;
    }
    email_request_compound_t *result = email_request_compound_create_internal (
        pki_email_id_copy,
        fki_emailtype_id_copy,
        s_email_address
        );
    if (!result) {
        free(pki_email_id_copy);
        free(fki_emailtype_id_copy);
    }
    return result;
}

void email_request_compound_free(email_request_compound_t *email_request_compound) {
    if(NULL == email_request_compound){
        return ;
    }
    if(email_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "email_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (email_request_compound->pki_email_id) {
        free(email_request_compound->pki_email_id);
        email_request_compound->pki_email_id = NULL;
    }
    if (email_request_compound->fki_emailtype_id) {
        free(email_request_compound->fki_emailtype_id);
        email_request_compound->fki_emailtype_id = NULL;
    }
    if (email_request_compound->s_email_address) {
        free(email_request_compound->s_email_address);
        email_request_compound->s_email_address = NULL;
    }
    free(email_request_compound);
}

cJSON *email_request_compound_convertToJSON(email_request_compound_t *email_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // email_request_compound->pki_email_id
    if(email_request_compound->pki_email_id) {
    if(cJSON_AddNumberToObject(item, "pkiEmailID", *email_request_compound->pki_email_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // email_request_compound->fki_emailtype_id
    if (!email_request_compound->fki_emailtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEmailtypeID", *email_request_compound->fki_emailtype_id) == NULL) {
    goto fail; //Numeric
    }


    // email_request_compound->s_email_address
    if (!email_request_compound->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", email_request_compound->s_email_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

email_request_compound_t *email_request_compound_parseFromJSON(cJSON *email_request_compoundJSON){

    email_request_compound_t *email_request_compound_local_var = NULL;

    // define the local variable for email_request_compound->pki_email_id
    int *pki_email_id_local_var = NULL;

    // define the local variable for email_request_compound->fki_emailtype_id
    int *fki_emailtype_id_local_var = NULL;

    char *s_email_address_local_str = NULL;

    // email_request_compound->pki_email_id
    cJSON *pki_email_id = cJSON_GetObjectItemCaseSensitive(email_request_compoundJSON, "pkiEmailID");
    if (cJSON_IsNull(pki_email_id)) {
        pki_email_id = NULL;
    }
    if (pki_email_id) { 
    if(!cJSON_IsNumber(pki_email_id))
    {
    goto end; //Numeric
    }
    pki_email_id_local_var = malloc(sizeof(int));
    if(!pki_email_id_local_var)
    {
        goto end;
    }
    *pki_email_id_local_var = pki_email_id->valuedouble;
    }

    // email_request_compound->fki_emailtype_id
    cJSON *fki_emailtype_id = cJSON_GetObjectItemCaseSensitive(email_request_compoundJSON, "fkiEmailtypeID");
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
    fki_emailtype_id_local_var = malloc(sizeof(int));
    if(!fki_emailtype_id_local_var)
    {
        goto end;
    }
    *fki_emailtype_id_local_var = fki_emailtype_id->valuedouble;

    // email_request_compound->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(email_request_compoundJSON, "sEmailAddress");
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


    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);

    email_request_compound_local_var = email_request_compound_create_internal (
        pki_email_id_local_var,
        fki_emailtype_id_local_var,
        s_email_address_local_str
        );

    if (!email_request_compound_local_var) {
        goto end;
    }

    return email_request_compound_local_var;
end:
    if (pki_email_id_local_var) {
        free(pki_email_id_local_var);
        pki_email_id_local_var = NULL;
    }
    if (fki_emailtype_id_local_var) {
        free(fki_emailtype_id_local_var);
        fki_emailtype_id_local_var = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    return NULL;

}
