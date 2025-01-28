#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_request_compound.h"



static usergroup_request_compound_t *usergroup_request_compound_create_internal(
    int pki_usergroup_id,
    email_request_t *obj_email,
    multilingual_usergroup_name_t *obj_usergroup_name
    ) {
    usergroup_request_compound_t *usergroup_request_compound_local_var = malloc(sizeof(usergroup_request_compound_t));
    if (!usergroup_request_compound_local_var) {
        return NULL;
    }
    usergroup_request_compound_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_request_compound_local_var->obj_email = obj_email;
    usergroup_request_compound_local_var->obj_usergroup_name = obj_usergroup_name;

    usergroup_request_compound_local_var->_library_owned = 1;
    return usergroup_request_compound_local_var;
}

__attribute__((deprecated)) usergroup_request_compound_t *usergroup_request_compound_create(
    int pki_usergroup_id,
    email_request_t *obj_email,
    multilingual_usergroup_name_t *obj_usergroup_name
    ) {
    return usergroup_request_compound_create_internal (
        pki_usergroup_id,
        obj_email,
        obj_usergroup_name
        );
}

void usergroup_request_compound_free(usergroup_request_compound_t *usergroup_request_compound) {
    if(NULL == usergroup_request_compound){
        return ;
    }
    if(usergroup_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_request_compound->obj_email) {
        email_request_free(usergroup_request_compound->obj_email);
        usergroup_request_compound->obj_email = NULL;
    }
    if (usergroup_request_compound->obj_usergroup_name) {
        multilingual_usergroup_name_free(usergroup_request_compound->obj_usergroup_name);
        usergroup_request_compound->obj_usergroup_name = NULL;
    }
    free(usergroup_request_compound);
}

cJSON *usergroup_request_compound_convertToJSON(usergroup_request_compound_t *usergroup_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_request_compound->pki_usergroup_id
    if(usergroup_request_compound->pki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", usergroup_request_compound->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroup_request_compound->obj_email
    if(usergroup_request_compound->obj_email) {
    cJSON *obj_email_local_JSON = email_request_convertToJSON(usergroup_request_compound->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // usergroup_request_compound->obj_usergroup_name
    if (!usergroup_request_compound->obj_usergroup_name) {
        goto fail;
    }
    cJSON *obj_usergroup_name_local_JSON = multilingual_usergroup_name_convertToJSON(usergroup_request_compound->obj_usergroup_name);
    if(obj_usergroup_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupName", obj_usergroup_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_request_compound_t *usergroup_request_compound_parseFromJSON(cJSON *usergroup_request_compoundJSON){

    usergroup_request_compound_t *usergroup_request_compound_local_var = NULL;

    // define the local variable for usergroup_request_compound->obj_email
    email_request_t *obj_email_local_nonprim = NULL;

    // define the local variable for usergroup_request_compound->obj_usergroup_name
    multilingual_usergroup_name_t *obj_usergroup_name_local_nonprim = NULL;

    // usergroup_request_compound->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_request_compoundJSON, "pkiUsergroupID");
    if (cJSON_IsNull(pki_usergroup_id)) {
        pki_usergroup_id = NULL;
    }
    if (pki_usergroup_id) { 
    if(!cJSON_IsNumber(pki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // usergroup_request_compound->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(usergroup_request_compoundJSON, "objEmail");
    if (cJSON_IsNull(obj_email)) {
        obj_email = NULL;
    }
    if (obj_email) { 
    obj_email_local_nonprim = email_request_parseFromJSON(obj_email); //nonprimitive
    }

    // usergroup_request_compound->obj_usergroup_name
    cJSON *obj_usergroup_name = cJSON_GetObjectItemCaseSensitive(usergroup_request_compoundJSON, "objUsergroupName");
    if (cJSON_IsNull(obj_usergroup_name)) {
        obj_usergroup_name = NULL;
    }
    if (!obj_usergroup_name) {
        goto end;
    }

    
    obj_usergroup_name_local_nonprim = multilingual_usergroup_name_parseFromJSON(obj_usergroup_name); //nonprimitive


    usergroup_request_compound_local_var = usergroup_request_compound_create_internal (
        pki_usergroup_id ? pki_usergroup_id->valuedouble : 0,
        obj_email ? obj_email_local_nonprim : NULL,
        obj_usergroup_name_local_nonprim
        );

    return usergroup_request_compound_local_var;
end:
    if (obj_email_local_nonprim) {
        email_request_free(obj_email_local_nonprim);
        obj_email_local_nonprim = NULL;
    }
    if (obj_usergroup_name_local_nonprim) {
        multilingual_usergroup_name_free(obj_usergroup_name_local_nonprim);
        obj_usergroup_name_local_nonprim = NULL;
    }
    return NULL;

}
