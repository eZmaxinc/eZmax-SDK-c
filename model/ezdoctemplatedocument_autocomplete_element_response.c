#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatedocument_autocomplete_element_response.h"



static ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_create_internal(
    int *pki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    int *b_ezdoctemplatedocument_isactive
    ) {
    ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_local_var = malloc(sizeof(ezdoctemplatedocument_autocomplete_element_response_t));
    if (!ezdoctemplatedocument_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(ezdoctemplatedocument_autocomplete_element_response_local_var, 0, sizeof(ezdoctemplatedocument_autocomplete_element_response_t));
    ezdoctemplatedocument_autocomplete_element_response_local_var->_library_owned = 1;
    ezdoctemplatedocument_autocomplete_element_response_local_var->pki_ezdoctemplatedocument_id = pki_ezdoctemplatedocument_id;
    ezdoctemplatedocument_autocomplete_element_response_local_var->s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;
    ezdoctemplatedocument_autocomplete_element_response_local_var->b_ezdoctemplatedocument_isactive = b_ezdoctemplatedocument_isactive;
    return ezdoctemplatedocument_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_create(
    int *pki_ezdoctemplatedocument_id,
    char *s_ezdoctemplatedocument_name_x,
    int *b_ezdoctemplatedocument_isactive
    ) {
    int *pki_ezdoctemplatedocument_id_copy = NULL;
    if (pki_ezdoctemplatedocument_id) {
        pki_ezdoctemplatedocument_id_copy = malloc(sizeof(int));
        if (pki_ezdoctemplatedocument_id_copy) *pki_ezdoctemplatedocument_id_copy = *pki_ezdoctemplatedocument_id;
    }
    int *b_ezdoctemplatedocument_isactive_copy = NULL;
    if (b_ezdoctemplatedocument_isactive) {
        b_ezdoctemplatedocument_isactive_copy = malloc(sizeof(int));
        if (b_ezdoctemplatedocument_isactive_copy) *b_ezdoctemplatedocument_isactive_copy = *b_ezdoctemplatedocument_isactive;
    }
    ezdoctemplatedocument_autocomplete_element_response_t *result = ezdoctemplatedocument_autocomplete_element_response_create_internal (
        pki_ezdoctemplatedocument_id_copy,
        s_ezdoctemplatedocument_name_x,
        b_ezdoctemplatedocument_isactive_copy
        );
    if (!result) {
        free(pki_ezdoctemplatedocument_id_copy);
        free(b_ezdoctemplatedocument_isactive_copy);
    }
    return result;
}

void ezdoctemplatedocument_autocomplete_element_response_free(ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response) {
    if(NULL == ezdoctemplatedocument_autocomplete_element_response){
        return ;
    }
    if(ezdoctemplatedocument_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezdoctemplatedocument_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id) {
        free(ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id);
        ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id = NULL;
    }
    if (ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x) {
        free(ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x);
        ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x = NULL;
    }
    if (ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive) {
        free(ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive);
        ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive = NULL;
    }
    free(ezdoctemplatedocument_autocomplete_element_response);
}

cJSON *ezdoctemplatedocument_autocomplete_element_response_convertToJSON(ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id
    if (!ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzdoctemplatedocumentID", *ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x
    if (!ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentNameX", ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x) == NULL) {
    goto fail; //String
    }


    // ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive
    if (!ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzdoctemplatedocumentIsactive", *ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_parseFromJSON(cJSON *ezdoctemplatedocument_autocomplete_element_responseJSON){

    ezdoctemplatedocument_autocomplete_element_response_t *ezdoctemplatedocument_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id
    int *pki_ezdoctemplatedocument_id_local_var = NULL;

    char *s_ezdoctemplatedocument_name_x_local_str = NULL;

    // define the local variable for ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive
    int *b_ezdoctemplatedocument_isactive_local_var = NULL;

    // ezdoctemplatedocument_autocomplete_element_response->pki_ezdoctemplatedocument_id
    cJSON *pki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_autocomplete_element_responseJSON, "pkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(pki_ezdoctemplatedocument_id)) {
        pki_ezdoctemplatedocument_id = NULL;
    }
    if (!pki_ezdoctemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    pki_ezdoctemplatedocument_id_local_var = malloc(sizeof(int));
    if(!pki_ezdoctemplatedocument_id_local_var)
    {
        goto end;
    }
    *pki_ezdoctemplatedocument_id_local_var = pki_ezdoctemplatedocument_id->valuedouble;

    // ezdoctemplatedocument_autocomplete_element_response->s_ezdoctemplatedocument_name_x
    cJSON *s_ezdoctemplatedocument_name_x = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_autocomplete_element_responseJSON, "sEzdoctemplatedocumentNameX");
    if (cJSON_IsNull(s_ezdoctemplatedocument_name_x)) {
        s_ezdoctemplatedocument_name_x = NULL;
    }
    if (!s_ezdoctemplatedocument_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezdoctemplatedocument_name_x))
    {
    goto end; //String
    }

    // ezdoctemplatedocument_autocomplete_element_response->b_ezdoctemplatedocument_isactive
    cJSON *b_ezdoctemplatedocument_isactive = cJSON_GetObjectItemCaseSensitive(ezdoctemplatedocument_autocomplete_element_responseJSON, "bEzdoctemplatedocumentIsactive");
    if (cJSON_IsNull(b_ezdoctemplatedocument_isactive)) {
        b_ezdoctemplatedocument_isactive = NULL;
    }
    if (!b_ezdoctemplatedocument_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezdoctemplatedocument_isactive))
    {
    goto end; //Bool
    }
    b_ezdoctemplatedocument_isactive_local_var = malloc(sizeof(int));
    if(!b_ezdoctemplatedocument_isactive_local_var)
    {
        goto end;
    }
    *b_ezdoctemplatedocument_isactive_local_var = b_ezdoctemplatedocument_isactive->valueint;


    if (s_ezdoctemplatedocument_name_x && !cJSON_IsNull(s_ezdoctemplatedocument_name_x)) s_ezdoctemplatedocument_name_x_local_str = strdup(s_ezdoctemplatedocument_name_x->valuestring);

    ezdoctemplatedocument_autocomplete_element_response_local_var = ezdoctemplatedocument_autocomplete_element_response_create_internal (
        pki_ezdoctemplatedocument_id_local_var,
        s_ezdoctemplatedocument_name_x_local_str,
        b_ezdoctemplatedocument_isactive_local_var
        );

    if (!ezdoctemplatedocument_autocomplete_element_response_local_var) {
        goto end;
    }

    return ezdoctemplatedocument_autocomplete_element_response_local_var;
end:
    if (pki_ezdoctemplatedocument_id_local_var) {
        free(pki_ezdoctemplatedocument_id_local_var);
        pki_ezdoctemplatedocument_id_local_var = NULL;
    }
    if (s_ezdoctemplatedocument_name_x_local_str) {
        free(s_ezdoctemplatedocument_name_x_local_str);
        s_ezdoctemplatedocument_name_x_local_str = NULL;
    }
    if (b_ezdoctemplatedocument_isactive_local_var) {
        free(b_ezdoctemplatedocument_isactive_local_var);
        b_ezdoctemplatedocument_isactive_local_var = NULL;
    }
    return NULL;

}
