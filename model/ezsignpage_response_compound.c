#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignpage_response_compound.h"



static ezsignpage_response_compound_t *ezsignpage_response_compound_create_internal(
    int pki_ezsignpage_id,
    int i_ezsignpage_widthimage,
    int i_ezsignpage_heightimage,
    int i_ezsignpage_widthpdf,
    int i_ezsignpage_heightpdf,
    int i_ezsignpage_pagenumber,
    char *s_computed_imageurl
    ) {
    ezsignpage_response_compound_t *ezsignpage_response_compound_local_var = malloc(sizeof(ezsignpage_response_compound_t));
    if (!ezsignpage_response_compound_local_var) {
        return NULL;
    }
    ezsignpage_response_compound_local_var->pki_ezsignpage_id = pki_ezsignpage_id;
    ezsignpage_response_compound_local_var->i_ezsignpage_widthimage = i_ezsignpage_widthimage;
    ezsignpage_response_compound_local_var->i_ezsignpage_heightimage = i_ezsignpage_heightimage;
    ezsignpage_response_compound_local_var->i_ezsignpage_widthpdf = i_ezsignpage_widthpdf;
    ezsignpage_response_compound_local_var->i_ezsignpage_heightpdf = i_ezsignpage_heightpdf;
    ezsignpage_response_compound_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignpage_response_compound_local_var->s_computed_imageurl = s_computed_imageurl;

    ezsignpage_response_compound_local_var->_library_owned = 1;
    return ezsignpage_response_compound_local_var;
}

__attribute__((deprecated)) ezsignpage_response_compound_t *ezsignpage_response_compound_create(
    int pki_ezsignpage_id,
    int i_ezsignpage_widthimage,
    int i_ezsignpage_heightimage,
    int i_ezsignpage_widthpdf,
    int i_ezsignpage_heightpdf,
    int i_ezsignpage_pagenumber,
    char *s_computed_imageurl
    ) {
    return ezsignpage_response_compound_create_internal (
        pki_ezsignpage_id,
        i_ezsignpage_widthimage,
        i_ezsignpage_heightimage,
        i_ezsignpage_widthpdf,
        i_ezsignpage_heightpdf,
        i_ezsignpage_pagenumber,
        s_computed_imageurl
        );
}

void ezsignpage_response_compound_free(ezsignpage_response_compound_t *ezsignpage_response_compound) {
    if(NULL == ezsignpage_response_compound){
        return ;
    }
    if(ezsignpage_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignpage_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignpage_response_compound->s_computed_imageurl) {
        free(ezsignpage_response_compound->s_computed_imageurl);
        ezsignpage_response_compound->s_computed_imageurl = NULL;
    }
    free(ezsignpage_response_compound);
}

cJSON *ezsignpage_response_compound_convertToJSON(ezsignpage_response_compound_t *ezsignpage_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignpage_response_compound->pki_ezsignpage_id
    if (!ezsignpage_response_compound->pki_ezsignpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignpageID", ezsignpage_response_compound->pki_ezsignpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response_compound->i_ezsignpage_widthimage
    if (!ezsignpage_response_compound->i_ezsignpage_widthimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageWidthimage", ezsignpage_response_compound->i_ezsignpage_widthimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response_compound->i_ezsignpage_heightimage
    if (!ezsignpage_response_compound->i_ezsignpage_heightimage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageHeightimage", ezsignpage_response_compound->i_ezsignpage_heightimage) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response_compound->i_ezsignpage_widthpdf
    if (!ezsignpage_response_compound->i_ezsignpage_widthpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageWidthpdf", ezsignpage_response_compound->i_ezsignpage_widthpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response_compound->i_ezsignpage_heightpdf
    if (!ezsignpage_response_compound->i_ezsignpage_heightpdf) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpageHeightpdf", ezsignpage_response_compound->i_ezsignpage_heightpdf) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response_compound->i_ezsignpage_pagenumber
    if (!ezsignpage_response_compound->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignpage_response_compound->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignpage_response_compound->s_computed_imageurl
    if (!ezsignpage_response_compound->s_computed_imageurl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sComputedImageurl", ezsignpage_response_compound->s_computed_imageurl) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignpage_response_compound_t *ezsignpage_response_compound_parseFromJSON(cJSON *ezsignpage_response_compoundJSON){

    ezsignpage_response_compound_t *ezsignpage_response_compound_local_var = NULL;

    // ezsignpage_response_compound->pki_ezsignpage_id
    cJSON *pki_ezsignpage_id = cJSON_GetObjectItemCaseSensitive(ezsignpage_response_compoundJSON, "pkiEzsignpageID");
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

    // ezsignpage_response_compound->i_ezsignpage_widthimage
    cJSON *i_ezsignpage_widthimage = cJSON_GetObjectItemCaseSensitive(ezsignpage_response_compoundJSON, "iEzsignpageWidthimage");
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

    // ezsignpage_response_compound->i_ezsignpage_heightimage
    cJSON *i_ezsignpage_heightimage = cJSON_GetObjectItemCaseSensitive(ezsignpage_response_compoundJSON, "iEzsignpageHeightimage");
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

    // ezsignpage_response_compound->i_ezsignpage_widthpdf
    cJSON *i_ezsignpage_widthpdf = cJSON_GetObjectItemCaseSensitive(ezsignpage_response_compoundJSON, "iEzsignpageWidthpdf");
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

    // ezsignpage_response_compound->i_ezsignpage_heightpdf
    cJSON *i_ezsignpage_heightpdf = cJSON_GetObjectItemCaseSensitive(ezsignpage_response_compoundJSON, "iEzsignpageHeightpdf");
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

    // ezsignpage_response_compound->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignpage_response_compoundJSON, "iEzsignpagePagenumber");
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

    // ezsignpage_response_compound->s_computed_imageurl
    cJSON *s_computed_imageurl = cJSON_GetObjectItemCaseSensitive(ezsignpage_response_compoundJSON, "sComputedImageurl");
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


    ezsignpage_response_compound_local_var = ezsignpage_response_compound_create_internal (
        pki_ezsignpage_id->valuedouble,
        i_ezsignpage_widthimage->valuedouble,
        i_ezsignpage_heightimage->valuedouble,
        i_ezsignpage_widthpdf->valuedouble,
        i_ezsignpage_heightpdf->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        strdup(s_computed_imageurl->valuestring)
        );

    return ezsignpage_response_compound_local_var;
end:
    return NULL;

}
