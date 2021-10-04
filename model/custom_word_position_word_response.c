#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_word_position_word_response.h"



custom_word_position_word_response_t *custom_word_position_word_response_create(
    char *s_word,
    list_t *obj_word_position_occurence
    ) {
    custom_word_position_word_response_t *custom_word_position_word_response_local_var = malloc(sizeof(custom_word_position_word_response_t));
    if (!custom_word_position_word_response_local_var) {
        return NULL;
    }
    custom_word_position_word_response_local_var->s_word = s_word;
    custom_word_position_word_response_local_var->obj_word_position_occurence = obj_word_position_occurence;

    return custom_word_position_word_response_local_var;
}


void custom_word_position_word_response_free(custom_word_position_word_response_t *custom_word_position_word_response) {
    if(NULL == custom_word_position_word_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_word_position_word_response->s_word) {
        free(custom_word_position_word_response->s_word);
        custom_word_position_word_response->s_word = NULL;
    }
    if (custom_word_position_word_response->obj_word_position_occurence) {
        list_ForEach(listEntry, custom_word_position_word_response->obj_word_position_occurence) {
            custom_word_position_occurence_response_free(listEntry->data);
        }
        list_free(custom_word_position_word_response->obj_word_position_occurence);
        custom_word_position_word_response->obj_word_position_occurence = NULL;
    }
    free(custom_word_position_word_response);
}

cJSON *custom_word_position_word_response_convertToJSON(custom_word_position_word_response_t *custom_word_position_word_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_word_position_word_response->s_word
    if (!custom_word_position_word_response->s_word) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sWord", custom_word_position_word_response->s_word) == NULL) {
    goto fail; //String
    }


    // custom_word_position_word_response->obj_word_position_occurence
    if (!custom_word_position_word_response->obj_word_position_occurence) {
        goto fail;
    }
    
    cJSON *obj_word_position_occurence = cJSON_AddArrayToObject(item, "objWordPositionOccurence");
    if(obj_word_position_occurence == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *obj_word_position_occurenceListEntry;
    if (custom_word_position_word_response->obj_word_position_occurence) {
    list_ForEach(obj_word_position_occurenceListEntry, custom_word_position_word_response->obj_word_position_occurence) {
    cJSON *itemLocal = custom_word_position_occurence_response_convertToJSON(obj_word_position_occurenceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(obj_word_position_occurence, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_word_position_word_response_t *custom_word_position_word_response_parseFromJSON(cJSON *custom_word_position_word_responseJSON){

    custom_word_position_word_response_t *custom_word_position_word_response_local_var = NULL;

    // custom_word_position_word_response->s_word
    cJSON *s_word = cJSON_GetObjectItemCaseSensitive(custom_word_position_word_responseJSON, "sWord");
    if (!s_word) {
        goto end;
    }

    
    if(!cJSON_IsString(s_word))
    {
    goto end; //String
    }

    // custom_word_position_word_response->obj_word_position_occurence
    cJSON *obj_word_position_occurence = cJSON_GetObjectItemCaseSensitive(custom_word_position_word_responseJSON, "objWordPositionOccurence");
    if (!obj_word_position_occurence) {
        goto end;
    }

    list_t *obj_word_position_occurenceList;
    
    cJSON *obj_word_position_occurence_local_nonprimitive;
    if(!cJSON_IsArray(obj_word_position_occurence)){
        goto end; //nonprimitive container
    }

    obj_word_position_occurenceList = list_create();

    cJSON_ArrayForEach(obj_word_position_occurence_local_nonprimitive,obj_word_position_occurence )
    {
        if(!cJSON_IsObject(obj_word_position_occurence_local_nonprimitive)){
            goto end;
        }
        custom_word_position_occurence_response_t *obj_word_position_occurenceItem = custom_word_position_occurence_response_parseFromJSON(obj_word_position_occurence_local_nonprimitive);

        list_addElement(obj_word_position_occurenceList, obj_word_position_occurenceItem);
    }


    custom_word_position_word_response_local_var = custom_word_position_word_response_create (
        strdup(s_word->valuestring),
        obj_word_position_occurenceList
        );

    return custom_word_position_word_response_local_var;
end:
    return NULL;

}
