#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignformfielderror_response.h"



custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response_create(
    char *s_ezsignformfield_label,
    list_t *a_obj_ezsignformfielderrortest
    ) {
    custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response_local_var = malloc(sizeof(custom_ezsignformfielderror_response_t));
    if (!custom_ezsignformfielderror_response_local_var) {
        return NULL;
    }
    custom_ezsignformfielderror_response_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    custom_ezsignformfielderror_response_local_var->a_obj_ezsignformfielderrortest = a_obj_ezsignformfielderrortest;

    return custom_ezsignformfielderror_response_local_var;
}


void custom_ezsignformfielderror_response_free(custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response) {
    if(NULL == custom_ezsignformfielderror_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignformfielderror_response->s_ezsignformfield_label) {
        free(custom_ezsignformfielderror_response->s_ezsignformfield_label);
        custom_ezsignformfielderror_response->s_ezsignformfield_label = NULL;
    }
    if (custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest) {
        list_ForEach(listEntry, custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest) {
            custom_ezsignformfielderrortest_response_free(listEntry->data);
        }
        list_freeList(custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest);
        custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest = NULL;
    }
    free(custom_ezsignformfielderror_response);
}

cJSON *custom_ezsignformfielderror_response_convertToJSON(custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignformfielderror_response->s_ezsignformfield_label
    if (!custom_ezsignformfielderror_response->s_ezsignformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", custom_ezsignformfielderror_response->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest
    if (!custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfielderrortest = cJSON_AddArrayToObject(item, "a_objEzsignformfielderrortest");
    if(a_obj_ezsignformfielderrortest == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfielderrortestListEntry;
    if (custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest) {
    list_ForEach(a_obj_ezsignformfielderrortestListEntry, custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest) {
    cJSON *itemLocal = custom_ezsignformfielderrortest_response_convertToJSON(a_obj_ezsignformfielderrortestListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfielderrortest, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response_parseFromJSON(cJSON *custom_ezsignformfielderror_responseJSON){

    custom_ezsignformfielderror_response_t *custom_ezsignformfielderror_response_local_var = NULL;

    // define the local list for custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest
    list_t *a_obj_ezsignformfielderrortestList = NULL;

    // custom_ezsignformfielderror_response->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfielderror_responseJSON, "sEzsignformfieldLabel");
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // custom_ezsignformfielderror_response->a_obj_ezsignformfielderrortest
    cJSON *a_obj_ezsignformfielderrortest = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfielderror_responseJSON, "a_objEzsignformfielderrortest");
    if (!a_obj_ezsignformfielderrortest) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfielderrortest_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfielderrortest)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfielderrortestList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfielderrortest_local_nonprimitive,a_obj_ezsignformfielderrortest )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfielderrortest_local_nonprimitive)){
            goto end;
        }
        custom_ezsignformfielderrortest_response_t *a_obj_ezsignformfielderrortestItem = custom_ezsignformfielderrortest_response_parseFromJSON(a_obj_ezsignformfielderrortest_local_nonprimitive);

        list_addElement(a_obj_ezsignformfielderrortestList, a_obj_ezsignformfielderrortestItem);
    }


    custom_ezsignformfielderror_response_local_var = custom_ezsignformfielderror_response_create (
        strdup(s_ezsignformfield_label->valuestring),
        a_obj_ezsignformfielderrortestList
        );

    return custom_ezsignformfielderror_response_local_var;
end:
    if (a_obj_ezsignformfielderrortestList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfielderrortestList) {
            custom_ezsignformfielderrortest_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfielderrortestList);
        a_obj_ezsignformfielderrortestList = NULL;
    }
    return NULL;

}
