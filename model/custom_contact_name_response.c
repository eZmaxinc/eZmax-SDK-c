#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_contact_name_response.h"



custom_contact_name_response_t *custom_contact_name_response_create(
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company
    ) {
    custom_contact_name_response_t *custom_contact_name_response_local_var = malloc(sizeof(custom_contact_name_response_t));
    if (!custom_contact_name_response_local_var) {
        return NULL;
    }
    custom_contact_name_response_local_var->s_contact_firstname = s_contact_firstname;
    custom_contact_name_response_local_var->s_contact_lastname = s_contact_lastname;
    custom_contact_name_response_local_var->s_contact_company = s_contact_company;

    return custom_contact_name_response_local_var;
}


void custom_contact_name_response_free(custom_contact_name_response_t *custom_contact_name_response) {
    if(NULL == custom_contact_name_response){
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

    // custom_contact_name_response->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(custom_contact_name_responseJSON, "sContactFirstname");
    if (s_contact_firstname) { 
    if(!cJSON_IsString(s_contact_firstname) && !cJSON_IsNull(s_contact_firstname))
    {
    goto end; //String
    }
    }

    // custom_contact_name_response->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(custom_contact_name_responseJSON, "sContactLastname");
    if (s_contact_lastname) { 
    if(!cJSON_IsString(s_contact_lastname) && !cJSON_IsNull(s_contact_lastname))
    {
    goto end; //String
    }
    }

    // custom_contact_name_response->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(custom_contact_name_responseJSON, "sContactCompany");
    if (s_contact_company) { 
    if(!cJSON_IsString(s_contact_company) && !cJSON_IsNull(s_contact_company))
    {
    goto end; //String
    }
    }


    custom_contact_name_response_local_var = custom_contact_name_response_create (
        s_contact_firstname && !cJSON_IsNull(s_contact_firstname) ? strdup(s_contact_firstname->valuestring) : NULL,
        s_contact_lastname && !cJSON_IsNull(s_contact_lastname) ? strdup(s_contact_lastname->valuestring) : NULL,
        s_contact_company && !cJSON_IsNull(s_contact_company) ? strdup(s_contact_company->valuestring) : NULL
        );

    return custom_contact_name_response_local_var;
end:
    return NULL;

}
