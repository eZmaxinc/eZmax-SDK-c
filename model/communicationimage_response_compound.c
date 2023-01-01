#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationimage_response_compound.h"



communicationimage_response_compound_t *communicationimage_response_compound_create(
    int pki_communicationimage_id,
    int fki_image_id,
    char *s_communicationimage_name
    ) {
    communicationimage_response_compound_t *communicationimage_response_compound_local_var = malloc(sizeof(communicationimage_response_compound_t));
    if (!communicationimage_response_compound_local_var) {
        return NULL;
    }
    communicationimage_response_compound_local_var->pki_communicationimage_id = pki_communicationimage_id;
    communicationimage_response_compound_local_var->fki_image_id = fki_image_id;
    communicationimage_response_compound_local_var->s_communicationimage_name = s_communicationimage_name;

    return communicationimage_response_compound_local_var;
}


void communicationimage_response_compound_free(communicationimage_response_compound_t *communicationimage_response_compound) {
    if(NULL == communicationimage_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationimage_response_compound->s_communicationimage_name) {
        free(communicationimage_response_compound->s_communicationimage_name);
        communicationimage_response_compound->s_communicationimage_name = NULL;
    }
    free(communicationimage_response_compound);
}

cJSON *communicationimage_response_compound_convertToJSON(communicationimage_response_compound_t *communicationimage_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationimage_response_compound->pki_communicationimage_id
    if (!communicationimage_response_compound->pki_communicationimage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationimageID", communicationimage_response_compound->pki_communicationimage_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationimage_response_compound->fki_image_id
    if (!communicationimage_response_compound->fki_image_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiImageID", communicationimage_response_compound->fki_image_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationimage_response_compound->s_communicationimage_name
    if(communicationimage_response_compound->s_communicationimage_name) {
    if(cJSON_AddStringToObject(item, "sCommunicationimageName", communicationimage_response_compound->s_communicationimage_name) == NULL) {
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

communicationimage_response_compound_t *communicationimage_response_compound_parseFromJSON(cJSON *communicationimage_response_compoundJSON){

    communicationimage_response_compound_t *communicationimage_response_compound_local_var = NULL;

    // communicationimage_response_compound->pki_communicationimage_id
    cJSON *pki_communicationimage_id = cJSON_GetObjectItemCaseSensitive(communicationimage_response_compoundJSON, "pkiCommunicationimageID");
    if (!pki_communicationimage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communicationimage_id))
    {
    goto end; //Numeric
    }

    // communicationimage_response_compound->fki_image_id
    cJSON *fki_image_id = cJSON_GetObjectItemCaseSensitive(communicationimage_response_compoundJSON, "fkiImageID");
    if (!fki_image_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_image_id))
    {
    goto end; //Numeric
    }

    // communicationimage_response_compound->s_communicationimage_name
    cJSON *s_communicationimage_name = cJSON_GetObjectItemCaseSensitive(communicationimage_response_compoundJSON, "sCommunicationimageName");
    if (s_communicationimage_name) { 
    if(!cJSON_IsString(s_communicationimage_name))
    {
    goto end; //String
    }
    }


    communicationimage_response_compound_local_var = communicationimage_response_compound_create (
        pki_communicationimage_id->valuedouble,
        fki_image_id->valuedouble,
        s_communicationimage_name ? strdup(s_communicationimage_name->valuestring) : NULL
        );

    return communicationimage_response_compound_local_var;
end:
    return NULL;

}
