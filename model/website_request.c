#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_request.h"



static website_request_t *website_request_create_internal(
    int pki_website_id,
    int fki_websitetype_id,
    char *s_website_address
    ) {
    website_request_t *website_request_local_var = malloc(sizeof(website_request_t));
    if (!website_request_local_var) {
        return NULL;
    }
    website_request_local_var->pki_website_id = pki_website_id;
    website_request_local_var->fki_websitetype_id = fki_websitetype_id;
    website_request_local_var->s_website_address = s_website_address;

    website_request_local_var->_library_owned = 1;
    return website_request_local_var;
}

__attribute__((deprecated)) website_request_t *website_request_create(
    int pki_website_id,
    int fki_websitetype_id,
    char *s_website_address
    ) {
    return website_request_create_internal (
        pki_website_id,
        fki_websitetype_id,
        s_website_address
        );
}

void website_request_free(website_request_t *website_request) {
    if(NULL == website_request){
        return ;
    }
    if(website_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_request->s_website_address) {
        free(website_request->s_website_address);
        website_request->s_website_address = NULL;
    }
    free(website_request);
}

cJSON *website_request_convertToJSON(website_request_t *website_request) {
    cJSON *item = cJSON_CreateObject();

    // website_request->pki_website_id
    if(website_request->pki_website_id) {
    if(cJSON_AddNumberToObject(item, "pkiWebsiteID", website_request->pki_website_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // website_request->fki_websitetype_id
    if (!website_request->fki_websitetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiWebsitetypeID", website_request->fki_websitetype_id) == NULL) {
    goto fail; //Numeric
    }


    // website_request->s_website_address
    if (!website_request->s_website_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebsiteAddress", website_request->s_website_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

website_request_t *website_request_parseFromJSON(cJSON *website_requestJSON){

    website_request_t *website_request_local_var = NULL;

    // website_request->pki_website_id
    cJSON *pki_website_id = cJSON_GetObjectItemCaseSensitive(website_requestJSON, "pkiWebsiteID");
    if (cJSON_IsNull(pki_website_id)) {
        pki_website_id = NULL;
    }
    if (pki_website_id) { 
    if(!cJSON_IsNumber(pki_website_id))
    {
    goto end; //Numeric
    }
    }

    // website_request->fki_websitetype_id
    cJSON *fki_websitetype_id = cJSON_GetObjectItemCaseSensitive(website_requestJSON, "fkiWebsitetypeID");
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

    // website_request->s_website_address
    cJSON *s_website_address = cJSON_GetObjectItemCaseSensitive(website_requestJSON, "sWebsiteAddress");
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


    website_request_local_var = website_request_create_internal (
        pki_website_id ? pki_website_id->valuedouble : 0,
        fki_websitetype_id->valuedouble,
        strdup(s_website_address->valuestring)
        );

    return website_request_local_var;
end:
    return NULL;

}
