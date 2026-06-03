#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpage_response.h"



static ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response_create_internal(
    int *pki_ezsigntemplatedocumentpage_id,
    int *i_ezsigntemplatedocumentpage_widthimage,
    int *i_ezsigntemplatedocumentpage_heightimage,
    int *i_ezsigntemplatedocumentpage_widthpdf,
    int *i_ezsigntemplatedocumentpage_heightpdf,
    int *i_ezsigntemplatedocumentpage_pagenumber,
    char *s_computed_imageurl
    ) {
    ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response_local_var = malloc(sizeof(ezsigntemplatedocumentpage_response_t));
    if (!ezsigntemplatedocumentpage_response_local_var) {
        return NULL;
    }
    memset(ezsigntemplatedocumentpage_response_local_var, 0, sizeof(ezsigntemplatedocumentpage_response_t));
    ezsigntemplatedocumentpage_response_local_var->_library_owned = 1;
    ezsigntemplatedocumentpage_response_local_var->pki_ezsigntemplatedocumentpage_id = pki_ezsigntemplatedocumentpage_id;
    ezsigntemplatedocumentpage_response_local_var->i_ezsigntemplatedocumentpage_widthimage = i_ezsigntemplatedocumentpage_widthimage;
    ezsigntemplatedocumentpage_response_local_var->i_ezsigntemplatedocumentpage_heightimage = i_ezsigntemplatedocumentpage_heightimage;
    ezsigntemplatedocumentpage_response_local_var->i_ezsigntemplatedocumentpage_widthpdf = i_ezsigntemplatedocumentpage_widthpdf;
    ezsigntemplatedocumentpage_response_local_var->i_ezsigntemplatedocumentpage_heightpdf = i_ezsigntemplatedocumentpage_heightpdf;
    ezsigntemplatedocumentpage_response_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplatedocumentpage_response_local_var->s_computed_imageurl = s_computed_imageurl;
    return ezsigntemplatedocumentpage_response_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response_create(
    int *pki_ezsigntemplatedocumentpage_id,
    int *i_ezsigntemplatedocumentpage_widthimage,
    int *i_ezsigntemplatedocumentpage_heightimage,
    int *i_ezsigntemplatedocumentpage_widthpdf,
    int *i_ezsigntemplatedocumentpage_heightpdf,
    int *i_ezsigntemplatedocumentpage_pagenumber,
    char *s_computed_imageurl
    ) {
    int *pki_ezsigntemplatedocumentpage_id_copy = NULL;
    if (pki_ezsigntemplatedocumentpage_id) {
        pki_ezsigntemplatedocumentpage_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatedocumentpage_id_copy) *pki_ezsigntemplatedocumentpage_id_copy = *pki_ezsigntemplatedocumentpage_id;
    }
    int *i_ezsigntemplatedocumentpage_widthimage_copy = NULL;
    if (i_ezsigntemplatedocumentpage_widthimage) {
        i_ezsigntemplatedocumentpage_widthimage_copy = malloc(sizeof(int));
        if (i_ezsigntemplatedocumentpage_widthimage_copy) *i_ezsigntemplatedocumentpage_widthimage_copy = *i_ezsigntemplatedocumentpage_widthimage;
    }
    int *i_ezsigntemplatedocumentpage_heightimage_copy = NULL;
    if (i_ezsigntemplatedocumentpage_heightimage) {
        i_ezsigntemplatedocumentpage_heightimage_copy = malloc(sizeof(int));
        if (i_ezsigntemplatedocumentpage_heightimage_copy) *i_ezsigntemplatedocumentpage_heightimage_copy = *i_ezsigntemplatedocumentpage_heightimage;
    }
    int *i_ezsigntemplatedocumentpage_widthpdf_copy = NULL;
    if (i_ezsigntemplatedocumentpage_widthpdf) {
        i_ezsigntemplatedocumentpage_widthpdf_copy = malloc(sizeof(int));
        if (i_ezsigntemplatedocumentpage_widthpdf_copy) *i_ezsigntemplatedocumentpage_widthpdf_copy = *i_ezsigntemplatedocumentpage_widthpdf;
    }
    int *i_ezsigntemplatedocumentpage_heightpdf_copy = NULL;
    if (i_ezsigntemplatedocumentpage_heightpdf) {
        i_ezsigntemplatedocumentpage_heightpdf_copy = malloc(sizeof(int));
        if (i_ezsigntemplatedocumentpage_heightpdf_copy) *i_ezsigntemplatedocumentpage_heightpdf_copy = *i_ezsigntemplatedocumentpage_heightpdf;
    }
    int *i_ezsigntemplatedocumentpage_pagenumber_copy = NULL;
    if (i_ezsigntemplatedocumentpage_pagenumber) {
        i_ezsigntemplatedocumentpage_pagenumber_copy = malloc(sizeof(int));
        if (i_ezsigntemplatedocumentpage_pagenumber_copy) *i_ezsigntemplatedocumentpage_pagenumber_copy = *i_ezsigntemplatedocumentpage_pagenumber;
    }
    ezsigntemplatedocumentpage_response_t *result = ezsigntemplatedocumentpage_response_create_internal (
        pki_ezsigntemplatedocumentpage_id_copy,
        i_ezsigntemplatedocumentpage_widthimage_copy,
        i_ezsigntemplatedocumentpage_heightimage_copy,
        i_ezsigntemplatedocumentpage_widthpdf_copy,
        i_ezsigntemplatedocumentpage_heightpdf_copy,
        i_ezsigntemplatedocumentpage_pagenumber_copy,
        s_computed_imageurl
        );
    if (!result) {
        free(pki_ezsigntemplatedocumentpage_id_copy);
        free(i_ezsigntemplatedocumentpage_widthimage_copy);
        free(i_ezsigntemplatedocumentpage_heightimage_copy);
        free(i_ezsigntemplatedocumentpage_widthpdf_copy);
        free(i_ezsigntemplatedocumentpage_heightpdf_copy);
        free(i_ezsigntemplatedocumentpage_pagenumber_copy);
    }
    return result;
}

