#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_authentication_scheme.h"


char* scim_authentication_scheme_type_ToString(ezmax_api_definition__full_scim_authentication_scheme_TYPE_e type) {
    char* typeArray[] =  { "NULL", "oauth", "oauth2", "oauthbearertoken", "httpbasic", "httpdigest" };
    return typeArray[type];
}

ezmax_api_definition__full_scim_authentication_scheme_TYPE_e scim_authentication_scheme_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "oauth", "oauth2", "oauthbearertoken", "httpbasic", "httpdigest" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static scim_authentication_scheme_t *scim_authentication_scheme_create_internal(
    char *description,
    char *name,
    ezmax_api_definition__full_scim_authentication_scheme_TYPE_e type
    ) {
    scim_authentication_scheme_t *scim_authentication_scheme_local_var = malloc(sizeof(scim_authentication_scheme_t));
    if (!scim_authentication_scheme_local_var) {
        return NULL;
    }
    scim_authentication_scheme_local_var->description = description;
    scim_authentication_scheme_local_var->name = name;
    scim_authentication_scheme_local_var->type = type;

    scim_authentication_scheme_local_var->_library_owned = 1;
    return scim_authentication_scheme_local_var;
}

__attribute__((deprecated)) scim_authentication_scheme_t *scim_authentication_scheme_create(
    char *description,
    char *name,
    ezmax_api_definition__full_scim_authentication_scheme_TYPE_e type
    ) {
    return scim_authentication_scheme_create_internal (
        description,
        name,
        type
        );
}

void scim_authentication_scheme_free(scim_authentication_scheme_t *scim_authentication_scheme) {
    if(NULL == scim_authentication_scheme){
        return ;
    }
    if(scim_authentication_scheme->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_authentication_scheme_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_authentication_scheme->description) {
        free(scim_authentication_scheme->description);
        scim_authentication_scheme->description = NULL;
    }
    if (scim_authentication_scheme->name) {
        free(scim_authentication_scheme->name);
        scim_authentication_scheme->name = NULL;
    }
    free(scim_authentication_scheme);
}

cJSON *scim_authentication_scheme_convertToJSON(scim_authentication_scheme_t *scim_authentication_scheme) {
    cJSON *item = cJSON_CreateObject();

    // scim_authentication_scheme->description
    if (!scim_authentication_scheme->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", scim_authentication_scheme->description) == NULL) {
    goto fail; //String
    }


    // scim_authentication_scheme->name
    if (!scim_authentication_scheme->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", scim_authentication_scheme->name) == NULL) {
    goto fail; //String
    }


    // scim_authentication_scheme->type
    if (ezmax_api_definition__full_scim_authentication_scheme_TYPE_NULL == scim_authentication_scheme->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", scim_authentication_scheme_type_ToString(scim_authentication_scheme->type)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_authentication_scheme_t *scim_authentication_scheme_parseFromJSON(cJSON *scim_authentication_schemeJSON){

    scim_authentication_scheme_t *scim_authentication_scheme_local_var = NULL;

    // scim_authentication_scheme->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(scim_authentication_schemeJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // scim_authentication_scheme->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(scim_authentication_schemeJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // scim_authentication_scheme->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(scim_authentication_schemeJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    ezmax_api_definition__full_scim_authentication_scheme_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = scim_authentication_scheme_type_FromString(type->valuestring);


    scim_authentication_scheme_local_var = scim_authentication_scheme_create_internal (
        strdup(description->valuestring),
        strdup(name->valuestring),
        typeVariable
        );

    return scim_authentication_scheme_local_var;
end:
    return NULL;

}
