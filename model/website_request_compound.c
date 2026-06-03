#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_request_compound.h"



static website_request_compound_t *website_request_compound_create_internal(
    int *pki_website_id,
    int *fki_websitetype_id,
    char *s_website_address
    ) {
    website_request_compound_t *website_request_compound_local_var = malloc(sizeof(website_request_compound_t));
    if (!website_request_compound_local_var) {
        return NULL;
    }
    memset(website_request_compound_local_var, 0, sizeof(website_request_compound_t));
    website_request_compound_local_var->_library_owned = 1;
    website_request_compound_local_var->pki_website_id = pki_website_id;
    website_request_compound_local_var->fki_websitetype_id = fki_websitetype_id;
    website_request_compound_local_var->s_website_address = s_website_address;
    return website_request_compound_local_var;
}

__attribute__((deprecated)) website_request_compound_t *website_request_compound_create(
    int *pki_website_id,
    int *fki_websitetype_id,
    char *s_website_address
    ) {
    int *pki_website_id_copy = NULL;
    if (pki_website_id) {
        pki_website_id_copy = malloc(sizeof(int));
        if (pki_website_id_copy) *pki_website_id_copy = *pki_website_id;
    }
    int *fki_websitetype_id_copy = NULL;
    if (fki_websitetype_id) {
        fki_websitetype_id_copy = malloc(sizeof(int));
        if (fki_websitetype_id_copy) *fki_websitetype_id_copy = *fki_websitetype_id;
    }
    website_request_compound_t *result = website_request_compound_create_internal (
        pki_website_id_copy,
        fki_websitetype_id_copy,
        s_website_address
        );
    if (!result) {
        free(pki_website_id_copy);
        free(fki_websitetype_id_copy);
    }
    return result;
}

void website_request_compound_free(website_request_compound_t *website_request_compound) {
    if(NULL == website_request_compound){
        return ;
    }
    if(website_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_request_compound->pki_website_id) {
        free(website_request_compound->pki_website_id);
        website_request_compound->pki_website_id = NULL;
    }
    if (website_request_compound->fki_websitetype_id) {
        free(website_request_compound->fki_websitetype_id);
        website_request_compound->fki_websitetype_id = NULL;
    }
    if (website_request_compound->s_website_address) {
        free(website_request_compound->s_website_address);
        website_request_compound->s_website_address = NULL;
    }
    free(website_request_compound);
}

cJSON *website_request_compound_convertToJSON(website_request_compound_t *website_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // website_request_compound->pki_website_id
    if(website_request_compound->pki_website_id) {
    if(cJSON_AddNumberToObject(item, "pkiWebsiteID", *website_request_compound->pki_website_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // website_request_compound->fki_websitetype_id
    if (!website_request_compound->fki_websitetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiWebsitetypeID", *website_request_compound->fki_websitetype_id) == NULL) {
    goto fail; //Numeric
    }


    // website_request_compound->s_website_address
    if (!website_request_compound->s_website_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebsiteAddress", website_request_compound->s_website_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

website_request_compound_t *website_request_compound_parseFromJSON(cJSON *website_request_compoundJSON){

    website_request_compound_t *website_request_compound_local_var = NULL;

    // define the local variable for website_request_compound->pki_website_id
    int *pki_website_id_local_var = NULL;

    // define the local variable for website_request_compound->fki_websitetype_id
    int *fki_websitetype_id_local_var = NULL;

    char *s_website_address_local_str = NULL;

    // website_request_compound->pki_website_id
    cJSON *pki_website_id = cJSON_GetObjectItemCaseSensitive(website_request_compoundJSON, "pkiWebsiteID");
    if (cJSON_IsNull(pki_website_id)) {
        pki_website_id = NULL;
    }
    if (pki_website_id) { 
    if(!cJSON_IsNumber(pki_website_id))
    {
    goto end; //Numeric
    }
    pki_website_id_local_var = malloc(sizeof(int));
    if(!pki_website_id_local_var)
    {
        goto end;
    }
    *pki_website_id_local_var = pki_website_id->valuedouble;
    }

    // website_request_compound->fki_websitetype_id
    cJSON *fki_websitetype_id = cJSON_GetObjectItemCaseSensitive(website_request_compoundJSON, "fkiWebsitetypeID");
    if (cJSON_IsNull(fki_websitetype_id)) {
        fki_websitetype_id = NULL;
    }
    if (!fki_websitetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_websitetype_id))
    {
    goto end; //Numeric
    }
    fki_websitetype_id_local_var = malloc(sizeof(int));
    if(!fki_websitetype_id_local_var)
    {
        goto end;
    }
    *fki_websitetype_id_local_var = fki_websitetype_id->valuedouble;

    // website_request_compound->s_website_address
    cJSON *s_website_address = cJSON_GetObjectItemCaseSensitive(website_request_compoundJSON, "sWebsiteAddress");
    if (cJSON_IsNull(s_website_address)) {
        s_website_address = NULL;
    }
    if (!s_website_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_website_address))
    {
    goto end; //String
    }


    if (s_website_address && !cJSON_IsNull(s_website_address)) s_website_address_local_str = strdup(s_website_address->valuestring);

    website_request_compound_local_var = website_request_compound_create_internal (
        pki_website_id_local_var,
        fki_websitetype_id_local_var,
        s_website_address_local_str
        );

    if (!website_request_compound_local_var) {
        goto end;
    }

    return website_request_compound_local_var;
end:
    if (pki_website_id_local_var) {
        free(pki_website_id_local_var);
        pki_website_id_local_var = NULL;
    }
    if (fki_websitetype_id_local_var) {
        free(fki_websitetype_id_local_var);
        fki_websitetype_id_local_var = NULL;
    }
    if (s_website_address_local_str) {
        free(s_website_address_local_str);
        s_website_address_local_str = NULL;
    }
    return NULL;

}
