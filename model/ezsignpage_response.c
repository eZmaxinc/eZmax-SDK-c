#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignpage_response.h"



static ezsignpage_response_t *ezsignpage_response_create_internal(
    int *pki_ezsignpage_id,
    int *i_ezsignpage_widthimage,
    int *i_ezsignpage_heightimage,
    int *i_ezsignpage_widthpdf,
    int *i_ezsignpage_heightpdf,
    int *i_ezsignpage_pagenumber,
    char *s_computed_imageurl
    ) {
    ezsignpage_response_t *ezsignpage_response_local_var = malloc(sizeof(ezsignpage_response_t));
    if (!ezsignpage_response_local_var) {
        return NULL;
    }
    memset(ezsignpage_response_local_var, 0, sizeof(ezsignpage_response_t));
    ezsignpage_response_local_var->_library_owned = 1;
    ezsignpage_response_local_var->pki_ezsignpage_id = pki_ezsignpage_id;
    ezsignpage_response_local_var->i_ezsignpage_widthimage = i_ezsignpage_widthimage;
    ezsignpage_response_local_var->i_ezsignpage_heightimage = i_ezsignpage_heightimage;
    ezsignpage_response_local_var->i_ezsignpage_widthpdf = i_ezsignpage_widthpdf;
    ezsignpage_response_local_var->i_ezsignpage_heightpdf = i_ezsignpage_heightpdf;
    ezsignpage_response_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignpage_response_local_var->s_computed_imageurl = s_computed_imageurl;
    return ezsignpage_response_local_var;
}

__attribute__((deprecated)) ezsignpage_response_t *ezsignpage_response_create(
    int *pki_ezsignpage_id,
    int *i_ezsignpage_widthimage,
    int *i_ezsignpage_heightimage,
    int *i_ezsignpage_widthpdf,
    int *i_ezsignpage_heightpdf,
    int *i_ezsignpage_pagenumber,
    char *s_computed_imageurl
    ) {
    int *pki_ezsignpage_id_copy = NULL;
    if (pki_ezsignpage_id) {
        pki_ezsignpage_id_copy = malloc(sizeof(int));
        if (pki_ezsignpage_id_copy) *pki_ezsignpage_id_copy = *pki_ezsignpage_id;
    }
    int *i_ezsignpage_widthimage_copy = NULL;
    if (i_ezsignpage_widthimage) {
        i_ezsignpage_widthimage_copy = malloc(sizeof(int));
        if (i_ezsignpage_widthimage_copy) *i_ezsignpage_widthimage_copy = *i_ezsignpage_widthimage;
    }
    int *i_ezsignpage_heightimage_copy = NULL;
    if (i_ezsignpage_heightimage) {
        i_ezsignpage_heightimage_copy = malloc(sizeof(int));
        if (i_ezsignpage_heightimage_copy) *i_ezsignpage_heightimage_copy = *i_ezsignpage_heightimage;
    }
    int *i_ezsignpage_widthpdf_copy = NULL;
    if (i_ezsignpage_widthpdf) {
        i_ezsignpage_widthpdf_copy = malloc(sizeof(int));
        if (i_ezsignpage_widthpdf_copy) *i_ezsignpage_widthpdf_copy = *i_ezsignpage_widthpdf;
    }
    int *i_ezsignpage_heightpdf_copy = NULL;
    if (i_ezsignpage_heightpdf) {
        i_ezsignpage_heightpdf_copy = malloc(sizeof(int));
        if (i_ezsignpage_heightpdf_copy) *i_ezsignpage_heightpdf_copy = *i_ezsignpage_heightpdf;
    }
    int *i_ezsignpage_pagenumber_copy = NULL;
    if (i_ezsignpage_pagenumber) {
        i_ezsignpage_pagenumber_copy = malloc(sizeof(int));
        if (i_ezsignpage_pagenumber_copy) *i_ezsignpage_pagenumber_copy = *i_ezsignpage_pagenumber;
    }
    ezsignpage_response_t *result = ezsignpage_response_create_internal (
        pki_ezsignpage_id_copy,
        i_ezsignpage_widthimage_copy,
        i_ezsignpage_heightimage_copy,
        i_ezsignpage_widthpdf_copy,
        i_ezsignpage_heightpdf_copy,
        i_ezsignpage_pagenumber_copy,
        s_computed_imageurl
        );
    if (!result) {
        free(pki_ezsignpage_id_copy);
        free(i_ezsignpage_widthimage_copy);
        free(i_ezsignpage_heightimage_copy);
        free(i_ezsignpage_widthpdf_copy);
        free(i_ezsignpage_heightpdf_copy);
        free(i_ezsignpage_pagenumber_copy);
    }
    return result;
}

