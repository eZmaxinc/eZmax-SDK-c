#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_word_position_occurence_response.h"



static custom_word_position_occurence_response_t *custom_word_position_occurence_response_create_internal(
    int *i_page,
    int *i_x,
    int *i_y
    ) {
    custom_word_position_occurence_response_t *custom_word_position_occurence_response_local_var = malloc(sizeof(custom_word_position_occurence_response_t));
    if (!custom_word_position_occurence_response_local_var) {
        return NULL;
    }
    memset(custom_word_position_occurence_response_local_var, 0, sizeof(custom_word_position_occurence_response_t));
    custom_word_position_occurence_response_local_var->_library_owned = 1;
    custom_word_position_occurence_response_local_var->i_page = i_page;
    custom_word_position_occurence_response_local_var->i_x = i_x;
    custom_word_position_occurence_response_local_var->i_y = i_y;
    return custom_word_position_occurence_response_local_var;
}

__attribute__((deprecated)) custom_word_position_occurence_response_t *custom_word_position_occurence_response_create(
    int *i_page,
    int *i_x,
    int *i_y
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
    custom_word_position_occurence_response_t *result = custom_word_position_occurence_response_create_internal (
        i_page_copy,
        i_x_copy,
        i_y_copy
        );
    if (!result) {
        free(i_page_copy);
        free(i_x_copy);
        free(i_y_copy);
    }
    return result;
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
    if (custom_word_position_occurence_response->i_page) {
        free(custom_word_position_occurence_response->i_page);
        custom_word_position_occurence_response->i_page = NULL;
    }
    if (custom_word_position_occurence_response->i_x) {
        free(custom_word_position_occurence_response->i_x);
        custom_word_position_occurence_response->i_x = NULL;
    }
    if (custom_word_position_occurence_response->i_y) {
        free(custom_word_position_occurence_response->i_y);
        custom_word_position_occurence_response->i_y = NULL;
    }
    free(custom_word_position_occurence_response);
}

cJSON *custom_word_position_occurence_response_convertToJSON(custom_word_position_occurence_response_t *custom_word_position_occurence_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_word_position_occurence_response->i_page
    if(custom_word_position_occurence_response->i_page) {
    if(cJSON_AddNumberToObject(item, "iPage", *custom_word_position_occurence_response->i_page) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_word_position_occurence_response->i_x
    if(custom_word_position_occurence_response->i_x) {
    if(cJSON_AddNumberToObject(item, "iX", *custom_word_position_occurence_response->i_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_word_position_occurence_response->i_y
    if(custom_word_position_occurence_response->i_y) {
    if(cJSON_AddNumberToObject(item, "iY", *custom_word_position_occurence_response->i_y) == NULL) {
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

    // define the local variable for custom_word_position_occurence_response->i_page
    int *i_page_local_var = NULL;

    // define the local variable for custom_word_position_occurence_response->i_x
    int *i_x_local_var = NULL;

    // define the local variable for custom_word_position_occurence_response->i_y
    int *i_y_local_var = NULL;

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
    i_page_local_var = malloc(sizeof(int));
    if(!i_page_local_var)
    {
        goto end;
    }
    *i_page_local_var = i_page->valuedouble;
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
    i_x_local_var = malloc(sizeof(int));
    if(!i_x_local_var)
    {
        goto end;
    }
    *i_x_local_var = i_x->valuedouble;
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
    i_y_local_var = malloc(sizeof(int));
    if(!i_y_local_var)
    {
        goto end;
    }
    *i_y_local_var = i_y->valuedouble;
    }



    custom_word_position_occurence_response_local_var = custom_word_position_occurence_response_create_internal (
        i_page_local_var,
        i_x_local_var,
        i_y_local_var
        );

    if (!custom_word_position_occurence_response_local_var) {
        goto end;
    }

    return custom_word_position_occurence_response_local_var;
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
    return NULL;

}
