#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_request_compound.h"



email_request_compound_t *email_request_compound_create(
    int fki_emailtype_id,
    char *s_email_address
    ) {
    email_request_compound_t *email_request_compound_local_var = malloc(sizeof(email_request_compound_t));
    if (!email_request_compound_local_var) {
        return NULL;
    }
    email_request_compound_local_var->fki_emailtype_id = fki_emailtype_id;
    email_request_compound_local_var->s_email_address = s_email_address;

    return email_request_compound_local_var;
}


void email_request_compound_free(email_request_compound_t *email_request_compound) {
    if(NULL == email_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (email_request_compound->s_email_address) {
        free(email_request_compound->s_email_address);
        email_request_compound->s_email_address = NULL;
    }
    free(email_request_compound);
}

cJSON *email_request_compound_convertToJSON(email_request_compound_t *email_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // email_request_compound->fki_emailtype_id
    if (!email_request_compound->fki_emailtype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEmailtypeID", email_request_compound->fki_emailtype_id) == NULL) {
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

    // email_request_compound->fki_emailtype_id
    cJSON *fki_emailtype_id = cJSON_GetObjectItemCaseSensitive(email_request_compoundJSON, "fkiEmailtypeID");
    if (!fki_emailtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_emailtype_id))
    {
    goto end; //Numeric
    }

    // email_request_compound->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(email_request_compoundJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }


    email_request_compound_local_var = email_request_compound_create (
        fki_emailtype_id->valuedouble,
        strdup(s_email_address->valuestring)
        );

    return email_request_compound_local_var;
end:
    return NULL;

}
