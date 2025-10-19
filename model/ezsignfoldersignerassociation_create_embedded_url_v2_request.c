#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_embedded_url_v2_request.h"



static ezsignfoldersignerassociation_create_embedded_url_v2_request_t *ezsignfoldersignerassociation_create_embedded_url_v2_request_create_internal(
    char *s_return_url,
    char *s_iframe_origin
    ) {
    ezsignfoldersignerassociation_create_embedded_url_v2_request_t *ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_embedded_url_v2_request_t));
    if (!ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var->s_return_url = s_return_url;
    ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var->s_iframe_origin = s_iframe_origin;

    ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_create_embedded_url_v2_request_t *ezsignfoldersignerassociation_create_embedded_url_v2_request_create(
    char *s_return_url,
    char *s_iframe_origin
    ) {
    return ezsignfoldersignerassociation_create_embedded_url_v2_request_create_internal (
        s_return_url,
        s_iframe_origin
        );
}

void ezsignfoldersignerassociation_create_embedded_url_v2_request_free(ezsignfoldersignerassociation_create_embedded_url_v2_request_t *ezsignfoldersignerassociation_create_embedded_url_v2_request) {
    if(NULL == ezsignfoldersignerassociation_create_embedded_url_v2_request){
        return ;
    }
    if(ezsignfoldersignerassociation_create_embedded_url_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_create_embedded_url_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_create_embedded_url_v2_request->s_return_url) {
        free(ezsignfoldersignerassociation_create_embedded_url_v2_request->s_return_url);
        ezsignfoldersignerassociation_create_embedded_url_v2_request->s_return_url = NULL;
    }
    if (ezsignfoldersignerassociation_create_embedded_url_v2_request->s_iframe_origin) {
        free(ezsignfoldersignerassociation_create_embedded_url_v2_request->s_iframe_origin);
        ezsignfoldersignerassociation_create_embedded_url_v2_request->s_iframe_origin = NULL;
    }
    free(ezsignfoldersignerassociation_create_embedded_url_v2_request);
}

cJSON *ezsignfoldersignerassociation_create_embedded_url_v2_request_convertToJSON(ezsignfoldersignerassociation_create_embedded_url_v2_request_t *ezsignfoldersignerassociation_create_embedded_url_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_create_embedded_url_v2_request->s_return_url
    if(ezsignfoldersignerassociation_create_embedded_url_v2_request->s_return_url) {
    if(cJSON_AddStringToObject(item, "sReturnUrl", ezsignfoldersignerassociation_create_embedded_url_v2_request->s_return_url) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldersignerassociation_create_embedded_url_v2_request->s_iframe_origin
    if(ezsignfoldersignerassociation_create_embedded_url_v2_request->s_iframe_origin) {
    if(cJSON_AddStringToObject(item, "sIframeOrigin", ezsignfoldersignerassociation_create_embedded_url_v2_request->s_iframe_origin) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_create_embedded_url_v2_request_t *ezsignfoldersignerassociation_create_embedded_url_v2_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_embedded_url_v2_requestJSON){

    ezsignfoldersignerassociation_create_embedded_url_v2_request_t *ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var = NULL;

    // ezsignfoldersignerassociation_create_embedded_url_v2_request->s_return_url
    cJSON *s_return_url = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v2_requestJSON, "sReturnUrl");
    if (cJSON_IsNull(s_return_url)) {
        s_return_url = NULL;
    }
    if (s_return_url) { 
    if(!cJSON_IsString(s_return_url) && !cJSON_IsNull(s_return_url))
    {
    goto end; //String
    }
    }

    // ezsignfoldersignerassociation_create_embedded_url_v2_request->s_iframe_origin
    cJSON *s_iframe_origin = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_embedded_url_v2_requestJSON, "sIframeOrigin");
    if (cJSON_IsNull(s_iframe_origin)) {
        s_iframe_origin = NULL;
    }
    if (s_iframe_origin) { 
    if(!cJSON_IsString(s_iframe_origin) && !cJSON_IsNull(s_iframe_origin))
    {
    goto end; //String
    }
    }


    ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var = ezsignfoldersignerassociation_create_embedded_url_v2_request_create_internal (
        s_return_url && !cJSON_IsNull(s_return_url) ? strdup(s_return_url->valuestring) : NULL,
        s_iframe_origin && !cJSON_IsNull(s_iframe_origin) ? strdup(s_iframe_origin->valuestring) : NULL
        );

    return ezsignfoldersignerassociation_create_embedded_url_v2_request_local_var;
end:
    return NULL;

}
