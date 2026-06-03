#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "glaccountcontainer_autocomplete_element_response.h"



static glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_create_internal(
    int *pki_glaccountcontainer_id,
    char *s_glaccountcontainer_longcode,
    char *s_glaccountcontainer_longdescription_x,
    int *b_glaccountcontainer_isactive
    ) {
    glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_local_var = malloc(sizeof(glaccountcontainer_autocomplete_element_response_t));
    if (!glaccountcontainer_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(glaccountcontainer_autocomplete_element_response_local_var, 0, sizeof(glaccountcontainer_autocomplete_element_response_t));
    glaccountcontainer_autocomplete_element_response_local_var->_library_owned = 1;
    glaccountcontainer_autocomplete_element_response_local_var->pki_glaccountcontainer_id = pki_glaccountcontainer_id;
    glaccountcontainer_autocomplete_element_response_local_var->s_glaccountcontainer_longcode = s_glaccountcontainer_longcode;
    glaccountcontainer_autocomplete_element_response_local_var->s_glaccountcontainer_longdescription_x = s_glaccountcontainer_longdescription_x;
    glaccountcontainer_autocomplete_element_response_local_var->b_glaccountcontainer_isactive = b_glaccountcontainer_isactive;
    return glaccountcontainer_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_create(
    int *pki_glaccountcontainer_id,
    char *s_glaccountcontainer_longcode,
    char *s_glaccountcontainer_longdescription_x,
    int *b_glaccountcontainer_isactive
    ) {
    int *pki_glaccountcontainer_id_copy = NULL;
    if (pki_glaccountcontainer_id) {
        pki_glaccountcontainer_id_copy = malloc(sizeof(int));
        if (pki_glaccountcontainer_id_copy) *pki_glaccountcontainer_id_copy = *pki_glaccountcontainer_id;
    }
    int *b_glaccountcontainer_isactive_copy = NULL;
    if (b_glaccountcontainer_isactive) {
        b_glaccountcontainer_isactive_copy = malloc(sizeof(int));
        if (b_glaccountcontainer_isactive_copy) *b_glaccountcontainer_isactive_copy = *b_glaccountcontainer_isactive;
    }
    glaccountcontainer_autocomplete_element_response_t *result = glaccountcontainer_autocomplete_element_response_create_internal (
        pki_glaccountcontainer_id_copy,
        s_glaccountcontainer_longcode,
        s_glaccountcontainer_longdescription_x,
        b_glaccountcontainer_isactive_copy
        );
    if (!result) {
        free(pki_glaccountcontainer_id_copy);
        free(b_glaccountcontainer_isactive_copy);
    }
    return result;
}

void glaccountcontainer_autocomplete_element_response_free(glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response) {
    if(NULL == glaccountcontainer_autocomplete_element_response){
        return ;
    }
    if(glaccountcontainer_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "glaccountcontainer_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id) {
        free(glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id);
        glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id = NULL;
    }
    if (glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode) {
        free(glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode);
        glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode = NULL;
    }
    if (glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x) {
        free(glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x);
        glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x = NULL;
    }
    if (glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive) {
        free(glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive);
        glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive = NULL;
    }
    free(glaccountcontainer_autocomplete_element_response);
}

cJSON *glaccountcontainer_autocomplete_element_response_convertToJSON(glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id
    if (!glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiGlaccountcontainerID", *glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }


    // glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode
    if (!glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sGlaccountcontainerLongcode", glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode) == NULL) {
    goto fail; //String
    }


    // glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x
    if (!glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sGlaccountcontainerLongdescriptionX", glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x) == NULL) {
    goto fail; //String
    }


    // glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive
    if (!glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bGlaccountcontainerIsactive", *glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_parseFromJSON(cJSON *glaccountcontainer_autocomplete_element_responseJSON){

    glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_local_var = NULL;

    // define the local variable for glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id
    int *pki_glaccountcontainer_id_local_var = NULL;

    char *s_glaccountcontainer_longcode_local_str = NULL;

    char *s_glaccountcontainer_longdescription_x_local_str = NULL;

    // define the local variable for glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive
    int *b_glaccountcontainer_isactive_local_var = NULL;

    // glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id
    cJSON *pki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "pkiGlaccountcontainerID");
    if (cJSON_IsNull(pki_glaccountcontainer_id)) {
        pki_glaccountcontainer_id = NULL;
    }
    if (!pki_glaccountcontainer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    pki_glaccountcontainer_id_local_var = malloc(sizeof(int));
    if(!pki_glaccountcontainer_id_local_var)
    {
        goto end;
    }
    *pki_glaccountcontainer_id_local_var = pki_glaccountcontainer_id->valuedouble;

    // glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode
    cJSON *s_glaccountcontainer_longcode = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "sGlaccountcontainerLongcode");
    if (cJSON_IsNull(s_glaccountcontainer_longcode)) {
        s_glaccountcontainer_longcode = NULL;
    }
    if (!s_glaccountcontainer_longcode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccountcontainer_longcode))
    {
    goto end; //String
    }

    // glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x
    cJSON *s_glaccountcontainer_longdescription_x = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "sGlaccountcontainerLongdescriptionX");
    if (cJSON_IsNull(s_glaccountcontainer_longdescription_x)) {
        s_glaccountcontainer_longdescription_x = NULL;
    }
    if (!s_glaccountcontainer_longdescription_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccountcontainer_longdescription_x))
    {
    goto end; //String
    }

    // glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive
    cJSON *b_glaccountcontainer_isactive = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "bGlaccountcontainerIsactive");
    if (cJSON_IsNull(b_glaccountcontainer_isactive)) {
        b_glaccountcontainer_isactive = NULL;
    }
    if (!b_glaccountcontainer_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_glaccountcontainer_isactive))
    {
    goto end; //Bool
    }
    b_glaccountcontainer_isactive_local_var = malloc(sizeof(int));
    if(!b_glaccountcontainer_isactive_local_var)
    {
        goto end;
    }
    *b_glaccountcontainer_isactive_local_var = b_glaccountcontainer_isactive->valueint;


    if (s_glaccountcontainer_longcode && !cJSON_IsNull(s_glaccountcontainer_longcode)) s_glaccountcontainer_longcode_local_str = strdup(s_glaccountcontainer_longcode->valuestring);
    if (s_glaccountcontainer_longdescription_x && !cJSON_IsNull(s_glaccountcontainer_longdescription_x)) s_glaccountcontainer_longdescription_x_local_str = strdup(s_glaccountcontainer_longdescription_x->valuestring);

    glaccountcontainer_autocomplete_element_response_local_var = glaccountcontainer_autocomplete_element_response_create_internal (
        pki_glaccountcontainer_id_local_var,
        s_glaccountcontainer_longcode_local_str,
        s_glaccountcontainer_longdescription_x_local_str,
        b_glaccountcontainer_isactive_local_var
        );

    if (!glaccountcontainer_autocomplete_element_response_local_var) {
        goto end;
    }

    return glaccountcontainer_autocomplete_element_response_local_var;
end:
    if (pki_glaccountcontainer_id_local_var) {
        free(pki_glaccountcontainer_id_local_var);
        pki_glaccountcontainer_id_local_var = NULL;
    }
    if (s_glaccountcontainer_longcode_local_str) {
        free(s_glaccountcontainer_longcode_local_str);
        s_glaccountcontainer_longcode_local_str = NULL;
    }
    if (s_glaccountcontainer_longdescription_x_local_str) {
        free(s_glaccountcontainer_longdescription_x_local_str);
        s_glaccountcontainer_longdescription_x_local_str = NULL;
    }
    if (b_glaccountcontainer_isactive_local_var) {
        free(b_glaccountcontainer_isactive_local_var);
        b_glaccountcontainer_isactive_local_var = NULL;
    }
    return NULL;

}
