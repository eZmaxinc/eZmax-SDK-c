#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_list_element.h"



static user_list_element_t *user_list_element_create_internal(
    int *pki_user_id,
    int *fki_agent_id,
    int *fki_broker_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    int *b_user_isactive,
    int *b_user_suspended,
    ezmax_api_definition__full_field_e_user_type__e e_user_type,
    ezmax_api_definition__full_field_e_user_origin__e e_user_origin,
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess,
    char *dt_user_ezsignprepaidexpiration,
    char *s_email_address,
    char *s_user_jobtitle
    ) {
    user_list_element_t *user_list_element_local_var = malloc(sizeof(user_list_element_t));
    if (!user_list_element_local_var) {
        return NULL;
    }
    memset(user_list_element_local_var, 0, sizeof(user_list_element_t));
    user_list_element_local_var->_library_owned = 1;
    user_list_element_local_var->pki_user_id = pki_user_id;
    user_list_element_local_var->fki_agent_id = fki_agent_id;
    user_list_element_local_var->fki_broker_id = fki_broker_id;
    user_list_element_local_var->s_user_firstname = s_user_firstname;
    user_list_element_local_var->s_user_lastname = s_user_lastname;
    user_list_element_local_var->s_user_loginname = s_user_loginname;
    user_list_element_local_var->b_user_isactive = b_user_isactive;
    user_list_element_local_var->b_user_suspended = b_user_suspended;
    user_list_element_local_var->e_user_type = e_user_type;
    user_list_element_local_var->e_user_origin = e_user_origin;
    user_list_element_local_var->e_user_ezsignaccess = e_user_ezsignaccess;
    user_list_element_local_var->dt_user_ezsignprepaidexpiration = dt_user_ezsignprepaidexpiration;
    user_list_element_local_var->s_email_address = s_email_address;
    user_list_element_local_var->s_user_jobtitle = s_user_jobtitle;
    return user_list_element_local_var;
}

__attribute__((deprecated)) user_list_element_t *user_list_element_create(
    int *pki_user_id,
    int *fki_agent_id,
    int *fki_broker_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    int *b_user_isactive,
    int *b_user_suspended,
    ezmax_api_definition__full_field_e_user_type__e e_user_type,
    ezmax_api_definition__full_field_e_user_origin__e e_user_origin,
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess,
    char *dt_user_ezsignprepaidexpiration,
    char *s_email_address,
    char *s_user_jobtitle
    ) {
    int *pki_user_id_copy = NULL;
    if (pki_user_id) {
        pki_user_id_copy = malloc(sizeof(int));
        if (pki_user_id_copy) *pki_user_id_copy = *pki_user_id;
    }
    int *fki_agent_id_copy = NULL;
    if (fki_agent_id) {
        fki_agent_id_copy = malloc(sizeof(int));
        if (fki_agent_id_copy) *fki_agent_id_copy = *fki_agent_id;
    }
    int *fki_broker_id_copy = NULL;
    if (fki_broker_id) {
        fki_broker_id_copy = malloc(sizeof(int));
        if (fki_broker_id_copy) *fki_broker_id_copy = *fki_broker_id;
    }
    int *b_user_isactive_copy = NULL;
    if (b_user_isactive) {
        b_user_isactive_copy = malloc(sizeof(int));
        if (b_user_isactive_copy) *b_user_isactive_copy = *b_user_isactive;
    }
    int *b_user_suspended_copy = NULL;
    if (b_user_suspended) {
        b_user_suspended_copy = malloc(sizeof(int));
        if (b_user_suspended_copy) *b_user_suspended_copy = *b_user_suspended;
    }
    user_list_element_t *result = user_list_element_create_internal (
        pki_user_id_copy,
        fki_agent_id_copy,
        fki_broker_id_copy,
        s_user_firstname,
        s_user_lastname,
        s_user_loginname,
        b_user_isactive_copy,
        b_user_suspended_copy,
        e_user_type,
        e_user_origin,
        e_user_ezsignaccess,
        dt_user_ezsignprepaidexpiration,
        s_email_address,
        s_user_jobtitle
        );
    if (!result) {
        free(pki_user_id_copy);
        free(fki_agent_id_copy);
        free(fki_broker_id_copy);
        free(b_user_isactive_copy);
        free(b_user_suspended_copy);
    }
    return result;
}

