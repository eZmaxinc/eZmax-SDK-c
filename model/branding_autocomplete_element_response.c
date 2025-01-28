#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_autocomplete_element_response.h"



static branding_autocomplete_element_response_t *branding_autocomplete_element_response_create_internal(
    char *s_branding_description_x,
    int pki_branding_id,
    int b_branding_isactive
    ) {
    branding_autocomplete_element_response_t *branding_autocomplete_element_response_local_var = malloc(sizeof(branding_autocomplete_element_response_t));
    if (!branding_autocomplete_element_response_local_var) {
        return NULL;
    }
    branding_autocomplete_element_response_local_var->s_branding_description_x = s_branding_description_x;
    branding_autocomplete_element_response_local_var->pki_branding_id = pki_branding_id;
    branding_autocomplete_element_response_local_var->b_branding_isactive = b_branding_isactive;

    branding_autocomplete_element_response_local_var->_library_owned = 1;
    return branding_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) branding_autocomplete_element_response_t *branding_autocomplete_element_response_create(
    char *s_branding_description_x,
    int pki_branding_id,
    int b_branding_isactive
    ) {
    return branding_autocomplete_element_response_create_internal (
        s_branding_description_x,
        pki_branding_id,
        b_branding_isactive
        );
}

void branding_autocomplete_element_response_free(branding_autocomplete_element_response_t *branding_autocomplete_element_response) {
    if(NULL == branding_autocomplete_element_response){
        return ;
    }
    if(branding_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_autocomplete_element_response->s_branding_description_x) {
        free(branding_autocomplete_element_response->s_branding_description_x);
        branding_autocomplete_element_response->s_branding_description_x = NULL;
    }
    free(branding_autocomplete_element_response);
}

cJSON *branding_autocomplete_element_response_convertToJSON(branding_autocomplete_element_response_t *branding_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // branding_autocomplete_element_response->s_branding_description_x
    if (!branding_autocomplete_element_response->s_branding_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingDescriptionX", branding_autocomplete_element_response->s_branding_description_x) == NULL) {
    goto fail; //String
    }


    // branding_autocomplete_element_response->pki_branding_id
    if (!branding_autocomplete_element_response->pki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrandingID", branding_autocomplete_element_response->pki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // branding_autocomplete_element_response->b_branding_isactive
    if (!branding_autocomplete_element_response->b_branding_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrandingIsactive", branding_autocomplete_element_response->b_branding_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_autocomplete_element_response_t *branding_autocomplete_element_response_parseFromJSON(cJSON *branding_autocomplete_element_responseJSON){

    branding_autocomplete_element_response_t *branding_autocomplete_element_response_local_var = NULL;

    // branding_autocomplete_element_response->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(branding_autocomplete_element_responseJSON, "sBrandingDescriptionX");
    if (cJSON_IsNull(s_branding_description_x)) {
        s_branding_description_x = NULL;
    }
    if (!s_branding_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_description_x))
    {
    goto end; //String
    }

    // branding_autocomplete_element_response->pki_branding_id
    cJSON *pki_branding_id = cJSON_GetObjectItemCaseSensitive(branding_autocomplete_element_responseJSON, "pkiBrandingID");
    if (cJSON_IsNull(pki_branding_id)) {
        pki_branding_id = NULL;
    }
    if (!pki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_branding_id))
    {
    goto end; //Numeric
    }

    // branding_autocomplete_element_response->b_branding_isactive
    cJSON *b_branding_isactive = cJSON_GetObjectItemCaseSensitive(branding_autocomplete_element_responseJSON, "bBrandingIsactive");
    if (cJSON_IsNull(b_branding_isactive)) {
        b_branding_isactive = NULL;
    }
    if (!b_branding_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_branding_isactive))
    {
    goto end; //Bool
    }


    branding_autocomplete_element_response_local_var = branding_autocomplete_element_response_create_internal (
        strdup(s_branding_description_x->valuestring),
        pki_branding_id->valuedouble,
        b_branding_isactive->valueint
        );

    return branding_autocomplete_element_response_local_var;
end:
    return NULL;

}
