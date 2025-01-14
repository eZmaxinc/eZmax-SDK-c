#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_response.h"



website_response_t *website_response_create(
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

    return website_response_local_var;
}


void website_response_free(website_response_t *website_response) {
    if(NULL == website_response){
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
    if (!pki_website_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_website_id))
    {
    goto end; //Numeric
    }

    // website_response->fki_websitetype_id
    cJSON *fki_websitetype_id = cJSON_GetObjectItemCaseSensitive(website_responseJSON, "fkiWebsitetypeID");
    if (!fki_websitetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_websitetype_id))
    {
    goto end; //Numeric
    }

    // website_response->s_website_address
    cJSON *s_website_address = cJSON_GetObjectItemCaseSensitive(website_responseJSON, "sWebsiteAddress");
    if (!s_website_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_website_address))
    {
    goto end; //String
    }


    website_response_local_var = website_response_create (
        pki_website_id->valuedouble,
        fki_websitetype_id->valuedouble,
        strdup(s_website_address->valuestring)
        );

    return website_response_local_var;
end:
    return NULL;

}
