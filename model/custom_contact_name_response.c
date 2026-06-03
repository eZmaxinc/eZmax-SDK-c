#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_contact_name_response.h"



static custom_contact_name_response_t *custom_contact_name_response_create_internal(
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company
    ) {
    custom_contact_name_response_t *custom_contact_name_response_local_var = malloc(sizeof(custom_contact_name_response_t));
    if (!custom_contact_name_response_local_var) {
        return NULL;
    }
    memset(custom_contact_name_response_local_var, 0, sizeof(custom_contact_name_response_t));
    custom_contact_name_response_local_var->_library_owned = 1;
    custom_contact_name_response_local_var->s_contact_firstname = s_contact_firstname;
    custom_contact_name_response_local_var->s_contact_lastname = s_contact_lastname;
    custom_contact_name_response_local_var->s_contact_company = s_contact_company;
    return custom_contact_name_response_local_var;
}

__attribute__((deprecated)) custom_contact_name_response_t *custom_contact_name_response_create(
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company
    ) {
    custom_contact_name_response_t *result = custom_contact_name_response_create_internal (
        s_contact_firstname,
        s_contact_lastname,
        s_contact_company
        );
    if (!result) {
    }
    return result;
}

void custom_contact_name_response_free(custom_contact_name_response_t *custom_contact_name_response) {
    if(NULL == custom_contact_name_response){
        return ;
    }
    if(custom_contact_name_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_contact_name_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_contact_name_response->s_contact_firstname) {
        free(custom_contact_name_response->s_contact_firstname);
        custom_contact_name_response->s_contact_firstname = NULL;
    }
    if (custom_contact_name_response->s_contact_lastname) {
        free(custom_contact_name_response->s_contact_lastname);
        custom_contact_name_response->s_contact_lastname = NULL;
    }
    if (custom_contact_name_response->s_contact_company) {
        free(custom_contact_name_response->s_contact_company);
        custom_contact_name_response->s_contact_company = NULL;
    }
    free(custom_contact_name_response);
}

cJSON *custom_contact_name_response_convertToJSON(custom_contact_name_response_t *custom_contact_name_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_contact_name_response->s_contact_firstname
    if(custom_contact_name_response->s_contact_firstname) {
    if(cJSON_AddStringToObject(item, "sContactFirstname", custom_contact_name_response->s_contact_firstname) == NULL) {
    goto fail; //String
    }
    }


    // custom_contact_name_response->s_contact_lastname
    if(custom_contact_name_response->s_contact_lastname) {
    if(cJSON_AddStringToObject(item, "sContactLastname", custom_contact_name_response->s_contact_lastname) == NULL) {
    goto fail; //String
    }
    }


    // custom_contact_name_response->s_contact_company
    if(custom_contact_name_response->s_contact_company) {
    if(cJSON_AddStringToObject(item, "sContactCompany", custom_contact_name_response->s_contact_company) == NULL) {
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

custom_contact_name_response_t *custom_contact_name_response_parseFromJSON(cJSON *custom_contact_name_responseJSON){

    custom_contact_name_response_t *custom_contact_name_response_local_var = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_lastname_local_str = NULL;

    char *s_contact_company_local_str = NULL;

    // custom_contact_name_response->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(custom_contact_name_responseJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (s_contact_firstname) { 
    if(!cJSON_IsString(s_contact_firstname) && !cJSON_IsNull(s_contact_firstname))
    {
    goto end; //String
    }
    }

    // custom_contact_name_response->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(custom_contact_name_responseJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (s_contact_lastname) { 
    if(!cJSON_IsString(s_contact_lastname) && !cJSON_IsNull(s_contact_lastname))
    {
    goto end; //String
    }
    }

    // custom_contact_name_response->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(custom_contact_name_responseJSON, "sContactCompany");
    if (cJSON_IsNull(s_contact_company)) {
        s_contact_company = NULL;
    }
    if (s_contact_company) { 
    if(!cJSON_IsString(s_contact_company) && !cJSON_IsNull(s_contact_company))
    {
    goto end; //String
    }
    }


    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);
    if (s_contact_company && !cJSON_IsNull(s_contact_company)) s_contact_company_local_str = strdup(s_contact_company->valuestring);

    custom_contact_name_response_local_var = custom_contact_name_response_create_internal (
        s_contact_firstname_local_str,
        s_contact_lastname_local_str,
        s_contact_company_local_str
        );

    if (!custom_contact_name_response_local_var) {
        goto end;
    }

    return custom_contact_name_response_local_var;
end:
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (s_contact_company_local_str) {
        free(s_contact_company_local_str);
        s_contact_company_local_str = NULL;
    }
    return NULL;

}
