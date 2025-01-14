#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "glaccountcontainer_autocomplete_element_response.h"



glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_create(
    int pki_glaccountcontainer_id,
    char *s_glaccountcontainer_longcode,
    char *s_glaccountcontainer_longdescription_x,
    int b_glaccountcontainer_isactive
    ) {
    glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_local_var = malloc(sizeof(glaccountcontainer_autocomplete_element_response_t));
    if (!glaccountcontainer_autocomplete_element_response_local_var) {
        return NULL;
    }
    glaccountcontainer_autocomplete_element_response_local_var->pki_glaccountcontainer_id = pki_glaccountcontainer_id;
    glaccountcontainer_autocomplete_element_response_local_var->s_glaccountcontainer_longcode = s_glaccountcontainer_longcode;
    glaccountcontainer_autocomplete_element_response_local_var->s_glaccountcontainer_longdescription_x = s_glaccountcontainer_longdescription_x;
    glaccountcontainer_autocomplete_element_response_local_var->b_glaccountcontainer_isactive = b_glaccountcontainer_isactive;

    return glaccountcontainer_autocomplete_element_response_local_var;
}


void glaccountcontainer_autocomplete_element_response_free(glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response) {
    if(NULL == glaccountcontainer_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode) {
        free(glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode);
        glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode = NULL;
    }
    if (glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x) {
        free(glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x);
        glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x = NULL;
    }
    free(glaccountcontainer_autocomplete_element_response);
}

cJSON *glaccountcontainer_autocomplete_element_response_convertToJSON(glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id
    if (!glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiGlaccountcontainerID", glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bGlaccountcontainerIsactive", glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive) == NULL) {
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

    // glaccountcontainer_autocomplete_element_response->pki_glaccountcontainer_id
    cJSON *pki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "pkiGlaccountcontainerID");
    if (!pki_glaccountcontainer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }

    // glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longcode
    cJSON *s_glaccountcontainer_longcode = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "sGlaccountcontainerLongcode");
    if (!s_glaccountcontainer_longcode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccountcontainer_longcode))
    {
    goto end; //String
    }

    // glaccountcontainer_autocomplete_element_response->s_glaccountcontainer_longdescription_x
    cJSON *s_glaccountcontainer_longdescription_x = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "sGlaccountcontainerLongdescriptionX");
    if (!s_glaccountcontainer_longdescription_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccountcontainer_longdescription_x))
    {
    goto end; //String
    }

    // glaccountcontainer_autocomplete_element_response->b_glaccountcontainer_isactive
    cJSON *b_glaccountcontainer_isactive = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_autocomplete_element_responseJSON, "bGlaccountcontainerIsactive");
    if (!b_glaccountcontainer_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_glaccountcontainer_isactive))
    {
    goto end; //Bool
    }


    glaccountcontainer_autocomplete_element_response_local_var = glaccountcontainer_autocomplete_element_response_create (
        pki_glaccountcontainer_id->valuedouble,
        strdup(s_glaccountcontainer_longcode->valuestring),
        strdup(s_glaccountcontainer_longdescription_x->valuestring),
        b_glaccountcontainer_isactive->valueint
        );

    return glaccountcontainer_autocomplete_element_response_local_var;
end:
    return NULL;

}
