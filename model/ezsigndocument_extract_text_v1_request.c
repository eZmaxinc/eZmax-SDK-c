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
    int i_page,
    ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section,
    int i_x,
    int i_y,
    int i_width,
    int i_height
    ) {
    ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_local_var = malloc(sizeof(ezsigndocument_extract_text_v1_request_t));
    if (!ezsigndocument_extract_text_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_extract_text_v1_request_local_var->i_page = i_page;
    ezsigndocument_extract_text_v1_request_local_var->e_section = e_section;
    ezsigndocument_extract_text_v1_request_local_var->i_x = i_x;
    ezsigndocument_extract_text_v1_request_local_var->i_y = i_y;
    ezsigndocument_extract_text_v1_request_local_var->i_width = i_width;
    ezsigndocument_extract_text_v1_request_local_var->i_height = i_height;

    ezsigndocument_extract_text_v1_request_local_var->_library_owned = 1;
    return ezsigndocument_extract_text_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request_create(
    int i_page,
    ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_e e_section,
    int i_x,
    int i_y,
    int i_width,
    int i_height
    ) {
    return ezsigndocument_extract_text_v1_request_create_internal (
        i_page,
        e_section,
        i_x,
        i_y,
        i_width,
        i_height
        );
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
    free(ezsigndocument_extract_text_v1_request);
}

cJSON *ezsigndocument_extract_text_v1_request_convertToJSON(ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_extract_text_v1_request->i_page
    if (!ezsigndocument_extract_text_v1_request->i_page) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPage", ezsigndocument_extract_text_v1_request->i_page) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iX", ezsigndocument_extract_text_v1_request->i_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_extract_text_v1_request->i_y
    if(ezsigndocument_extract_text_v1_request->i_y) {
    if(cJSON_AddNumberToObject(item, "iY", ezsigndocument_extract_text_v1_request->i_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_extract_text_v1_request->i_width
    if(ezsigndocument_extract_text_v1_request->i_width) {
    if(cJSON_AddNumberToObject(item, "iWidth", ezsigndocument_extract_text_v1_request->i_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_extract_text_v1_request->i_height
    if(ezsigndocument_extract_text_v1_request->i_height) {
    if(cJSON_AddNumberToObject(item, "iHeight", ezsigndocument_extract_text_v1_request->i_height) == NULL) {
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
    }


    ezsigndocument_extract_text_v1_request_local_var = ezsigndocument_extract_text_v1_request_create_internal (
        i_page->valuedouble,
        e_section ? e_sectionVariable : ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_NULL,
        i_x ? i_x->valuedouble : 0,
        i_y ? i_y->valuedouble : 0,
        i_width ? i_width->valuedouble : 0,
        i_height ? i_height->valuedouble : 0
        );

    return ezsigndocument_extract_text_v1_request_local_var;
end:
    return NULL;

}