void ezsigntemplatedocumentpage_response_free(ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response) {
    if(NULL == ezsigntemplatedocumentpage_response){
        return ;
    }
    if(ezsigntemplatedocumentpage_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocumentpage_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id) {
        free(ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id);
        ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id = NULL;
    }
    if (ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage) {
        free(ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage);
        ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage = NULL;
    }
    if (ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage) {
        free(ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage);
        ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage = NULL;
    }
    if (ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf) {
        free(ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf);
        ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf = NULL;
    }
    if (ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf) {
        free(ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf);
        ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf = NULL;
    }
    if (ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber) {
        free(ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber);
        ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber = NULL;
    }
    if (ezsigntemplatedocumentpage_response->s_computed_imageurl) {
        free(ezsigntemplatedocumentpage_response->s_computed_imageurl);
        ezsigntemplatedocumentpage_response->s_computed_imageurl = NULL;
    }
    free(ezsigntemplatedocumentpage_response);
}

cJSON *ezsigntemplatedocumentpage_response_convertToJSON(ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id
    if (!ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentpageID", *ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage
    if (!ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageWidthimage", *ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage
    if (!ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageHeightimage", *ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf
    if (!ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageWidthpdf", *ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf
    if (!ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageHeightpdf", *ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", *ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response->s_computed_imageurl
    if (!ezsigntemplatedocumentpage_response->s_computed_imageurl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sComputedImageurl", ezsigntemplatedocumentpage_response->s_computed_imageurl) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response_parseFromJSON(cJSON *ezsigntemplatedocumentpage_responseJSON){

    ezsigntemplatedocumentpage_response_t *ezsigntemplatedocumentpage_response_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id
    int *pki_ezsigntemplatedocumentpage_id_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage
    int *i_ezsigntemplatedocumentpage_widthimage_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage
    int *i_ezsigntemplatedocumentpage_heightimage_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf
    int *i_ezsigntemplatedocumentpage_widthpdf_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf
    int *i_ezsigntemplatedocumentpage_heightpdf_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber
    int *i_ezsigntemplatedocumentpage_pagenumber_local_var = NULL;

    char *s_computed_imageurl_local_str = NULL;

    // ezsigntemplatedocumentpage_response->pki_ezsigntemplatedocumentpage_id
    cJSON *pki_ezsigntemplatedocumentpage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_responseJSON, "pkiEzsigntemplatedocumentpageID");
    if (cJSON_IsNull(pki_ezsigntemplatedocumentpage_id)) {
        pki_ezsigntemplatedocumentpage_id = NULL;
    }
    if (!pki_ezsigntemplatedocumentpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatedocumentpage_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatedocumentpage_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatedocumentpage_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatedocumentpage_id_local_var = pki_ezsigntemplatedocumentpage_id->valuedouble;

    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthimage
    cJSON *i_ezsigntemplatedocumentpage_widthimage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_responseJSON, "iEzsigntemplatedocumentpageWidthimage");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_widthimage)) {
        i_ezsigntemplatedocumentpage_widthimage = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_widthimage) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_widthimage))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatedocumentpage_widthimage_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatedocumentpage_widthimage_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatedocumentpage_widthimage_local_var = i_ezsigntemplatedocumentpage_widthimage->valuedouble;

    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightimage
    cJSON *i_ezsigntemplatedocumentpage_heightimage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_responseJSON, "iEzsigntemplatedocumentpageHeightimage");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_heightimage)) {
        i_ezsigntemplatedocumentpage_heightimage = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_heightimage) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_heightimage))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatedocumentpage_heightimage_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatedocumentpage_heightimage_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatedocumentpage_heightimage_local_var = i_ezsigntemplatedocumentpage_heightimage->valuedouble;

    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_widthpdf
    cJSON *i_ezsigntemplatedocumentpage_widthpdf = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_responseJSON, "iEzsigntemplatedocumentpageWidthpdf");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_widthpdf)) {
        i_ezsigntemplatedocumentpage_widthpdf = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_widthpdf) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_widthpdf))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatedocumentpage_widthpdf_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatedocumentpage_widthpdf_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatedocumentpage_widthpdf_local_var = i_ezsigntemplatedocumentpage_widthpdf->valuedouble;

    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_heightpdf
    cJSON *i_ezsigntemplatedocumentpage_heightpdf = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_responseJSON, "iEzsigntemplatedocumentpageHeightpdf");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_heightpdf)) {
        i_ezsigntemplatedocumentpage_heightpdf = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_heightpdf) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_heightpdf))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatedocumentpage_heightpdf_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatedocumentpage_heightpdf_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatedocumentpage_heightpdf_local_var = i_ezsigntemplatedocumentpage_heightpdf->valuedouble;

    // ezsigntemplatedocumentpage_response->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_responseJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_pagenumber)) {
        i_ezsigntemplatedocumentpage_pagenumber = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatedocumentpage_pagenumber_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatedocumentpage_pagenumber_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatedocumentpage_pagenumber_local_var = i_ezsigntemplatedocumentpage_pagenumber->valuedouble;

    // ezsigntemplatedocumentpage_response->s_computed_imageurl
    cJSON *s_computed_imageurl = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_responseJSON, "sComputedImageurl");
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

    ezsigntemplatedocumentpage_response_local_var = ezsigntemplatedocumentpage_response_create_internal (
        pki_ezsigntemplatedocumentpage_id_local_var,
        i_ezsigntemplatedocumentpage_widthimage_local_var,
        i_ezsigntemplatedocumentpage_heightimage_local_var,
        i_ezsigntemplatedocumentpage_widthpdf_local_var,
        i_ezsigntemplatedocumentpage_heightpdf_local_var,
        i_ezsigntemplatedocumentpage_pagenumber_local_var,
        s_computed_imageurl_local_str
        );

    if (!ezsigntemplatedocumentpage_response_local_var) {
        goto end;
    }

    return ezsigntemplatedocumentpage_response_local_var;