void ezsignpage_response_free(ezsignpage_response_t *ezsignpage_response) {
    if(NULL == ezsignpage_response){
        return ;
    }
    if(ezsignpage_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignpage_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignpage_response->pki_ezsignpage_id) {
        free(ezsignpage_response->pki_ezsignpage_id);
        ezsignpage_response->pki_ezsignpage_id = NULL;
    }
    if (ezsignpage_response->i_ezsignpage_widthimage) {
        free(ezsignpage_response->i_ezsignpage_widthimage);
        ezsignpage_response->i_ezsignpage_widthimage = NULL;
    }
    if (ezsignpage_response->i_ezsignpage_heightimage) {
        free(ezsignpage_response->i_ezsignpage_heightimage);
        ezsignpage_response->i_ezsignpage_heightimage = NULL;
    }
    if (ezsignpage_response->i_ezsignpage_widthpdf) {
        free(ezsignpage_response->i_ezsignpage_widthpdf);
        ezsignpage_response->i_ezsignpage_widthpdf = NULL;
    }
    if (ezsignpage_response->i_ezsignpage_heightpdf) {
        free(ezsignpage_response->i_ezsignpage_heightpdf);
        ezsignpage_response->i_ezsignpage_heightpdf = NULL;
    }
    if (ezsignpage_response->i_ezsignpage_pagenumber) {
        free(ezsignpage_response->i_ezsignpage_pagenumber);
        ezsignpage_response->i_ezsignpage_pagenumber = NULL;
    }
    if (ezsignpage_response->s_computed_imageurl) {
        free(ezsignpage_response->s_computed_imageurl);
        ezsignpage_response->s_computed_imageurl = NULL;
    }
    free(ezsignpage_response);
}

