#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_request_compound.h"



website_request_compound_t *website_request_compound_create(
    int fki_websitetype_id,
    char *s_website_address
    ) {
    website_request_compound_t *website_request_compound_local_var = malloc(sizeof(website_request_compound_t));
    if (!website_request_compound_local_var) {
        return NULL;
    }
    website_request_compound_local_var->fki_websitetype_id = fki_websitetype_id;
    website_request_compound_local_var->s_website_address = s_website_address;

    return website_request_compound_local_var;
}


void website_request_compound_free(website_request_compound_t *website_request_compound) {
    if(NULL == website_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (website_request_compound->s_website_address) {
        free(website_request_compound->s_website_address);
        website_request_compound->s_website_address = NULL;
    }
    free(website_request_compound);
}

cJSON *website_request_compound_convertToJSON(website_request_compound_t *website_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // website_request_compound->fki_websitetype_id
    if (!website_request_compound->fki_websitetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiWebsitetypeID", website_request_compound->fki_websitetype_id) == NULL) {
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

    // website_request_compound->fki_websitetype_id
    cJSON *fki_websitetype_id = cJSON_GetObjectItemCaseSensitive(website_request_compoundJSON, "fkiWebsitetypeID");
    if (!fki_websitetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_websitetype_id))
    {
    goto end; //Numeric
    }

    // website_request_compound->s_website_address
    cJSON *s_website_address = cJSON_GetObjectItemCaseSensitive(website_request_compoundJSON, "sWebsiteAddress");
    if (!s_website_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_website_address))
    {
    goto end; //String
    }


    website_request_compound_local_var = website_request_compound_create (
        fki_websitetype_id->valuedouble,
        strdup(s_website_address->valuestring)
        );

    return website_request_compound_local_var;
end:
    return NULL;

}
