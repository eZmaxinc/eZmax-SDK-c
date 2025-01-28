#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignatureattachment_response.h"



static ezsignsignatureattachment_response_t *ezsignsignatureattachment_response_create_internal(
    int pki_ezsignsignatureattachment_id,
    int fki_ezsignsignature_id,
    char *bin_ezsignsignatureattachment_md5,
    char *s_ezsignsignatureattachment_name,
    char *s_download_url
    ) {
    ezsignsignatureattachment_response_t *ezsignsignatureattachment_response_local_var = malloc(sizeof(ezsignsignatureattachment_response_t));
    if (!ezsignsignatureattachment_response_local_var) {
        return NULL;
    }
    ezsignsignatureattachment_response_local_var->pki_ezsignsignatureattachment_id = pki_ezsignsignatureattachment_id;
    ezsignsignatureattachment_response_local_var->fki_ezsignsignature_id = fki_ezsignsignature_id;
    ezsignsignatureattachment_response_local_var->bin_ezsignsignatureattachment_md5 = bin_ezsignsignatureattachment_md5;
    ezsignsignatureattachment_response_local_var->s_ezsignsignatureattachment_name = s_ezsignsignatureattachment_name;
    ezsignsignatureattachment_response_local_var->s_download_url = s_download_url;

    ezsignsignatureattachment_response_local_var->_library_owned = 1;
    return ezsignsignatureattachment_response_local_var;
}

__attribute__((deprecated)) ezsignsignatureattachment_response_t *ezsignsignatureattachment_response_create(
    int pki_ezsignsignatureattachment_id,
    int fki_ezsignsignature_id,
    char *bin_ezsignsignatureattachment_md5,
    char *s_ezsignsignatureattachment_name,
    char *s_download_url
    ) {
    return ezsignsignatureattachment_response_create_internal (
        pki_ezsignsignatureattachment_id,
        fki_ezsignsignature_id,
        bin_ezsignsignatureattachment_md5,
        s_ezsignsignatureattachment_name,
        s_download_url
        );
}

void ezsignsignatureattachment_response_free(ezsignsignatureattachment_response_t *ezsignsignatureattachment_response) {
    if(NULL == ezsignsignatureattachment_response){
        return ;
    }
    if(ezsignsignatureattachment_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignatureattachment_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignatureattachment_response->bin_ezsignsignatureattachment_md5) {
        free(ezsignsignatureattachment_response->bin_ezsignsignatureattachment_md5);
        ezsignsignatureattachment_response->bin_ezsignsignatureattachment_md5 = NULL;
    }
    if (ezsignsignatureattachment_response->s_ezsignsignatureattachment_name) {
        free(ezsignsignatureattachment_response->s_ezsignsignatureattachment_name);
        ezsignsignatureattachment_response->s_ezsignsignatureattachment_name = NULL;
    }
    if (ezsignsignatureattachment_response->s_download_url) {
        free(ezsignsignatureattachment_response->s_download_url);
        ezsignsignatureattachment_response->s_download_url = NULL;
    }
    free(ezsignsignatureattachment_response);
}

cJSON *ezsignsignatureattachment_response_convertToJSON(ezsignsignatureattachment_response_t *ezsignsignatureattachment_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignatureattachment_response->pki_ezsignsignatureattachment_id
    if (!ezsignsignatureattachment_response->pki_ezsignsignatureattachment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureattachmentID", ezsignsignatureattachment_response->pki_ezsignsignatureattachment_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignatureattachment_response->fki_ezsignsignature_id
    if (!ezsignsignatureattachment_response->fki_ezsignsignature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignatureID", ezsignsignatureattachment_response->fki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignatureattachment_response->bin_ezsignsignatureattachment_md5
    if (!ezsignsignatureattachment_response->bin_ezsignsignatureattachment_md5) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "binEzsignsignatureattachmentMD5", ezsignsignatureattachment_response->bin_ezsignsignatureattachment_md5) == NULL) {
    goto fail; //String
    }


    // ezsignsignatureattachment_response->s_ezsignsignatureattachment_name
    if (!ezsignsignatureattachment_response->s_ezsignsignatureattachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignsignatureattachmentName", ezsignsignatureattachment_response->s_ezsignsignatureattachment_name) == NULL) {
    goto fail; //String
    }


    // ezsignsignatureattachment_response->s_download_url
    if (!ezsignsignatureattachment_response->s_download_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDownloadUrl", ezsignsignatureattachment_response->s_download_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignatureattachment_response_t *ezsignsignatureattachment_response_parseFromJSON(cJSON *ezsignsignatureattachment_responseJSON){

    ezsignsignatureattachment_response_t *ezsignsignatureattachment_response_local_var = NULL;

    // ezsignsignatureattachment_response->pki_ezsignsignatureattachment_id
    cJSON *pki_ezsignsignatureattachment_id = cJSON_GetObjectItemCaseSensitive(ezsignsignatureattachment_responseJSON, "pkiEzsignsignatureattachmentID");
    if (cJSON_IsNull(pki_ezsignsignatureattachment_id)) {
        pki_ezsignsignatureattachment_id = NULL;
    }
    if (!pki_ezsignsignatureattachment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignatureattachment_id))
    {
    goto end; //Numeric
    }

    // ezsignsignatureattachment_response->fki_ezsignsignature_id
    cJSON *fki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignatureattachment_responseJSON, "fkiEzsignsignatureID");
    if (cJSON_IsNull(fki_ezsignsignature_id)) {
        fki_ezsignsignature_id = NULL;
    }
    if (!fki_ezsignsignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignsignature_id))
    {
    goto end; //Numeric
    }

    // ezsignsignatureattachment_response->bin_ezsignsignatureattachment_md5
    cJSON *bin_ezsignsignatureattachment_md5 = cJSON_GetObjectItemCaseSensitive(ezsignsignatureattachment_responseJSON, "binEzsignsignatureattachmentMD5");
    if (cJSON_IsNull(bin_ezsignsignatureattachment_md5)) {
        bin_ezsignsignatureattachment_md5 = NULL;
    }
    if (!bin_ezsignsignatureattachment_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(bin_ezsignsignatureattachment_md5))
    {
    goto end; //String
    }

    // ezsignsignatureattachment_response->s_ezsignsignatureattachment_name
    cJSON *s_ezsignsignatureattachment_name = cJSON_GetObjectItemCaseSensitive(ezsignsignatureattachment_responseJSON, "sEzsignsignatureattachmentName");
    if (cJSON_IsNull(s_ezsignsignatureattachment_name)) {
        s_ezsignsignatureattachment_name = NULL;
    }
    if (!s_ezsignsignatureattachment_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignsignatureattachment_name))
    {
    goto end; //String
    }

    // ezsignsignatureattachment_response->s_download_url
    cJSON *s_download_url = cJSON_GetObjectItemCaseSensitive(ezsignsignatureattachment_responseJSON, "sDownloadUrl");
    if (cJSON_IsNull(s_download_url)) {
        s_download_url = NULL;
    }
    if (!s_download_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_download_url))
    {
    goto end; //String
    }


    ezsignsignatureattachment_response_local_var = ezsignsignatureattachment_response_create_internal (
        pki_ezsignsignatureattachment_id->valuedouble,
        fki_ezsignsignature_id->valuedouble,
        strdup(bin_ezsignsignatureattachment_md5->valuestring),
        strdup(s_ezsignsignatureattachment_name->valuestring),
        strdup(s_download_url->valuestring)
        );

    return ezsignsignatureattachment_response_local_var;
end:
    return NULL;

}
