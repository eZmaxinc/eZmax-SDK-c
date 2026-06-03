#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_autocomplete_element_response.h"



static ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response_create_internal(
    int *pki_ezsignsigningreason_id,
    char *s_ezsignsigningreason_description_x,
    int *b_ezsignsigningreason_isactive
    ) {
    ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response_local_var = malloc(sizeof(ezsignsigningreason_autocomplete_element_response_t));
    if (!ezsignsigningreason_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(ezsignsigningreason_autocomplete_element_response_local_var, 0, sizeof(ezsignsigningreason_autocomplete_element_response_t));
    ezsignsigningreason_autocomplete_element_response_local_var->_library_owned = 1;
    ezsignsigningreason_autocomplete_element_response_local_var->pki_ezsignsigningreason_id = pki_ezsignsigningreason_id;
    ezsignsigningreason_autocomplete_element_response_local_var->s_ezsignsigningreason_description_x = s_ezsignsigningreason_description_x;
    ezsignsigningreason_autocomplete_element_response_local_var->b_ezsignsigningreason_isactive = b_ezsignsigningreason_isactive;
    return ezsignsigningreason_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response_create(
    int *pki_ezsignsigningreason_id,
    char *s_ezsignsigningreason_description_x,
    int *b_ezsignsigningreason_isactive
    ) {
    int *pki_ezsignsigningreason_id_copy = NULL;
    if (pki_ezsignsigningreason_id) {
        pki_ezsignsigningreason_id_copy = malloc(sizeof(int));
        if (pki_ezsignsigningreason_id_copy) *pki_ezsignsigningreason_id_copy = *pki_ezsignsigningreason_id;
    }
    int *b_ezsignsigningreason_isactive_copy = NULL;
    if (b_ezsignsigningreason_isactive) {
        b_ezsignsigningreason_isactive_copy = malloc(sizeof(int));
        if (b_ezsignsigningreason_isactive_copy) *b_ezsignsigningreason_isactive_copy = *b_ezsignsigningreason_isactive;
    }
    ezsignsigningreason_autocomplete_element_response_t *result = ezsignsigningreason_autocomplete_element_response_create_internal (
        pki_ezsignsigningreason_id_copy,
        s_ezsignsigningreason_description_x,
        b_ezsignsigningreason_isactive_copy
        );
    if (!result) {
        free(pki_ezsignsigningreason_id_copy);
        free(b_ezsignsigningreason_isactive_copy);
    }
    return result;
}

void ezsignsigningreason_autocomplete_element_response_free(ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response) {
    if(NULL == ezsignsigningreason_autocomplete_element_response){
        return ;
    }
    if(ezsignsigningreason_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigningreason_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id) {
        free(ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id);
        ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id = NULL;
    }
    if (ezsignsigningreason_autocomplete_element_response->s_ezsignsigningreason_description_x) {
        free(ezsignsigningreason_autocomplete_element_response->s_ezsignsigningreason_description_x);
        ezsignsigningreason_autocomplete_element_response->s_ezsignsigningreason_description_x = NULL;
    }
    if (ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive) {
        free(ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive);
        ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive = NULL;
    }
    free(ezsignsigningreason_autocomplete_element_response);
}

cJSON *ezsignsigningreason_autocomplete_element_response_convertToJSON(ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id
    if (!ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsigningreasonID", *ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigningreason_autocomplete_element_response->s_ezsignsigningreason_description_x
    if (!ezsignsigningreason_autocomplete_element_response->s_ezsignsigningreason_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignsigningreasonDescriptionX", ezsignsigningreason_autocomplete_element_response->s_ezsignsigningreason_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive
    if (!ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignsigningreasonIsactive", *ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response_parseFromJSON(cJSON *ezsignsigningreason_autocomplete_element_responseJSON){

    ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id
    int *pki_ezsignsigningreason_id_local_var = NULL;

    char *s_ezsignsigningreason_description_x_local_str = NULL;

    // define the local variable for ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive
    int *b_ezsignsigningreason_isactive_local_var = NULL;

    // ezsignsigningreason_autocomplete_element_response->pki_ezsignsigningreason_id
    cJSON *pki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_autocomplete_element_responseJSON, "pkiEzsignsigningreasonID");
    if (cJSON_IsNull(pki_ezsignsigningreason_id)) {
        pki_ezsignsigningreason_id = NULL;
    }
    if (!pki_ezsignsigningreason_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsigningreason_id))
    {
    goto end; //Numeric
    }
    pki_ezsignsigningreason_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignsigningreason_id_local_var)
    {
        goto end;
    }
    *pki_ezsignsigningreason_id_local_var = pki_ezsignsigningreason_id->valuedouble;

    // ezsignsigningreason_autocomplete_element_response->s_ezsignsigningreason_description_x
    cJSON *s_ezsignsigningreason_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_autocomplete_element_responseJSON, "sEzsignsigningreasonDescriptionX");
    if (cJSON_IsNull(s_ezsignsigningreason_description_x)) {
        s_ezsignsigningreason_description_x = NULL;
    }
    if (!s_ezsignsigningreason_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignsigningreason_description_x))
    {
    goto end; //String
    }

    // ezsignsigningreason_autocomplete_element_response->b_ezsignsigningreason_isactive
    cJSON *b_ezsignsigningreason_isactive = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_autocomplete_element_responseJSON, "bEzsignsigningreasonIsactive");
    if (cJSON_IsNull(b_ezsignsigningreason_isactive)) {
        b_ezsignsigningreason_isactive = NULL;
    }
    if (!b_ezsignsigningreason_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignsigningreason_isactive))
    {
    goto end; //Bool
    }
    b_ezsignsigningreason_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsignsigningreason_isactive_local_var)
    {
        goto end;
    }
    *b_ezsignsigningreason_isactive_local_var = b_ezsignsigningreason_isactive->valueint;


    if (s_ezsignsigningreason_description_x && !cJSON_IsNull(s_ezsignsigningreason_description_x)) s_ezsignsigningreason_description_x_local_str = strdup(s_ezsignsigningreason_description_x->valuestring);

    ezsignsigningreason_autocomplete_element_response_local_var = ezsignsigningreason_autocomplete_element_response_create_internal (
        pki_ezsignsigningreason_id_local_var,
        s_ezsignsigningreason_description_x_local_str,
        b_ezsignsigningreason_isactive_local_var
        );

    if (!ezsignsigningreason_autocomplete_element_response_local_var) {
        goto end;
    }

    return ezsignsigningreason_autocomplete_element_response_local_var;
end:
    if (pki_ezsignsigningreason_id_local_var) {
        free(pki_ezsignsigningreason_id_local_var);
        pki_ezsignsigningreason_id_local_var = NULL;
    }
    if (s_ezsignsigningreason_description_x_local_str) {
        free(s_ezsignsigningreason_description_x_local_str);
        s_ezsignsigningreason_description_x_local_str = NULL;
    }
    if (b_ezsignsigningreason_isactive_local_var) {
        free(b_ezsignsigningreason_isactive_local_var);
        b_ezsignsigningreason_isactive_local_var = NULL;
    }
    return NULL;

}
