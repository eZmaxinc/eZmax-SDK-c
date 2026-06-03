#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatetype_autocomplete_element_response.h"



static ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_create_internal(
    int *pki_ezdoctemplatetype_id,
    char *s_ezdoctemplatetype_description_x,
    int *b_ezdoctemplatetype_isactive
    ) {
    ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_local_var = malloc(sizeof(ezdoctemplatetype_autocomplete_element_response_t));
    if (!ezdoctemplatetype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(ezdoctemplatetype_autocomplete_element_response_local_var, 0, sizeof(ezdoctemplatetype_autocomplete_element_response_t));
    ezdoctemplatetype_autocomplete_element_response_local_var->_library_owned = 1;
    ezdoctemplatetype_autocomplete_element_response_local_var->pki_ezdoctemplatetype_id = pki_ezdoctemplatetype_id;
    ezdoctemplatetype_autocomplete_element_response_local_var->s_ezdoctemplatetype_description_x = s_ezdoctemplatetype_description_x;
    ezdoctemplatetype_autocomplete_element_response_local_var->b_ezdoctemplatetype_isactive = b_ezdoctemplatetype_isactive;
    return ezdoctemplatetype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_create(
    int *pki_ezdoctemplatetype_id,
    char *s_ezdoctemplatetype_description_x,
    int *b_ezdoctemplatetype_isactive
    ) {
    int *pki_ezdoctemplatetype_id_copy = NULL;
    if (pki_ezdoctemplatetype_id) {
        pki_ezdoctemplatetype_id_copy = malloc(sizeof(int));
        if (pki_ezdoctemplatetype_id_copy) *pki_ezdoctemplatetype_id_copy = *pki_ezdoctemplatetype_id;
    }
    int *b_ezdoctemplatetype_isactive_copy = NULL;
    if (b_ezdoctemplatetype_isactive) {
        b_ezdoctemplatetype_isactive_copy = malloc(sizeof(int));
        if (b_ezdoctemplatetype_isactive_copy) *b_ezdoctemplatetype_isactive_copy = *b_ezdoctemplatetype_isactive;
    }
    ezdoctemplatetype_autocomplete_element_response_t *result = ezdoctemplatetype_autocomplete_element_response_create_internal (
        pki_ezdoctemplatetype_id_copy,
        s_ezdoctemplatetype_description_x,
        b_ezdoctemplatetype_isactive_copy
        );
    if (!result) {
        free(pki_ezdoctemplatetype_id_copy);
        free(b_ezdoctemplatetype_isactive_copy);
    }
    return result;
}

void ezdoctemplatetype_autocomplete_element_response_free(ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response) {
    if(NULL == ezdoctemplatetype_autocomplete_element_response){
        return ;
    }
    if(ezdoctemplatetype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatetype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id) {
        free(ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id);
        ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id = NULL;
    }
    if (ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x) {
        free(ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x);
        ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x = NULL;
    }
    if (ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive) {
        free(ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive);
        ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive = NULL;
    }
    free(ezdoctemplatetype_autocomplete_element_response);
}

cJSON *ezdoctemplatetype_autocomplete_element_response_convertToJSON(ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id
    if (!ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatetypeID", *ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x
    if (!ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatetypeDescriptionX", ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x) == NULL) {
    goto fail; //String
    }


    // ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive
    if (!ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatetypeIsactive", *ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatetype_autocomplete_element_responseJSON){

    ezdoctemplatetype_autocomplete_element_response_t *ezdoctemplatetype_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id
    int *pki_ezdoctemplatetype_id_local_var = NULL;

    char *s_ezdoctemplatetype_description_x_local_str = NULL;

    // define the local variable for ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive
    int *b_ezdoctemplatetype_isactive_local_var = NULL;

    // ezdoctemplatetype_autocomplete_element_response->pki_ezdoctemplatetype_id
    cJSON *pki_ezdoctemplatetype_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_autocomplete_element_responseJSON, "pkiEzdoctemplatetypeID");
    if (cJSON_IsNull(pki_ezdoctemplatetype_id)) {
        pki_ezdoctemplatetype_id = NULL;
    }
    if (!pki_ezdoctemplatetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezdoctemplatetype_id))
    {
    goto end; //Numeric
    }
    pki_ezdoctemplatetype_id_local_var = malloc(sizeof(int));
    if(!pki_ezdoctemplatetype_id_local_var)
    {
        goto end;
    }
    *pki_ezdoctemplatetype_id_local_var = pki_ezdoctemplatetype_id->valuedouble;

    // ezdoctemplatetype_autocomplete_element_response->s_ezdoctemplatetype_description_x
    cJSON *s_ezdoctemplatetype_description_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_autocomplete_element_responseJSON, "sEzdoctemplatetypeDescriptionX");
    if (cJSON_IsNull(s_ezdoctemplatetype_description_x)) {
        s_ezdoctemplatetype_description_x = NULL;
    }
    if (!s_ezdoctemplatetype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatetype_description_x))
    {
    goto end; //String
    }

    // ezdoctemplatetype_autocomplete_element_response->b_ezdoctemplatetype_isactive
    cJSON *b_ezdoctemplatetype_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_autocomplete_element_responseJSON, "bEzdoctemplatetypeIsactive");
    if (cJSON_IsNull(b_ezdoctemplatetype_isactive)) {
        b_ezdoctemplatetype_isactive = NULL;
    }
    if (!b_ezdoctemplatetype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatetype_isactive))
    {
    goto end; //Bool
    }
    b_ezdoctemplatetype_isactive_local_var = malloc(sizeof(int));
    if(!b_ezdoctemplatetype_isactive_local_var)
    {
        goto end;
    }
    *b_ezdoctemplatetype_isactive_local_var = b_ezdoctemplatetype_isactive->valueint;


    if (s_ezdoctemplatetype_description_x && !cJSON_IsNull(s_ezdoctemplatetype_description_x)) s_ezdoctemplatetype_description_x_local_str = strdup(s_ezdoctemplatetype_description_x->valuestring);

    ezdoctemplatetype_autocomplete_element_response_local_var = ezdoctemplatetype_autocomplete_element_response_create_internal (
        pki_ezdoctemplatetype_id_local_var,
        s_ezdoctemplatetype_description_x_local_str,
        b_ezdoctemplatetype_isactive_local_var
        );

    if (!ezdoctemplatetype_autocomplete_element_response_local_var) {
        goto end;
    }

    return ezdoctemplatetype_autocomplete_element_response_local_var;
end:
    if (pki_ezdoctemplatetype_id_local_var) {
        free(pki_ezdoctemplatetype_id_local_var);
        pki_ezdoctemplatetype_id_local_var = NULL;
    }
    if (s_ezdoctemplatetype_description_x_local_str) {
        free(s_ezdoctemplatetype_description_x_local_str);
        s_ezdoctemplatetype_description_x_local_str = NULL;
    }
    if (b_ezdoctemplatetype_isactive_local_var) {
        free(b_ezdoctemplatetype_isactive_local_var);
        b_ezdoctemplatetype_isactive_local_var = NULL;
    }
    return NULL;

}
