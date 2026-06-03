#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_email.h"



static scim_email_t *scim_email_create_internal(
    char *value,
    int *primary
    ) {
    scim_email_t *scim_email_local_var = malloc(sizeof(scim_email_t));
    if (!scim_email_local_var) {
        return NULL;
    }
    memset(scim_email_local_var, 0, sizeof(scim_email_t));
    scim_email_local_var->_library_owned = 1;
    scim_email_local_var->value = value;
    scim_email_local_var->primary = primary;
    return scim_email_local_var;
}

__attribute__((deprecated)) scim_email_t *scim_email_create(
    char *value,
    int *primary
    ) {
    int *primary_copy = NULL;
    if (primary) {
        primary_copy = malloc(sizeof(int));
        if (primary_copy) *primary_copy = *primary;
    }
    scim_email_t *result = scim_email_create_internal (
        value,
        primary_copy
        );
    if (!result) {
        free(primary_copy);
    }
    return result;
}

void scim_email_free(scim_email_t *scim_email) {
    if(NULL == scim_email){
        return ;
    }
    if(scim_email->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_email_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_email->value) {
        free(scim_email->value);
        scim_email->value = NULL;
    }
    if (scim_email->primary) {
        free(scim_email->primary);
        scim_email->primary = NULL;
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
    if(cJSON_AddBoolToObject(item, "primary", *scim_email->primary) == NULL) {
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

    char *value_local_str = NULL;

    // define the local variable for scim_email->primary
    int *primary_local_var = NULL;

    // scim_email->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(scim_emailJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // scim_email->primary
    cJSON *primary = cJSON_GetObjectItemCaseSensitive(scim_emailJSON, "primary");
    if (cJSON_IsNull(primary)) {
        primary = NULL;
    }
    if (primary) { 
    if(!cJSON_IsBool(primary))
    {
    goto end; //Bool
    }
    primary_local_var = malloc(sizeof(int));
    if(!primary_local_var)
    {
        goto end;
    }
    *primary_local_var = primary->valueint;
    }


    if (value && !cJSON_IsNull(value)) value_local_str = strdup(value->valuestring);

    scim_email_local_var = scim_email_create_internal (
        value_local_str,
        primary_local_var
        );

    if (!scim_email_local_var) {
        goto end;
    }

    return scim_email_local_var;
end:
    if (value_local_str) {
        free(value_local_str);
        value_local_str = NULL;
    }
    if (primary_local_var) {
        free(primary_local_var);
        primary_local_var = NULL;
    }
    return NULL;

}
