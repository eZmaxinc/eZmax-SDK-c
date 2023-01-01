#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationexternalimage_response_compound.h"



communicationexternalimage_response_compound_t *communicationexternalimage_response_compound_create(
    int pki_communicationexternalimage_id,
    char *s_communicationexternalimage_md5
    ) {
    communicationexternalimage_response_compound_t *communicationexternalimage_response_compound_local_var = malloc(sizeof(communicationexternalimage_response_compound_t));
    if (!communicationexternalimage_response_compound_local_var) {
        return NULL;
    }
    communicationexternalimage_response_compound_local_var->pki_communicationexternalimage_id = pki_communicationexternalimage_id;
    communicationexternalimage_response_compound_local_var->s_communicationexternalimage_md5 = s_communicationexternalimage_md5;

    return communicationexternalimage_response_compound_local_var;
}


void communicationexternalimage_response_compound_free(communicationexternalimage_response_compound_t *communicationexternalimage_response_compound) {
    if(NULL == communicationexternalimage_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationexternalimage_response_compound->s_communicationexternalimage_md5) {
        free(communicationexternalimage_response_compound->s_communicationexternalimage_md5);
        communicationexternalimage_response_compound->s_communicationexternalimage_md5 = NULL;
    }
    free(communicationexternalimage_response_compound);
}

cJSON *communicationexternalimage_response_compound_convertToJSON(communicationexternalimage_response_compound_t *communicationexternalimage_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationexternalimage_response_compound->pki_communicationexternalimage_id
    if (!communicationexternalimage_response_compound->pki_communicationexternalimage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationexternalimageID", communicationexternalimage_response_compound->pki_communicationexternalimage_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationexternalimage_response_compound->s_communicationexternalimage_md5
    if (!communicationexternalimage_response_compound->s_communicationexternalimage_md5) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationexternalimageMD5", communicationexternalimage_response_compound->s_communicationexternalimage_md5) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communicationexternalimage_response_compound_t *communicationexternalimage_response_compound_parseFromJSON(cJSON *communicationexternalimage_response_compoundJSON){

    communicationexternalimage_response_compound_t *communicationexternalimage_response_compound_local_var = NULL;

    // communicationexternalimage_response_compound->pki_communicationexternalimage_id
    cJSON *pki_communicationexternalimage_id = cJSON_GetObjectItemCaseSensitive(communicationexternalimage_response_compoundJSON, "pkiCommunicationexternalimageID");
    if (!pki_communicationexternalimage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communicationexternalimage_id))
    {
    goto end; //Numeric
    }

    // communicationexternalimage_response_compound->s_communicationexternalimage_md5
    cJSON *s_communicationexternalimage_md5 = cJSON_GetObjectItemCaseSensitive(communicationexternalimage_response_compoundJSON, "sCommunicationexternalimageMD5");
    if (!s_communicationexternalimage_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communicationexternalimage_md5))
    {
    goto end; //String
    }


    communicationexternalimage_response_compound_local_var = communicationexternalimage_response_compound_create (
        pki_communicationexternalimage_id->valuedouble,
        strdup(s_communicationexternalimage_md5->valuestring)
        );

    return communicationexternalimage_response_compound_local_var;
end:
    return NULL;

}
