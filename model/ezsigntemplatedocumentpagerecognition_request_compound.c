#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_request_compound.h"



static ezsigntemplatedocumentpagerecognition_request_compound_t *ezsigntemplatedocumentpagerecognition_request_compound_create_internal(
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
    ezsigntemplatedocumentpagerecognition_request_compound_t *ezsigntemplatedocumentpagerecognition_request_compound_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_request_compound_t));
    if (!ezsigntemplatedocumentpagerecognition_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->pki_ezsigntemplatedocumentpagerecognition_id = pki_ezsigntemplatedocumentpagerecognition_id;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->fki_ezsigntemplatedocumentpage_id = fki_ezsigntemplatedocumentpage_id;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->e_ezsigntemplatedocumentpagerecognition_operator = e_ezsigntemplatedocumentpagerecognition_operator;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->e_ezsigntemplatedocumentpagerecognition_section = e_ezsigntemplatedocumentpagerecognition_section;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->i_ezsigntemplatedocumentpagerecognition_similarpercentage = i_ezsigntemplatedocumentpagerecognition_similarpercentage;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->i_ezsigntemplatedocumentpagerecognition_x = i_ezsigntemplatedocumentpagerecognition_x;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->i_ezsigntemplatedocumentpagerecognition_y = i_ezsigntemplatedocumentpagerecognition_y;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->i_ezsigntemplatedocumentpagerecognition_width = i_ezsigntemplatedocumentpagerecognition_width;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->i_ezsigntemplatedocumentpagerecognition_height = i_ezsigntemplatedocumentpagerecognition_height;
    ezsigntemplatedocumentpagerecognition_request_compound_local_var->t_ezsigntemplatedocumentpagerecognition_text = t_ezsigntemplatedocumentpagerecognition_text;

    ezsigntemplatedocumentpagerecognition_request_compound_local_var->_library_owned = 1;
    return ezsigntemplatedocumentpagerecognition_request_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_request_compound_t *ezsigntemplatedocumentpagerecognition_request_compound_create(
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
    return ezsigntemplatedocumentpagerecognition_request_compound_create_internal (
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

void ezsigntemplatedocumentpagerecognition_request_compound_free(ezsigntemplatedocumentpagerecognition_request_compound_t *ezsigntemplatedocumentpagerecognition_request_compound) {
    if(NULL == ezsigntemplatedocumentpagerecognition_request_compound){
        return ;
    }
    if(ezsigntemplatedocumentpagerecognition_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocumentpagerecognition_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_request_compound->t_ezsigntemplatedocumentpagerecognition_text) {
        free(ezsigntemplatedocumentpagerecognition_request_compound->t_ezsigntemplatedocumentpagerecognition_text);
        ezsigntemplatedocumentpagerecognition_request_compound->t_ezsigntemplatedocumentpagerecognition_text = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_request_compound);
}

cJSON *ezsigntemplatedocumentpagerecognition_request_compound_convertToJSON(ezsigntemplatedocumentpagerecognition_request_compound_t *ezsigntemplatedocumentpagerecognition_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_request_compound->pki_ezsigntemplatedocumentpagerecognition_id
    if(ezsigntemplatedocumentpagerecognition_request_compound->pki_ezsigntemplatedocumentpagerecognition_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentpagerecognitionID", ezsigntemplatedocumentpagerecognition_request_compound->pki_ezsigntemplatedocumentpagerecognition_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->fki_ezsigntemplatedocumentpage_id
    if (!ezsigntemplatedocumentpagerecognition_request_compound->fki_ezsigntemplatedocumentpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentpageID", ezsigntemplatedocumentpagerecognition_request_compound->fki_ezsigntemplatedocumentpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_operator
    if (ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__NULL == ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_operator) {
        goto fail;
    }
    cJSON *e_ezsigntemplatedocumentpagerecognition_operator_local_JSON = field_e_ezsigntemplatedocumentpagerecognition_operator_convertToJSON(ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_operator);
    if(e_ezsigntemplatedocumentpagerecognition_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatedocumentpagerecognitionOperator", e_ezsigntemplatedocumentpagerecognition_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_section
    if (ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__NULL == ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_section) {
        goto fail;
    }
    cJSON *e_ezsigntemplatedocumentpagerecognition_section_local_JSON = field_e_ezsigntemplatedocumentpagerecognition_section_convertToJSON(ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_section);
    if(e_ezsigntemplatedocumentpagerecognition_section_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatedocumentpagerecognitionSection", e_ezsigntemplatedocumentpagerecognition_section_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_similarpercentage
    if(ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_similarpercentage) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionSimilarpercentage", ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_similarpercentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_x
    if(ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionX", ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_y
    if(ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionY", ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_width
    if(ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_width) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionWidth", ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_height
    if(ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_height) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionHeight", ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request_compound->t_ezsigntemplatedocumentpagerecognition_text
    if (!ezsigntemplatedocumentpagerecognition_request_compound->t_ezsigntemplatedocumentpagerecognition_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatedocumentpagerecognitionText", ezsigntemplatedocumentpagerecognition_request_compound->t_ezsigntemplatedocumentpagerecognition_text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocumentpagerecognition_request_compound_t *ezsigntemplatedocumentpagerecognition_request_compound_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_request_compoundJSON){

    ezsigntemplatedocumentpagerecognition_request_compound_t *ezsigntemplatedocumentpagerecognition_request_compound_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_operator
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_operator__e e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = 0;

    // define the local variable for ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_section
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = 0;

    // ezsigntemplatedocumentpagerecognition_request_compound->pki_ezsigntemplatedocumentpagerecognition_id
    cJSON *pki_ezsigntemplatedocumentpagerecognition_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "pkiEzsigntemplatedocumentpagerecognitionID");
    if (cJSON_IsNull(pki_ezsigntemplatedocumentpagerecognition_id)) {
        pki_ezsigntemplatedocumentpagerecognition_id = NULL;
    }
    if (pki_ezsigntemplatedocumentpagerecognition_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatedocumentpagerecognition_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request_compound->fki_ezsigntemplatedocumentpage_id
    cJSON *fki_ezsigntemplatedocumentpage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "fkiEzsigntemplatedocumentpageID");
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

    // ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_operator
    cJSON *e_ezsigntemplatedocumentpagerecognition_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "eEzsigntemplatedocumentpagerecognitionOperator");
    if (cJSON_IsNull(e_ezsigntemplatedocumentpagerecognition_operator)) {
        e_ezsigntemplatedocumentpagerecognition_operator = NULL;
    }
    if (!e_ezsigntemplatedocumentpagerecognition_operator) {
        goto end;
    }

    
    e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = field_e_ezsigntemplatedocumentpagerecognition_operator_parseFromJSON(e_ezsigntemplatedocumentpagerecognition_operator); //custom

    // ezsigntemplatedocumentpagerecognition_request_compound->e_ezsigntemplatedocumentpagerecognition_section
    cJSON *e_ezsigntemplatedocumentpagerecognition_section = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "eEzsigntemplatedocumentpagerecognitionSection");
    if (cJSON_IsNull(e_ezsigntemplatedocumentpagerecognition_section)) {
        e_ezsigntemplatedocumentpagerecognition_section = NULL;
    }
    if (!e_ezsigntemplatedocumentpagerecognition_section) {
        goto end;
    }

    
    e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = field_e_ezsigntemplatedocumentpagerecognition_section_parseFromJSON(e_ezsigntemplatedocumentpagerecognition_section); //custom

    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_similarpercentage
    cJSON *i_ezsigntemplatedocumentpagerecognition_similarpercentage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "iEzsigntemplatedocumentpagerecognitionSimilarpercentage");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_similarpercentage)) {
        i_ezsigntemplatedocumentpagerecognition_similarpercentage = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_similarpercentage) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_similarpercentage))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_x
    cJSON *i_ezsigntemplatedocumentpagerecognition_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "iEzsigntemplatedocumentpagerecognitionX");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_x)) {
        i_ezsigntemplatedocumentpagerecognition_x = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_y
    cJSON *i_ezsigntemplatedocumentpagerecognition_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "iEzsigntemplatedocumentpagerecognitionY");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_y)) {
        i_ezsigntemplatedocumentpagerecognition_y = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_width
    cJSON *i_ezsigntemplatedocumentpagerecognition_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "iEzsigntemplatedocumentpagerecognitionWidth");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_width)) {
        i_ezsigntemplatedocumentpagerecognition_width = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_width) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_width))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request_compound->i_ezsigntemplatedocumentpagerecognition_height
    cJSON *i_ezsigntemplatedocumentpagerecognition_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "iEzsigntemplatedocumentpagerecognitionHeight");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpagerecognition_height)) {
        i_ezsigntemplatedocumentpagerecognition_height = NULL;
    }
    if (i_ezsigntemplatedocumentpagerecognition_height) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_height))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request_compound->t_ezsigntemplatedocumentpagerecognition_text
    cJSON *t_ezsigntemplatedocumentpagerecognition_text = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_request_compoundJSON, "tEzsigntemplatedocumentpagerecognitionText");
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


    ezsigntemplatedocumentpagerecognition_request_compound_local_var = ezsigntemplatedocumentpagerecognition_request_compound_create_internal (
        pki_ezsigntemplatedocumentpagerecognition_id ? pki_ezsigntemplatedocumentpagerecognition_id->valuedouble : 0,
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

    return ezsigntemplatedocumentpagerecognition_request_compound_local_var;
end:
    if (e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim) {
        e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = 0;
    }
    if (e_ezsigntemplatedocumentpagerecognition_section_local_nonprim) {
        e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = 0;
    }
    return NULL;

}
