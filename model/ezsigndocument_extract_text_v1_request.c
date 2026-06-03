#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_extract_text_v1_request.h"


char* ezsigndocument_extract_text_v1_request_e_section_ToString(ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section) {
    char* e_sectionArray[] =  { "NULL", "FirstLine", "LastLine", "Region" };
    return e_sectionArray[e_section];
}

ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e ezsigndocument_extract_text_v1_request_e_section_FromString(char* e_section){
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

static ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_create_internal(
    int *i_page,
    ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section,
    int *i_x,
    int *i_y,
    int *i_width,
    int *i_height
    ) {
    ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_local_var = malloc(sizeof(ezsigndocument_extract_text_v1_request_t));
    if (!ezsigndocument_extract_text_v1_request_local_var) {
        return NULL;
    }
    memset(ezsigndocument_extract_text_v1_request_local_var, 0, sizeof(ezsigndocument_extract_text_v1_request_t));
    ezsigndocument_extract_text_v1_request_local_var->_library_owned = 1;
    ezsigndocument_extract_text_v1_request_local_var->i_page = i_page;
    ezsigndocument_extract_text_v1_request_local_var->e_section = e_section;
    ezsigndocument_extract_text_v1_request_local_var->i_x = i_x;
    ezsigndocument_extract_text_v1_request_local_var->i_y = i_y;
    ezsigndocument_extract_text_v1_request_local_var->i_width = i_width;
    ezsigndocument_extract_text_v1_request_local_var->i_height = i_height;
    return ezsigndocument_extract_text_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_create(
    int *i_page,
    ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section,
    int *i_x,
    int *i_y,
    int *i_width,
    int *i_height
    ) {
    int *i_page_copy = NULL;
    if (i_page) {
        i_page_copy = malloc(sizeof(int));
        if (i_page_copy) *i_page_copy = *i_page;
    }
    int *i_x_copy = NULL;
    if (i_x) {
        i_x_copy = malloc(sizeof(int));
        if (i_x_copy) *i_x_copy = *i_x;
    }
    int *i_y_copy = NULL;
    if (i_y) {
        i_y_copy = malloc(sizeof(int));
        if (i_y_copy) *i_y_copy = *i_y;
    }
    int *i_width_copy = NULL;
    if (i_width) {
        i_width_copy = malloc(sizeof(int));
        if (i_width_copy) *i_width_copy = *i_width;
    }
    int *i_height_copy = NULL;
    if (i_height) {
        i_height_copy = malloc(sizeof(int));
        if (i_height_copy) *i_height_copy = *i_height;
    }
    ezsigndocument_extract_text_v1_request_t *result = ezsigndocument_extract_text_v1_request_create_internal (
        i_page_copy,
        e_section,
        i_x_copy,
        i_y_copy,
        i_width_copy,
        i_height_copy
        );
    if (!result) {
        free(i_page_copy);
        free(i_x_copy);
        free(i_y_copy);
        free(i_width_copy);
        free(i_height_copy);
    }
    return result;
}

void ezsigndocument_extract_text_v1_request_free(ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request) {
    if(NULL == ezsigndocument_extract_text_v1_request){
        return ;
    }
    if(ezsigndocument_extract_text_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_extract_text_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_extract_text_v1_request->i_page) {
        free(ezsigndocument_extract_text_v1_request->i_page);
        ezsigndocument_extract_text_v1_request->i_page = NULL;
    }
    if (ezsigndocument_extract_text_v1_request->i_x) {
        free(ezsigndocument_extract_text_v1_request->i_x);
        ezsigndocument_extract_text_v1_request->i_x = NULL;
    }
    if (ezsigndocument_extract_text_v1_request->i_y) {
        free(ezsigndocument_extract_text_v1_request->i_y);
        ezsigndocument_extract_text_v1_request->i_y = NULL;
    }
    if (ezsigndocument_extract_text_v1_request->i_width) {
        free(ezsigndocument_extract_text_v1_request->i_width);
        ezsigndocument_extract_text_v1_request->i_width = NULL;
    }
    if (ezsigndocument_extract_text_v1_request->i_height) {
        free(ezsigndocument_extract_text_v1_request->i_height);
        ezsigndocument_extract_text_v1_request->i_height = NULL;
    }
    free(ezsigndocument_extract_text_v1_request);
}

cJSON *ezsigndocument_extract_text_v1_request_convertToJSON(ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_extract_text_v1_request->i_page
    if (!ezsigndocument_extract_text_v1_request->i_page) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPage", *ezsigndocument_extract_text_v1_request->i_page) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_extract_text_v1_request->e_section
    if(ezsigndocument_extract_text_v1_request->e_section != ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_NULL) {
    if(cJSON_AddStringToObject(item, "eSection", ezsigndocument_extract_text_v1_request_e_section_ToString(ezsigndocument_extract_text_v1_request->e_section)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsigndocument_extract_text_v1_request->i_x
    if(ezsigndocument_extract_text_v1_request->i_x) {
    if(cJSON_AddNumberToObject(item, "iX", *ezsigndocument_extract_text_v1_request->i_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_extract_text_v1_request->i_y
    if(ezsigndocument_extract_text_v1_request->i_y) {
    if(cJSON_AddNumberToObject(item, "iY", *ezsigndocument_extract_text_v1_request->i_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_extract_text_v1_request->i_width
    if(ezsigndocument_extract_text_v1_request->i_width) {
    if(cJSON_AddNumberToObject(item, "iWidth", *ezsigndocument_extract_text_v1_request->i_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_extract_text_v1_request->i_height
    if(ezsigndocument_extract_text_v1_request->i_height) {
    if(cJSON_AddNumberToObject(item, "iHeight", *ezsigndocument_extract_text_v1_request->i_height) == NULL) {
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

ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_parseFromJSON(cJSON *ezsigndocument_extract_text_v1_requestJSON){

    ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_local_var = NULL;

    // define the local variable for ezsigndocument_extract_text_v1_request->i_page
    int *i_page_local_var = NULL;

    // define the local variable for ezsigndocument_extract_text_v1_request->i_x
    int *i_x_local_var = NULL;

    // define the local variable for ezsigndocument_extract_text_v1_request->i_y
    int *i_y_local_var = NULL;

    // define the local variable for ezsigndocument_extract_text_v1_request->i_width
    int *i_width_local_var = NULL;

    // define the local variable for ezsigndocument_extract_text_v1_request->i_height
    int *i_height_local_var = NULL;

    // ezsigndocument_extract_text_v1_request->i_page
    cJSON *i_page = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_requestJSON, "iPage");
    if (cJSON_IsNull(i_page)) {
        i_page = NULL;
    }
    if (!i_page) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_page))
    {
    goto end; //Numeric
    }
    i_page_local_var = malloc(sizeof(int));
    if(!i_page_local_var)
    {
        goto end;
    }
    *i_page_local_var = i_page->valuedouble;

    // ezsigndocument_extract_text_v1_request->e_section
    cJSON *e_section = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_requestJSON, "eSection");
    if (cJSON_IsNull(e_section)) {
        e_section = NULL;
    }
    ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_sectionVariable;
    if (e_section) { 
    if(!cJSON_IsString(e_section))
    {
    goto end; //Enum
    }
    e_sectionVariable = ezsigndocument_extract_text_v1_request_e_section_FromString(e_section->valuestring);
    }

    // ezsigndocument_extract_text_v1_request->i_x
    cJSON *i_x = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_requestJSON, "iX");
    if (cJSON_IsNull(i_x)) {
        i_x = NULL;
    }
    if (i_x) { 
    if(!cJSON_IsNumber(i_x))
    {
    goto end; //Numeric
    }
    i_x_local_var = malloc(sizeof(int));
    if(!i_x_local_var)
    {
        goto end;
    }
    *i_x_local_var = i_x->valuedouble;
    }

    // ezsigndocument_extract_text_v1_request->i_y
    cJSON *i_y = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_requestJSON, "iY");
    if (cJSON_IsNull(i_y)) {
        i_y = NULL;
    }
    if (i_y) { 
    if(!cJSON_IsNumber(i_y))
    {
    goto end; //Numeric
    }
    i_y_local_var = malloc(sizeof(int));
    if(!i_y_local_var)
    {
        goto end;
    }
    *i_y_local_var = i_y->valuedouble;
    }

    // ezsigndocument_extract_text_v1_request->i_width
    cJSON *i_width = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_requestJSON, "iWidth");
    if (cJSON_IsNull(i_width)) {
        i_width = NULL;
    }
    if (i_width) { 
    if(!cJSON_IsNumber(i_width))
    {
    goto end; //Numeric
    }
    i_width_local_var = malloc(sizeof(int));
    if(!i_width_local_var)
    {
        goto end;
    }
    *i_width_local_var = i_width->valuedouble;
    }

    // ezsigndocument_extract_text_v1_request->i_height
    cJSON *i_height = cJSON_GetObjectItemCaseSensitive(ezsigndocument_extract_text_v1_requestJSON, "iHeight");
    if (cJSON_IsNull(i_height)) {
        i_height = NULL;
    }
    if (i_height) { 
    if(!cJSON_IsNumber(i_height))
    {
    goto end; //Numeric
    }
    i_height_local_var = malloc(sizeof(int));
    if(!i_height_local_var)
    {
        goto end;
    }
    *i_height_local_var = i_height->valuedouble;
    }



    ezsigndocument_extract_text_v1_request_local_var = ezsigndocument_extract_text_v1_request_create_internal (
        i_page_local_var,
        e_section ? e_sectionVariable : ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_NULL,
        i_x_local_var,
        i_y_local_var,
        i_width_local_var,
        i_height_local_var
        );

    if (!ezsigndocument_extract_text_v1_request_local_var) {
        goto end;
    }

    return ezsigndocument_extract_text_v1_request_local_var;
end:
    if (i_page_local_var) {
        free(i_page_local_var);
        i_page_local_var = NULL;
    }
    if (i_x_local_var) {
        free(i_x_local_var);
        i_x_local_var = NULL;
    }
    if (i_y_local_var) {
        free(i_y_local_var);
        i_y_local_var = NULL;
    }
    if (i_width_local_var) {
        free(i_width_local_var);
        i_width_local_var = NULL;
    }
    if (i_height_local_var) {
        free(i_height_local_var);
        i_height_local_var = NULL;
    }
    return NULL;

}
