#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpage_response_compound.h"



static ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound_create_internal(
    int pki_ezsigntemplatedocumentpage_id,
    int i_ezsigntemplatedocumentpage_widthimage,
    int i_ezsigntemplatedocumentpage_heightimage,
    int i_ezsigntemplatedocumentpage_widthpdf,
    int i_ezsigntemplatedocumentpage_heightpdf,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_computed_imageurl
    ) {
    ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound_local_var = malloc(sizeof(ezsigntemplatedocumentpage_response_compound_t));
    if (!ezsigntemplatedocumentpage_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpage_response_compound_local_var->pki_ezsigntemplatedocumentpage_id = pki_ezsigntemplatedocumentpage_id;
    ezsigntemplatedocumentpage_response_compound_local_var->i_ezsigntemplatedocumentpage_widthimage = i_ezsigntemplatedocumentpage_widthimage;
    ezsigntemplatedocumentpage_response_compound_local_var->i_ezsigntemplatedocumentpage_heightimage = i_ezsigntemplatedocumentpage_heightimage;
    ezsigntemplatedocumentpage_response_compound_local_var->i_ezsigntemplatedocumentpage_widthpdf = i_ezsigntemplatedocumentpage_widthpdf;
    ezsigntemplatedocumentpage_response_compound_local_var->i_ezsigntemplatedocumentpage_heightpdf = i_ezsigntemplatedocumentpage_heightpdf;
    ezsigntemplatedocumentpage_response_compound_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplatedocumentpage_response_compound_local_var->s_computed_imageurl = s_computed_imageurl;

    ezsigntemplatedocumentpage_response_compound_local_var->_library_owned = 1;
    return ezsigntemplatedocumentpage_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound_create(
    int pki_ezsigntemplatedocumentpage_id,
    int i_ezsigntemplatedocumentpage_widthimage,
    int i_ezsigntemplatedocumentpage_heightimage,
    int i_ezsigntemplatedocumentpage_widthpdf,
    int i_ezsigntemplatedocumentpage_heightpdf,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_computed_imageurl
    ) {
    return ezsigntemplatedocumentpage_response_compound_create_internal (
        pki_ezsigntemplatedocumentpage_id,
        i_ezsigntemplatedocumentpage_widthimage,
        i_ezsigntemplatedocumentpage_heightimage,
        i_ezsigntemplatedocumentpage_widthpdf,
        i_ezsigntemplatedocumentpage_heightpdf,
        i_ezsigntemplatedocumentpage_pagenumber,
        s_computed_imageurl
        );
}

void ezsigntemplatedocumentpage_response_compound_free(ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound) {
    if(NULL == ezsigntemplatedocumentpage_response_compound){
        return ;
    }
    if(ezsigntemplatedocumentpage_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocumentpage_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpage_response_compound->s_computed_imageurl) {
        free(ezsigntemplatedocumentpage_response_compound->s_computed_imageurl);
        ezsigntemplatedocumentpage_response_compound->s_computed_imageurl = NULL;
    }
    free(ezsigntemplatedocumentpage_response_compound);
}

cJSON *ezsigntemplatedocumentpage_response_compound_convertToJSON(ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpage_response_compound->pki_ezsigntemplatedocumentpage_id
    if (!ezsigntemplatedocumentpage_response_compound->pki_ezsigntemplatedocumentpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentpageID", ezsigntemplatedocumentpage_response_compound->pki_ezsigntemplatedocumentpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthimage
    if (!ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageWidthimage", ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightimage
    if (!ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageHeightimage", ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthpdf
    if (!ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageWidthpdf", ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightpdf
    if (!ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpageHeightpdf", ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpage_response_compound->s_computed_imageurl
    if (!ezsigntemplatedocumentpage_response_compound->s_computed_imageurl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sComputedImageurl", ezsigntemplatedocumentpage_response_compound->s_computed_imageurl) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound_parseFromJSON(cJSON *ezsigntemplatedocumentpage_response_compoundJSON){

    ezsigntemplatedocumentpage_response_compound_t *ezsigntemplatedocumentpage_response_compound_local_var = NULL;

    // ezsigntemplatedocumentpage_response_compound->pki_ezsigntemplatedocumentpage_id
    cJSON *pki_ezsigntemplatedocumentpage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_response_compoundJSON, "pkiEzsigntemplatedocumentpageID");
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

    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthimage
    cJSON *i_ezsigntemplatedocumentpage_widthimage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_response_compoundJSON, "iEzsigntemplatedocumentpageWidthimage");
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

    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightimage
    cJSON *i_ezsigntemplatedocumentpage_heightimage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_response_compoundJSON, "iEzsigntemplatedocumentpageHeightimage");
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

    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_widthpdf
    cJSON *i_ezsigntemplatedocumentpage_widthpdf = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_response_compoundJSON, "iEzsigntemplatedocumentpageWidthpdf");
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

    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_heightpdf
    cJSON *i_ezsigntemplatedocumentpage_heightpdf = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_response_compoundJSON, "iEzsigntemplatedocumentpageHeightpdf");
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

    // ezsigntemplatedocumentpage_response_compound->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_response_compoundJSON, "iEzsigntemplatedocumentpagePagenumber");
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

    // ezsigntemplatedocumentpage_response_compound->s_computed_imageurl
    cJSON *s_computed_imageurl = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpage_response_compoundJSON, "sComputedImageurl");
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


    ezsigntemplatedocumentpage_response_compound_local_var = ezsigntemplatedocumentpage_response_compound_create_internal (
        pki_ezsigntemplatedocumentpage_id->valuedouble,
        i_ezsigntemplatedocumentpage_widthimage->valuedouble,
        i_ezsigntemplatedocumentpage_heightimage->valuedouble,
        i_ezsigntemplatedocumentpage_widthpdf->valuedouble,
        i_ezsigntemplatedocumentpage_heightpdf->valuedouble,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        strdup(s_computed_imageurl->valuestring)
        );

    return ezsigntemplatedocumentpage_response_compound_local_var;
end:
    return NULL;

}
