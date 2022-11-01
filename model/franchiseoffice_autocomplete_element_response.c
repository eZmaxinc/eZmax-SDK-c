#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchiseoffice_autocomplete_element_response.h"



franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_create(
    char *s_franchiseoffice_description,
    int pki_franchiseoffice_id,
    int b_franchiseoffice_isactive
    ) {
    franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_local_var = malloc(sizeof(franchiseoffice_autocomplete_element_response_t));
    if (!franchiseoffice_autocomplete_element_response_local_var) {
        return NULL;
    }
    franchiseoffice_autocomplete_element_response_local_var->s_franchiseoffice_description = s_franchiseoffice_description;
    franchiseoffice_autocomplete_element_response_local_var->pki_franchiseoffice_id = pki_franchiseoffice_id;
    franchiseoffice_autocomplete_element_response_local_var->b_franchiseoffice_isactive = b_franchiseoffice_isactive;

    return franchiseoffice_autocomplete_element_response_local_var;
}


void franchiseoffice_autocomplete_element_response_free(franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response) {
    if(NULL == franchiseoffice_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (franchiseoffice_autocomplete_element_response->s_franchiseoffice_description) {
        free(franchiseoffice_autocomplete_element_response->s_franchiseoffice_description);
        franchiseoffice_autocomplete_element_response->s_franchiseoffice_description = NULL;
    }
    free(franchiseoffice_autocomplete_element_response);
}

cJSON *franchiseoffice_autocomplete_element_response_convertToJSON(franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // franchiseoffice_autocomplete_element_response->s_franchiseoffice_description
    if (!franchiseoffice_autocomplete_element_response->s_franchiseoffice_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFranchiseofficeDescription", franchiseoffice_autocomplete_element_response->s_franchiseoffice_description) == NULL) {
    goto fail; //String
    }


    // franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id
    if (!franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiFranchiseofficeID", franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }


    // franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive
    if (!franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bFranchiseofficeIsactive", franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_parseFromJSON(cJSON *franchiseoffice_autocomplete_element_responseJSON){

    franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_local_var = NULL;

    // franchiseoffice_autocomplete_element_response->s_franchiseoffice_description
    cJSON *s_franchiseoffice_description = cJSON_GetObjectItemCaseSensitive(franchiseoffice_autocomplete_element_responseJSON, "sFranchiseofficeDescription");
    if (!s_franchiseoffice_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_franchiseoffice_description))
    {
    goto end; //String
    }

    // franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id
    cJSON *pki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(franchiseoffice_autocomplete_element_responseJSON, "pkiFranchiseofficeID");
    if (!pki_franchiseoffice_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_franchiseoffice_id))
    {
    goto end; //Numeric
    }

    // franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive
    cJSON *b_franchiseoffice_isactive = cJSON_GetObjectItemCaseSensitive(franchiseoffice_autocomplete_element_responseJSON, "bFranchiseofficeIsactive");
    if (!b_franchiseoffice_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_franchiseoffice_isactive))
    {
    goto end; //Bool
    }


    franchiseoffice_autocomplete_element_response_local_var = franchiseoffice_autocomplete_element_response_create (
        strdup(s_franchiseoffice_description->valuestring),
        pki_franchiseoffice_id->valuedouble,
        b_franchiseoffice_isactive->valueint
        );

    return franchiseoffice_autocomplete_element_response_local_var;
end:
    return NULL;

}
