#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_list_element.h"


char* user_list_element_e_user_type_ToString(ezmax_api_definition__full_user_list_element__e e_user_type) {
    char* e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Employee", "EzsignUser", "Normal" };
    return e_user_typeArray[e_user_type];
}

ezmax_api_definition__full_user_list_element__e user_list_element_e_user_type_FromString(char* e_user_type){
    int stringToReturn = 0;
    char *e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Employee", "EzsignUser", "Normal" };
    size_t sizeofArray = sizeof(e_user_typeArray) / sizeof(e_user_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_type, e_user_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* user_list_element_e_user_origin_ToString(ezmax_api_definition__full_user_list_element__e e_user_origin) {
    char* e_user_originArray[] =  { "NULL", "BuiltIn", "External" };
    return e_user_originArray[e_user_origin];
}

ezmax_api_definition__full_user_list_element__e user_list_element_e_user_origin_FromString(char* e_user_origin){
    int stringToReturn = 0;
    char *e_user_originArray[] =  { "NULL", "BuiltIn", "External" };
    size_t sizeofArray = sizeof(e_user_originArray) / sizeof(e_user_originArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_origin, e_user_originArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* user_list_element_e_user_ezsignaccess_ToString(ezmax_api_definition__full_user_list_element__e e_user_ezsignaccess) {
    char* e_user_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    return e_user_ezsignaccessArray[e_user_ezsignaccess];
}

ezmax_api_definition__full_user_list_element__e user_list_element_e_user_ezsignaccess_FromString(char* e_user_ezsignaccess){
    int stringToReturn = 0;
    char *e_user_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    size_t sizeofArray = sizeof(e_user_ezsignaccessArray) / sizeof(e_user_ezsignaccessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_ezsignaccess, e_user_ezsignaccessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_list_element_t *user_list_element_create(
    int pki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    int b_user_isactive,
    field_e_user_type_t *e_user_type,
    field_e_user_origin_t *e_user_origin,
    field_e_user_ezsignaccess_t *e_user_ezsignaccess,
    char *dt_user_ezsignprepaidexpiration,
    char *s_email_address,
    char *s_user_jobtitle
    ) {
    user_list_element_t *user_list_element_local_var = malloc(sizeof(user_list_element_t));
    if (!user_list_element_local_var) {
        return NULL;
    }
    user_list_element_local_var->pki_user_id = pki_user_id;
    user_list_element_local_var->s_user_firstname = s_user_firstname;
    user_list_element_local_var->s_user_lastname = s_user_lastname;
    user_list_element_local_var->s_user_loginname = s_user_loginname;
    user_list_element_local_var->b_user_isactive = b_user_isactive;
    user_list_element_local_var->e_user_type = e_user_type;
    user_list_element_local_var->e_user_origin = e_user_origin;
    user_list_element_local_var->e_user_ezsignaccess = e_user_ezsignaccess;
    user_list_element_local_var->dt_user_ezsignprepaidexpiration = dt_user_ezsignprepaidexpiration;
    user_list_element_local_var->s_email_address = s_email_address;
    user_list_element_local_var->s_user_jobtitle = s_user_jobtitle;

    return user_list_element_local_var;
}


void user_list_element_free(user_list_element_t *user_list_element) {
    if(NULL == user_list_element){
        return ;
    }
    listEntry_t *listEntry;
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
    if (user_list_element->e_user_type) {
        field_e_user_type_free(user_list_element->e_user_type);
        user_list_element->e_user_type = NULL;
    }
    if (user_list_element->e_user_origin) {
        field_e_user_origin_free(user_list_element->e_user_origin);
        user_list_element->e_user_origin = NULL;
    }
    if (user_list_element->e_user_ezsignaccess) {
        field_e_user_ezsignaccess_free(user_list_element->e_user_ezsignaccess);
        user_list_element->e_user_ezsignaccess = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiUserID", user_list_element->pki_user_id) == NULL) {
    goto fail; //Numeric
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
    if(cJSON_AddBoolToObject(item, "bUserIsactive", user_list_element->b_user_isactive) == NULL) {
    goto fail; //Bool
    }


    // user_list_element->e_user_type
    if (ezmax_api_definition__full_user_list_element__NULL == user_list_element->e_user_type) {
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
    if (ezmax_api_definition__full_user_list_element__NULL == user_list_element->e_user_origin) {
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
    if (ezmax_api_definition__full_user_list_element__NULL == user_list_element->e_user_ezsignaccess) {
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

    // define the local variable for user_list_element->e_user_type
    field_e_user_type_t *e_user_type_local_nonprim = NULL;

    // define the local variable for user_list_element->e_user_origin
    field_e_user_origin_t *e_user_origin_local_nonprim = NULL;

    // define the local variable for user_list_element->e_user_ezsignaccess
    field_e_user_ezsignaccess_t *e_user_ezsignaccess_local_nonprim = NULL;

    // user_list_element->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // user_list_element->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // user_list_element->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // user_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // user_list_element->b_user_isactive
    cJSON *b_user_isactive = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "bUserIsactive");
    if (!b_user_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_isactive))
    {
    goto end; //Bool
    }

    // user_list_element->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "eUserType");
    if (!e_user_type) {
        goto end;
    }

    
    e_user_type_local_nonprim = field_e_user_type_parseFromJSON(e_user_type); //custom

    // user_list_element->e_user_origin
    cJSON *e_user_origin = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "eUserOrigin");
    if (!e_user_origin) {
        goto end;
    }

    
    e_user_origin_local_nonprim = field_e_user_origin_parseFromJSON(e_user_origin); //custom

    // user_list_element->e_user_ezsignaccess
    cJSON *e_user_ezsignaccess = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "eUserEzsignaccess");
    if (!e_user_ezsignaccess) {
        goto end;
    }

    
    e_user_ezsignaccess_local_nonprim = field_e_user_ezsignaccess_parseFromJSON(e_user_ezsignaccess); //custom

    // user_list_element->dt_user_ezsignprepaidexpiration
    cJSON *dt_user_ezsignprepaidexpiration = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "dtUserEzsignprepaidexpiration");
    if (dt_user_ezsignprepaidexpiration) { 
    if(!cJSON_IsString(dt_user_ezsignprepaidexpiration) && !cJSON_IsNull(dt_user_ezsignprepaidexpiration))
    {
    goto end; //String
    }
    }

    // user_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }

    // user_list_element->s_user_jobtitle
    cJSON *s_user_jobtitle = cJSON_GetObjectItemCaseSensitive(user_list_elementJSON, "sUserJobtitle");
    if (s_user_jobtitle) { 
    if(!cJSON_IsString(s_user_jobtitle) && !cJSON_IsNull(s_user_jobtitle))
    {
    goto end; //String
    }
    }


    user_list_element_local_var = user_list_element_create (
        pki_user_id->valuedouble,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        b_user_isactive->valueint,
        e_user_type_local_nonprim,
        e_user_origin_local_nonprim,
        e_user_ezsignaccess_local_nonprim,
        dt_user_ezsignprepaidexpiration && !cJSON_IsNull(dt_user_ezsignprepaidexpiration) ? strdup(dt_user_ezsignprepaidexpiration->valuestring) : NULL,
        strdup(s_email_address->valuestring),
        s_user_jobtitle && !cJSON_IsNull(s_user_jobtitle) ? strdup(s_user_jobtitle->valuestring) : NULL
        );

    return user_list_element_local_var;
end:
    if (e_user_type_local_nonprim) {
        field_e_user_type_free(e_user_type_local_nonprim);
        e_user_type_local_nonprim = NULL;
    }
    if (e_user_origin_local_nonprim) {
        field_e_user_origin_free(e_user_origin_local_nonprim);
        e_user_origin_local_nonprim = NULL;
    }
    if (e_user_ezsignaccess_local_nonprim) {
        field_e_user_ezsignaccess_free(e_user_ezsignaccess_local_nonprim);
        e_user_ezsignaccess_local_nonprim = NULL;
    }
    return NULL;

}
