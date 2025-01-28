#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_response.h"



static ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response_create_internal(
    int pki_ezsigntemplatedocumentpagerecognition_id,
    int fki_ezsigntemplatedocumentpage_id,
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__e e_ezsigntemplatedocumentpagerecognition_operator,
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e e_ezsigntemplatedocumentpagerecognition_section,
    int i_ezsigntemplatedocumentpagerecognition_similarpercentage,
    int i_ezsigntemplatedocumentpagerecognition_x,
    int i_ezsigntemplatedocumentpagerecognition_y,
    int i_ezsigntemplatedocumentpagerecognition_width,
    int i_ezsigntemplatedocumentpagerecognition_height,
    char *t_ezsigntemplatedocumentpagerecognition_text
    ) {
    ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_response_t));
    if (!ezsigntemplatedocumentpagerecognition_response_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_response_local_var->pki_ezsigntemplatedocumentpagerecognition_id = pki_ezsigntemplatedocumentpagerecognition_id;
    ezsigntemplatedocumentpagerecognition_response_local_var->fki_ezsigntemplatedocumentpage_id = fki_ezsigntemplatedocumentpage_id;
    ezsigntemplatedocumentpagerecognition_response_local_var->e_ezsigntemplatedocumentpagerecognition_operator = e_ezsigntemplatedocumentpagerecognition_operator;
    ezsigntemplatedocumentpagerecognition_response_local_var->e_ezsigntemplatedocumentpagerecognition_section = e_ezsigntemplatedocumentpagerecognition_section;
    ezsigntemplatedocumentpagerecognition_response_local_var->i_ezsigntemplatedocumentpagerecognition_similarpercentage = i_ezsigntemplatedocumentpagerecognition_similarpercentage;
    ezsigntemplatedocumentpagerecognition_response_local_var->i_ezsigntemplatedocumentpagerecognition_x = i_ezsigntemplatedocumentpagerecognition_x;
    ezsigntemplatedocumentpagerecognition_response_local_var->i_ezsigntemplatedocumentpagerecognition_y = i_ezsigntemplatedocumentpagerecognition_y;
    ezsigntemplatedocumentpagerecognition_response_local_var->i_ezsigntemplatedocumentpagerecognition_width = i_ezsigntemplatedocumentpagerecognition_width;
    ezsigntemplatedocumentpagerecognition_response_local_var->i_ezsigntemplatedocumentpagerecognition_height = i_ezsigntemplatedocumentpagerecognition_height;
    ezsigntemplatedocumentpagerecognition_response_local_var->t_ezsigntemplatedocumentpagerecognition_text = t_ezsigntemplatedocumentpagerecognition_text;

    ezsigntemplatedocumentpagerecognition_response_local_var->_library_owned = 1;
    return ezsigntemplatedocumentpagerecognition_response_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response_create(
    int pki_ezsigntemplatedocumentpagerecognition_id,
    int fki_ezsigntemplatedocumentpage_id,
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__e e_ezsigntemplatedocumentpagerecognition_operator,
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e e_ezsigntemplatedocumentpagerecognition_section,
    int i_ezsigntemplatedocumentpagerecognition_similarpercentage,
    int i_ezsigntemplatedocumentpagerecognition_x,
    int i_ezsigntemplatedocumentpagerecognition_y,
    int i_ezsigntemplatedocumentpagerecognition_width,
    int i_ezsigntemplatedocumentpagerecognition_height,
    char *t_ezsigntemplatedocumentpagerecognition_text
    ) {
    return ezsigntemplatedocumentpagerecognition_response_create_internal (
        pki_ezsigntemplatedocumentpagerecognition_id,
        fki_ezsigntemplatedocumentpage_id,
        e_ezsigntemplatedocumentpagerecognition_operator,
        e_ezsigntemplatedocumentpagerecognition_section,
        i_ezsigntemplatedocumentpagerecognition_similarpercentage,
        i_ezsigntemplatedocumentpagerecognition_x,
        i_ezsigntemplatedocumentpagerecognition_y,
        i_ezsigntemplatedocumentpagerecognition_width,
        i_ezsigntemplatedocumentpagerecognition_height,
        t_ezsigntemplatedocumentpagerecognition_text
        );
}

void ezsigntemplatedocumentpagerecognition_response_free(ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response) {
    if(NULL == ezsigntemplatedocumentpagerecognition_response){
        return ;
    }
    if(ezsigntemplatedocumentpagerecognition_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocumentpagerecognition_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_response->t_ezsigntemplatedocumentpagerecognition_text) {
        free(ezsigntemplatedocumentpagerecognition_response->t_ezsigntemplatedocumentpagerecognition_text);
        ezsigntemplatedocumentpagerecognition_response->t_ezsigntemplatedocumentpagerecognition_text = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_response);
}

cJSON *ezsigntemplatedocumentpagerecognition_response_convertToJSON(ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_response->pki_ezsigntemplatedocumentpagerecognition_id
    if (!ezsigntemplatedocumentpagerecognition_response->pki_ezsigntemplatedocumentpagerecognition_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentpagerecognitionID", ezsigntemplatedocumentpagerecognition_response->pki_ezsigntemplatedocumentpagerecognition_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpagerecognition_response->fki_ezsigntemplatedocumentpage_id
    if (!ezsigntemplatedocumentpagerecognition_response->fki_ezsigntemplatedocumentpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentpageID", ezsigntemplatedocumentpagerecognition_response->fki_ezsigntemplatedocumentpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_operator
    if (ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__NULL == ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_operator) {
        goto fail;
    }
    cJSON *e_ezsigntemplatedocumentpagerecognition_operator_local_JSON = field_e_ezsigntemplatedocumentpagerecognition_operator_convertToJSON(ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_operator);
    if(e_ezsigntemplatedocumentpagerecognition_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatedocumentpagerecognitionOperator", e_ezsigntemplatedocumentpagerecognition_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_section
    if (ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__NULL == ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_section) {
        goto fail;
    }
    cJSON *e_ezsigntemplatedocumentpagerecognition_section_local_JSON = field_e_ezsigntemplatedocumentpagerecognition_section_convertToJSON(ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_section);
    if(e_ezsigntemplatedocumentpagerecognition_section_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatedocumentpagerecognitionSection", e_ezsigntemplatedocumentpagerecognition_section_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_similarpercentage
    if(ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_similarpercentage) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionSimilarpercentage", ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_similarpercentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_x
    if(ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionX", ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_y
    if(ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionY", ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_width
    if(ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_width) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionWidth", ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_height
    if(ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_height) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionHeight", ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_response->t_ezsigntemplatedocumentpagerecognition_text
    if (!ezsigntemplatedocumentpagerecognition_response->t_ezsigntemplatedocumentpagerecognition_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatedocumentpagerecognitionText", ezsigntemplatedocumentpagerecognition_response->t_ezsigntemplatedocumentpagerecognition_text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_responseJSON){

    ezsigntemplatedocumentpagerecognition_response_t *ezsigntemplatedocumentpagerecognition_response_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_operator
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__e e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = 0;

    // define the local variable for ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_section
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = 0;

    // ezsigntemplatedocumentpagerecognition_response->pki_ezsigntemplatedocumentpagerecognition_id
    cJSON *pki_ezsigntemplatedocumentpagerecognition_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "pkiEzsigntemplatedocumentpagerecognitionID");
    if (cJSON_IsNull(pki_ezsigntemplatedocumentpagerecognition_id)) {
        pki_ezsigntemplatedocumentpagerecognition_id = NULL;
    }
    if (!pki_ezsigntemplatedocumentpagerecognition_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatedocumentpagerecognition_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocumentpagerecognition_response->fki_ezsigntemplatedocumentpage_id
    cJSON *fki_ezsigntemplatedocumentpage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "fkiEzsigntemplatedocumentpageID");
    if (cJSON_IsNull(fki_ezsigntemplatedocumentpage_id)) {
        fki_ezsigntemplatedocumentpage_id = NULL;
    }
    if (!fki_ezsigntemplatedocumentpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocumentpage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_operator
    cJSON *e_ezsigntemplatedocumentpagerecognition_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "eEzsigntemplatedocumentpagerecognitionOperator");
    if (cJSON_IsNull(e_ezsigntemplatedocumentpagerecognition_operator)) {
        e_ezsigntemplatedocumentpagerecognition_operator = NULL;
    }
    if (!e_ezsigntemplatedocumentpagerecognition_operator) {
        goto end;
    }

    
    e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = field_e_ezsigntemplatedocumentpagerecognition_operator_parseFromJSON(e_ezsigntemplatedocumentpagerecognition_operator); //custom

    // ezsigntemplatedocumentpagerecognition_response->e_ezsigntemplatedocumentpagerecognition_section
    cJSON *e_ezsigntemplatedocumentpagerecognition_section = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "eEzsigntemplatedocumentpagerecognitionSection");
    if (cJSON_IsNull(e_ezsigntemplatedocumentpagerecognition_section)) {
        e_ezsigntemplatedocumentpagerecognition_section = NULL;
    }
    if (!e_ezsigntemplatedocumentpagerecognition_section) {
        goto end;
    }

    
    e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = field_e_ezsigntemplatedocumentpagerecognition_section_parseFromJSON(e_ezsigntemplatedocumentpagerecognition_section); //custom

    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_similarpercentage
    cJSON *i_ezsigntemplatedocumentpagerecognition_similarpercentage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "iEzsigntemplatedocumentpagerecognitionSimilarpercentage");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_similarpercentage)) {
        i_ezsigntemplatedocumentpagerecognition_similarpercentage = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_similarpercentage) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_similarpercentage))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_x
    cJSON *i_ezsigntemplatedocumentpagerecognition_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "iEzsigntemplatedocumentpagerecognitionX");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_x)) {
        i_ezsigntemplatedocumentpagerecognition_x = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_y
    cJSON *i_ezsigntemplatedocumentpagerecognition_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "iEzsigntemplatedocumentpagerecognitionY");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_y)) {
        i_ezsigntemplatedocumentpagerecognition_y = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_width
    cJSON *i_ezsigntemplatedocumentpagerecognition_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "iEzsigntemplatedocumentpagerecognitionWidth");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_width)) {
        i_ezsigntemplatedocumentpagerecognition_width = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_width) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_width))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_response->i_ezsigntemplatedocumentpagerecognition_height
    cJSON *i_ezsigntemplatedocumentpagerecognition_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "iEzsigntemplatedocumentpagerecognitionHeight");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_height)) {
        i_ezsigntemplatedocumentpagerecognition_height = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_height) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_height))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_response->t_ezsigntemplatedocumentpagerecognition_text
    cJSON *t_ezsigntemplatedocumentpagerecognition_text = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_responseJSON, "tEzsigntemplatedocumentpagerecognitionText");
    if (cJSON_IsNull(t_ezsigntemplatedocumentpagerecognition_text)) {
        t_ezsigntemplatedocumentpagerecognition_text = NULL;
    }
    if (!t_ezsigntemplatedocumentpagerecognition_text) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsigntemplatedocumentpagerecognition_text))
    {
    goto end; //String
    }


    ezsigntemplatedocumentpagerecognition_response_local_var = ezsigntemplatedocumentpagerecognition_response_create_internal (
        pki_ezsigntemplatedocumentpagerecognition_id->valuedouble,
        fki_ezsigntemplatedocumentpage_id->valuedouble,
        e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim,
        e_ezsigntemplatedocumentpagerecognition_section_local_nonprim,
        i_ezsigntemplatedocumentpagerecognition_similarpercentage ? i_ezsigntemplatedocumentpagerecognition_similarpercentage->valuedouble : 0,
        i_ezsigntemplatedocumentpagerecognition_x ? i_ezsigntemplatedocumentpagerecognition_x->valuedouble : 0,
        i_ezsigntemplatedocumentpagerecognition_y ? i_ezsigntemplatedocumentpagerecognition_y->valuedouble : 0,
        i_ezsigntemplatedocumentpagerecognition_width ? i_ezsigntemplatedocumentpagerecognition_width->valuedouble : 0,
        i_ezsigntemplatedocumentpagerecognition_height ? i_ezsigntemplatedocumentpagerecognition_height->valuedouble : 0,
        strdup(t_ezsigntemplatedocumentpagerecognition_text->valuestring)
        );

    return ezsigntemplatedocumentpagerecognition_response_local_var;
end:
    if (e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim) {
        e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = 0;
    }
    if (e_ezsigntemplatedocumentpagerecognition_section_local_nonprim) {
        e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = 0;
    }
    return NULL;

}
