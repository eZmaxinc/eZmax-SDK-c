#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_autocomplete_element_response.h"



static ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_create_internal(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplate_description,
    int pki_ezsigntemplate_id,
    int b_ezsigntemplate_isactive
    ) {
    ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_local_var = malloc(sizeof(ezsigntemplate_autocomplete_element_response_t));
    if (!ezsigntemplate_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezsigntemplate_autocomplete_element_response_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsigntemplate_autocomplete_element_response_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_autocomplete_element_response_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_autocomplete_element_response_local_var->b_ezsigntemplate_isactive = b_ezsigntemplate_isactive;

    ezsigntemplate_autocomplete_element_response_local_var->_library_owned = 1;
    return ezsigntemplate_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplate_description,
    int pki_ezsigntemplate_id,
    int b_ezsigntemplate_isactive
    ) {
    return ezsigntemplate_autocomplete_element_response_create_internal (
        e_ezsignfoldertype_privacylevel,
        s_ezsigntemplate_description,
        pki_ezsigntemplate_id,
        b_ezsigntemplate_isactive
        );
}

void ezsigntemplate_autocomplete_element_response_free(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response) {
    if(NULL == ezsigntemplate_autocomplete_element_response){
        return ;
    }
    if(ezsigntemplate_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description) {
        free(ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description);
        ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description = NULL;
    }
    free(ezsigntemplate_autocomplete_element_response);
}

cJSON *ezsigntemplate_autocomplete_element_response_convertToJSON(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description
    if (!ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id
    if (!ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive
    if (!ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateIsactive", ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplate_autocomplete_element_responseJSON){

    ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    // ezsigntemplate_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsigntemplate_autocomplete_element_response->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "sEzsigntemplateDescription");
    if (cJSON_IsNull(s_ezsigntemplate_description)) {
        s_ezsigntemplate_description = NULL;
    }
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_autocomplete_element_response->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "pkiEzsigntemplateID");
    if (cJSON_IsNull(pki_ezsigntemplate_id)) {
        pki_ezsigntemplate_id = NULL;
    }
    if (!pki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_autocomplete_element_response->b_ezsigntemplate_isactive
    cJSON *b_ezsigntemplate_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_autocomplete_element_responseJSON, "bEzsigntemplateIsactive");
    if (cJSON_IsNull(b_ezsigntemplate_isactive)) {
        b_ezsigntemplate_isactive = NULL;
    }
    if (!b_ezsigntemplate_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_isactive))
    {
    goto end; //Bool
    }


    ezsigntemplate_autocomplete_element_response_local_var = ezsigntemplate_autocomplete_element_response_create_internal (
        e_ezsignfoldertype_privacylevel_local_nonprim,
        strdup(s_ezsigntemplate_description->valuestring),
        pki_ezsigntemplate_id->valuedouble,
        b_ezsigntemplate_isactive->valueint
        );

    return ezsigntemplate_autocomplete_element_response_local_var;
end:
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    return NULL;

}
