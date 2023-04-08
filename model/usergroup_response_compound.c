#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_response_compound.h"



usergroup_response_compound_t *usergroup_response_compound_create(
    int pki_usergroup_id,
    multilingual_usergroup_name_t *obj_usergroup_name
    ) {
    usergroup_response_compound_t *usergroup_response_compound_local_var = malloc(sizeof(usergroup_response_compound_t));
    if (!usergroup_response_compound_local_var) {
        return NULL;
    }
    usergroup_response_compound_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_response_compound_local_var->obj_usergroup_name = obj_usergroup_name;

    return usergroup_response_compound_local_var;
}


void usergroup_response_compound_free(usergroup_response_compound_t *usergroup_response_compound) {
    if(NULL == usergroup_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_response_compound->obj_usergroup_name) {
        multilingual_usergroup_name_free(usergroup_response_compound->obj_usergroup_name);
        usergroup_response_compound->obj_usergroup_name = NULL;
    }
    free(usergroup_response_compound);
}

cJSON *usergroup_response_compound_convertToJSON(usergroup_response_compound_t *usergroup_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_response_compound->pki_usergroup_id
    if (!usergroup_response_compound->pki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", usergroup_response_compound->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_response_compound->obj_usergroup_name
    if (!usergroup_response_compound->obj_usergroup_name) {
        goto fail;
    }
    cJSON *obj_usergroup_name_local_JSON = multilingual_usergroup_name_convertToJSON(usergroup_response_compound->obj_usergroup_name);
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

usergroup_response_compound_t *usergroup_response_compound_parseFromJSON(cJSON *usergroup_response_compoundJSON){

    usergroup_response_compound_t *usergroup_response_compound_local_var = NULL;

    // define the local variable for usergroup_response_compound->obj_usergroup_name
    multilingual_usergroup_name_t *obj_usergroup_name_local_nonprim = NULL;

    // usergroup_response_compound->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_response_compoundJSON, "pkiUsergroupID");
    if (!pki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroup_response_compound->obj_usergroup_name
    cJSON *obj_usergroup_name = cJSON_GetObjectItemCaseSensitive(usergroup_response_compoundJSON, "objUsergroupName");
    if (!obj_usergroup_name) {
        goto end;
    }

    
    obj_usergroup_name_local_nonprim = multilingual_usergroup_name_parseFromJSON(obj_usergroup_name); //nonprimitive


    usergroup_response_compound_local_var = usergroup_response_compound_create (
        pki_usergroup_id->valuedouble,
        obj_usergroup_name_local_nonprim
        );

    return usergroup_response_compound_local_var;
end:
    if (obj_usergroup_name_local_nonprim) {
        multilingual_usergroup_name_free(obj_usergroup_name_local_nonprim);
        obj_usergroup_name_local_nonprim = NULL;
    }
    return NULL;

}