end:
    if (pki_ezsigntemplatedocumentpage_id_local_var) {
        free(pki_ezsigntemplatedocumentpage_id_local_var);
        pki_ezsigntemplatedocumentpage_id_local_var = NULL;
    }
    if (i_ezsigntemplatedocumentpage_widthimage_local_var) {
        free(i_ezsigntemplatedocumentpage_widthimage_local_var);
        i_ezsigntemplatedocumentpage_widthimage_local_var = NULL;
    }
    if (i_ezsigntemplatedocumentpage_heightimage_local_var) {
        free(i_ezsigntemplatedocumentpage_heightimage_local_var);
        i_ezsigntemplatedocumentpage_heightimage_local_var = NULL;
    }
    if (i_ezsigntemplatedocumentpage_widthpdf_local_var) {
        free(i_ezsigntemplatedocumentpage_widthpdf_local_var);
        i_ezsigntemplatedocumentpage_widthpdf_local_var = NULL;
    }
    if (i_ezsigntemplatedocumentpage_heightpdf_local_var) {
        free(i_ezsigntemplatedocumentpage_heightpdf_local_var);
        i_ezsigntemplatedocumentpage_heightpdf_local_var = NULL;
    }
    if (i_ezsigntemplatedocumentpage_pagenumber_local_var) {
        free(i_ezsigntemplatedocumentpage_pagenumber_local_var);
        i_ezsigntemplatedocumentpage_pagenumber_local_var = NULL;
    }
    if (s_computed_imageurl_local_str) {
        free(s_computed_imageurl_local_str);
        s_computed_imageurl_local_str = NULL;
    }
    return NULL;

}
