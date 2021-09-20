#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "word_position_response.h"



word_position_response_t *word_position_response_create(
    int i_page,
    int i_x,
    int i_y
    ) {
    word_position_response_t *word_position_response_local_var = malloc(sizeof(word_position_response_t));
    if (!word_position_response_local_var) {
        return NULL;
    }
    word_position_response_local_var->i_page = i_page;
    word_position_response_local_var->i_x = i_x;
    word_position_response_local_var->i_y = i_y;

    return word_position_response_local_var;
}


void word_position_response_free(word_position_response_t *word_position_response) {
    if(NULL == word_position_response){
        return ;
    }
    listEntry_t *listEntry;
    free(word_position_response);
}

cJSON *word_position_response_convertToJSON(word_position_response_t *word_position_response) {
    cJSON *item = cJSON_CreateObject();

    // word_position_response->i_page
    if(word_position_response->i_page) { 
    if(cJSON_AddNumberToObject(item, "iPage", word_position_response->i_page) == NULL) {
    goto fail; //Numeric
    }
     } 


    // word_position_response->i_x
    if(word_position_response->i_x) { 
    if(cJSON_AddNumberToObject(item, "iX", word_position_response->i_x) == NULL) {
    goto fail; //Numeric
    }
     } 


    // word_position_response->i_y
    if(word_position_response->i_y) { 
    if(cJSON_AddNumberToObject(item, "iY", word_position_response->i_y) == NULL) {
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

word_position_response_t *word_position_response_parseFromJSON(cJSON *word_position_responseJSON){

    word_position_response_t *word_position_response_local_var = NULL;

    // word_position_response->i_page
    cJSON *i_page = cJSON_GetObjectItemCaseSensitive(word_position_responseJSON, "iPage");
    if (i_page) { 
    if(!cJSON_IsNumber(i_page))
    {
    goto end; //Numeric
    }
    }

    // word_position_response->i_x
    cJSON *i_x = cJSON_GetObjectItemCaseSensitive(word_position_responseJSON, "iX");
    if (i_x) { 
    if(!cJSON_IsNumber(i_x))
    {
    goto end; //Numeric
    }
    }

    // word_position_response->i_y
    cJSON *i_y = cJSON_GetObjectItemCaseSensitive(word_position_responseJSON, "iY");
    if (i_y) { 
    if(!cJSON_IsNumber(i_y))
    {
    goto end; //Numeric
    }
    }


    word_position_response_local_var = word_position_response_create (
        i_page ? i_page->valuedouble : 0,
        i_x ? i_x->valuedouble : 0,
        i_y ? i_y->valuedouble : 0
        );

    return word_position_response_local_var;
end:
    return NULL;

}
