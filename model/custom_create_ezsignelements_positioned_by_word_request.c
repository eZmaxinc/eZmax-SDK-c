#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_create_ezsignelements_positioned_by_word_request.h"


char* custom_create_ezsignelements_positioned_by_word_request_e_createezsignelementspositionedbyword_occurance_ToString(ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e e_createezsignelementspositionedbyword_occurance) {
    char* e_createezsignelementspositionedbyword_occuranceArray[] =  { "NULL", "All", "First", "Last" };
    return e_createezsignelementspositionedbyword_occuranceArray[e_createezsignelementspositionedbyword_occurance];
}

ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e custom_create_ezsignelements_positioned_by_word_request_e_createezsignelementspositionedbyword_occurance_FromString(char* e_createezsignelementspositionedbyword_occurance){
    int stringToReturn = 0;
    char *e_createezsignelementspositionedbyword_occuranceArray[] =  { "NULL", "All", "First", "Last" };
    size_t sizeofArray = sizeof(e_createezsignelementspositionedbyword_occuranceArray) / sizeof(e_createezsignelementspositionedbyword_occuranceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_createezsignelementspositionedbyword_occurance, e_createezsignelementspositionedbyword_occuranceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request_create_internal(
    char *s_createezsignelementspositionedbyword_pattern,
    int i_createezsignelementspositionedbyword_offsetx,
    int i_createezsignelementspositionedbyword_offsety,
    ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e e_createezsignelementspositionedbyword_occurance
    ) {
    custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request_local_var = malloc(sizeof(custom_create_ezsignelements_positioned_by_word_request_t));
    if (!custom_create_ezsignelements_positioned_by_word_request_local_var) {
        return NULL;
    }
    custom_create_ezsignelements_positioned_by_word_request_local_var->s_createezsignelementspositionedbyword_pattern = s_createezsignelementspositionedbyword_pattern;
    custom_create_ezsignelements_positioned_by_word_request_local_var->i_createezsignelementspositionedbyword_offsetx = i_createezsignelementspositionedbyword_offsetx;
    custom_create_ezsignelements_positioned_by_word_request_local_var->i_createezsignelementspositionedbyword_offsety = i_createezsignelementspositionedbyword_offsety;
    custom_create_ezsignelements_positioned_by_word_request_local_var->e_createezsignelementspositionedbyword_occurance = e_createezsignelementspositionedbyword_occurance;

    custom_create_ezsignelements_positioned_by_word_request_local_var->_library_owned = 1;
    return custom_create_ezsignelements_positioned_by_word_request_local_var;
}

__attribute__((deprecated)) custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request_create(
    char *s_createezsignelementspositionedbyword_pattern,
    int i_createezsignelementspositionedbyword_offsetx,
    int i_createezsignelementspositionedbyword_offsety,
    ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e e_createezsignelementspositionedbyword_occurance
    ) {
    return custom_create_ezsignelements_positioned_by_word_request_create_internal (
        s_createezsignelementspositionedbyword_pattern,
        i_createezsignelementspositionedbyword_offsetx,
        i_createezsignelementspositionedbyword_offsety,
        e_createezsignelementspositionedbyword_occurance
        );
}

void custom_create_ezsignelements_positioned_by_word_request_free(custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request) {
    if(NULL == custom_create_ezsignelements_positioned_by_word_request){
        return ;
    }
    if(custom_create_ezsignelements_positioned_by_word_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_create_ezsignelements_positioned_by_word_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_create_ezsignelements_positioned_by_word_request->s_createezsignelementspositionedbyword_pattern) {
        free(custom_create_ezsignelements_positioned_by_word_request->s_createezsignelementspositionedbyword_pattern);
        custom_create_ezsignelements_positioned_by_word_request->s_createezsignelementspositionedbyword_pattern = NULL;
    }
    free(custom_create_ezsignelements_positioned_by_word_request);
}

cJSON *custom_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_create_ezsignelements_positioned_by_word_request->s_createezsignelementspositionedbyword_pattern
    if (!custom_create_ezsignelements_positioned_by_word_request->s_createezsignelementspositionedbyword_pattern) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreateezsignelementspositionedbywordPattern", custom_create_ezsignelements_positioned_by_word_request->s_createezsignelementspositionedbyword_pattern) == NULL) {
    goto fail; //String
    }


    // custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsetx
    if (!custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsetx) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreateezsignelementspositionedbywordOffsetx", custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsetx) == NULL) {
    goto fail; //Numeric
    }


    // custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsety
    if (!custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsety) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreateezsignelementspositionedbywordOffsety", custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsety) == NULL) {
    goto fail; //Numeric
    }


    // custom_create_ezsignelements_positioned_by_word_request->e_createezsignelementspositionedbyword_occurance
    if (ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_NULL == custom_create_ezsignelements_positioned_by_word_request->e_createezsignelementspositionedbyword_occurance) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eCreateezsignelementspositionedbywordOccurance", custom_create_ezsignelements_positioned_by_word_request_e_createezsignelementspositionedbyword_occurance_ToString(custom_create_ezsignelements_positioned_by_word_request->e_createezsignelementspositionedbyword_occurance)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request_parseFromJSON(cJSON *custom_create_ezsignelements_positioned_by_word_requestJSON){

    custom_create_ezsignelements_positioned_by_word_request_t *custom_create_ezsignelements_positioned_by_word_request_local_var = NULL;

    // custom_create_ezsignelements_positioned_by_word_request->s_createezsignelementspositionedbyword_pattern
    cJSON *s_createezsignelementspositionedbyword_pattern = cJSON_GetObjectItemCaseSensitive(custom_create_ezsignelements_positioned_by_word_requestJSON, "sCreateezsignelementspositionedbywordPattern");
    if (cJSON_IsNull(s_createezsignelementspositionedbyword_pattern)) {
        s_createezsignelementspositionedbyword_pattern = NULL;
    }
    if (!s_createezsignelementspositionedbyword_pattern) {
        goto end;
    }

    
    if(!cJSON_IsString(s_createezsignelementspositionedbyword_pattern))
    {
    goto end; //String
    }

    // custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsetx
    cJSON *i_createezsignelementspositionedbyword_offsetx = cJSON_GetObjectItemCaseSensitive(custom_create_ezsignelements_positioned_by_word_requestJSON, "iCreateezsignelementspositionedbywordOffsetx");
    if (cJSON_IsNull(i_createezsignelementspositionedbyword_offsetx)) {
        i_createezsignelementspositionedbyword_offsetx = NULL;
    }
    if (!i_createezsignelementspositionedbyword_offsetx) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_createezsignelementspositionedbyword_offsetx))
    {
    goto end; //Numeric
    }

    // custom_create_ezsignelements_positioned_by_word_request->i_createezsignelementspositionedbyword_offsety
    cJSON *i_createezsignelementspositionedbyword_offsety = cJSON_GetObjectItemCaseSensitive(custom_create_ezsignelements_positioned_by_word_requestJSON, "iCreateezsignelementspositionedbywordOffsety");
    if (cJSON_IsNull(i_createezsignelementspositionedbyword_offsety)) {
        i_createezsignelementspositionedbyword_offsety = NULL;
    }
    if (!i_createezsignelementspositionedbyword_offsety) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_createezsignelementspositionedbyword_offsety))
    {
    goto end; //Numeric
    }

    // custom_create_ezsignelements_positioned_by_word_request->e_createezsignelementspositionedbyword_occurance
    cJSON *e_createezsignelementspositionedbyword_occurance = cJSON_GetObjectItemCaseSensitive(custom_create_ezsignelements_positioned_by_word_requestJSON, "eCreateezsignelementspositionedbywordOccurance");
    if (cJSON_IsNull(e_createezsignelementspositionedbyword_occurance)) {
        e_createezsignelementspositionedbyword_occurance = NULL;
    }
    if (!e_createezsignelementspositionedbyword_occurance) {
        goto end;
    }

    ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_e e_createezsignelementspositionedbyword_occuranceVariable;
    
    if(!cJSON_IsString(e_createezsignelementspositionedbyword_occurance))
    {
    goto end; //Enum
    }
    e_createezsignelementspositionedbyword_occuranceVariable = custom_create_ezsignelements_positioned_by_word_request_e_createezsignelementspositionedbyword_occurance_FromString(e_createezsignelementspositionedbyword_occurance->valuestring);


    custom_create_ezsignelements_positioned_by_word_request_local_var = custom_create_ezsignelements_positioned_by_word_request_create_internal (
        strdup(s_createezsignelementspositionedbyword_pattern->valuestring),
        i_createezsignelementspositionedbyword_offsetx->valuedouble,
        i_createezsignelementspositionedbyword_offsety->valuedouble,
        e_createezsignelementspositionedbyword_occuranceVariable
        );

    return custom_create_ezsignelements_positioned_by_word_request_local_var;
end:
    return NULL;

}
