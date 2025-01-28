#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "taxassignment_autocomplete_element_response.h"



static taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_create_internal(
    char *s_taxassignment_description_x,
    int pki_taxassignment_id,
    int b_taxassignment_isactive
    ) {
    taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_local_var = malloc(sizeof(taxassignment_autocomplete_element_response_t));
    if (!taxassignment_autocomplete_element_response_local_var) {
        return NULL;
    }
    taxassignment_autocomplete_element_response_local_var->s_taxassignment_description_x = s_taxassignment_description_x;
    taxassignment_autocomplete_element_response_local_var->pki_taxassignment_id = pki_taxassignment_id;
    taxassignment_autocomplete_element_response_local_var->b_taxassignment_isactive = b_taxassignment_isactive;

    taxassignment_autocomplete_element_response_local_var->_library_owned = 1;
    return taxassignment_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_create(
    char *s_taxassignment_description_x,
    int pki_taxassignment_id,
    int b_taxassignment_isactive
    ) {
    return taxassignment_autocomplete_element_response_create_internal (
        s_taxassignment_description_x,
        pki_taxassignment_id,
        b_taxassignment_isactive
        );
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
    if(cJSON_AddNumberToObject(item, "pkiTaxassignmentID", taxassignment_autocomplete_element_response->pki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // taxassignment_autocomplete_element_response->b_taxassignment_isactive
    if (!taxassignment_autocomplete_element_response->b_taxassignment_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTaxassignmentIsactive", taxassignment_autocomplete_element_response->b_taxassignment_isactive) == NULL) {
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


    taxassignment_autocomplete_element_response_local_var = taxassignment_autocomplete_element_response_create_internal (
        strdup(s_taxassignment_description_x->valuestring),
        pki_taxassignment_id->valuedouble,
        b_taxassignment_isactive->valueint
        );

    return taxassignment_autocomplete_element_response_local_var;
end:
    return NULL;

}
