#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_group_member.h"



static scim_group_member_t *scim_group_member_create_internal(
    char *value,
    char *display,
    char *type,
    char *ref
    ) {
    scim_group_member_t *scim_group_member_local_var = malloc(sizeof(scim_group_member_t));
    if (!scim_group_member_local_var) {
        return NULL;
    }
    memset(scim_group_member_local_var, 0, sizeof(scim_group_member_t));
    scim_group_member_local_var->_library_owned = 1;
    scim_group_member_local_var->value = value;
    scim_group_member_local_var->display = display;
    scim_group_member_local_var->type = type;
    scim_group_member_local_var->ref = ref;
    return scim_group_member_local_var;
}

__attribute__((deprecated)) scim_group_member_t *scim_group_member_create(
    char *value,
    char *display,
    char *type,
    char *ref
    ) {
    scim_group_member_t *result = scim_group_member_create_internal (
        value,
        display,
        type,
        ref
        );
    if (!result) {
    }
    return result;
}

void scim_group_member_free(scim_group_member_t *scim_group_member) {
    if(NULL == scim_group_member){
        return ;
    }
    if(scim_group_member->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_group_member_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_group_member->value) {
        free(scim_group_member->value);
        scim_group_member->value = NULL;
    }
    if (scim_group_member->display) {
        free(scim_group_member->display);
        scim_group_member->display = NULL;
    }
    if (scim_group_member->type) {
        free(scim_group_member->type);
        scim_group_member->type = NULL;
    }
    if (scim_group_member->ref) {
        free(scim_group_member->ref);
        scim_group_member->ref = NULL;
    }
    free(scim_group_member);
}

cJSON *scim_group_member_convertToJSON(scim_group_member_t *scim_group_member) {
    cJSON *item = cJSON_CreateObject();

    // scim_group_member->value
    if(scim_group_member->value) {
    if(cJSON_AddStringToObject(item, "value", scim_group_member->value) == NULL) {
    goto fail; //String
    }
    }


    // scim_group_member->display
    if(scim_group_member->display) {
    if(cJSON_AddStringToObject(item, "display", scim_group_member->display) == NULL) {
    goto fail; //String
    }
    }


    // scim_group_member->type
    if(scim_group_member->type) {
    if(cJSON_AddStringToObject(item, "type", scim_group_member->type) == NULL) {
    goto fail; //String
    }
    }


    // scim_group_member->ref
    if(scim_group_member->ref) {
    if(cJSON_AddStringToObject(item, "$ref", scim_group_member->ref) == NULL) {
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

scim_group_member_t *scim_group_member_parseFromJSON(cJSON *scim_group_memberJSON){

    scim_group_member_t *scim_group_member_local_var = NULL;

    char *value_local_str = NULL;

    char *display_local_str = NULL;

    char *type_local_str = NULL;

    char *ref_local_str = NULL;

    // scim_group_member->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(scim_group_memberJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // scim_group_member->display
    cJSON *display = cJSON_GetObjectItemCaseSensitive(scim_group_memberJSON, "display");
    if (cJSON_IsNull(display)) {
        display = NULL;
    }
    if (display) { 
    if(!cJSON_IsString(display) && !cJSON_IsNull(display))
    {
    goto end; //String
    }
    }

    // scim_group_member->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(scim_group_memberJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // scim_group_member->ref
    cJSON *ref = cJSON_GetObjectItemCaseSensitive(scim_group_memberJSON, "$ref");
    if (cJSON_IsNull(ref)) {
        ref = NULL;
    }
    if (ref) { 
    if(!cJSON_IsString(ref) && !cJSON_IsNull(ref))
    {
    goto end; //String
    }
    }


    if (value && !cJSON_IsNull(value)) value_local_str = strdup(value->valuestring);
    if (display && !cJSON_IsNull(display)) display_local_str = strdup(display->valuestring);
    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (ref && !cJSON_IsNull(ref)) ref_local_str = strdup(ref->valuestring);

    scim_group_member_local_var = scim_group_member_create_internal (
        value_local_str,
        display_local_str,
        type_local_str,
        ref_local_str
        );

    if (!scim_group_member_local_var) {
        goto end;
    }

    return scim_group_member_local_var;
end:
    if (value_local_str) {
        free(value_local_str);
        value_local_str = NULL;
    }
    if (display_local_str) {
        free(display_local_str);
        display_local_str = NULL;
    }
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (ref_local_str) {
        free(ref_local_str);
        ref_local_str = NULL;
    }
    return NULL;

}
