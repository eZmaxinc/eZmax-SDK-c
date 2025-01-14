#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_request.h"



usergroup_request_t *usergroup_request_create(
    int pki_usergroup_id,
    email_request_t *obj_email,
    multilingual_usergroup_name_t *obj_usergroup_name
    ) {
    usergroup_request_t *usergroup_request_local_var = malloc(sizeof(usergroup_request_t));
    if (!usergroup_request_local_var) {
        return NULL;
    }
    usergroup_request_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_request_local_var->obj_email = obj_email;
    usergroup_request_local_var->obj_usergroup_name = obj_usergroup_name;

    return usergroup_request_local_var;
}


void usergroup_request_free(usergroup_request_t *usergroup_request) {
    if(NULL == usergroup_request){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_request->obj_email) {
        email_request_free(usergroup_request->obj_email);
        usergroup_request->obj_email = NULL;
    }
    if (usergroup_request->obj_usergroup_name) {
        multilingual_usergroup_name_free(usergroup_request->obj_usergroup_name);
        usergroup_request->obj_usergroup_name = NULL;
    }
    free(usergroup_request);
}

cJSON *usergroup_request_convertToJSON(usergroup_request_t *usergroup_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_request->pki_usergroup_id
    if(usergroup_request->pki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", usergroup_request->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroup_request->obj_email
    if(usergroup_request->obj_email) {
    cJSON *obj_email_local_JSON = email_request_convertToJSON(usergroup_request->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // usergroup_request->obj_usergroup_name
    if (!usergroup_request->obj_usergroup_name) {
        goto fail;
    }
    cJSON *obj_usergroup_name_local_JSON = multilingual_usergroup_name_convertToJSON(usergroup_request->obj_usergroup_name);
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

usergroup_request_t *usergroup_request_parseFromJSON(cJSON *usergroup_requestJSON){

    usergroup_request_t *usergroup_request_local_var = NULL;

    // define the local variable for usergroup_request->obj_email
    email_request_t *obj_email_local_nonprim = NULL;

    // define the local variable for usergroup_request->obj_usergroup_name
    multilingual_usergroup_name_t *obj_usergroup_name_local_nonprim = NULL;

    // usergroup_request->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_requestJSON, "pkiUsergroupID");
    if (pki_usergroup_id) { 
    if(!cJSON_IsNumber(pki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // usergroup_request->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(usergroup_requestJSON, "objEmail");
    if (obj_email) { 
    obj_email_local_nonprim = email_request_parseFromJSON(obj_email); //nonprimitive
    }

    // usergroup_request->obj_usergroup_name
    cJSON *obj_usergroup_name = cJSON_GetObjectItemCaseSensitive(usergroup_requestJSON, "objUsergroupName");
    if (!obj_usergroup_name) {
        goto end;
    }

    
    obj_usergroup_name_local_nonprim = multilingual_usergroup_name_parseFromJSON(obj_usergroup_name); //nonprimitive


    usergroup_request_local_var = usergroup_request_create (
        pki_usergroup_id ? pki_usergroup_id->valuedouble : 0,
        obj_email ? obj_email_local_nonprim : NULL,
        obj_usergroup_name_local_nonprim
        );

    return usergroup_request_local_var;
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
