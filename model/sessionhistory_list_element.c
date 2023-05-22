#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sessionhistory_list_element.h"


char* e_sessionhistory_endbysessionhistory_list_element_ToString(ezmax_api_definition__full_sessionhistory_list_element__e e_sessionhistory_endby) {
    char* e_sessionhistory_endbyArray[] =  { "NULL", "Decryption", "Hack", "Expired", "Hijack", "DoubleLogon", "Garbage", "Logoff", "BadAuth", "Locked", "Inactive", "InvalidUser", "BadUserType", "BadIP" };
	return e_sessionhistory_endbyArray[e_sessionhistory_endby];
}

ezmax_api_definition__full_sessionhistory_list_element__e e_sessionhistory_endbysessionhistory_list_element_FromString(char* e_sessionhistory_endby){
    int stringToReturn = 0;
    char *e_sessionhistory_endbyArray[] =  { "NULL", "Decryption", "Hack", "Expired", "Hijack", "DoubleLogon", "Garbage", "Logoff", "BadAuth", "Locked", "Inactive", "InvalidUser", "BadUserType", "BadIP" };
    size_t sizeofArray = sizeof(e_sessionhistory_endbyArray) / sizeof(e_sessionhistory_endbyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_sessionhistory_endby, e_sessionhistory_endbyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

sessionhistory_list_element_t *sessionhistory_list_element_create(
    int pki_sessionhistory_id,
    int fki_computer_id,
    int fki_user_id,
    char *dt_sessionhistory_firsthit,
    char *dt_sessionhistory_lasthit,
    field_e_sessionhistory_endby_t *e_sessionhistory_endby,
    char *s_computer_description,
    char *s_sessionhistory_duration,
    char *s_sessionhistory_ip,
    char *s_user_loginname
    ) {
    sessionhistory_list_element_t *sessionhistory_list_element_local_var = malloc(sizeof(sessionhistory_list_element_t));
    if (!sessionhistory_list_element_local_var) {
        return NULL;
    }
    sessionhistory_list_element_local_var->pki_sessionhistory_id = pki_sessionhistory_id;
    sessionhistory_list_element_local_var->fki_computer_id = fki_computer_id;
    sessionhistory_list_element_local_var->fki_user_id = fki_user_id;
    sessionhistory_list_element_local_var->dt_sessionhistory_firsthit = dt_sessionhistory_firsthit;
    sessionhistory_list_element_local_var->dt_sessionhistory_lasthit = dt_sessionhistory_lasthit;
    sessionhistory_list_element_local_var->e_sessionhistory_endby = e_sessionhistory_endby;
    sessionhistory_list_element_local_var->s_computer_description = s_computer_description;
    sessionhistory_list_element_local_var->s_sessionhistory_duration = s_sessionhistory_duration;
    sessionhistory_list_element_local_var->s_sessionhistory_ip = s_sessionhistory_ip;
    sessionhistory_list_element_local_var->s_user_loginname = s_user_loginname;

    return sessionhistory_list_element_local_var;
}


void sessionhistory_list_element_free(sessionhistory_list_element_t *sessionhistory_list_element) {
    if(NULL == sessionhistory_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (sessionhistory_list_element->dt_sessionhistory_firsthit) {
        free(sessionhistory_list_element->dt_sessionhistory_firsthit);
        sessionhistory_list_element->dt_sessionhistory_firsthit = NULL;
    }
    if (sessionhistory_list_element->dt_sessionhistory_lasthit) {
        free(sessionhistory_list_element->dt_sessionhistory_lasthit);
        sessionhistory_list_element->dt_sessionhistory_lasthit = NULL;
    }
    if (sessionhistory_list_element->e_sessionhistory_endby) {
        field_e_sessionhistory_endby_free(sessionhistory_list_element->e_sessionhistory_endby);
        sessionhistory_list_element->e_sessionhistory_endby = NULL;
    }
    if (sessionhistory_list_element->s_computer_description) {
        free(sessionhistory_list_element->s_computer_description);
        sessionhistory_list_element->s_computer_description = NULL;
    }
    if (sessionhistory_list_element->s_sessionhistory_duration) {
        free(sessionhistory_list_element->s_sessionhistory_duration);
        sessionhistory_list_element->s_sessionhistory_duration = NULL;
    }
    if (sessionhistory_list_element->s_sessionhistory_ip) {
        free(sessionhistory_list_element->s_sessionhistory_ip);
        sessionhistory_list_element->s_sessionhistory_ip = NULL;
    }
    if (sessionhistory_list_element->s_user_loginname) {
        free(sessionhistory_list_element->s_user_loginname);
        sessionhistory_list_element->s_user_loginname = NULL;
    }
    free(sessionhistory_list_element);
}

cJSON *sessionhistory_list_element_convertToJSON(sessionhistory_list_element_t *sessionhistory_list_element) {
    cJSON *item = cJSON_CreateObject();

    // sessionhistory_list_element->pki_sessionhistory_id
    if (!sessionhistory_list_element->pki_sessionhistory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSessionhistoryID", sessionhistory_list_element->pki_sessionhistory_id) == NULL) {
    goto fail; //Numeric
    }


    // sessionhistory_list_element->fki_computer_id
    if(sessionhistory_list_element->fki_computer_id) {
    if(cJSON_AddNumberToObject(item, "fkiComputerID", sessionhistory_list_element->fki_computer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // sessionhistory_list_element->fki_user_id
    if(sessionhistory_list_element->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", sessionhistory_list_element->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // sessionhistory_list_element->dt_sessionhistory_firsthit
    if (!sessionhistory_list_element->dt_sessionhistory_firsthit) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtSessionhistoryFirsthit", sessionhistory_list_element->dt_sessionhistory_firsthit) == NULL) {
    goto fail; //String
    }


    // sessionhistory_list_element->dt_sessionhistory_lasthit
    if (!sessionhistory_list_element->dt_sessionhistory_lasthit) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtSessionhistoryLasthit", sessionhistory_list_element->dt_sessionhistory_lasthit) == NULL) {
    goto fail; //String
    }


    // sessionhistory_list_element->e_sessionhistory_endby
    if (ezmax_api_definition__full_sessionhistory_list_element__NULL == sessionhistory_list_element->e_sessionhistory_endby) {
        goto fail;
    }
    cJSON *e_sessionhistory_endby_local_JSON = field_e_sessionhistory_endby_convertToJSON(sessionhistory_list_element->e_sessionhistory_endby);
    if(e_sessionhistory_endby_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSessionhistoryEndby", e_sessionhistory_endby_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // sessionhistory_list_element->s_computer_description
    if(sessionhistory_list_element->s_computer_description) {
    if(cJSON_AddStringToObject(item, "sComputerDescription", sessionhistory_list_element->s_computer_description) == NULL) {
    goto fail; //String
    }
    }


    // sessionhistory_list_element->s_sessionhistory_duration
    if (!sessionhistory_list_element->s_sessionhistory_duration) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSessionhistoryDuration", sessionhistory_list_element->s_sessionhistory_duration) == NULL) {
    goto fail; //String
    }


    // sessionhistory_list_element->s_sessionhistory_ip
    if (!sessionhistory_list_element->s_sessionhistory_ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSessionhistoryIP", sessionhistory_list_element->s_sessionhistory_ip) == NULL) {
    goto fail; //String
    }


    // sessionhistory_list_element->s_user_loginname
    if(sessionhistory_list_element->s_user_loginname) {
    if(cJSON_AddStringToObject(item, "sUserLoginname", sessionhistory_list_element->s_user_loginname) == NULL) {
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

sessionhistory_list_element_t *sessionhistory_list_element_parseFromJSON(cJSON *sessionhistory_list_elementJSON){

    sessionhistory_list_element_t *sessionhistory_list_element_local_var = NULL;

    // define the local variable for sessionhistory_list_element->e_sessionhistory_endby
    field_e_sessionhistory_endby_t *e_sessionhistory_endby_local_nonprim = NULL;

    // sessionhistory_list_element->pki_sessionhistory_id
    cJSON *pki_sessionhistory_id = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "pkiSessionhistoryID");
    if (!pki_sessionhistory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_sessionhistory_id))
    {
    goto end; //Numeric
    }

    // sessionhistory_list_element->fki_computer_id
    cJSON *fki_computer_id = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "fkiComputerID");
    if (fki_computer_id) { 
    if(!cJSON_IsNumber(fki_computer_id))
    {
    goto end; //Numeric
    }
    }

    // sessionhistory_list_element->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // sessionhistory_list_element->dt_sessionhistory_firsthit
    cJSON *dt_sessionhistory_firsthit = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "dtSessionhistoryFirsthit");
    if (!dt_sessionhistory_firsthit) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_sessionhistory_firsthit))
    {
    goto end; //String
    }

    // sessionhistory_list_element->dt_sessionhistory_lasthit
    cJSON *dt_sessionhistory_lasthit = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "dtSessionhistoryLasthit");
    if (!dt_sessionhistory_lasthit) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_sessionhistory_lasthit))
    {
    goto end; //String
    }

    // sessionhistory_list_element->e_sessionhistory_endby
    cJSON *e_sessionhistory_endby = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "eSessionhistoryEndby");
    if (!e_sessionhistory_endby) {
        goto end;
    }

    
    e_sessionhistory_endby_local_nonprim = field_e_sessionhistory_endby_parseFromJSON(e_sessionhistory_endby); //custom

    // sessionhistory_list_element->s_computer_description
    cJSON *s_computer_description = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "sComputerDescription");
    if (s_computer_description) { 
    if(!cJSON_IsString(s_computer_description) && !cJSON_IsNull(s_computer_description))
    {
    goto end; //String
    }
    }

    // sessionhistory_list_element->s_sessionhistory_duration
    cJSON *s_sessionhistory_duration = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "sSessionhistoryDuration");
    if (!s_sessionhistory_duration) {
        goto end;
    }

    
    if(!cJSON_IsString(s_sessionhistory_duration))
    {
    goto end; //String
    }

    // sessionhistory_list_element->s_sessionhistory_ip
    cJSON *s_sessionhistory_ip = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "sSessionhistoryIP");
    if (!s_sessionhistory_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(s_sessionhistory_ip))
    {
    goto end; //String
    }

    // sessionhistory_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(sessionhistory_list_elementJSON, "sUserLoginname");
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname) && !cJSON_IsNull(s_user_loginname))
    {
    goto end; //String
    }
    }


    sessionhistory_list_element_local_var = sessionhistory_list_element_create (
        pki_sessionhistory_id->valuedouble,
        fki_computer_id ? fki_computer_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(dt_sessionhistory_firsthit->valuestring),
        strdup(dt_sessionhistory_lasthit->valuestring),
        e_sessionhistory_endby_local_nonprim,
        s_computer_description && !cJSON_IsNull(s_computer_description) ? strdup(s_computer_description->valuestring) : NULL,
        strdup(s_sessionhistory_duration->valuestring),
        strdup(s_sessionhistory_ip->valuestring),
        s_user_loginname && !cJSON_IsNull(s_user_loginname) ? strdup(s_user_loginname->valuestring) : NULL
        );

    return sessionhistory_list_element_local_var;
end:
    if (e_sessionhistory_endby_local_nonprim) {
        field_e_sessionhistory_endby_free(e_sessionhistory_endby_local_nonprim);
        e_sessionhistory_endby_local_nonprim = NULL;
    }
    return NULL;

}