void user_list_element_free(user_list_element_t *user_list_element) {
    if(NULL == user_list_element){
        return ;
    }
    if(user_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_list_element->pki_user_id) {
        free(user_list_element->pki_user_id);
        user_list_element->pki_user_id = NULL;
    }
    if (user_list_element->fki_agent_id) {
        free(user_list_element->fki_agent_id);
        user_list_element->fki_agent_id = NULL;
    }
    if (user_list_element->fki_broker_id) {
        free(user_list_element->fki_broker_id);
        user_list_element->fki_broker_id = NULL;
    }
    if (user_list_element->s_user_firstname) {
        free(user_list_element->s_user_firstname);
        user_list_element->s_user_firstname = NULL;
    }
    if (user_list_element->s_user_lastname) {
        free(user_list_element->s_user_lastname);
        user_list_element->s_user_lastname = NULL;
    }
    if (user_list_element->s_user_loginname) {
        free(user_list_element->s_user_loginname);
        user_list_element->s_user_loginname = NULL;
    }
    if (user_list_element->b_user_isactive) {
        free(user_list_element->b_user_isactive);
        user_list_element->b_user_isactive = NULL;
    }
    if (user_list_element->b_user_suspended) {
        free(user_list_element->b_user_suspended);
        user_list_element->b_user_suspended = NULL;
    }
    if (user_list_element->dt_user_ezsignprepaidexpiration) {
        free(user_list_element->dt_user_ezsignprepaidexpiration);
        user_list_element->dt_user_ezsignprepaidexpiration = NULL;
    }
    if (user_list_element->s_email_address) {
        free(user_list_element->s_email_address);
        user_list_element->s_email_address = NULL;
    }
    if (user_list_element->s_user_jobtitle) {
        free(user_list_element->s_user_jobtitle);
        user_list_element->s_user_jobtitle = NULL;
    }
    free(user_list_element);
}

