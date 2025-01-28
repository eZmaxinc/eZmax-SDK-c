#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldertransmission_signer_response.h"



static custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response_create_internal(
    int fki_user_id,
    char *s_contact_firstname,
    char *s_contact_lastname
    ) {
    custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response_local_var = malloc(sizeof(custom_ezsignfoldertransmission_signer_response_t));
    if (!custom_ezsignfoldertransmission_signer_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldertransmission_signer_response_local_var->fki_user_id = fki_user_id;
    custom_ezsignfoldertransmission_signer_response_local_var->s_contact_firstname = s_contact_firstname;
    custom_ezsignfoldertransmission_signer_response_local_var->s_contact_lastname = s_contact_lastname;

    custom_ezsignfoldertransmission_signer_response_local_var->_library_owned = 1;
    return custom_ezsignfoldertransmission_signer_response_local_var;
}

__attribute__((deprecated)) custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response_create(
    int fki_user_id,
    char *s_contact_firstname,
    char *s_contact_lastname
    ) {
    return custom_ezsignfoldertransmission_signer_response_create_internal (
        fki_user_id,
        s_contact_firstname,
        s_contact_lastname
        );
}

void custom_ezsignfoldertransmission_signer_response_free(custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response) {
    if(NULL == custom_ezsignfoldertransmission_signer_response){
        return ;
    }
    if(custom_ezsignfoldertransmission_signer_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfoldertransmission_signer_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldertransmission_signer_response->s_contact_firstname) {
        free(custom_ezsignfoldertransmission_signer_response->s_contact_firstname);
        custom_ezsignfoldertransmission_signer_response->s_contact_firstname = NULL;
    }
    if (custom_ezsignfoldertransmission_signer_response->s_contact_lastname) {
        free(custom_ezsignfoldertransmission_signer_response->s_contact_lastname);
        custom_ezsignfoldertransmission_signer_response->s_contact_lastname = NULL;
    }
    free(custom_ezsignfoldertransmission_signer_response);
}

cJSON *custom_ezsignfoldertransmission_signer_response_convertToJSON(custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldertransmission_signer_response->fki_user_id
    if(custom_ezsignfoldertransmission_signer_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", custom_ezsignfoldertransmission_signer_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfoldertransmission_signer_response->s_contact_firstname
    if (!custom_ezsignfoldertransmission_signer_response->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", custom_ezsignfoldertransmission_signer_response->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfoldertransmission_signer_response->s_contact_lastname
    if (!custom_ezsignfoldertransmission_signer_response->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", custom_ezsignfoldertransmission_signer_response->s_contact_lastname) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response_parseFromJSON(cJSON *custom_ezsignfoldertransmission_signer_responseJSON){

    custom_ezsignfoldertransmission_signer_response_t *custom_ezsignfoldertransmission_signer_response_local_var = NULL;

    // custom_ezsignfoldertransmission_signer_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_signer_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignfoldertransmission_signer_response->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_signer_responseJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // custom_ezsignfoldertransmission_signer_response->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_signer_responseJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }


    custom_ezsignfoldertransmission_signer_response_local_var = custom_ezsignfoldertransmission_signer_response_create_internal (
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring)
        );

    return custom_ezsignfoldertransmission_signer_response_local_var;
end:
    return NULL;

}
