#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_request.h"


char* ezsigntemplatedocumentpagerecognition_request_e_ezsigntemplatedocumentpagerecognition_operator_ToString(ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__e e_ezsigntemplatedocumentpagerecognition_operator) {
    char* e_ezsigntemplatedocumentpagerecognition_operatorArray[] =  { "NULL", "eq", "in", "similar" };
    return e_ezsigntemplatedocumentpagerecognition_operatorArray[e_ezsigntemplatedocumentpagerecognition_operator];
}

ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__e ezsigntemplatedocumentpagerecognition_request_e_ezsigntemplatedocumentpagerecognition_operator_FromString(char* e_ezsigntemplatedocumentpagerecognition_operator){
    int stringToReturn = 0;
    char *e_ezsigntemplatedocumentpagerecognition_operatorArray[] =  { "NULL", "eq", "in", "similar" };
    size_t sizeofArray = sizeof(e_ezsigntemplatedocumentpagerecognition_operatorArray) / sizeof(e_ezsigntemplatedocumentpagerecognition_operatorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatedocumentpagerecognition_operator, e_ezsigntemplatedocumentpagerecognition_operatorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplatedocumentpagerecognition_request_e_ezsigntemplatedocumentpagerecognition_section_ToString(ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__e e_ezsigntemplatedocumentpagerecognition_section) {
    char* e_ezsigntemplatedocumentpagerecognition_sectionArray[] =  { "NULL", "FirstLine", "LastLine", "Page", "Region" };
    return e_ezsigntemplatedocumentpagerecognition_sectionArray[e_ezsigntemplatedocumentpagerecognition_section];
}

ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__e ezsigntemplatedocumentpagerecognition_request_e_ezsigntemplatedocumentpagerecognition_section_FromString(char* e_ezsigntemplatedocumentpagerecognition_section){
    int stringToReturn = 0;
    char *e_ezsigntemplatedocumentpagerecognition_sectionArray[] =  { "NULL", "FirstLine", "LastLine", "Page", "Region" };
    size_t sizeofArray = sizeof(e_ezsigntemplatedocumentpagerecognition_sectionArray) / sizeof(e_ezsigntemplatedocumentpagerecognition_sectionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatedocumentpagerecognition_section, e_ezsigntemplatedocumentpagerecognition_sectionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request_create(
    int pki_ezsigntemplatedocumentpagerecognition_id,
    int fki_ezsigntemplatedocumentpage_id,
    field_e_ezsigntemplatedocumentpagerecognition_operator_t *e_ezsigntemplatedocumentpagerecognition_operator,
    field_e_ezsigntemplatedocumentpagerecognition_section_t *e_ezsigntemplatedocumentpagerecognition_section,
    int i_ezsigntemplatedocumentpagerecognition_similarpercentage,
    int i_ezsigntemplatedocumentpagerecognition_x,
    int i_ezsigntemplatedocumentpagerecognition_y,
    int i_ezsigntemplatedocumentpagerecognition_width,
    int i_ezsigntemplatedocumentpagerecognition_height,
    char *t_ezsigntemplatedocumentpagerecognition_text
    ) {
    ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_request_t));
    if (!ezsigntemplatedocumentpagerecognition_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_request_local_var->pki_ezsigntemplatedocumentpagerecognition_id = pki_ezsigntemplatedocumentpagerecognition_id;
    ezsigntemplatedocumentpagerecognition_request_local_var->fki_ezsigntemplatedocumentpage_id = fki_ezsigntemplatedocumentpage_id;
    ezsigntemplatedocumentpagerecognition_request_local_var->e_ezsigntemplatedocumentpagerecognition_operator = e_ezsigntemplatedocumentpagerecognition_operator;
    ezsigntemplatedocumentpagerecognition_request_local_var->e_ezsigntemplatedocumentpagerecognition_section = e_ezsigntemplatedocumentpagerecognition_section;
    ezsigntemplatedocumentpagerecognition_request_local_var->i_ezsigntemplatedocumentpagerecognition_similarpercentage = i_ezsigntemplatedocumentpagerecognition_similarpercentage;
    ezsigntemplatedocumentpagerecognition_request_local_var->i_ezsigntemplatedocumentpagerecognition_x = i_ezsigntemplatedocumentpagerecognition_x;
    ezsigntemplatedocumentpagerecognition_request_local_var->i_ezsigntemplatedocumentpagerecognition_y = i_ezsigntemplatedocumentpagerecognition_y;
    ezsigntemplatedocumentpagerecognition_request_local_var->i_ezsigntemplatedocumentpagerecognition_width = i_ezsigntemplatedocumentpagerecognition_width;
    ezsigntemplatedocumentpagerecognition_request_local_var->i_ezsigntemplatedocumentpagerecognition_height = i_ezsigntemplatedocumentpagerecognition_height;
    ezsigntemplatedocumentpagerecognition_request_local_var->t_ezsigntemplatedocumentpagerecognition_text = t_ezsigntemplatedocumentpagerecognition_text;

    return ezsigntemplatedocumentpagerecognition_request_local_var;
}


void ezsigntemplatedocumentpagerecognition_request_free(ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request) {
    if(NULL == ezsigntemplatedocumentpagerecognition_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator) {
        field_e_ezsigntemplatedocumentpagerecognition_operator_free(ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator);
        ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator = NULL;
    }
    if (ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section) {
        field_e_ezsigntemplatedocumentpagerecognition_section_free(ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section);
        ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section = NULL;
    }
    if (ezsigntemplatedocumentpagerecognition_request->t_ezsigntemplatedocumentpagerecognition_text) {
        free(ezsigntemplatedocumentpagerecognition_request->t_ezsigntemplatedocumentpagerecognition_text);
        ezsigntemplatedocumentpagerecognition_request->t_ezsigntemplatedocumentpagerecognition_text = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_request);
}

cJSON *ezsigntemplatedocumentpagerecognition_request_convertToJSON(ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_request->pki_ezsigntemplatedocumentpagerecognition_id
    if(ezsigntemplatedocumentpagerecognition_request->pki_ezsigntemplatedocumentpagerecognition_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentpagerecognitionID", ezsigntemplatedocumentpagerecognition_request->pki_ezsigntemplatedocumentpagerecognition_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request->fki_ezsigntemplatedocumentpage_id
    if (!ezsigntemplatedocumentpagerecognition_request->fki_ezsigntemplatedocumentpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentpageID", ezsigntemplatedocumentpagerecognition_request->fki_ezsigntemplatedocumentpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator
    if (ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__NULL == ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator) {
        goto fail;
    }
    cJSON *e_ezsigntemplatedocumentpagerecognition_operator_local_JSON = field_e_ezsigntemplatedocumentpagerecognition_operator_convertToJSON(ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator);
    if(e_ezsigntemplatedocumentpagerecognition_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatedocumentpagerecognitionOperator", e_ezsigntemplatedocumentpagerecognition_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section
    if (ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__NULL == ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section) {
        goto fail;
    }
    cJSON *e_ezsigntemplatedocumentpagerecognition_section_local_JSON = field_e_ezsigntemplatedocumentpagerecognition_section_convertToJSON(ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section);
    if(e_ezsigntemplatedocumentpagerecognition_section_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatedocumentpagerecognitionSection", e_ezsigntemplatedocumentpagerecognition_section_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_similarpercentage
    if(ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_similarpercentage) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionSimilarpercentage", ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_similarpercentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_x
    if(ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionX", ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_y
    if(ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionY", ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_width
    if(ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_width) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionWidth", ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_height
    if(ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_height) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagerecognitionHeight", ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocumentpagerecognition_request->t_ezsigntemplatedocumentpagerecognition_text
    if (!ezsigntemplatedocumentpagerecognition_request->t_ezsigntemplatedocumentpagerecognition_text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatedocumentpagerecognitionText", ezsigntemplatedocumentpagerecognition_request->t_ezsigntemplatedocumentpagerecognition_text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_requestJSON){

    ezsigntemplatedocumentpagerecognition_request_t *ezsigntemplatedocumentpagerecognition_request_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator
    field_e_ezsigntemplatedocumentpagerecognition_operator_t *e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section
    field_e_ezsigntemplatedocumentpagerecognition_section_t *e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = NULL;

    // ezsigntemplatedocumentpagerecognition_request->pki_ezsigntemplatedocumentpagerecognition_id
    cJSON *pki_ezsigntemplatedocumentpagerecognition_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "pkiEzsigntemplatedocumentpagerecognitionID");
    if (pki_ezsigntemplatedocumentpagerecognition_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatedocumentpagerecognition_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request->fki_ezsigntemplatedocumentpage_id
    cJSON *fki_ezsigntemplatedocumentpage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "fkiEzsigntemplatedocumentpageID");
    if (!fki_ezsigntemplatedocumentpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocumentpage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_operator
    cJSON *e_ezsigntemplatedocumentpagerecognition_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "eEzsigntemplatedocumentpagerecognitionOperator");
    if (!e_ezsigntemplatedocumentpagerecognition_operator) {
        goto end;
    }

    
    e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = field_e_ezsigntemplatedocumentpagerecognition_operator_parseFromJSON(e_ezsigntemplatedocumentpagerecognition_operator); //custom

    // ezsigntemplatedocumentpagerecognition_request->e_ezsigntemplatedocumentpagerecognition_section
    cJSON *e_ezsigntemplatedocumentpagerecognition_section = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "eEzsigntemplatedocumentpagerecognitionSection");
    if (!e_ezsigntemplatedocumentpagerecognition_section) {
        goto end;
    }

    
    e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = field_e_ezsigntemplatedocumentpagerecognition_section_parseFromJSON(e_ezsigntemplatedocumentpagerecognition_section); //custom

    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_similarpercentage
    cJSON *i_ezsigntemplatedocumentpagerecognition_similarpercentage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "iEzsigntemplatedocumentpagerecognitionSimilarpercentage");
    if (i_ezsigntemplatedocumentpagerecognition_similarpercentage) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_similarpercentage))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_x
    cJSON *i_ezsigntemplatedocumentpagerecognition_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "iEzsigntemplatedocumentpagerecognitionX");
    if (i_ezsigntemplatedocumentpagerecognition_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_y
    cJSON *i_ezsigntemplatedocumentpagerecognition_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "iEzsigntemplatedocumentpagerecognitionY");
    if (i_ezsigntemplatedocumentpagerecognition_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_width
    cJSON *i_ezsigntemplatedocumentpagerecognition_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "iEzsigntemplatedocumentpagerecognitionWidth");
    if (i_ezsigntemplatedocumentpagerecognition_width) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_width))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request->i_ezsigntemplatedocumentpagerecognition_height
    cJSON *i_ezsigntemplatedocumentpagerecognition_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "iEzsigntemplatedocumentpagerecognitionHeight");
    if (i_ezsigntemplatedocumentpagerecognition_height) { 
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpagerecognition_height))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocumentpagerecognition_request->t_ezsigntemplatedocumentpagerecognition_text
    cJSON *t_ezsigntemplatedocumentpagerecognition_text = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_requestJSON, "tEzsigntemplatedocumentpagerecognitionText");
    if (!t_ezsigntemplatedocumentpagerecognition_text) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsigntemplatedocumentpagerecognition_text))
    {
    goto end; //String
    }


    ezsigntemplatedocumentpagerecognition_request_local_var = ezsigntemplatedocumentpagerecognition_request_create (
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

    return ezsigntemplatedocumentpagerecognition_request_local_var;
end:
    if (e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim) {
        field_e_ezsigntemplatedocumentpagerecognition_operator_free(e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim);
        e_ezsigntemplatedocumentpagerecognition_operator_local_nonprim = NULL;
    }
    if (e_ezsigntemplatedocumentpagerecognition_section_local_nonprim) {
        field_e_ezsigntemplatedocumentpagerecognition_section_free(e_ezsigntemplatedocumentpagerecognition_section_local_nonprim);
        e_ezsigntemplatedocumentpagerecognition_section_local_nonprim = NULL;
    }
    return NULL;

}
