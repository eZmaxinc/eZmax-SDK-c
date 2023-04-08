#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_auditdetail.h"



common_auditdetail_t *common_auditdetail_create(
    int fki_user_id,
    int fki_apikey_id,
    char *s_user_loginname,
    char *s_user_lastname,
    char *s_user_firstname,
    char *s_apikey_description_x,
    char *dt_auditdetail_date
    ) {
    common_auditdetail_t *common_auditdetail_local_var = malloc(sizeof(common_auditdetail_t));
    if (!common_auditdetail_local_var) {
        return NULL;
    }
    common_auditdetail_local_var->fki_user_id = fki_user_id;
    common_auditdetail_local_var->fki_apikey_id = fki_apikey_id;
    common_auditdetail_local_var->s_user_loginname = s_user_loginname;
    common_auditdetail_local_var->s_user_lastname = s_user_lastname;
    common_auditdetail_local_var->s_user_firstname = s_user_firstname;
    common_auditdetail_local_var->s_apikey_description_x = s_apikey_description_x;
    common_auditdetail_local_var->dt_auditdetail_date = dt_auditdetail_date;

    return common_auditdetail_local_var;
}


void common_auditdetail_free(common_auditdetail_t *common_auditdetail) {
    if(NULL == common_auditdetail){
        return ;
    }
    listEntry_t *listEntry;
    if (common_auditdetail->s_user_loginname) {
        free(common_auditdetail->s_user_loginname);
        common_auditdetail->s_user_loginname = NULL;
    }
    if (common_auditdetail->s_user_lastname) {
        free(common_auditdetail->s_user_lastname);
        common_auditdetail->s_user_lastname = NULL;
    }
    if (common_auditdetail->s_user_firstname) {
        free(common_auditdetail->s_user_firstname);
        common_auditdetail->s_user_firstname = NULL;
    }
    if (common_auditdetail->s_apikey_description_x) {
        free(common_auditdetail->s_apikey_description_x);
        common_auditdetail->s_apikey_description_x = NULL;
    }
    if (common_auditdetail->dt_auditdetail_date) {
        free(common_auditdetail->dt_auditdetail_date);
        common_auditdetail->dt_auditdetail_date = NULL;
    }
    free(common_auditdetail);
}

cJSON *common_auditdetail_convertToJSON(common_auditdetail_t *common_auditdetail) {
    cJSON *item = cJSON_CreateObject();

    // common_auditdetail->fki_user_id
    if (!common_auditdetail->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", common_auditdetail->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // common_auditdetail->fki_apikey_id
    if(common_auditdetail->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", common_auditdetail->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // common_auditdetail->s_user_loginname
    if (!common_auditdetail->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", common_auditdetail->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // common_auditdetail->s_user_lastname
    if (!common_auditdetail->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", common_auditdetail->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // common_auditdetail->s_user_firstname
    if (!common_auditdetail->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", common_auditdetail->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // common_auditdetail->s_apikey_description_x
    if(common_auditdetail->s_apikey_description_x) {
    if(cJSON_AddStringToObject(item, "sApikeyDescriptionX", common_auditdetail->s_apikey_description_x) == NULL) {
    goto fail; //String
    }
    }


    // common_auditdetail->dt_auditdetail_date
    if (!common_auditdetail->dt_auditdetail_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtAuditdetailDate", common_auditdetail->dt_auditdetail_date) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_auditdetail_t *common_auditdetail_parseFromJSON(cJSON *common_auditdetailJSON){

    common_auditdetail_t *common_auditdetail_local_var = NULL;

    // common_auditdetail->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(common_auditdetailJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // common_auditdetail->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(common_auditdetailJSON, "fkiApikeyID");
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // common_auditdetail->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(common_auditdetailJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // common_auditdetail->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(common_auditdetailJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // common_auditdetail->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(common_auditdetailJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // common_auditdetail->s_apikey_description_x
    cJSON *s_apikey_description_x = cJSON_GetObjectItemCaseSensitive(common_auditdetailJSON, "sApikeyDescriptionX");
    if (s_apikey_description_x) { 
    if(!cJSON_IsString(s_apikey_description_x) && !cJSON_IsNull(s_apikey_description_x))
    {
    goto end; //String
    }
    }

    // common_auditdetail->dt_auditdetail_date
    cJSON *dt_auditdetail_date = cJSON_GetObjectItemCaseSensitive(common_auditdetailJSON, "dtAuditdetailDate");
    if (!dt_auditdetail_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_auditdetail_date))
    {
    goto end; //String
    }


    common_auditdetail_local_var = common_auditdetail_create (
        fki_user_id->valuedouble,
        fki_apikey_id ? fki_apikey_id->valuedouble : 0,
        strdup(s_user_loginname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_firstname->valuestring),
        s_apikey_description_x && !cJSON_IsNull(s_apikey_description_x) ? strdup(s_apikey_description_x->valuestring) : NULL,
        strdup(dt_auditdetail_date->valuestring)
        );

    return common_auditdetail_local_var;
end:
    return NULL;

}
