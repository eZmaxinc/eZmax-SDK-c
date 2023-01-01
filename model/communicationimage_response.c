#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationimage_response.h"



communicationimage_response_t *communicationimage_response_create(
    int pki_communicationimage_id,
    int fki_image_id,
    char *s_communicationimage_name
    ) {
    communicationimage_response_t *communicationimage_response_local_var = malloc(sizeof(communicationimage_response_t));
    if (!communicationimage_response_local_var) {
        return NULL;
    }
    communicationimage_response_local_var->pki_communicationimage_id = pki_communicationimage_id;
    communicationimage_response_local_var->fki_image_id = fki_image_id;
    communicationimage_response_local_var->s_communicationimage_name = s_communicationimage_name;

    return communicationimage_response_local_var;
}


void communicationimage_response_free(communicationimage_response_t *communicationimage_response) {
    if(NULL == communicationimage_response){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationimage_response->s_communicationimage_name) {
        free(communicationimage_response->s_communicationimage_name);
        communicationimage_response->s_communicationimage_name = NULL;
    }
    free(communicationimage_response);
}

cJSON *communicationimage_response_convertToJSON(communicationimage_response_t *communicationimage_response) {
    cJSON *item = cJSON_CreateObject();

    // communicationimage_response->pki_communicationimage_id
    if (!communicationimage_response->pki_communicationimage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationimageID", communicationimage_response->pki_communicationimage_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationimage_response->fki_image_id
    if (!communicationimage_response->fki_image_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiImageID", communicationimage_response->fki_image_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationimage_response->s_communicationimage_name
    if(communicationimage_response->s_communicationimage_name) {
    if(cJSON_AddStringToObject(item, "sCommunicationimageName", communicationimage_response->s_communicationimage_name) == NULL) {
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

communicationimage_response_t *communicationimage_response_parseFromJSON(cJSON *communicationimage_responseJSON){

    communicationimage_response_t *communicationimage_response_local_var = NULL;

    // communicationimage_response->pki_communicationimage_id
    cJSON *pki_communicationimage_id = cJSON_GetObjectItemCaseSensitive(communicationimage_responseJSON, "pkiCommunicationimageID");
    if (!pki_communicationimage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communicationimage_id))
    {
    goto end; //Numeric
    }

    // communicationimage_response->fki_image_id
    cJSON *fki_image_id = cJSON_GetObjectItemCaseSensitive(communicationimage_responseJSON, "fkiImageID");
    if (!fki_image_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_image_id))
    {
    goto end; //Numeric
    }

    // communicationimage_response->s_communicationimage_name
    cJSON *s_communicationimage_name = cJSON_GetObjectItemCaseSensitive(communicationimage_responseJSON, "sCommunicationimageName");
    if (s_communicationimage_name) { 
    if(!cJSON_IsString(s_communicationimage_name))
    {
    goto end; //String
    }
    }


    communicationimage_response_local_var = communicationimage_response_create (
        pki_communicationimage_id->valuedouble,
        fki_image_id->valuedouble,
        s_communicationimage_name ? strdup(s_communicationimage_name->valuestring) : NULL
        );

    return communicationimage_response_local_var;
end:
    return NULL;

}
