#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntsarequirement_autocomplete_element_response.h"



ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response_create(
    char *s_ezsigntsarequirement_description_x,
    int pki_ezsigntsarequirement_id,
    int b_ezsigntsarequirement_isactive,
    int b_disabled
    ) {
    ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response_local_var = malloc(sizeof(ezsigntsarequirement_autocomplete_element_response_t));
    if (!ezsigntsarequirement_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezsigntsarequirement_autocomplete_element_response_local_var->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    ezsigntsarequirement_autocomplete_element_response_local_var->pki_ezsigntsarequirement_id = pki_ezsigntsarequirement_id;
    ezsigntsarequirement_autocomplete_element_response_local_var->b_ezsigntsarequirement_isactive = b_ezsigntsarequirement_isactive;
    ezsigntsarequirement_autocomplete_element_response_local_var->b_disabled = b_disabled;

    return ezsigntsarequirement_autocomplete_element_response_local_var;
}


void ezsigntsarequirement_autocomplete_element_response_free(ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response) {
    if(NULL == ezsigntsarequirement_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntsarequirement_autocomplete_element_response->s_ezsigntsarequirement_description_x) {
        free(ezsigntsarequirement_autocomplete_element_response->s_ezsigntsarequirement_description_x);
        ezsigntsarequirement_autocomplete_element_response->s_ezsigntsarequirement_description_x = NULL;
    }
    free(ezsigntsarequirement_autocomplete_element_response);
}

cJSON *ezsigntsarequirement_autocomplete_element_response_convertToJSON(ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntsarequirement_autocomplete_element_response->s_ezsigntsarequirement_description_x
    if (!ezsigntsarequirement_autocomplete_element_response->s_ezsigntsarequirement_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntsarequirementDescriptionX", ezsigntsarequirement_autocomplete_element_response->s_ezsigntsarequirement_description_x) == NULL) {
    goto fail; //String
    }


    // ezsigntsarequirement_autocomplete_element_response->pki_ezsigntsarequirement_id
    if (!ezsigntsarequirement_autocomplete_element_response->pki_ezsigntsarequirement_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntsarequirementID", ezsigntsarequirement_autocomplete_element_response->pki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntsarequirement_autocomplete_element_response->b_ezsigntsarequirement_isactive
    if (!ezsigntsarequirement_autocomplete_element_response->b_ezsigntsarequirement_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntsarequirementIsactive", ezsigntsarequirement_autocomplete_element_response->b_ezsigntsarequirement_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntsarequirement_autocomplete_element_response->b_disabled
    if (!ezsigntsarequirement_autocomplete_element_response->b_disabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDisabled", ezsigntsarequirement_autocomplete_element_response->b_disabled) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response_parseFromJSON(cJSON *ezsigntsarequirement_autocomplete_element_responseJSON){

    ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response_local_var = NULL;

    // ezsigntsarequirement_autocomplete_element_response->s_ezsigntsarequirement_description_x
    cJSON *s_ezsigntsarequirement_description_x = cJSON_GetObjectItemCaseSensitive(ezsigntsarequirement_autocomplete_element_responseJSON, "sEzsigntsarequirementDescriptionX");
    if (!s_ezsigntsarequirement_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntsarequirement_description_x))
    {
    goto end; //String
    }

    // ezsigntsarequirement_autocomplete_element_response->pki_ezsigntsarequirement_id
    cJSON *pki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsigntsarequirement_autocomplete_element_responseJSON, "pkiEzsigntsarequirementID");
    if (!pki_ezsigntsarequirement_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }

    // ezsigntsarequirement_autocomplete_element_response->b_ezsigntsarequirement_isactive
    cJSON *b_ezsigntsarequirement_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntsarequirement_autocomplete_element_responseJSON, "bEzsigntsarequirementIsactive");
    if (!b_ezsigntsarequirement_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntsarequirement_isactive))
    {
    goto end; //Bool
    }

    // ezsigntsarequirement_autocomplete_element_response->b_disabled
    cJSON *b_disabled = cJSON_GetObjectItemCaseSensitive(ezsigntsarequirement_autocomplete_element_responseJSON, "bDisabled");
    if (!b_disabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_disabled))
    {
    goto end; //Bool
    }


    ezsigntsarequirement_autocomplete_element_response_local_var = ezsigntsarequirement_autocomplete_element_response_create (
        strdup(s_ezsigntsarequirement_description_x->valuestring),
        pki_ezsigntsarequirement_id->valuedouble,
        b_ezsigntsarequirement_isactive->valueint,
        b_disabled->valueint
        );

    return ezsigntsarequirement_autocomplete_element_response_local_var;
end:
    return NULL;

}
