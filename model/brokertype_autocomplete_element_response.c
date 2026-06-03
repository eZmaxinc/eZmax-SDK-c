#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "brokertype_autocomplete_element_response.h"



static brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response_create_internal(
    int *pki_brokertype_id,
    char *s_brokertype_name_x,
    int *b_brokertype_isactive
    ) {
    brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response_local_var = malloc(sizeof(brokertype_autocomplete_element_response_t));
    if (!brokertype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(brokertype_autocomplete_element_response_local_var, 0, sizeof(brokertype_autocomplete_element_response_t));
    brokertype_autocomplete_element_response_local_var->_library_owned = 1;
    brokertype_autocomplete_element_response_local_var->pki_brokertype_id = pki_brokertype_id;
    brokertype_autocomplete_element_response_local_var->s_brokertype_name_x = s_brokertype_name_x;
    brokertype_autocomplete_element_response_local_var->b_brokertype_isactive = b_brokertype_isactive;
    return brokertype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response_create(
    int *pki_brokertype_id,
    char *s_brokertype_name_x,
    int *b_brokertype_isactive
    ) {
    int *pki_brokertype_id_copy = NULL;
    if (pki_brokertype_id) {
        pki_brokertype_id_copy = malloc(sizeof(int));
        if (pki_brokertype_id_copy) *pki_brokertype_id_copy = *pki_brokertype_id;
    }
    int *b_brokertype_isactive_copy = NULL;
    if (b_brokertype_isactive) {
        b_brokertype_isactive_copy = malloc(sizeof(int));
        if (b_brokertype_isactive_copy) *b_brokertype_isactive_copy = *b_brokertype_isactive;
    }
    brokertype_autocomplete_element_response_t *result = brokertype_autocomplete_element_response_create_internal (
        pki_brokertype_id_copy,
        s_brokertype_name_x,
        b_brokertype_isactive_copy
        );
    if (!result) {
        free(pki_brokertype_id_copy);
        free(b_brokertype_isactive_copy);
    }
    return result;
}

void brokertype_autocomplete_element_response_free(brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response) {
    if(NULL == brokertype_autocomplete_element_response){
        return ;
    }
    if(brokertype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "brokertype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (brokertype_autocomplete_element_response->pki_brokertype_id) {
        free(brokertype_autocomplete_element_response->pki_brokertype_id);
        brokertype_autocomplete_element_response->pki_brokertype_id = NULL;
    }
    if (brokertype_autocomplete_element_response->s_brokertype_name_x) {
        free(brokertype_autocomplete_element_response->s_brokertype_name_x);
        brokertype_autocomplete_element_response->s_brokertype_name_x = NULL;
    }
    if (brokertype_autocomplete_element_response->b_brokertype_isactive) {
        free(brokertype_autocomplete_element_response->b_brokertype_isactive);
        brokertype_autocomplete_element_response->b_brokertype_isactive = NULL;
    }
    free(brokertype_autocomplete_element_response);
}

cJSON *brokertype_autocomplete_element_response_convertToJSON(brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // brokertype_autocomplete_element_response->pki_brokertype_id
    if (!brokertype_autocomplete_element_response->pki_brokertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrokertypeID", *brokertype_autocomplete_element_response->pki_brokertype_id) == NULL) {
    goto fail; //Numeric
    }


    // brokertype_autocomplete_element_response->s_brokertype_name_x
    if (!brokertype_autocomplete_element_response->s_brokertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrokertypeNameX", brokertype_autocomplete_element_response->s_brokertype_name_x) == NULL) {
    goto fail; //String
    }


    // brokertype_autocomplete_element_response->b_brokertype_isactive
    if (!brokertype_autocomplete_element_response->b_brokertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrokertypeIsactive", *brokertype_autocomplete_element_response->b_brokertype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response_parseFromJSON(cJSON *brokertype_autocomplete_element_responseJSON){

    brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response_local_var = NULL;

    // define the local variable for brokertype_autocomplete_element_response->pki_brokertype_id
    int *pki_brokertype_id_local_var = NULL;

    char *s_brokertype_name_x_local_str = NULL;

    // define the local variable for brokertype_autocomplete_element_response->b_brokertype_isactive
    int *b_brokertype_isactive_local_var = NULL;

    // brokertype_autocomplete_element_response->pki_brokertype_id
    cJSON *pki_brokertype_id = cJSON_GetObjectItemCaseSensitive(brokertype_autocomplete_element_responseJSON, "pkiBrokertypeID");
    if (cJSON_IsNull(pki_brokertype_id)) {
        pki_brokertype_id = NULL;
    }
    if (!pki_brokertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_brokertype_id))
    {
    goto end; //Numeric
    }
    pki_brokertype_id_local_var = malloc(sizeof(int));
    if(!pki_brokertype_id_local_var)
    {
        goto end;
    }
    *pki_brokertype_id_local_var = pki_brokertype_id->valuedouble;

    // brokertype_autocomplete_element_response->s_brokertype_name_x
    cJSON *s_brokertype_name_x = cJSON_GetObjectItemCaseSensitive(brokertype_autocomplete_element_responseJSON, "sBrokertypeNameX");
    if (cJSON_IsNull(s_brokertype_name_x)) {
        s_brokertype_name_x = NULL;
    }
    if (!s_brokertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_brokertype_name_x))
    {
    goto end; //String
    }

    // brokertype_autocomplete_element_response->b_brokertype_isactive
    cJSON *b_brokertype_isactive = cJSON_GetObjectItemCaseSensitive(brokertype_autocomplete_element_responseJSON, "bBrokertypeIsactive");
    if (cJSON_IsNull(b_brokertype_isactive)) {
        b_brokertype_isactive = NULL;
    }
    if (!b_brokertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_brokertype_isactive))
    {
    goto end; //Bool
    }
    b_brokertype_isactive_local_var = malloc(sizeof(int));
    if(!b_brokertype_isactive_local_var)
    {
        goto end;
    }
    *b_brokertype_isactive_local_var = b_brokertype_isactive->valueint;


    if (s_brokertype_name_x && !cJSON_IsNull(s_brokertype_name_x)) s_brokertype_name_x_local_str = strdup(s_brokertype_name_x->valuestring);

    brokertype_autocomplete_element_response_local_var = brokertype_autocomplete_element_response_create_internal (
        pki_brokertype_id_local_var,
        s_brokertype_name_x_local_str,
        b_brokertype_isactive_local_var
        );

    if (!brokertype_autocomplete_element_response_local_var) {
        goto end;
    }

    return brokertype_autocomplete_element_response_local_var;
end:
    if (pki_brokertype_id_local_var) {
        free(pki_brokertype_id_local_var);
        pki_brokertype_id_local_var = NULL;
    }
    if (s_brokertype_name_x_local_str) {
        free(s_brokertype_name_x_local_str);
        s_brokertype_name_x_local_str = NULL;
    }
    if (b_brokertype_isactive_local_var) {
        free(b_brokertype_isactive_local_var);
        b_brokertype_isactive_local_var = NULL;
    }
    return NULL;

}
