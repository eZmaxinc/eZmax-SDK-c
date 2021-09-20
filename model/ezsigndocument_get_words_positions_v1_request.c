#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_words_positions_v1_request.h"



ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_create(
    list_t *a_s_words
    ) {
    ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_local_var = malloc(sizeof(ezsigndocument_get_words_positions_v1_request_t));
    if (!ezsigndocument_get_words_positions_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_get_words_positions_v1_request_local_var->a_s_words = a_s_words;

    return ezsigndocument_get_words_positions_v1_request_local_var;
}


void ezsigndocument_get_words_positions_v1_request_free(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request) {
    if(NULL == ezsigndocument_get_words_positions_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_words_positions_v1_request->a_s_words) {
        list_ForEach(listEntry, ezsigndocument_get_words_positions_v1_request->a_s_words) {
            free(listEntry->data);
        }
        list_free(ezsigndocument_get_words_positions_v1_request->a_s_words);
        ezsigndocument_get_words_positions_v1_request->a_s_words = NULL;
    }
    free(ezsigndocument_get_words_positions_v1_request);
}

cJSON *ezsigndocument_get_words_positions_v1_request_convertToJSON(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_words_positions_v1_request->a_s_words
    if (!ezsigndocument_get_words_positions_v1_request->a_s_words) {
        goto fail;
    }
    
    cJSON *a_s_words = cJSON_AddArrayToObject(item, "a_sWords");
    if(a_s_words == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_wordsListEntry;
    list_ForEach(a_s_wordsListEntry, ezsigndocument_get_words_positions_v1_request->a_s_words) {
    if(cJSON_AddStringToObject(a_s_words, "", (char*)a_s_wordsListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_requestJSON){

    ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_local_var = NULL;

    // ezsigndocument_get_words_positions_v1_request->a_s_words
    cJSON *a_s_words = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_words_positions_v1_requestJSON, "a_sWords");
    if (!a_s_words) {
        goto end;
    }

    list_t *a_s_wordsList;
    
    cJSON *a_s_words_local;
    if(!cJSON_IsArray(a_s_words)) {
        goto end;//primitive container
    }
    a_s_wordsList = list_create();

    cJSON_ArrayForEach(a_s_words_local, a_s_words)
    {
        if(!cJSON_IsString(a_s_words_local))
        {
            goto end;
        }
        list_addElement(a_s_wordsList , strdup(a_s_words_local->valuestring));
    }


    ezsigndocument_get_words_positions_v1_request_local_var = ezsigndocument_get_words_positions_v1_request_create (
        a_s_wordsList
        );

    return ezsigndocument_get_words_positions_v1_request_local_var;
end:
    return NULL;

}
