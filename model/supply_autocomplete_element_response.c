#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_autocomplete_element_response.h"



static supply_autocomplete_element_response_t *supply_autocomplete_element_response_create_internal(
    int pki_supply_id,
    char *s_supply_description_x,
    int b_supply_isactive
    ) {
    supply_autocomplete_element_response_t *supply_autocomplete_element_response_local_var = malloc(sizeof(supply_autocomplete_element_response_t));
    if (!supply_autocomplete_element_response_local_var) {
        return NULL;
    }
    supply_autocomplete_element_response_local_var->pki_supply_id = pki_supply_id;
    supply_autocomplete_element_response_local_var->s_supply_description_x = s_supply_description_x;
    supply_autocomplete_element_response_local_var->b_supply_isactive = b_supply_isactive;

    supply_autocomplete_element_response_local_var->_library_owned = 1;
    return supply_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) supply_autocomplete_element_response_t *supply_autocomplete_element_response_create(
    int pki_supply_id,
    char *s_supply_description_x,
    int b_supply_isactive
    ) {
    return supply_autocomplete_element_response_create_internal (
        pki_supply_id,
        s_supply_description_x,
        b_supply_isactive
        );
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
    if (supply_autocomplete_element_response->s_supply_description_x) {
        free(supply_autocomplete_element_response->s_supply_description_x);
        supply_autocomplete_element_response->s_supply_description_x = NULL;
    }
    free(supply_autocomplete_element_response);
}

cJSON *supply_autocomplete_element_response_convertToJSON(supply_autocomplete_element_response_t *supply_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // supply_autocomplete_element_response->pki_supply_id
    if (!supply_autocomplete_element_response->pki_supply_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSupplyID", supply_autocomplete_element_response->pki_supply_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bSupplyIsactive", supply_autocomplete_element_response->b_supply_isactive) == NULL) {
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


    supply_autocomplete_element_response_local_var = supply_autocomplete_element_response_create_internal (
        pki_supply_id->valuedouble,
        strdup(s_supply_description_x->valuestring),
        b_supply_isactive->valueint
        );

    return supply_autocomplete_element_response_local_var;
end:
    return NULL;

}
