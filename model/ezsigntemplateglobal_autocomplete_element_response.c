#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobal_autocomplete_element_response.h"



ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response_create(
    int pki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobal_description,
    int b_ezsigntemplateglobal_isactive
    ) {
    ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response_local_var = malloc(sizeof(ezsigntemplateglobal_autocomplete_element_response_t));
    if (!ezsigntemplateglobal_autocomplete_element_response_local_var) {
        return NULL;
    }
    ezsigntemplateglobal_autocomplete_element_response_local_var->pki_ezsigntemplateglobal_id = pki_ezsigntemplateglobal_id;
    ezsigntemplateglobal_autocomplete_element_response_local_var->s_ezsigntemplateglobal_description = s_ezsigntemplateglobal_description;
    ezsigntemplateglobal_autocomplete_element_response_local_var->b_ezsigntemplateglobal_isactive = b_ezsigntemplateglobal_isactive;

    return ezsigntemplateglobal_autocomplete_element_response_local_var;
}


void ezsigntemplateglobal_autocomplete_element_response_free(ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response) {
    if(NULL == ezsigntemplateglobal_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobal_autocomplete_element_response->s_ezsigntemplateglobal_description) {
        free(ezsigntemplateglobal_autocomplete_element_response->s_ezsigntemplateglobal_description);
        ezsigntemplateglobal_autocomplete_element_response->s_ezsigntemplateglobal_description = NULL;
    }
    free(ezsigntemplateglobal_autocomplete_element_response);
}

cJSON *ezsigntemplateglobal_autocomplete_element_response_convertToJSON(ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobal_autocomplete_element_response->pki_ezsigntemplateglobal_id
    if (!ezsigntemplateglobal_autocomplete_element_response->pki_ezsigntemplateglobal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateglobalID", ezsigntemplateglobal_autocomplete_element_response->pki_ezsigntemplateglobal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateglobal_autocomplete_element_response->s_ezsigntemplateglobal_description
    if (!ezsigntemplateglobal_autocomplete_element_response->s_ezsigntemplateglobal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateglobalDescription", ezsigntemplateglobal_autocomplete_element_response->s_ezsigntemplateglobal_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateglobal_autocomplete_element_response->b_ezsigntemplateglobal_isactive
    if (!ezsigntemplateglobal_autocomplete_element_response->b_ezsigntemplateglobal_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateglobalIsactive", ezsigntemplateglobal_autocomplete_element_response->b_ezsigntemplateglobal_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplateglobal_autocomplete_element_responseJSON){

    ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response_local_var = NULL;

    // ezsigntemplateglobal_autocomplete_element_response->pki_ezsigntemplateglobal_id
    cJSON *pki_ezsigntemplateglobal_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_autocomplete_element_responseJSON, "pkiEzsigntemplateglobalID");
    if (!pki_ezsigntemplateglobal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateglobal_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateglobal_autocomplete_element_response->s_ezsigntemplateglobal_description
    cJSON *s_ezsigntemplateglobal_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_autocomplete_element_responseJSON, "sEzsigntemplateglobalDescription");
    if (!s_ezsigntemplateglobal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateglobal_description))
    {
    goto end; //String
    }

    // ezsigntemplateglobal_autocomplete_element_response->b_ezsigntemplateglobal_isactive
    cJSON *b_ezsigntemplateglobal_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_autocomplete_element_responseJSON, "bEzsigntemplateglobalIsactive");
    if (!b_ezsigntemplateglobal_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplateglobal_isactive))
    {
    goto end; //Bool
    }


    ezsigntemplateglobal_autocomplete_element_response_local_var = ezsigntemplateglobal_autocomplete_element_response_create (
        pki_ezsigntemplateglobal_id->valuedouble,
        strdup(s_ezsigntemplateglobal_description->valuestring),
        b_ezsigntemplateglobal_isactive->valueint
        );

    return ezsigntemplateglobal_autocomplete_element_response_local_var;
end:
    return NULL;

}
