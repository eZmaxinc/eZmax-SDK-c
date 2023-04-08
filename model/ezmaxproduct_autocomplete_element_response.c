#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxproduct_autocomplete_element_response.h"



ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response_create(
    int pki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int b_ezmaxproduct_isactive
    ) {
    ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response_local_var = malloc(sizeof(ezmaxproduct_autocomplete_element_response_t));
    if (!ezmaxproduct_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezmaxproduct_autocomplete_element_response_local_var->pki_ezmaxproduct_id = pki_ezmaxproduct_id;
    ezmaxproduct_autocomplete_element_response_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    ezmaxproduct_autocomplete_element_response_local_var->b_ezmaxproduct_isactive = b_ezmaxproduct_isactive;

    return ezmaxproduct_autocomplete_element_response_local_var;
}


void ezmaxproduct_autocomplete_element_response_free(ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response) {
    if(NULL == ezmaxproduct_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxproduct_autocomplete_element_response->s_ezmaxproduct_description_x) {
        free(ezmaxproduct_autocomplete_element_response->s_ezmaxproduct_description_x);
        ezmaxproduct_autocomplete_element_response->s_ezmaxproduct_description_x = NULL;
    }
    free(ezmaxproduct_autocomplete_element_response);
}

cJSON *ezmaxproduct_autocomplete_element_response_convertToJSON(ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxproduct_autocomplete_element_response->pki_ezmaxproduct_id
    if (!ezmaxproduct_autocomplete_element_response->pki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzmaxproductID", ezmaxproduct_autocomplete_element_response->pki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxproduct_autocomplete_element_response->s_ezmaxproduct_description_x
    if (!ezmaxproduct_autocomplete_element_response->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", ezmaxproduct_autocomplete_element_response->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxproduct_autocomplete_element_response->b_ezmaxproduct_isactive
    if (!ezmaxproduct_autocomplete_element_response->b_ezmaxproduct_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxproductIsactive", ezmaxproduct_autocomplete_element_response->b_ezmaxproduct_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response_parseFromJSON(cJSON *ezmaxproduct_autocomplete_element_responseJSON){

    ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response_local_var = NULL;

    // ezmaxproduct_autocomplete_element_response->pki_ezmaxproduct_id
    cJSON *pki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_autocomplete_element_responseJSON, "pkiEzmaxproductID");
    if (!pki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }

    // ezmaxproduct_autocomplete_element_response->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_autocomplete_element_responseJSON, "sEzmaxproductDescriptionX");
    if (!s_ezmaxproduct_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxproduct_description_x))
    {
    goto end; //String
    }

    // ezmaxproduct_autocomplete_element_response->b_ezmaxproduct_isactive
    cJSON *b_ezmaxproduct_isactive = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_autocomplete_element_responseJSON, "bEzmaxproductIsactive");
    if (!b_ezmaxproduct_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxproduct_isactive))
    {
    goto end; //Bool
    }


    ezmaxproduct_autocomplete_element_response_local_var = ezmaxproduct_autocomplete_element_response_create (
        pki_ezmaxproduct_id->valuedouble,
        strdup(s_ezmaxproduct_description_x->valuestring),
        b_ezmaxproduct_isactive->valueint
        );

    return ezmaxproduct_autocomplete_element_response_local_var;
end:
    return NULL;

}
