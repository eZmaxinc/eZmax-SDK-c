#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_word_position_word_response.h"



custom_word_position_word_response_t *custom_word_position_word_response_create(
    char *s_word,
    list_t *a_obj_word_position_occurence
    ) {
    custom_word_position_word_response_t *custom_word_position_word_response_local_var = malloc(sizeof(custom_word_position_word_response_t));
    if (!custom_word_position_word_response_local_var) {
        return NULL;
    }
    custom_word_position_word_response_local_var->s_word = s_word;
    custom_word_position_word_response_local_var->a_obj_word_position_occurence = a_obj_word_position_occurence;

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
    if (custom_word_position_word_response->a_obj_word_position_occurence) {
        list_ForEach(listEntry, custom_word_position_word_response->a_obj_word_position_occurence) {
            custom_word_position_occurence_response_free(listEntry->data);
        }
        list_freeList(custom_word_position_word_response->a_obj_word_position_occurence);
        custom_word_position_word_response->a_obj_word_position_occurence = NULL;
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


    // custom_word_position_word_response->a_obj_word_position_occurence
    if (!custom_word_position_word_response->a_obj_word_position_occurence) {
        goto fail;
    }
    cJSON *a_obj_word_position_occurence = cJSON_AddArrayToObject(item, "a_objWordPositionOccurence");
    if(a_obj_word_position_occurence == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_word_position_occurenceListEntry;
    if (custom_word_position_word_response->a_obj_word_position_occurence) {
    list_ForEach(a_obj_word_position_occurenceListEntry, custom_word_position_word_response->a_obj_word_position_occurence) {
    cJSON *itemLocal = custom_word_position_occurence_response_convertToJSON(a_obj_word_position_occurenceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_word_position_occurence, itemLocal);
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

    // define the local list for custom_word_position_word_response->a_obj_word_position_occurence
    list_t *a_obj_word_position_occurenceList = NULL;

    // custom_word_position_word_response->s_word
    cJSON *s_word = cJSON_GetObjectItemCaseSensitive(custom_word_position_word_responseJSON, "sWord");
    if (!s_word) {
        goto end;
    }

    
    if(!cJSON_IsString(s_word))
    {
    goto end; //String
    }

    // custom_word_position_word_response->a_obj_word_position_occurence
    cJSON *a_obj_word_position_occurence = cJSON_GetObjectItemCaseSensitive(custom_word_position_word_responseJSON, "a_objWordPositionOccurence");
    if (!a_obj_word_position_occurence) {
        goto end;
    }

    
    cJSON *a_obj_word_position_occurence_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_word_position_occurence)){
        goto end; //nonprimitive container
    }

    a_obj_word_position_occurenceList = list_createList();

    cJSON_ArrayForEach(a_obj_word_position_occurence_local_nonprimitive,a_obj_word_position_occurence )
    {
        if(!cJSON_IsObject(a_obj_word_position_occurence_local_nonprimitive)){
            goto end;
        }
        custom_word_position_occurence_response_t *a_obj_word_position_occurenceItem = custom_word_position_occurence_response_parseFromJSON(a_obj_word_position_occurence_local_nonprimitive);

        list_addElement(a_obj_word_position_occurenceList, a_obj_word_position_occurenceItem);
    }


    custom_word_position_word_response_local_var = custom_word_position_word_response_create (
        strdup(s_word->valuestring),
        a_obj_word_position_occurenceList
        );

    return custom_word_position_word_response_local_var;
end:
    if (a_obj_word_position_occurenceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_word_position_occurenceList) {
            custom_word_position_occurence_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_word_position_occurenceList);
        a_obj_word_position_occurenceList = NULL;
    }
    return NULL;

}
