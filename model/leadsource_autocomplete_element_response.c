#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leadsource_autocomplete_element_response.h"



static leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response_create_internal(
    int *pki_leadsource_id,
    char *s_leadsource_name_x,
    int *b_leadsource_isactive
    ) {
    leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response_local_var = malloc(sizeof(leadsource_autocomplete_element_response_t));
    if (!leadsource_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(leadsource_autocomplete_element_response_local_var, 0, sizeof(leadsource_autocomplete_element_response_t));
    leadsource_autocomplete_element_response_local_var->_library_owned = 1;
    leadsource_autocomplete_element_response_local_var->pki_leadsource_id = pki_leadsource_id;
    leadsource_autocomplete_element_response_local_var->s_leadsource_name_x = s_leadsource_name_x;
    leadsource_autocomplete_element_response_local_var->b_leadsource_isactive = b_leadsource_isactive;
    return leadsource_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response_create(
    int *pki_leadsource_id,
    char *s_leadsource_name_x,
    int *b_leadsource_isactive
    ) {
    int *pki_leadsource_id_copy = NULL;
    if (pki_leadsource_id) {
        pki_leadsource_id_copy = malloc(sizeof(int));
        if (pki_leadsource_id_copy) *pki_leadsource_id_copy = *pki_leadsource_id;
    }
    int *b_leadsource_isactive_copy = NULL;
    if (b_leadsource_isactive) {
        b_leadsource_isactive_copy = malloc(sizeof(int));
        if (b_leadsource_isactive_copy) *b_leadsource_isactive_copy = *b_leadsource_isactive;
    }
    leadsource_autocomplete_element_response_t *result = leadsource_autocomplete_element_response_create_internal (
        pki_leadsource_id_copy,
        s_leadsource_name_x,
        b_leadsource_isactive_copy
        );
    if (!result) {
        free(pki_leadsource_id_copy);
        free(b_leadsource_isactive_copy);
    }
    return result;
}

void leadsource_autocomplete_element_response_free(leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response) {
    if(NULL == leadsource_autocomplete_element_response){
        return ;
    }
    if(leadsource_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "leadsource_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (leadsource_autocomplete_element_response->pki_leadsource_id) {
        free(leadsource_autocomplete_element_response->pki_leadsource_id);
        leadsource_autocomplete_element_response->pki_leadsource_id = NULL;
    }
    if (leadsource_autocomplete_element_response->s_leadsource_name_x) {
        free(leadsource_autocomplete_element_response->s_leadsource_name_x);
        leadsource_autocomplete_element_response->s_leadsource_name_x = NULL;
    }
    if (leadsource_autocomplete_element_response->b_leadsource_isactive) {
        free(leadsource_autocomplete_element_response->b_leadsource_isactive);
        leadsource_autocomplete_element_response->b_leadsource_isactive = NULL;
    }
    free(leadsource_autocomplete_element_response);
}

cJSON *leadsource_autocomplete_element_response_convertToJSON(leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // leadsource_autocomplete_element_response->pki_leadsource_id
    if (!leadsource_autocomplete_element_response->pki_leadsource_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiLeadsourceID", *leadsource_autocomplete_element_response->pki_leadsource_id) == NULL) {
    goto fail; //Numeric
    }


    // leadsource_autocomplete_element_response->s_leadsource_name_x
    if (!leadsource_autocomplete_element_response->s_leadsource_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLeadsourceNameX", leadsource_autocomplete_element_response->s_leadsource_name_x) == NULL) {
    goto fail; //String
    }


    // leadsource_autocomplete_element_response->b_leadsource_isactive
    if (!leadsource_autocomplete_element_response->b_leadsource_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bLeadsourceIsactive", *leadsource_autocomplete_element_response->b_leadsource_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response_parseFromJSON(cJSON *leadsource_autocomplete_element_responseJSON){

    leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response_local_var = NULL;

    // define the local variable for leadsource_autocomplete_element_response->pki_leadsource_id
    int *pki_leadsource_id_local_var = NULL;

    char *s_leadsource_name_x_local_str = NULL;

    // define the local variable for leadsource_autocomplete_element_response->b_leadsource_isactive
    int *b_leadsource_isactive_local_var = NULL;

    // leadsource_autocomplete_element_response->pki_leadsource_id
    cJSON *pki_leadsource_id = cJSON_GetObjectItemCaseSensitive(leadsource_autocomplete_element_responseJSON, "pkiLeadsourceID");
    if (cJSON_IsNull(pki_leadsource_id)) {
        pki_leadsource_id = NULL;
    }
    if (!pki_leadsource_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_leadsource_id))
    {
    goto end; //Numeric
    }
    pki_leadsource_id_local_var = malloc(sizeof(int));
    if(!pki_leadsource_id_local_var)
    {
        goto end;
    }
    *pki_leadsource_id_local_var = pki_leadsource_id->valuedouble;

    // leadsource_autocomplete_element_response->s_leadsource_name_x
    cJSON *s_leadsource_name_x = cJSON_GetObjectItemCaseSensitive(leadsource_autocomplete_element_responseJSON, "sLeadsourceNameX");
    if (cJSON_IsNull(s_leadsource_name_x)) {
        s_leadsource_name_x = NULL;
    }
    if (!s_leadsource_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_leadsource_name_x))
    {
    goto end; //String
    }

    // leadsource_autocomplete_element_response->b_leadsource_isactive
    cJSON *b_leadsource_isactive = cJSON_GetObjectItemCaseSensitive(leadsource_autocomplete_element_responseJSON, "bLeadsourceIsactive");
    if (cJSON_IsNull(b_leadsource_isactive)) {
        b_leadsource_isactive = NULL;
    }
    if (!b_leadsource_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_leadsource_isactive))
    {
    goto end; //Bool
    }
    b_leadsource_isactive_local_var = malloc(sizeof(int));
    if(!b_leadsource_isactive_local_var)
    {
        goto end;
    }
    *b_leadsource_isactive_local_var = b_leadsource_isactive->valueint;


    if (s_leadsource_name_x && !cJSON_IsNull(s_leadsource_name_x)) s_leadsource_name_x_local_str = strdup(s_leadsource_name_x->valuestring);

    leadsource_autocomplete_element_response_local_var = leadsource_autocomplete_element_response_create_internal (
        pki_leadsource_id_local_var,
        s_leadsource_name_x_local_str,
        b_leadsource_isactive_local_var
        );

    if (!leadsource_autocomplete_element_response_local_var) {
        goto end;
    }

    return leadsource_autocomplete_element_response_local_var;
end:
    if (pki_leadsource_id_local_var) {
        free(pki_leadsource_id_local_var);
        pki_leadsource_id_local_var = NULL;
    }
    if (s_leadsource_name_x_local_str) {
        free(s_leadsource_name_x_local_str);
        s_leadsource_name_x_local_str = NULL;
    }
    if (b_leadsource_isactive_local_var) {
        free(b_leadsource_isactive_local_var);
        b_leadsource_isactive_local_var = NULL;
    }
    return NULL;

}
