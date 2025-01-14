#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_extract_text_v1_request.h"


char* ezsigntemplatedocument_extract_text_v1_request_e_section_ToString(ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e e_section) {
    char* e_sectionArray[] =  { "NULL", "FirstLine", "LastLine", "Region" };
    return e_sectionArray[e_section];
}

ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e ezsigntemplatedocument_extract_text_v1_request_e_section_FromString(char* e_section){
    int stringToReturn = 0;
    char *e_sectionArray[] =  { "NULL", "FirstLine", "LastLine", "Region" };
    size_t sizeofArray = sizeof(e_sectionArray) / sizeof(e_sectionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_section, e_sectionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request_create(
    int i_page,
    ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e e_section,
    int i_x,
    int i_y,
    int i_width,
    int i_height
    ) {
    ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request_local_var = malloc(sizeof(ezsigntemplatedocument_extract_text_v1_request_t));
    if (!ezsigntemplatedocument_extract_text_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_extract_text_v1_request_local_var->i_page = i_page;
    ezsigntemplatedocument_extract_text_v1_request_local_var->e_section = e_section;
    ezsigntemplatedocument_extract_text_v1_request_local_var->i_x = i_x;
    ezsigntemplatedocument_extract_text_v1_request_local_var->i_y = i_y;
    ezsigntemplatedocument_extract_text_v1_request_local_var->i_width = i_width;
    ezsigntemplatedocument_extract_text_v1_request_local_var->i_height = i_height;

    return ezsigntemplatedocument_extract_text_v1_request_local_var;
}


void ezsigntemplatedocument_extract_text_v1_request_free(ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request) {
    if(NULL == ezsigntemplatedocument_extract_text_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatedocument_extract_text_v1_request);
}

cJSON *ezsigntemplatedocument_extract_text_v1_request_convertToJSON(ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_extract_text_v1_request->i_page
    if (!ezsigntemplatedocument_extract_text_v1_request->i_page) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPage", ezsigntemplatedocument_extract_text_v1_request->i_page) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_extract_text_v1_request->e_section
    if(ezsigntemplatedocument_extract_text_v1_request->e_section != ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_NULL) {
    if(cJSON_AddStringToObject(item, "eSection", e_sectionezsigntemplatedocument_extract_text_v1_request_ToString(ezsigntemplatedocument_extract_text_v1_request->e_section)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsigntemplatedocument_extract_text_v1_request->i_x
    if(ezsigntemplatedocument_extract_text_v1_request->i_x) {
    if(cJSON_AddNumberToObject(item, "iX", ezsigntemplatedocument_extract_text_v1_request->i_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocument_extract_text_v1_request->i_y
    if(ezsigntemplatedocument_extract_text_v1_request->i_y) {
    if(cJSON_AddNumberToObject(item, "iY", ezsigntemplatedocument_extract_text_v1_request->i_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocument_extract_text_v1_request->i_width
    if(ezsigntemplatedocument_extract_text_v1_request->i_width) {
    if(cJSON_AddNumberToObject(item, "iWidth", ezsigntemplatedocument_extract_text_v1_request->i_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocument_extract_text_v1_request->i_height
    if(ezsigntemplatedocument_extract_text_v1_request->i_height) {
    if(cJSON_AddNumberToObject(item, "iHeight", ezsigntemplatedocument_extract_text_v1_request->i_height) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_extract_text_v1_requestJSON){

    ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request_local_var = NULL;

    // ezsigntemplatedocument_extract_text_v1_request->i_page
    cJSON *i_page = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_extract_text_v1_requestJSON, "iPage");
    if (!i_page) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_page))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_extract_text_v1_request->e_section
    cJSON *e_section = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_extract_text_v1_requestJSON, "eSection");
    ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_e e_sectionVariable;
    if (e_section) { 
    if(!cJSON_IsString(e_section))
    {
    goto end; //Enum
    }
    e_sectionVariable = ezsigntemplatedocument_extract_text_v1_request_e_section_FromString(e_section->valuestring);
    }

    // ezsigntemplatedocument_extract_text_v1_request->i_x
    cJSON *i_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_extract_text_v1_requestJSON, "iX");
    if (i_x) { 
    if(!cJSON_IsNumber(i_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocument_extract_text_v1_request->i_y
    cJSON *i_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_extract_text_v1_requestJSON, "iY");
    if (i_y) { 
    if(!cJSON_IsNumber(i_y))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocument_extract_text_v1_request->i_width
    cJSON *i_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_extract_text_v1_requestJSON, "iWidth");
    if (i_width) { 
    if(!cJSON_IsNumber(i_width))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocument_extract_text_v1_request->i_height
    cJSON *i_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_extract_text_v1_requestJSON, "iHeight");
    if (i_height) { 
    if(!cJSON_IsNumber(i_height))
    {
    goto end; //Numeric
    }
    }


    ezsigntemplatedocument_extract_text_v1_request_local_var = ezsigntemplatedocument_extract_text_v1_request_create (
        i_page->valuedouble,
        e_section ? e_sectionVariable : ezmax_api_definition__full_ezsigntemplatedocument_extract_text_v1_request_ESECTION_NULL,
        i_x ? i_x->valuedouble : 0,
        i_y ? i_y->valuedouble : 0,
        i_width ? i_width->valuedouble : 0,
        i_height ? i_height->valuedouble : 0
        );

    return ezsigntemplatedocument_extract_text_v1_request_local_var;
end:
    return NULL;

}
