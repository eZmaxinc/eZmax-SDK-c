#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfolderezsigntemplatepublic_signer_response.h"



static custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response_create_internal(
    int *fki_user_id,
    int *fki_ezsignsignergroup_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_ezsignsignergroup_description_x
    ) {
    custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response_local_var = malloc(sizeof(custom_ezsignfolderezsigntemplatepublic_signer_response_t));
    if (!custom_ezsignfolderezsigntemplatepublic_signer_response_local_var) {
        return NULL;
    }
    memset(custom_ezsignfolderezsigntemplatepublic_signer_response_local_var, 0, sizeof(custom_ezsignfolderezsigntemplatepublic_signer_response_t));
    custom_ezsignfolderezsigntemplatepublic_signer_response_local_var->_library_owned = 1;
    custom_ezsignfolderezsigntemplatepublic_signer_response_local_var->fki_user_id = fki_user_id;
    custom_ezsignfolderezsigntemplatepublic_signer_response_local_var->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    custom_ezsignfolderezsigntemplatepublic_signer_response_local_var->s_contact_firstname = s_contact_firstname;
    custom_ezsignfolderezsigntemplatepublic_signer_response_local_var->s_contact_lastname = s_contact_lastname;
    custom_ezsignfolderezsigntemplatepublic_signer_response_local_var->s_ezsignsignergroup_description_x = s_ezsignsignergroup_description_x;
    return custom_ezsignfolderezsigntemplatepublic_signer_response_local_var;
}

__attribute__((deprecated)) custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response_create(
    int *fki_user_id,
    int *fki_ezsignsignergroup_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_ezsignsignergroup_description_x
    ) {
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_ezsignsignergroup_id_copy = NULL;
    if (fki_ezsignsignergroup_id) {
        fki_ezsignsignergroup_id_copy = malloc(sizeof(int));
        if (fki_ezsignsignergroup_id_copy) *fki_ezsignsignergroup_id_copy = *fki_ezsignsignergroup_id;
    }
    custom_ezsignfolderezsigntemplatepublic_signer_response_t *result = custom_ezsignfolderezsigntemplatepublic_signer_response_create_internal (
        fki_user_id_copy,
        fki_ezsignsignergroup_id_copy,
        s_contact_firstname,
        s_contact_lastname,
        s_ezsignsignergroup_description_x
        );
    if (!result) {
        free(fki_user_id_copy);
        free(fki_ezsignsignergroup_id_copy);
    }
    return result;
}

void custom_ezsignfolderezsigntemplatepublic_signer_response_free(custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response) {
    if(NULL == custom_ezsignfolderezsigntemplatepublic_signer_response){
        return ;
    }
    if(custom_ezsignfolderezsigntemplatepublic_signer_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfolderezsigntemplatepublic_signer_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id) {
        free(custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id);
        custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id = NULL;
    }
    if (custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id) {
        free(custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id);
        custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id = NULL;
    }
    if (custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_firstname) {
        free(custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_firstname);
        custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_firstname = NULL;
    }
    if (custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_lastname) {
        free(custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_lastname);
        custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_lastname = NULL;
    }
    if (custom_ezsignfolderezsigntemplatepublic_signer_response->s_ezsignsignergroup_description_x) {
        free(custom_ezsignfolderezsigntemplatepublic_signer_response->s_ezsignsignergroup_description_x);
        custom_ezsignfolderezsigntemplatepublic_signer_response->s_ezsignsignergroup_description_x = NULL;
    }
    free(custom_ezsignfolderezsigntemplatepublic_signer_response);
}

