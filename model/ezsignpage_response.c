#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignpage_response.h"



ezsignpage_response_t *ezsignpage_response_create(
    int pki_ezsignpage_id,
    int i_ezsignpage_widthimage,
    int i_ezsignpage_heightimage,
    int i_ezsignpage_widthpdf,
    int i_ezsignpage_heightpdf,
    int i_ezsignpage_pagenumber,
    char *s_image_url
    ) {
    ezsignpage_response_t *ezsignpage_response_local_var = malloc(sizeof(ezsignpage_response_t));
    if (!ezsignpage_response_local_var) {
        return NULL;
    }
    ezsignpage_response_local_var->pki_ezsignpage_id = pki_ezsignpage_id;
    ezsignpage_response_local_var->i_ezsignpage_widthimage = i_ezsignpage_widthimage;
    ezsignpage_response_local_var->i_ezsignpage_heightimage = i_ezsignpage_heightimage;
    ezsignpage_response_local_var->i_ezsignpage_widthpdf = i_ezsignpage_widthpdf;
    ezsignpage_response_local_var->i_ezsignpage_heightpdf = i_ezsignpage_heightpdf;
    ezsignpage_response_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignpage_response_local_var->s_image_url = s_image_url;

    return ezsignpage_response_local_var;
}


void ezsignpage_response_free(ezsignpage_response_t *ezsignpage_response) {
    if(NULL == ezsignpage_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignpage_response->s_image_url) {
        free(ezsignpage_response->s_image_url);
        ezsignpage_response->s_image_url = NULL;
    }
    free(ezsignpage_response);
}

cJSON *ezsignpage_response_convertToJSON(ezsignpage_response_t *ezsignpage_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignpage_response->pki_ezsignpage_id
    if (!ezsignpage_response->pki_ezsignpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignpageID", ezsignpage_response->pki_ezsignpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_widthimage
    if (!ezsignpage_response->i_ezsignpage_widthimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageWidthimage", ezsignpage_response->i_ezsignpage_widthimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_heightimage
    if (!ezsignpage_response->i_ezsignpage_heightimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageHeightimage", ezsignpage_response->i_ezsignpage_heightimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_widthpdf
    if (!ezsignpage_response->i_ezsignpage_widthpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageWidthpdf", ezsignpage_response->i_ezsignpage_widthpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_heightpdf
    if (!ezsignpage_response->i_ezsignpage_heightpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageHeightpdf", ezsignpage_response->i_ezsignpage_heightpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_pagenumber
    if (!ezsignpage_response->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignpage_response->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->s_image_url
    if (!ezsignpage_response->s_image_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sImageUrl", ezsignpage_response->s_image_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignpage_response_t *ezsignpage_response_parseFromJSON(cJSON *ezsignpage_responseJSON){

    ezsignpage_response_t *ezsignpage_response_local_var = NULL;

    // ezsignpage_response->pki_ezsignpage_id
    cJSON *pki_ezsignpage_id = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "pkiEzsignpageID");
    if (!pki_ezsignpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignpage_id))
    {
    goto end; //Numeric
    }

    // ezsignpage_response->i_ezsignpage_widthimage
    cJSON *i_ezsignpage_widthimage = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageWidthimage");
    if (!i_ezsignpage_widthimage) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_widthimage))
    {
    goto end; //Numeric
    }

    // ezsignpage_response->i_ezsignpage_heightimage
    cJSON *i_ezsignpage_heightimage = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageHeightimage");
    if (!i_ezsignpage_heightimage) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_heightimage))
    {
    goto end; //Numeric
    }

    // ezsignpage_response->i_ezsignpage_widthpdf
    cJSON *i_ezsignpage_widthpdf = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageWidthpdf");
    if (!i_ezsignpage_widthpdf) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_widthpdf))
    {
    goto end; //Numeric
    }

    // ezsignpage_response->i_ezsignpage_heightpdf
    cJSON *i_ezsignpage_heightpdf = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageHeightpdf");
    if (!i_ezsignpage_heightpdf) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_heightpdf))
    {
    goto end; //Numeric
    }

    // ezsignpage_response->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignpage_response->s_image_url
    cJSON *s_image_url = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "sImageUrl");
    if (!s_image_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_image_url))
    {
    goto end; //String
    }


    ezsignpage_response_local_var = ezsignpage_response_create (
        pki_ezsignpage_id->valuedouble,
        i_ezsignpage_widthimage->valuedouble,
        i_ezsignpage_heightimage->valuedouble,
        i_ezsignpage_widthpdf->valuedouble,
        i_ezsignpage_heightpdf->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        strdup(s_image_url->valuestring)
        );

    return ezsignpage_response_local_var;
end:
    return NULL;

}
