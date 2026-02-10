#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_embedded_url_v1_request.h"



static ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_create_internal(
    char *s_return_url,
    char *s_iframedomain,
    int b_is_iframe
    ) {
    ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_embedded_url_v1_request_t));
    if (!ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->s_return_url = s_return_url;
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->s_iframedomain = s_iframedomain;
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->b_is_iframe = b_is_iframe;

    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_create(
    char *s_return_url,
    char *s_iframedomain,
    int b_is_iframe
    ) {
    return ezsignfoldersignerassociation_create_embedded_url_v1_request_create_internal (
        s_return_url,
        s_iframedomain,
        b_is_iframe
        );
}

void ezsignfoldersignerassociation_create_embedded_url_v1_request_free(ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request) {
    if(NULL == ezsignfoldersignerassociation_create_embedded_url_v1_request){
        return ;
    }
    if(ezsignfoldersignerassociation_create_embedded_url_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_create_embedded_url_v1_request_free");
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


    // ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe
    if(ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe) {
    if(cJSON_AddBoolToObject(item, "bIsIframe", ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe) == NULL) {
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
    if (cJSON_IsNull(s_return_url)) {
        s_return_url = NULL;
    }
    if (s_return_url) { 
    if(!cJSON_IsString(s_return_url) && !cJSON_IsNull(s_return_url))
    {
    goto end; //String
    }
    }

    // ezsignfoldersignerassociation_create_embedded_url_v1_request->s_iframedomain
    cJSON *s_iframedomain = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v1_requestJSON, "sIframedomain");
    if (cJSON_IsNull(s_iframedomain)) {
        s_iframedomain = NULL;
    }
    if (s_iframedomain) { 
    if(!cJSON_IsString(s_iframedomain) && !cJSON_IsNull(s_iframedomain))
    {
    goto end; //String
    }
    }

    // ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe
    cJSON *b_is_iframe = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v1_requestJSON, "bIsIframe");
    if (cJSON_IsNull(b_is_iframe)) {
        b_is_iframe = NULL;
    }
    if (b_is_iframe) { 
    if(!cJSON_IsBool(b_is_iframe))
    {
    goto end; //Bool
    }
    }


    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var = ezsignfoldersignerassociation_create_embedded_url_v1_request_create_internal (
        s_return_url && !cJSON_IsNull(s_return_url) ? strdup(s_return_url->valuestring) : NULL,
        s_iframedomain && !cJSON_IsNull(s_iframedomain) ? strdup(s_iframedomain->valuestring) : NULL,
        b_is_iframe ? b_is_iframe->valueint : 0
        );

    return ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var;
end:
    return NULL;

}