cJSON *custom_ezsignfolderezsigntemplatepublic_signer_response_convertToJSON(custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id
    if(custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id
    if(custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignergroupID", *custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_firstname
    if(custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_firstname) {
    if(cJSON_AddStringToObject(item, "sContactFirstname", custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_firstname) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_lastname
    if(custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_lastname) {
    if(cJSON_AddStringToObject(item, "sContactLastname", custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_lastname) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignfolderezsigntemplatepublic_signer_response->s_ezsignsignergroup_description_x
    if(custom_ezsignfolderezsigntemplatepublic_signer_response->s_ezsignsignergroup_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsignsignergroupDescriptionX", custom_ezsignfolderezsigntemplatepublic_signer_response->s_ezsignsignergroup_description_x) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response_parseFromJSON(cJSON *custom_ezsignfolderezsigntemplatepublic_signer_responseJSON){

    custom_ezsignfolderezsigntemplatepublic_signer_response_t *custom_ezsignfolderezsigntemplatepublic_signer_response_local_var = NULL;

    // define the local variable for custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id
    int *fki_ezsignsignergroup_id_local_var = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_lastname_local_str = NULL;

    char *s_ezsignsignergroup_description_x_local_str = NULL;

    // custom_ezsignfolderezsigntemplatepublic_signer_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_signer_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // custom_ezsignfolderezsigntemplatepublic_signer_response->fki_ezsignsignergroup_id
    cJSON *fki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_signer_responseJSON, "fkiEzsignsignergroupID");
    if (cJSON_IsNull(fki_ezsignsignergroup_id)) {
        fki_ezsignsignergroup_id = NULL;
    }
    if (fki_ezsignsignergroup_id) { 
    if(!cJSON_IsNumber(fki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }
    fki_ezsignsignergroup_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignsignergroup_id_local_var)
    {
        goto end;
    }
    *fki_ezsignsignergroup_id_local_var = fki_ezsignsignergroup_id->valuedouble;
    }

    // custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_signer_responseJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (s_contact_firstname) { 
    if(!cJSON_IsString(s_contact_firstname) && !cJSON_IsNull(s_contact_firstname))
    {
    goto end; //String
    }
    }

    // custom_ezsignfolderezsigntemplatepublic_signer_response->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_signer_responseJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (s_contact_lastname) { 
    if(!cJSON_IsString(s_contact_lastname) && !cJSON_IsNull(s_contact_lastname))
    {
    goto end; //String
    }
    }

    // custom_ezsignfolderezsigntemplatepublic_signer_response->s_ezsignsignergroup_description_x
    cJSON *s_ezsignsignergroup_description_x = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_signer_responseJSON, "sEzsignsignergroupDescriptionX");
    if (cJSON_IsNull(s_ezsignsignergroup_description_x)) {
        s_ezsignsignergroup_description_x = NULL;
    }
    if (s_ezsignsignergroup_description_x) { 
    if(!cJSON_IsString(s_ezsignsignergroup_description_x) && !cJSON_IsNull(s_ezsignsignergroup_description_x))
    {
    goto end; //String
    }
    }


    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);
    if (s_ezsignsignergroup_description_x && !cJSON_IsNull(s_ezsignsignergroup_description_x)) s_ezsignsignergroup_description_x_local_str = strdup(s_ezsignsignergroup_description_x->valuestring);

    custom_ezsignfolderezsigntemplatepublic_signer_response_local_var = custom_ezsignfolderezsigntemplatepublic_signer_response_create_internal (
        fki_user_id_local_var,
        fki_ezsignsignergroup_id_local_var,
        s_contact_firstname_local_str,
        s_contact_lastname_local_str,
        s_ezsignsignergroup_description_x_local_str
        );

    if (!custom_ezsignfolderezsigntemplatepublic_signer_response_local_var) {
        goto end;
    }

    return custom_ezsignfolderezsigntemplatepublic_signer_response_local_var;
end:
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_ezsignsignergroup_id_local_var) {
        free(fki_ezsignsignergroup_id_local_var);
        fki_ezsignsignergroup_id_local_var = NULL;
    }
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (s_ezsignsignergroup_description_x_local_str) {
        free(s_ezsignsignergroup_description_x_local_str);
        s_ezsignsignergroup_description_x_local_str = NULL;
    }
    return NULL;

}
