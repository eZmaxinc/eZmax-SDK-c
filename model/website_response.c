#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_response.h"



static website_response_t *website_response_create_internal(
    int pki_website_id,
    int fki_websitetype_id,
    char *s_website_address
    ) {
    website_response_t *website_response_local_var = malloc(sizeof(website_response_t));
    if (!website_response_local_var) {
        return NULL;
    }
    website_response_local_var->pki_website_id = pki_website_id;
    website_response_local_var->fki_websitetype_id = fki_websitetype_id;
    website_response_local_var->s_website_address = s_website_address;

    website_response_local_var->_library_owned = 1;
    return website_response_local_var;
}

__attribute__((deprecated)) website_response_t *website_response_create(
    int pki_website_id,
    int fki_websitetype_id,
    char *s_website_address
    ) {
    return website_response_create_internal (
        pki_website_id,
        fki_websitetype_id,
        s_website_address
        );
}

void website_response_free(website_response_t *website_response) {
    if(NULL == website_response){
        return ;
    }
    if(website_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_response->s_website_address) {
        free(website_response->s_website_address);
        website_response->s_website_address = NULL;
    }
    free(website_response);
}

cJSON *website_response_convertToJSON(website_response_t *website_response) {
    cJSON *item = cJSON_CreateObject();

    // website_response->pki_website_id
    if (!website_response->pki_website_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiWebsiteID", website_response->pki_website_id) == NULL) {
    goto fail; //Numeric
    }


    // website_response->fki_websitetype_id
    if (!website_response->fki_websitetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiWebsitetypeID", website_response->fki_websitetype_id) == NULL) {
    goto fail; //Numeric
    }


    // website_response->s_website_address
    if (!website_response->s_website_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebsiteAddress", website_response->s_website_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

website_response_t *website_response_parseFromJSON(cJSON *website_responseJSON){

    website_response_t *website_response_local_var = NULL;

    // website_response->pki_website_id
    cJSON *pki_website_id = cJSON_GetObjectItemCaseSensitive(website_responseJSON, "pkiWebsiteID");
    if (cJSON_IsNull(pki_website_id)) {
        pki_website_id = NULL;
    }
    if (!pki_website_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_website_id))
    {
    goto end; //Numeric
    }

    // website_response->fki_websitetype_id
    cJSON *fki_websitetype_id = cJSON_GetObjectItemCaseSensitive(website_responseJSON, "fkiWebsitetypeID");
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

    // website_response->s_website_address
    cJSON *s_website_address = cJSON_GetObjectItemCaseSensitive(website_responseJSON, "sWebsiteAddress");
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


    website_response_local_var = website_response_create_internal (
        pki_website_id->valuedouble,
        fki_websitetype_id->valuedouble,
        strdup(s_website_address->valuestring)
        );

    return website_response_local_var;
end:
    return NULL;

}
