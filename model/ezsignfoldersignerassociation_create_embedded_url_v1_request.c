#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_embedded_url_v1_request.h"



ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_create(
    char *s_return_url,
    char *s_iframedomain,
    int b_isiframe
    ) {
    ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_embedded_url_v1_request_t));
    if (!ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->s_return_url = s_return_url;
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->s_iframedomain = s_iframedomain;
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->b_isiframe = b_isiframe;

    return ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var;
}


void ezsignfoldersignerassociation_create_embedded_url_v1_request_free(ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request) {
    if(NULL == ezsignfoldersignerassociation_create_embedded_url_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_create_embedded_url_v1_request->s_return_url) {
        free(ezsignfoldersignerassociation_create_embedded_url_v1_request->s_return_url);
        ezsignfoldersignerassociation_create_embedded_url_v1_request->s_return_url = NULL;
    }
    if (ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain) {
        free(ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain);
        ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain = NULL;
    }
    free(ezsignfoldersignerassociation_create_embedded_url_v1_request);
}

cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_request_convertToJSON(ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_create_embedded_url_v1_request->s_return_url
    if(ezsignfoldersignerassociation_create_embedded_url_v1_request->s_return_url) {
    if(cJSON_AddStringToObject(item, "sReturnUrl", ezsignfoldersignerassociation_create_embedded_url_v1_request->s_return_url) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain
    if(ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain) {
    if(cJSON_AddStringToObject(item, "sIframedomain", ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldersignerassociation_create_embedded_url_v1_request->b_isiframe
    if(ezsignfoldersignerassociation_create_embedded_url_v1_request->b_isiframe) {
    if(cJSON_AddBoolToObject(item, "bIsiframe", ezsignfoldersignerassociation_create_embedded_url_v1_request->b_isiframe) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_requestJSON){

    ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var = NULL;

    // ezsignfoldersignerassociation_create_embedded_url_v1_request->s_return_url
    cJSON *s_return_url = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v1_requestJSON, "sReturnUrl");
    if (s_return_url) { 
    if(!cJSON_IsString(s_return_url) && !cJSON_IsNull(s_return_url))
    {
    goto end; //String
    }
    }

    // ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain
    cJSON *s_iframedomain = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v1_requestJSON, "sIframedomain");
    if (s_iframedomain) { 
    if(!cJSON_IsString(s_iframedomain) && !cJSON_IsNull(s_iframedomain))
    {
    goto end; //String
    }
    }

    // ezsignfoldersignerassociation_create_embedded_url_v1_request->b_isiframe
    cJSON *b_isiframe = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v1_requestJSON, "bIsiframe");
    if (b_isiframe) { 
    if(!cJSON_IsBool(b_isiframe))
    {
    goto end; //Bool
    }
    }


    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var = ezsignfoldersignerassociation_create_embedded_url_v1_request_create (
        s_return_url && !cJSON_IsNull(s_return_url) ? strdup(s_return_url->valuestring) : NULL,
        s_iframedomain && !cJSON_IsNull(s_iframedomain) ? strdup(s_iframedomain->valuestring) : NULL,
        b_isiframe ? b_isiframe->valueint : 0
        );

    return ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var;
end:
    return NULL;

}
