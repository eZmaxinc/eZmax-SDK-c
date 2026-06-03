#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "taxassignment_autocomplete_element_response.h"



static taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_create_internal(
    char *s_taxassignment_description_x,
    int *pki_taxassignment_id,
    int *b_taxassignment_isactive
    ) {
    taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_local_var = malloc(sizeof(taxassignment_autocomplete_element_response_t));
    if (!taxassignment_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(taxassignment_autocomplete_element_response_local_var, 0, sizeof(taxassignment_autocomplete_element_response_t));
    taxassignment_autocomplete_element_response_local_var->_library_owned = 1;
    taxassignment_autocomplete_element_response_local_var->s_taxassignment_description_x = s_taxassignment_description_x;
    taxassignment_autocomplete_element_response_local_var->pki_taxassignment_id = pki_taxassignment_id;
    taxassignment_autocomplete_element_response_local_var->b_taxassignment_isactive = b_taxassignment_isactive;
    return taxassignment_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_create(
    char *s_taxassignment_description_x,
    int *pki_taxassignment_id,
    int *b_taxassignment_isactive
    ) {
    int *pki_taxassignment_id_copy = NULL;
    if (pki_taxassignment_id) {
        pki_taxassignment_id_copy = malloc(sizeof(int));
        if (pki_taxassignment_id_copy) *pki_taxassignment_id_copy = *pki_taxassignment_id;
    }
    int *b_taxassignment_isactive_copy = NULL;
    if (b_taxassignment_isactive) {
        b_taxassignment_isactive_copy = malloc(sizeof(int));
        if (b_taxassignment_isactive_copy) *b_taxassignment_isactive_copy = *b_taxassignment_isactive;
    }
    taxassignment_autocomplete_element_response_t *result = taxassignment_autocomplete_element_response_create_internal (
        s_taxassignment_description_x,
        pki_taxassignment_id_copy,
        b_taxassignment_isactive_copy
        );
    if (!result) {
        free(pki_taxassignment_id_copy);
        free(b_taxassignment_isactive_copy);
    }
    return result;
}

void taxassignment_autocomplete_element_response_free(taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response) {
    if(NULL == taxassignment_autocomplete_element_response){
        return ;
    }
    if(taxassignment_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "taxassignment_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (taxassignment_autocomplete_element_response->s_taxassignment_description_x) {
        free(taxassignment_autocomplete_element_response->s_taxassignment_description_x);
        taxassignment_autocomplete_element_response->s_taxassignment_description_x = NULL;
    }
    if (taxassignment_autocomplete_element_response->pki_taxassignment_id) {
        free(taxassignment_autocomplete_element_response->pki_taxassignment_id);
        taxassignment_autocomplete_element_response->pki_taxassignment_id = NULL;
    }
    if (taxassignment_autocomplete_element_response->b_taxassignment_isactive) {
        free(taxassignment_autocomplete_element_response->b_taxassignment_isactive);
        taxassignment_autocomplete_element_response->b_taxassignment_isactive = NULL;
    }
    free(taxassignment_autocomplete_element_response);
}

cJSON *taxassignment_autocomplete_element_response_convertToJSON(taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // taxassignment_autocomplete_element_response->s_taxassignment_description_x
    if (!taxassignment_autocomplete_element_response->s_taxassignment_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sTaxassignmentDescriptionX", taxassignment_autocomplete_element_response->s_taxassignment_description_x) == NULL) {
    goto fail; //String
    }


    // taxassignment_autocomplete_element_response->pki_taxassignment_id
    if (!taxassignment_autocomplete_element_response->pki_taxassignment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiTaxassignmentID", *taxassignment_autocomplete_element_response->pki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // taxassignment_autocomplete_element_response->b_taxassignment_isactive
    if (!taxassignment_autocomplete_element_response->b_taxassignment_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTaxassignmentIsactive", *taxassignment_autocomplete_element_response->b_taxassignment_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_parseFromJSON(cJSON *taxassignment_autocomplete_element_responseJSON){

    taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_local_var = NULL;

    char *s_taxassignment_description_x_local_str = NULL;

    // define the local variable for taxassignment_autocomplete_element_response->pki_taxassignment_id
    int *pki_taxassignment_id_local_var = NULL;

    // define the local variable for taxassignment_autocomplete_element_response->b_taxassignment_isactive
    int *b_taxassignment_isactive_local_var = NULL;

    // taxassignment_autocomplete_element_response->s_taxassignment_description_x
    cJSON *s_taxassignment_description_x = cJSON_GetObjectItemCaseSensitive(taxassignment_autocomplete_element_responseJSON, "sTaxassignmentDescriptionX");
    if (cJSON_IsNull(s_taxassignment_description_x)) {
        s_taxassignment_description_x = NULL;
    }
    if (!s_taxassignment_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_taxassignment_description_x))
    {
    goto end; //String
    }

    // taxassignment_autocomplete_element_response->pki_taxassignment_id
    cJSON *pki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(taxassignment_autocomplete_element_responseJSON, "pkiTaxassignmentID");
    if (cJSON_IsNull(pki_taxassignment_id)) {
        pki_taxassignment_id = NULL;
    }
    if (!pki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_taxassignment_id))
    {
    goto end; //Numeric
    }
    pki_taxassignment_id_local_var = malloc(sizeof(int));
    if(!pki_taxassignment_id_local_var)
    {
        goto end;
    }
    *pki_taxassignment_id_local_var = pki_taxassignment_id->valuedouble;

    // taxassignment_autocomplete_element_response->b_taxassignment_isactive
    cJSON *b_taxassignment_isactive = cJSON_GetObjectItemCaseSensitive(taxassignment_autocomplete_element_responseJSON, "bTaxassignmentIsactive");
    if (cJSON_IsNull(b_taxassignment_isactive)) {
        b_taxassignment_isactive = NULL;
    }
    if (!b_taxassignment_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_taxassignment_isactive))
    {
    goto end; //Bool
    }
    b_taxassignment_isactive_local_var = malloc(sizeof(int));
    if(!b_taxassignment_isactive_local_var)
    {
        goto end;
    }
    *b_taxassignment_isactive_local_var = b_taxassignment_isactive->valueint;


    if (s_taxassignment_description_x && !cJSON_IsNull(s_taxassignment_description_x)) s_taxassignment_description_x_local_str = strdup(s_taxassignment_description_x->valuestring);

    taxassignment_autocomplete_element_response_local_var = taxassignment_autocomplete_element_response_create_internal (
        s_taxassignment_description_x_local_str,
        pki_taxassignment_id_local_var,
        b_taxassignment_isactive_local_var
        );

    if (!taxassignment_autocomplete_element_response_local_var) {
        goto end;
    }

    return taxassignment_autocomplete_element_response_local_var;
end:
    if (s_taxassignment_description_x_local_str) {
        free(s_taxassignment_description_x_local_str);
        s_taxassignment_description_x_local_str = NULL;
    }
    if (pki_taxassignment_id_local_var) {
        free(pki_taxassignment_id_local_var);
        pki_taxassignment_id_local_var = NULL;
    }
    if (b_taxassignment_isactive_local_var) {
        free(b_taxassignment_isactive_local_var);
        b_taxassignment_isactive_local_var = NULL;
    }
    return NULL;

}
