#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_email.h"



scim_email_t *scim_email_create(
    char *value,
    int primary
    ) {
    scim_email_t *scim_email_local_var = malloc(sizeof(scim_email_t));
    if (!scim_email_local_var) {
        return NULL;
    }
    scim_email_local_var->value = value;
    scim_email_local_var->primary = primary;

    return scim_email_local_var;
}


void scim_email_free(scim_email_t *scim_email) {
    if(NULL == scim_email){
        return ;
    }
    listEntry_t *listEntry;
    if (scim_email->value) {
        free(scim_email->value);
        scim_email->value = NULL;
    }
    free(scim_email);
}

cJSON *scim_email_convertToJSON(scim_email_t *scim_email) {
    cJSON *item = cJSON_CreateObject();

    // scim_email->value
    if(scim_email->value) {
    if(cJSON_AddStringToObject(item, "value", scim_email->value) == NULL) {
    goto fail; //String
    }
    }


    // scim_email->primary
    if(scim_email->primary) {
    if(cJSON_AddBoolToObject(item, "primary", scim_email->primary) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_email_t *scim_email_parseFromJSON(cJSON *scim_emailJSON){

    scim_email_t *scim_email_local_var = NULL;

    // scim_email->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(scim_emailJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // scim_email->primary
    cJSON *primary = cJSON_GetObjectItemCaseSensitive(scim_emailJSON, "primary");
    if (primary) { 
    if(!cJSON_IsBool(primary))
    {
    goto end; //Bool
    }
    }


    scim_email_local_var = scim_email_create (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        primary ? primary->valueint : 0
        );

    return scim_email_local_var;
end:
    return NULL;

}
