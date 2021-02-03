#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_audit.h"



common_audit_t *common_audit_create(
    int fki_user_id_created,
    int fki_user_id_modified,
    int fki_apikey_id_created,
    int fki_apikey_id_modified,
    char *dt_created_date,
    char *dt_modified_date
    ) {
    common_audit_t *common_audit_local_var = malloc(sizeof(common_audit_t));
    if (!common_audit_local_var) {
        return NULL;
    }
    common_audit_local_var->fki_user_id_created = fki_user_id_created;
    common_audit_local_var->fki_user_id_modified = fki_user_id_modified;
    common_audit_local_var->fki_apikey_id_created = fki_apikey_id_created;
    common_audit_local_var->fki_apikey_id_modified = fki_apikey_id_modified;
    common_audit_local_var->dt_created_date = dt_created_date;
    common_audit_local_var->dt_modified_date = dt_modified_date;

    return common_audit_local_var;
}


void common_audit_free(common_audit_t *common_audit) {
    if(NULL == common_audit){
        return ;
    }
    listEntry_t *listEntry;
    if (common_audit->dt_created_date) {
        free(common_audit->dt_created_date);
        common_audit->dt_created_date = NULL;
    }
    if (common_audit->dt_modified_date) {
        free(common_audit->dt_modified_date);
        common_audit->dt_modified_date = NULL;
    }
    free(common_audit);
}

cJSON *common_audit_convertToJSON(common_audit_t *common_audit) {
    cJSON *item = cJSON_CreateObject();

    // common_audit->fki_user_id_created
    if (!common_audit->fki_user_id_created) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserIDCreated", common_audit->fki_user_id_created) == NULL) {
    goto fail; //Numeric
    }


    // common_audit->fki_user_id_modified
    if (!common_audit->fki_user_id_modified) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserIDModified", common_audit->fki_user_id_modified) == NULL) {
    goto fail; //Numeric
    }


    // common_audit->fki_apikey_id_created
    if(common_audit->fki_apikey_id_created) { 
    if(cJSON_AddNumberToObject(item, "fkiApikeyIDCreated", common_audit->fki_apikey_id_created) == NULL) {
    goto fail; //Numeric
    }
     } 


    // common_audit->fki_apikey_id_modified
    if(common_audit->fki_apikey_id_modified) { 
    if(cJSON_AddNumberToObject(item, "fkiApikeyIDModified", common_audit->fki_apikey_id_modified) == NULL) {
    goto fail; //Numeric
    }
     } 


    // common_audit->dt_created_date
    if (!common_audit->dt_created_date) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtCreatedDate", common_audit->dt_created_date) == NULL) {
    goto fail; //String
    }


    // common_audit->dt_modified_date
    if (!common_audit->dt_modified_date) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtModifiedDate", common_audit->dt_modified_date) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_audit_t *common_audit_parseFromJSON(cJSON *common_auditJSON){

    common_audit_t *common_audit_local_var = NULL;

    // common_audit->fki_user_id_created
    cJSON *fki_user_id_created = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "fkiUserIDCreated");
    if (!fki_user_id_created) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_created))
    {
    goto end; //Numeric
    }

    // common_audit->fki_user_id_modified
    cJSON *fki_user_id_modified = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "fkiUserIDModified");
    if (!fki_user_id_modified) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_modified))
    {
    goto end; //Numeric
    }

    // common_audit->fki_apikey_id_created
    cJSON *fki_apikey_id_created = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "fkiApikeyIDCreated");
    if (fki_apikey_id_created) { 
    if(!cJSON_IsNumber(fki_apikey_id_created))
    {
    goto end; //Numeric
    }
    }

    // common_audit->fki_apikey_id_modified
    cJSON *fki_apikey_id_modified = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "fkiApikeyIDModified");
    if (fki_apikey_id_modified) { 
    if(!cJSON_IsNumber(fki_apikey_id_modified))
    {
    goto end; //Numeric
    }
    }

    // common_audit->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "dtCreatedDate");
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // common_audit->dt_modified_date
    cJSON *dt_modified_date = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "dtModifiedDate");
    if (!dt_modified_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_modified_date))
    {
    goto end; //String
    }


    common_audit_local_var = common_audit_create (
        fki_user_id_created->valuedouble,
        fki_user_id_modified->valuedouble,
        fki_apikey_id_created ? fki_apikey_id_created->valuedouble : 0,
        fki_apikey_id_modified ? fki_apikey_id_modified->valuedouble : 0,
        strdup(dt_created_date->valuestring),
        strdup(dt_modified_date->valuestring)
        );

    return common_audit_local_var;
end:
    return NULL;

}