cJSON *user_list_element_convertToJSON(user_list_element_t *user_list_element) {
    cJSON *item = cJSON_CreateObject();

    // user_list_element->pki_user_id
    if (!user_list_element->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", *user_list_element->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // user_list_element->fki_agent_id
    if(user_list_element->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", *user_list_element->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_list_element->fki_broker_id
    if(user_list_element->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", *user_list_element->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_list_element->s_user_firstname
    if (!user_list_element->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", user_list_element->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // user_list_element->s_user_lastname
    if (!user_list_element->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", user_list_element->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // user_list_element->s_user_loginname
    if (!user_list_element->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", user_list_element->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // user_list_element->b_user_isactive
    if (!user_list_element->b_user_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserIsactive", *user_list_element->b_user_isactive) == NULL) {
    goto fail; //Bool
    }


    // user_list_element->b_user_suspended
    if(user_list_element->b_user_suspended) {
    if(cJSON_AddBoolToObject(item, "bUserSuspended", *user_list_element->b_user_suspended) == NULL) {
    goto fail; //Bool
    }
    }


    // user_list_element->e_user_type
    if (ezmax_api_definition__full_field_e_user_type__NULL == user_list_element->e_user_type) {
        goto fail;
    }
    cJSON *e_user_type_local_JSON = field_e_user_type_convertToJSON(user_list_element->e_user_type);
    if(e_user_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserType", e_user_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_list_element->e_user_origin
    if (ezmax_api_definition__full_field_e_user_origin__NULL == user_list_element->e_user_origin) {
        goto fail;
    }
    cJSON *e_user_origin_local_JSON = field_e_user_origin_convertToJSON(user_list_element->e_user_origin);
    if(e_user_origin_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserOrigin", e_user_origin_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_list_element->e_user_ezsignaccess
    if (ezmax_api_definition__full_field_e_user_ezsignaccess__NULL == user_list_element->e_user_ezsignaccess) {
        goto fail;
    }
    cJSON *e_user_ezsignaccess_local_JSON = field_e_user_ezsignaccess_convertToJSON(user_list_element->e_user_ezsignaccess);
    if(e_user_ezsignaccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserEzsignaccess", e_user_ezsignaccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_list_element->dt_user_ezsignprepaidexpiration
    if(user_list_element->dt_user_ezsignprepaidexpiration) {
    if(cJSON_AddStringToObject(item, "dtUserEzsignprepaidexpiration", user_list_element->dt_user_ezsignprepaidexpiration) == NULL) {
    goto fail; //String
    }
    }


    // user_list_element->s_email_address
    if (!user_list_element->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", user_list_element->s_email_address) == NULL) {
    goto fail; //String
    }


    // user_list_element->s_user_jobtitle
    if(user_list_element->s_user_jobtitle) {
    if(cJSON_AddStringToObject(item, "sUserJobtitle", user_list_element->s_user_jobtitle) == NULL) {
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

user_list_element_t *user_list_element_parseFromJSON(cJSON *user_list_elementJSON){

    user_list_element_t *user_list_element_local_var = NULL;

    // define the local variable for user_list_element->pki_user_id
    int *pki_user_id_local_var = NULL;

    // define the local variable for user_list_element->fki_agent_id
    int *fki_agent_id_local_var = NULL;

    // define the local variable for user_list_element->fki_broker_id
    int *fki_broker_id_local_var = NULL;

    char *s_user_firstname_local_str = NULL;

    char *s_user_lastname_local_str = NULL;

    char *s_user_loginname_local_str = NULL;

    // define the local variable for user_list_element->b_user_isactive
    int *b_user_isactive_local_var = NULL;

    // define the local variable for user_list_element->b_user_suspended
    int *b_user_suspended_local_var = NULL;

    // define the local variable for user_list_element->e_user_type
    ezmax_api_definition__full_field_e_user_type__e e_user_type_local_nonprim = 0;

    // define the local variable for user_list_element->e_user_origin
    ezmax_api_definition__full_field_e_user_origin__e e_user_origin_local_nonprim = 0;

    // define the local variable for user_list_element->e_user_ezsignaccess
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess_local_nonprim = 0;

    char *dt_user_ezsignprepaidexpiration_local_str = NULL;

    char *s_email_address_local_str = NULL;

    char *s_user_jobtitle_local_str = NULL;

    // user_list_element->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "pkiUserID");
    if (cJSON_IsNull(pki_user_id)) {
        pki_user_id = NULL;
    }
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }
    pki_user_id_local_var = malloc(sizeof(int));
    if(!pki_user_id_local_var)
    {
        goto end;
    }
    *pki_user_id_local_var = pki_user_id->valuedouble;

    // user_list_element->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    fki_agent_id_local_var = malloc(sizeof(int));
    if(!fki_agent_id_local_var)
    {
        goto end;
    }
    *fki_agent_id_local_var = fki_agent_id->valuedouble;
    }

    // user_list_element->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    fki_broker_id_local_var = malloc(sizeof(int));
    if(!fki_broker_id_local_var)
    {
        goto end;
    }
    *fki_broker_id_local_var = fki_broker_id->valuedouble;
    }

    // user_list_element->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserFirstname");
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

    // user_list_element->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserLastname");
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

    // user_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserLoginname");
    if (cJSON_IsNull(s_user_loginname)) {
        s_user_loginname = NULL;
    }
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // user_list_element->b_user_isactive
    cJSON *b_user_isactive = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "bUserIsactive");
    if (cJSON_IsNull(b_user_isactive)) {
        b_user_isactive = NULL;
    }
    if (!b_user_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_isactive))
    {
    goto end; //Bool
    }
    b_user_isactive_local_var = malloc(sizeof(int));
    if(!b_user_isactive_local_var)
    {
        goto end;
    }
    *b_user_isactive_local_var = b_user_isactive->valueint;

    // user_list_element->b_user_suspended
    cJSON *b_user_suspended = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "bUserSuspended");
    if (cJSON_IsNull(b_user_suspended)) {
        b_user_suspended = NULL;
    }
    if (b_user_suspended) { 
    if(!cJSON_IsBool(b_user_suspended))
    {
    goto end; //Bool
    }
    b_user_suspended_local_var = malloc(sizeof(int));
    if(!b_user_suspended_local_var)
    {
        goto end;
    }
    *b_user_suspended_local_var = b_user_suspended->valueint;
    }

    // user_list_element->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "eUserType");
    if (cJSON_IsNull(e_user_type)) {
        e_user_type = NULL;
    }
    if (!e_user_type) {
        goto end;
    }

    
    e_user_type_local_nonprim = field_e_user_type_parseFromJSON(e_user_type); //custom

    // user_list_element->e_user_origin
    cJSON *e_user_origin = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "eUserOrigin");
    if (cJSON_IsNull(e_user_origin)) {
        e_user_origin = NULL;
    }
    if (!e_user_origin) {
        goto end;
    }

    
    e_user_origin_local_nonprim = field_e_user_origin_parseFromJSON(e_user_origin); //custom

    // user_list_element->e_user_ezsignaccess
    cJSON *e_user_ezsignaccess = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "eUserEzsignaccess");
    if (cJSON_IsNull(e_user_ezsignaccess)) {
        e_user_ezsignaccess = NULL;
    }
    if (!e_user_ezsignaccess) {
        goto end;
    }

    
    e_user_ezsignaccess_local_nonprim = field_e_user_ezsignaccess_parseFromJSON(e_user_ezsignaccess); //custom

    // user_list_element->dt_user_ezsignprepaidexpiration
    cJSON *dt_user_ezsignprepaidexpiration = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "dtUserEzsignprepaidexpiration");
    if (cJSON_IsNull(dt_user_ezsignprepaidexpiration)) {
        dt_user_ezsignprepaidexpiration = NULL;
    }
    if (dt_user_ezsignprepaidexpiration) { 
    if(!cJSON_IsString(dt_user_ezsignprepaidexpiration) && !cJSON_IsNull(dt_user_ezsignprepaidexpiration))
    {
    goto end; //String
    }
    }

    // user_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sEmailAddress");
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

    // user_list_element->s_user_jobtitle
    cJSON *s_user_jobtitle = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserJobtitle");
    if (cJSON_IsNull(s_user_jobtitle)) {
        s_user_jobtitle = NULL;
    }
    if (s_user_jobtitle) { 
    if(!cJSON_IsString(s_user_jobtitle) && !cJSON_IsNull(s_user_jobtitle))
    {
    goto end; //String
    }
    }


    if (s_user_firstname && !cJSON_IsNull(s_user_firstname)) s_user_firstname_local_str = strdup(s_user_firstname->valuestring);
    if (s_user_lastname && !cJSON_IsNull(s_user_lastname)) s_user_lastname_local_str = strdup(s_user_lastname->valuestring);
    if (s_user_loginname && !cJSON_IsNull(s_user_loginname)) s_user_loginname_local_str = strdup(s_user_loginname->valuestring);
    if (dt_user_ezsignprepaidexpiration && !cJSON_IsNull(dt_user_ezsignprepaidexpiration)) dt_user_ezsignprepaidexpiration_local_str = strdup(dt_user_ezsignprepaidexpiration->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_user_jobtitle && !cJSON_IsNull(s_user_jobtitle)) s_user_jobtitle_local_str = strdup(s_user_jobtitle->valuestring);

    user_list_element_local_var = user_list_element_create_internal (
        pki_user_id_local_var,
        fki_agent_id_local_var,
        fki_broker_id_local_var,
        s_user_firstname_local_str,
        s_user_lastname_local_str,
        s_user_loginname_local_str,
        b_user_isactive_local_var,
        b_user_suspended_local_var,
        e_user_type_local_nonprim,
        e_user_origin_local_nonprim,
        e_user_ezsignaccess_local_nonprim,
        dt_user_ezsignprepaidexpiration_local_str,
        s_email_address_local_str,
        s_user_jobtitle_local_str
        );

    if (!user_list_element_local_var) {
        goto end;
    }

    return user_list_element_local_var;
end:
    if (pki_user_id_local_var) {
        free(pki_user_id_local_var);
        pki_user_id_local_var = NULL;
    }
    if (fki_agent_id_local_var) {
        free(fki_agent_id_local_var);
        fki_agent_id_local_var = NULL;
    }
    if (fki_broker_id_local_var) {
        free(fki_broker_id_local_var);
        fki_broker_id_local_var = NULL;
    }
    if (s_user_firstname_local_str) {
        free(s_user_firstname_local_str);
        s_user_firstname_local_str = NULL;
    }
    if (s_user_lastname_local_str) {
        free(s_user_lastname_local_str);
        s_user_lastname_local_str = NULL;
    }
    if (s_user_loginname_local_str) {
        free(s_user_loginname_local_str);
        s_user_loginname_local_str = NULL;
    }
    if (b_user_isactive_local_var) {
        free(b_user_isactive_local_var);
        b_user_isactive_local_var = NULL;
    }
    if (b_user_suspended_local_var) {
        free(b_user_suspended_local_var);
        b_user_suspended_local_var = NULL;
    }
    if (e_user_type_local_nonprim) {
        e_user_type_local_nonprim = 0;
    }
    if (e_user_origin_local_nonprim) {
        e_user_origin_local_nonprim = 0;
    }
    if (e_user_ezsignaccess_local_nonprim) {
        e_user_ezsignaccess_local_nonprim = 0;
    }
    if (dt_user_ezsignprepaidexpiration_local_str) {
        free(dt_user_ezsignprepaidexpiration_local_str);
        dt_user_ezsignprepaidexpiration_local_str = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    if (s_user_jobtitle_local_str) {
        free(s_user_jobtitle_local_str);
        s_user_jobtitle_local_str = NULL;
    }
    return NULL;

}
