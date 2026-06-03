#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_embedded_url_v1_request.h"



static ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_create_internal(
    char *s_return_url,
    char *s_iframedomain,
    int *b_is_iframe
    ) {
    ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_embedded_url_v1_request_t));
    if (!ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var, 0, sizeof(ezsignfoldersignerassociation_create_embedded_url_v1_request_t));
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->s_return_url = s_return_url;
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->s_iframedomain = s_iframedomain;
    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var->b_is_iframe = b_is_iframe;
    return ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_create(
    char *s_return_url,
    char *s_iframedomain,
    int *b_is_iframe
    ) {
    int *b_is_iframe_copy = NULL;
    if (b_is_iframe) {
        b_is_iframe_copy = malloc(sizeof(int));
        if (b_is_iframe_copy) *b_is_iframe_copy = *b_is_iframe;
    }
    ezsignfoldersignerassociation_create_embedded_url_v1_request_t *result = ezsignfoldersignerassociation_create_embedded_url_v1_request_create_internal (
        s_return_url,
        s_iframedomain,
        b_is_iframe_copy
        );
    if (!result) {
        free(b_is_iframe_copy);
    }
    return result;
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
    if (ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe) {
        free(ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe);
        ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe = NULL;
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
    if(cJSON_AddBoolToObject(item, "bIsIframe", *ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe) == NULL) {
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

    char *s_return_url_local_str = NULL;

    char *s_iframedomain_local_str = NULL;

    // define the local variable for ezsignfoldersignerassociation_create_embedded_url_v1_request->b_is_iframe
    int *b_is_iframe_local_var = NULL;

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
    b_is_iframe_local_var = malloc(sizeof(int));
    if(!b_is_iframe_local_var)
    {
        goto end;
    }
    *b_is_iframe_local_var = b_is_iframe->valueint;
    }


    if (s_return_url && !cJSON_IsNull(s_return_url)) s_return_url_local_str = strdup(s_return_url->valuestring);
    if (s_iframedomain && !cJSON_IsNull(s_iframedomain)) s_iframedomain_local_str = strdup(s_iframedomain->valuestring);

    ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var = ezsignfoldersignerassociation_create_embedded_url_v1_request_create_internal (
        s_return_url_local_str,
        s_iframedomain_local_str,
        b_is_iframe_local_var
        );

    if (!ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_create_embedded_url_v1_request_local_var;
end:
    if (s_return_url_local_str) {
        free(s_return_url_local_str);
        s_return_url_local_str = NULL;
    }
    if (s_iframedomain_local_str) {
        free(s_iframedomain_local_str);
        s_iframedomain_local_str = NULL;
    }
    if (b_is_iframe_local_var) {
        free(b_is_iframe_local_var);
        b_is_iframe_local_var = NULL;
    }
    return NULL;

}
