#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_word_position_occurence_response.h"



static custom_word_position_occurence_response_t *custom_word_position_occurence_response_create_internal(
    int i_page,
    int i_x,
    int i_y
    ) {
    custom_word_position_occurence_response_t *custom_word_position_occurence_response_local_var = malloc(sizeof(custom_word_position_occurence_response_t));
    if (!custom_word_position_occurence_response_local_var) {
        return NULL;
    }
    custom_word_position_occurence_response_local_var->i_page = i_page;
    custom_word_position_occurence_response_local_var->i_x = i_x;
    custom_word_position_occurence_response_local_var->i_y = i_y;

    custom_word_position_occurence_response_local_var->_library_owned = 1;
    return custom_word_position_occurence_response_local_var;
}

__attribute__((deprecated)) custom_word_position_occurence_response_t *custom_word_position_occurence_response_create(
    int i_page,
    int i_x,
    int i_y
    ) {
    return custom_word_position_occurence_response_create_internal (
        i_page,
        i_x,
        i_y
        );
}

void custom_word_position_occurence_response_free(custom_word_position_occurence_response_t *custom_word_position_occurence_response) {
    if(NULL == custom_word_position_occurence_response){
        return ;
    }
    if(custom_word_position_occurence_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_word_position_occurence_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(custom_word_position_occurence_response);
}

cJSON *custom_word_position_occurence_response_convertToJSON(custom_word_position_occurence_response_t *custom_word_position_occurence_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_word_position_occurence_response->i_page
    if(custom_word_position_occurence_response->i_page) {
    if(cJSON_AddNumberToObject(item, "iPage", custom_word_position_occurence_response->i_page) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_word_position_occurence_response->i_x
    if(custom_word_position_occurence_response->i_x) {
    if(cJSON_AddNumberToObject(item, "iX", custom_word_position_occurence_response->i_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_word_position_occurence_response->i_y
    if(custom_word_position_occurence_response->i_y) {
    if(cJSON_AddNumberToObject(item, "iY", custom_word_position_occurence_response->i_y) == NULL) {
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

custom_word_position_occurence_response_t *custom_word_position_occurence_response_parseFromJSON(cJSON *custom_word_position_occurence_responseJSON){

    custom_word_position_occurence_response_t *custom_word_position_occurence_response_local_var = NULL;

    // custom_word_position_occurence_response->i_page
    cJSON *i_page = cJSON_GetObjectItemCaseSensitive(custom_word_position_occurence_responseJSON, "iPage");
    if (cJSON_IsNull(i_page)) {
        i_page = NULL;
    }
    if (i_page) { 
    if(!cJSON_IsNumber(i_page))
    {
    goto end; //Numeric
    }
    }

    // custom_word_position_occurence_response->i_x
    cJSON *i_x = cJSON_GetObjectItemCaseSensitive(custom_word_position_occurence_responseJSON, "iX");
    if (cJSON_IsNull(i_x)) {
        i_x = NULL;
    }
    if (i_x) { 
    if(!cJSON_IsNumber(i_x))
    {
    goto end; //Numeric
    }
    }

    // custom_word_position_occurence_response->i_y
    cJSON *i_y = cJSON_GetObjectItemCaseSensitive(custom_word_position_occurence_responseJSON, "iY");
    if (cJSON_IsNull(i_y)) {
        i_y = NULL;
    }
    if (i_y) { 
    if(!cJSON_IsNumber(i_y))
    {
    goto end; //Numeric
    }
    }


    custom_word_position_occurence_response_local_var = custom_word_position_occurence_response_create_internal (
        i_page ? i_page->valuedouble : 0,
        i_x ? i_x->valuedouble : 0,
        i_y ? i_y->valuedouble : 0
        );

    return custom_word_position_occurence_response_local_var;
end:
    return NULL;

}