cJSON *ezsignpage_response_convertToJSON(ezsignpage_response_t *ezsignpage_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignpage_response->pki_ezsignpage_id
    if (!ezsignpage_response->pki_ezsignpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignpageID", *ezsignpage_response->pki_ezsignpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_widthimage
    if (!ezsignpage_response->i_ezsignpage_widthimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageWidthimage", *ezsignpage_response->i_ezsignpage_widthimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_heightimage
    if (!ezsignpage_response->i_ezsignpage_heightimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageHeightimage", *ezsignpage_response->i_ezsignpage_heightimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_widthpdf
    if (!ezsignpage_response->i_ezsignpage_widthpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageWidthpdf", *ezsignpage_response->i_ezsignpage_widthpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_heightpdf
    if (!ezsignpage_response->i_ezsignpage_heightpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageHeightpdf", *ezsignpage_response->i_ezsignpage_heightpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->i_ezsignpage_pagenumber
    if (!ezsignpage_response->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", *ezsignpage_response->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response->s_computed_imageurl
    if (!ezsignpage_response->s_computed_imageurl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sComputedImageurl", ezsignpage_response->s_computed_imageurl) == NULL) {
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

    // define the local variable for ezsignpage_response->pki_ezsignpage_id
    int *pki_ezsignpage_id_local_var = NULL;

    // define the local variable for ezsignpage_response->i_ezsignpage_widthimage
    int *i_ezsignpage_widthimage_local_var = NULL;

    // define the local variable for ezsignpage_response->i_ezsignpage_heightimage
    int *i_ezsignpage_heightimage_local_var = NULL;

    // define the local variable for ezsignpage_response->i_ezsignpage_widthpdf
    int *i_ezsignpage_widthpdf_local_var = NULL;

    // define the local variable for ezsignpage_response->i_ezsignpage_heightpdf
    int *i_ezsignpage_heightpdf_local_var = NULL;

    // define the local variable for ezsignpage_response->i_ezsignpage_pagenumber
    int *i_ezsignpage_pagenumber_local_var = NULL;

    char *s_computed_imageurl_local_str = NULL;

    // ezsignpage_response->pki_ezsignpage_id
    cJSON *pki_ezsignpage_id = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "pkiEzsignpageID");
    if (cJSON_IsNull(pki_ezsignpage_id)) {
        pki_ezsignpage_id = NULL;
    }
    if (!pki_ezsignpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignpage_id))
    {
    goto end; //Numeric
    }
    pki_ezsignpage_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignpage_id_local_var)
    {
        goto end;
    }
    *pki_ezsignpage_id_local_var = pki_ezsignpage_id->valuedouble;

    // ezsignpage_response->i_ezsignpage_widthimage
    cJSON *i_ezsignpage_widthimage = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageWidthimage");
    if (cJSON_IsNull(i_ezsignpage_widthimage)) {
        i_ezsignpage_widthimage = NULL;
    }
    if (!i_ezsignpage_widthimage) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_widthimage))
    {
    goto end; //Numeric
    }
    i_ezsignpage_widthimage_local_var = malloc(sizeof(int));
    if(!i_ezsignpage_widthimage_local_var)
    {
        goto end;
    }
    *i_ezsignpage_widthimage_local_var = i_ezsignpage_widthimage->valuedouble;

    // ezsignpage_response->i_ezsignpage_heightimage
    cJSON *i_ezsignpage_heightimage = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageHeightimage");
    if (cJSON_IsNull(i_ezsignpage_heightimage)) {
        i_ezsignpage_heightimage = NULL;
    }
    if (!i_ezsignpage_heightimage) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_heightimage))
    {
    goto end; //Numeric
    }
    i_ezsignpage_heightimage_local_var = malloc(sizeof(int));
    if(!i_ezsignpage_heightimage_local_var)
    {
        goto end;
    }
    *i_ezsignpage_heightimage_local_var = i_ezsignpage_heightimage->valuedouble;

    // ezsignpage_response->i_ezsignpage_widthpdf
    cJSON *i_ezsignpage_widthpdf = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageWidthpdf");
    if (cJSON_IsNull(i_ezsignpage_widthpdf)) {
        i_ezsignpage_widthpdf = NULL;
    }
    if (!i_ezsignpage_widthpdf) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_widthpdf))
    {
    goto end; //Numeric
    }
    i_ezsignpage_widthpdf_local_var = malloc(sizeof(int));
    if(!i_ezsignpage_widthpdf_local_var)
    {
        goto end;
    }
    *i_ezsignpage_widthpdf_local_var = i_ezsignpage_widthpdf->valuedouble;

    // ezsignpage_response->i_ezsignpage_heightpdf
    cJSON *i_ezsignpage_heightpdf = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpageHeightpdf");
    if (cJSON_IsNull(i_ezsignpage_heightpdf)) {
        i_ezsignpage_heightpdf = NULL;
    }
    if (!i_ezsignpage_heightpdf) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_heightpdf))
    {
    goto end; //Numeric
    }
    i_ezsignpage_heightpdf_local_var = malloc(sizeof(int));
    if(!i_ezsignpage_heightpdf_local_var)
    {
        goto end;
    }
    *i_ezsignpage_heightpdf_local_var = i_ezsignpage_heightpdf->valuedouble;

    // ezsignpage_response->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "iEzsignpagePagenumber");
    if (cJSON_IsNull(i_ezsignpage_pagenumber)) {
        i_ezsignpage_pagenumber = NULL;
    }
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }
    i_ezsignpage_pagenumber_local_var = malloc(sizeof(int));
    if(!i_ezsignpage_pagenumber_local_var)
    {
        goto end;
    }
    *i_ezsignpage_pagenumber_local_var = i_ezsignpage_pagenumber->valuedouble;

    // ezsignpage_response->s_computed_imageurl
    cJSON *s_computed_imageurl = cJSON_GetObjectItemCaseSensitive(ezsignpage_responseJSON, "sComputedImageurl");
    if (cJSON_IsNull(s_computed_imageurl)) {
        s_computed_imageurl = NULL;
    }
    if (!s_computed_imageurl) {
        goto end;
    }

    
    if(!cJSON_IsString(s_computed_imageurl))
    {
    goto end; //String
    }


    if (s_computed_imageurl && !cJSON_IsNull(s_computed_imageurl)) s_computed_imageurl_local_str = strdup(s_computed_imageurl->valuestring);

    ezsignpage_response_local_var = ezsignpage_response_create_internal (
        pki_ezsignpage_id_local_var,
        i_ezsignpage_widthimage_local_var,
        i_ezsignpage_heightimage_local_var,
        i_ezsignpage_widthpdf_local_var,
        i_ezsignpage_heightpdf_local_var,
        i_ezsignpage_pagenumber_local_var,
        s_computed_imageurl_local_str
        );

    if (!ezsignpage_response_local_var) {
        goto end;
    }

    return ezsignpage_response_local_var;
end:
    if (pki_ezsignpage_id_local_var) {
        free(pki_ezsignpage_id_local_var);
        pki_ezsignpage_id_local_var = NULL;
    }
    if (i_ezsignpage_widthimage_local_var) {
        free(i_ezsignpage_widthimage_local_var);
        i_ezsignpage_widthimage_local_var = NULL;
    }
    if (i_ezsignpage_heightimage_local_var) {
        free(i_ezsignpage_heightimage_local_var);
        i_ezsignpage_heightimage_local_var = NULL;
    }
    if (i_ezsignpage_widthpdf_local_var) {
        free(i_ezsignpage_widthpdf_local_var);
        i_ezsignpage_widthpdf_local_var = NULL;
    }
    if (i_ezsignpage_heightpdf_local_var) {
        free(i_ezsignpage_heightpdf_local_var);
        i_ezsignpage_heightpdf_local_var = NULL;
    }
    if (i_ezsignpage_pagenumber_local_var) {
        free(i_ezsignpage_pagenumber_local_var);
        i_ezsignpage_pagenumber_local_var = NULL;
    }
    if (s_computed_imageurl_local_str) {
        free(s_computed_imageurl_local_str);
        s_computed_imageurl_local_str = NULL;
    }
    return NULL;

}
