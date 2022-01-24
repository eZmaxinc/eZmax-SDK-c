#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_words_positions_v1_request.h"


char* e_getezsigndocument_get_words_positions_v1_request_ToString(ezmax_api_definition_ezsigndocument_get_words_positions_v1_request_EGET_e e_get) {
    char* e_getArray[] =  { "NULL", "All", "Words" };
	return e_getArray[e_get];
}

ezmax_api_definition_ezsigndocument_get_words_positions_v1_request_EGET_e e_getezsigndocument_get_words_positions_v1_request_FromString(char* e_get){
    int stringToReturn = 0;
    char *e_getArray[] =  { "NULL", "All", "Words" };
    size_t sizeofArray = sizeof(e_getArray) / sizeof(e_getArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_get, e_getArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_create(
    ezmax_api_definition_ezsigndocument_get_words_positions_v1_request_EGET_e e_get,
    int b_word_case_sensitive,
    list_t *a_s_word
    ) {
    ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_local_var = malloc(sizeof(ezsigndocument_get_words_positions_v1_request_t));
    if (!ezsigndocument_get_words_positions_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_get_words_positions_v1_request_local_var->e_get = e_get;
    ezsigndocument_get_words_positions_v1_request_local_var->b_word_case_sensitive = b_word_case_sensitive;
    ezsigndocument_get_words_positions_v1_request_local_var->a_s_word = a_s_word;

    return ezsigndocument_get_words_positions_v1_request_local_var;
}


void ezsigndocument_get_words_positions_v1_request_free(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request) {
    if(NULL == ezsigndocument_get_words_positions_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_words_positions_v1_request->a_s_word) {
        list_ForEach(listEntry, ezsigndocument_get_words_positions_v1_request->a_s_word) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_words_positions_v1_request->a_s_word);
        ezsigndocument_get_words_positions_v1_request->a_s_word = NULL;
    }
    free(ezsigndocument_get_words_positions_v1_request);
}

cJSON *ezsigndocument_get_words_positions_v1_request_convertToJSON(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_words_positions_v1_request->e_get
    
    if(cJSON_AddStringToObject(item, "eGet", e_getezsigndocument_get_words_positions_v1_request_ToString(ezsigndocument_get_words_positions_v1_request->e_get)) == NULL)
    {
    goto fail; //Enum
    }


    // ezsigndocument_get_words_positions_v1_request->b_word_case_sensitive
    if (!ezsigndocument_get_words_positions_v1_request->b_word_case_sensitive) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bWordCaseSensitive", ezsigndocument_get_words_positions_v1_request->b_word_case_sensitive) == NULL) {
    goto fail; //Bool
    }


    // ezsigndocument_get_words_positions_v1_request->a_s_word
    if(ezsigndocument_get_words_positions_v1_request->a_s_word) { 
    cJSON *a_s_word = cJSON_AddArrayToObject(item, "a_sWord");
    if(a_s_word == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_wordListEntry;
    list_ForEach(a_s_wordListEntry, ezsigndocument_get_words_positions_v1_request->a_s_word) {
    if(cJSON_AddStringToObject(a_s_word, "", (char*)a_s_wordListEntry->data) == NULL)
    {
        goto fail;
    }
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

    // ezsigndocument_get_words_positions_v1_request->e_get
    cJSON *e_get = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_words_positions_v1_requestJSON, "eGet");
    if (!e_get) {
        goto end;
    }

    ezmax_api_definition_ezsigndocument_get_words_positions_v1_request_EGET_e e_getVariable;
    
    if(!cJSON_IsString(e_get))
    {
    goto end; //Enum
    }
    e_getVariable = e_getezsigndocument_get_words_positions_v1_request_FromString(e_get->valuestring);

    // ezsigndocument_get_words_positions_v1_request->b_word_case_sensitive
    cJSON *b_word_case_sensitive = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_words_positions_v1_requestJSON, "bWordCaseSensitive");
    if (!b_word_case_sensitive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_word_case_sensitive))
    {
    goto end; //Bool
    }

    // ezsigndocument_get_words_positions_v1_request->a_s_word
    cJSON *a_s_word = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_words_positions_v1_requestJSON, "a_sWord");
    list_t *a_s_wordList;
    if (a_s_word) { 
    cJSON *a_s_word_local;
    if(!cJSON_IsArray(a_s_word)) {
        goto end;//primitive container
    }
    a_s_wordList = list_createList();

    cJSON_ArrayForEach(a_s_word_local, a_s_word)
    {
        if(!cJSON_IsString(a_s_word_local))
        {
            goto end;
        }
        list_addElement(a_s_wordList , strdup(a_s_word_local->valuestring));
    }
    }


    ezsigndocument_get_words_positions_v1_request_local_var = ezsigndocument_get_words_positions_v1_request_create (
        e_getVariable,
        b_word_case_sensitive->valueint,
        a_s_word ? a_s_wordList : NULL
        );

    return ezsigndocument_get_words_positions_v1_request_local_var;
end:
    return NULL;

}
