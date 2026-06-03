#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userlogintype_response.h"



static userlogintype_response_t *userlogintype_response_create_internal(
    int *pki_userlogintype_id,
    multilingual_userlogintype_description_t *obj_userlogintype_description,
    char *s_userlogintype_description_x
    ) {
    userlogintype_response_t *userlogintype_response_local_var = malloc(sizeof(userlogintype_response_t));
    if (!userlogintype_response_local_var) {
        return NULL;
    }
    memset(userlogintype_response_local_var, 0, sizeof(userlogintype_response_t));
    userlogintype_response_local_var->_library_owned = 1;
    userlogintype_response_local_var->pki_userlogintype_id = pki_userlogintype_id;
    userlogintype_response_local_var->obj_userlogintype_description = obj_userlogintype_description;
    userlogintype_response_local_var->s_userlogintype_description_x = s_userlogintype_description_x;
    return userlogintype_response_local_var;
}

__attribute__((deprecated)) userlogintype_response_t *userlogintype_response_create(
    int *pki_userlogintype_id,
    multilingual_userlogintype_description_t *obj_userlogintype_description,
    char *s_userlogintype_description_x
    ) {
    int *pki_userlogintype_id_copy = NULL;
    if (pki_userlogintype_id) {
        pki_userlogintype_id_copy = malloc(sizeof(int));
        if (pki_userlogintype_id_copy) *pki_userlogintype_id_copy = *pki_userlogintype_id;
    }
    userlogintype_response_t *result = userlogintype_response_create_internal (
        pki_userlogintype_id_copy,
        obj_userlogintype_description,
        s_userlogintype_description_x
        );
    if (!result) {
        free(pki_userlogintype_id_copy);
    }
    return result;
}

void userlogintype_response_free(userlogintype_response_t *userlogintype_response) {
    if(NULL == userlogintype_response){
        return ;
    }
    if(userlogintype_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userlogintype_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userlogintype_response->pki_userlogintype_id) {
        free(userlogintype_response->pki_userlogintype_id);
        userlogintype_response->pki_userlogintype_id = NULL;
    }
    if (userlogintype_response->obj_userlogintype_description) {
        multilingual_userlogintype_description_free(userlogintype_response->obj_userlogintype_description);
        userlogintype_response->obj_userlogintype_description = NULL;
    }
    if (userlogintype_response->s_userlogintype_description_x) {
        free(userlogintype_response->s_userlogintype_description_x);
        userlogintype_response->s_userlogintype_description_x = NULL;
    }
    free(userlogintype_response);
}

cJSON *userlogintype_response_convertToJSON(userlogintype_response_t *userlogintype_response) {
    cJSON *item = cJSON_CreateObject();

    // userlogintype_response->pki_userlogintype_id
    if (!userlogintype_response->pki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserlogintypeID", *userlogintype_response->pki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // userlogintype_response->obj_userlogintype_description
    if (!userlogintype_response->obj_userlogintype_description) {
        goto fail;
    }
    cJSON *obj_userlogintype_description_local_JSON = multilingual_userlogintype_description_convertToJSON(userlogintype_response->obj_userlogintype_description);
    if(obj_userlogintype_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserlogintypeDescription", obj_userlogintype_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // userlogintype_response->s_userlogintype_description_x
    if (!userlogintype_response->s_userlogintype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserlogintypeDescriptionX", userlogintype_response->s_userlogintype_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userlogintype_response_t *userlogintype_response_parseFromJSON(cJSON *userlogintype_responseJSON){

    userlogintype_response_t *userlogintype_response_local_var = NULL;

    // define the local variable for userlogintype_response->pki_userlogintype_id
    int *pki_userlogintype_id_local_var = NULL;

    // define the local variable for userlogintype_response->obj_userlogintype_description
    multilingual_userlogintype_description_t *obj_userlogintype_description_local_nonprim = NULL;

    char *s_userlogintype_description_x_local_str = NULL;

    // userlogintype_response->pki_userlogintype_id
    cJSON *pki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(userlogintype_responseJSON, "pkiUserlogintypeID");
    if (cJSON_IsNull(pki_userlogintype_id)) {
        pki_userlogintype_id = NULL;
    }
    if (!pki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_userlogintype_id))
    {
    goto end; //Numeric
    }
    pki_userlogintype_id_local_var = malloc(sizeof(int));
    if(!pki_userlogintype_id_local_var)
    {
        goto end;
    }
    *pki_userlogintype_id_local_var = pki_userlogintype_id->valuedouble;

    // userlogintype_response->obj_userlogintype_description
    cJSON *obj_userlogintype_description = cJSON_GetObjectItemCaseSensitive(userlogintype_responseJSON, "objUserlogintypeDescription");
    if (cJSON_IsNull(obj_userlogintype_description)) {
        obj_userlogintype_description = NULL;
    }
    if (!obj_userlogintype_description) {
        goto end;
    }

    
    obj_userlogintype_description_local_nonprim = multilingual_userlogintype_description_parseFromJSON(obj_userlogintype_description); //nonprimitive

    // userlogintype_response->s_userlogintype_description_x
    cJSON *s_userlogintype_description_x = cJSON_GetObjectItemCaseSensitive(userlogintype_responseJSON, "sUserlogintypeDescriptionX");
    if (cJSON_IsNull(s_userlogintype_description_x)) {
        s_userlogintype_description_x = NULL;
    }
    if (!s_userlogintype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userlogintype_description_x))
    {
    goto end; //String
    }


    if (s_userlogintype_description_x && !cJSON_IsNull(s_userlogintype_description_x)) s_userlogintype_description_x_local_str = strdup(s_userlogintype_description_x->valuestring);

    userlogintype_response_local_var = userlogintype_response_create_internal (
        pki_userlogintype_id_local_var,
        obj_userlogintype_description_local_nonprim,
        s_userlogintype_description_x_local_str
        );

    if (!userlogintype_response_local_var) {
        goto end;
    }

    return userlogintype_response_local_var;
end:
    if (pki_userlogintype_id_local_var) {
        free(pki_userlogintype_id_local_var);
        pki_userlogintype_id_local_var = NULL;
    }
    if (obj_userlogintype_description_local_nonprim) {
        multilingual_userlogintype_description_free(obj_userlogintype_description_local_nonprim);
        obj_userlogintype_description_local_nonprim = NULL;
    }
    if (s_userlogintype_description_x_local_str) {
        free(s_userlogintype_description_x_local_str);
        s_userlogintype_description_x_local_str = NULL;
    }
    return NULL;

}
