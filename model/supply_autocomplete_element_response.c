#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_autocomplete_element_response.h"



static supply_autocomplete_element_response_t *supply_autocomplete_element_response_create_internal(
    int *pki_supply_id,
    char *s_supply_description_x,
    int *b_supply_isactive
    ) {
    supply_autocomplete_element_response_t *supply_autocomplete_element_response_local_var = malloc(sizeof(supply_autocomplete_element_response_t));
    if (!supply_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(supply_autocomplete_element_response_local_var, 0, sizeof(supply_autocomplete_element_response_t));
    supply_autocomplete_element_response_local_var->_library_owned = 1;
    supply_autocomplete_element_response_local_var->pki_supply_id = pki_supply_id;
    supply_autocomplete_element_response_local_var->s_supply_description_x = s_supply_description_x;
    supply_autocomplete_element_response_local_var->b_supply_isactive = b_supply_isactive;
    return supply_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) supply_autocomplete_element_response_t *supply_autocomplete_element_response_create(
    int *pki_supply_id,
    char *s_supply_description_x,
    int *b_supply_isactive
    ) {
    int *pki_supply_id_copy = NULL;
    if (pki_supply_id) {
        pki_supply_id_copy = malloc(sizeof(int));
        if (pki_supply_id_copy) *pki_supply_id_copy = *pki_supply_id;
    }
    int *b_supply_isactive_copy = NULL;
    if (b_supply_isactive) {
        b_supply_isactive_copy = malloc(sizeof(int));
        if (b_supply_isactive_copy) *b_supply_isactive_copy = *b_supply_isactive;
    }
    supply_autocomplete_element_response_t *result = supply_autocomplete_element_response_create_internal (
        pki_supply_id_copy,
        s_supply_description_x,
        b_supply_isactive_copy
        );
    if (!result) {
        free(pki_supply_id_copy);
        free(b_supply_isactive_copy);
    }
    return result;
}

void supply_autocomplete_element_response_free(supply_autocomplete_element_response_t *supply_autocomplete_element_response) {
    if(NULL == supply_autocomplete_element_response){
        return ;
    }
    if(supply_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supply_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supply_autocomplete_element_response->pki_supply_id) {
        free(supply_autocomplete_element_response->pki_supply_id);
        supply_autocomplete_element_response->pki_supply_id = NULL;
    }
    if (supply_autocomplete_element_response->s_supply_description_x) {
        free(supply_autocomplete_element_response->s_supply_description_x);
        supply_autocomplete_element_response->s_supply_description_x = NULL;
    }
    if (supply_autocomplete_element_response->b_supply_isactive) {
        free(supply_autocomplete_element_response->b_supply_isactive);
        supply_autocomplete_element_response->b_supply_isactive = NULL;
    }
    free(supply_autocomplete_element_response);
}

cJSON *supply_autocomplete_element_response_convertToJSON(supply_autocomplete_element_response_t *supply_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // supply_autocomplete_element_response->pki_supply_id
    if (!supply_autocomplete_element_response->pki_supply_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSupplyID", *supply_autocomplete_element_response->pki_supply_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_autocomplete_element_response->s_supply_description_x
    if (!supply_autocomplete_element_response->s_supply_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplyDescriptionX", supply_autocomplete_element_response->s_supply_description_x) == NULL) {
    goto fail; //String
    }


    // supply_autocomplete_element_response->b_supply_isactive
    if (!supply_autocomplete_element_response->b_supply_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyIsactive", *supply_autocomplete_element_response->b_supply_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supply_autocomplete_element_response_t *supply_autocomplete_element_response_parseFromJSON(cJSON *supply_autocomplete_element_responseJSON){

    supply_autocomplete_element_response_t *supply_autocomplete_element_response_local_var = NULL;

    // define the local variable for supply_autocomplete_element_response->pki_supply_id
    int *pki_supply_id_local_var = NULL;

    char *s_supply_description_x_local_str = NULL;

    // define the local variable for supply_autocomplete_element_response->b_supply_isactive
    int *b_supply_isactive_local_var = NULL;

    // supply_autocomplete_element_response->pki_supply_id
    cJSON *pki_supply_id = cJSON_GetObjectItemCaseSensitive(supply_autocomplete_element_responseJSON, "pkiSupplyID");
    if (cJSON_IsNull(pki_supply_id)) {
        pki_supply_id = NULL;
    }
    if (!pki_supply_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_supply_id))
    {
    goto end; //Numeric
    }
    pki_supply_id_local_var = malloc(sizeof(int));
    if(!pki_supply_id_local_var)
    {
        goto end;
    }
    *pki_supply_id_local_var = pki_supply_id->valuedouble;

    // supply_autocomplete_element_response->s_supply_description_x
    cJSON *s_supply_description_x = cJSON_GetObjectItemCaseSensitive(supply_autocomplete_element_responseJSON, "sSupplyDescriptionX");
    if (cJSON_IsNull(s_supply_description_x)) {
        s_supply_description_x = NULL;
    }
    if (!s_supply_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supply_description_x))
    {
    goto end; //String
    }

    // supply_autocomplete_element_response->b_supply_isactive
    cJSON *b_supply_isactive = cJSON_GetObjectItemCaseSensitive(supply_autocomplete_element_responseJSON, "bSupplyIsactive");
    if (cJSON_IsNull(b_supply_isactive)) {
        b_supply_isactive = NULL;
    }
    if (!b_supply_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supply_isactive))
    {
    goto end; //Bool
    }
    b_supply_isactive_local_var = malloc(sizeof(int));
    if(!b_supply_isactive_local_var)
    {
        goto end;
    }
    *b_supply_isactive_local_var = b_supply_isactive->valueint;


    if (s_supply_description_x && !cJSON_IsNull(s_supply_description_x)) s_supply_description_x_local_str = strdup(s_supply_description_x->valuestring);

    supply_autocomplete_element_response_local_var = supply_autocomplete_element_response_create_internal (
        pki_supply_id_local_var,
        s_supply_description_x_local_str,
        b_supply_isactive_local_var
        );

    if (!supply_autocomplete_element_response_local_var) {
        goto end;
    }

    return supply_autocomplete_element_response_local_var;
end:
    if (pki_supply_id_local_var) {
        free(pki_supply_id_local_var);
        pki_supply_id_local_var = NULL;
    }
    if (s_supply_description_x_local_str) {
        free(s_supply_description_x_local_str);
        s_supply_description_x_local_str = NULL;
    }
    if (b_supply_isactive_local_var) {
        free(b_supply_isactive_local_var);
        b_supply_isactive_local_var = NULL;
    }
    return NULL;

}
