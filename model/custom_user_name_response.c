#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_user_name_response.h"



static custom_user_name_response_t *custom_user_name_response_create_internal(
    char *s_contacttitle_name_x,
    char *s_user_lastname,
    char *s_user_firstname,
    char *s_user_jobtitle
    ) {
    custom_user_name_response_t *custom_user_name_response_local_var = malloc(sizeof(custom_user_name_response_t));
    if (!custom_user_name_response_local_var) {
        return NULL;
    }
    memset(custom_user_name_response_local_var, 0, sizeof(custom_user_name_response_t));
    custom_user_name_response_local_var->_library_owned = 1;
    custom_user_name_response_local_var->s_contacttitle_name_x = s_contacttitle_name_x;
    custom_user_name_response_local_var->s_user_lastname = s_user_lastname;
    custom_user_name_response_local_var->s_user_firstname = s_user_firstname;
    custom_user_name_response_local_var->s_user_jobtitle = s_user_jobtitle;
    return custom_user_name_response_local_var;
}

__attribute__((deprecated)) custom_user_name_response_t *custom_user_name_response_create(
    char *s_contacttitle_name_x,
    char *s_user_lastname,
    char *s_user_firstname,
    char *s_user_jobtitle
    ) {
    custom_user_name_response_t *result = custom_user_name_response_create_internal (
        s_contacttitle_name_x,
        s_user_lastname,
        s_user_firstname,
        s_user_jobtitle
        );
    if (!result) {
    }
    return result;
}

void custom_user_name_response_free(custom_user_name_response_t *custom_user_name_response) {
    if(NULL == custom_user_name_response){
        return ;
    }
    if(custom_user_name_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_user_name_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_user_name_response->s_contacttitle_name_x) {
        free(custom_user_name_response->s_contacttitle_name_x);
        custom_user_name_response->s_contacttitle_name_x = NULL;
    }
    if (custom_user_name_response->s_user_lastname) {
        free(custom_user_name_response->s_user_lastname);
        custom_user_name_response->s_user_lastname = NULL;
    }
    if (custom_user_name_response->s_user_firstname) {
        free(custom_user_name_response->s_user_firstname);
        custom_user_name_response->s_user_firstname = NULL;
    }
    if (custom_user_name_response->s_user_jobtitle) {
        free(custom_user_name_response->s_user_jobtitle);
        custom_user_name_response->s_user_jobtitle = NULL;
    }
    free(custom_user_name_response);
}

cJSON *custom_user_name_response_convertToJSON(custom_user_name_response_t *custom_user_name_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_user_name_response->s_contacttitle_name_x
    if(custom_user_name_response->s_contacttitle_name_x) {
    if(cJSON_AddStringToObject(item, "sContacttitleNameX", custom_user_name_response->s_contacttitle_name_x) == NULL) {
    goto fail; //String
    }
    }


    // custom_user_name_response->s_user_lastname
    if (!custom_user_name_response->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", custom_user_name_response->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // custom_user_name_response->s_user_firstname
    if (!custom_user_name_response->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", custom_user_name_response->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // custom_user_name_response->s_user_jobtitle
    if(custom_user_name_response->s_user_jobtitle) {
    if(cJSON_AddStringToObject(item, "sUserJobtitle", custom_user_name_response->s_user_jobtitle) == NULL) {
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

custom_user_name_response_t *custom_user_name_response_parseFromJSON(cJSON *custom_user_name_responseJSON){

    custom_user_name_response_t *custom_user_name_response_local_var = NULL;

    char *s_contacttitle_name_x_local_str = NULL;

    char *s_user_lastname_local_str = NULL;

    char *s_user_firstname_local_str = NULL;

    char *s_user_jobtitle_local_str = NULL;

    // custom_user_name_response->s_contacttitle_name_x
    cJSON *s_contacttitle_name_x = cJSON_GetObjectItemCaseSensitive(custom_user_name_responseJSON, "sContacttitleNameX");
    if (cJSON_IsNull(s_contacttitle_name_x)) {
        s_contacttitle_name_x = NULL;
    }
    if (s_contacttitle_name_x) { 
    if(!cJSON_IsString(s_contacttitle_name_x) && !cJSON_IsNull(s_contacttitle_name_x))
    {
    goto end; //String
    }
    }

    // custom_user_name_response->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(custom_user_name_responseJSON, "sUserLastname");
    if (cJSON_IsNull(s_user_lastname)) {
        s_user_lastname = NULL;
    }
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // custom_user_name_response->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(custom_user_name_responseJSON, "sUserFirstname");
    if (cJSON_IsNull(s_user_firstname)) {
        s_user_firstname = NULL;
    }
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // custom_user_name_response->s_user_jobtitle
    cJSON *s_user_jobtitle = cJSON_GetObjectItemCaseSensitive(custom_user_name_responseJSON, "sUserJobtitle");
    if (cJSON_IsNull(s_user_jobtitle)) {
        s_user_jobtitle = NULL;
    }
    if (s_user_jobtitle) { 
    if(!cJSON_IsString(s_user_jobtitle) && !cJSON_IsNull(s_user_jobtitle))
    {
    goto end; //String
    }
    }


    if (s_contacttitle_name_x && !cJSON_IsNull(s_contacttitle_name_x)) s_contacttitle_name_x_local_str = strdup(s_contacttitle_name_x->valuestring);
    if (s_user_lastname && !cJSON_IsNull(s_user_lastname)) s_user_lastname_local_str = strdup(s_user_lastname->valuestring);
    if (s_user_firstname && !cJSON_IsNull(s_user_firstname)) s_user_firstname_local_str = strdup(s_user_firstname->valuestring);
    if (s_user_jobtitle && !cJSON_IsNull(s_user_jobtitle)) s_user_jobtitle_local_str = strdup(s_user_jobtitle->valuestring);

    custom_user_name_response_local_var = custom_user_name_response_create_internal (
        s_contacttitle_name_x_local_str,
        s_user_lastname_local_str,
        s_user_firstname_local_str,
        s_user_jobtitle_local_str
        );

    if (!custom_user_name_response_local_var) {
        goto end;
    }

    return custom_user_name_response_local_var;
end:
    if (s_contacttitle_name_x_local_str) {
        free(s_contacttitle_name_x_local_str);
        s_contacttitle_name_x_local_str = NULL;
    }
    if (s_user_lastname_local_str) {
        free(s_user_lastname_local_str);
        s_user_lastname_local_str = NULL;
    }
    if (s_user_firstname_local_str) {
        free(s_user_firstname_local_str);
        s_user_firstname_local_str = NULL;
    }
    if (s_user_jobtitle_local_str) {
        free(s_user_jobtitle_local_str);
        s_user_jobtitle_local_str = NULL;
    }
    return NULL;

}
