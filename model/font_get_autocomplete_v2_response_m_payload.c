#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "font_get_autocomplete_v2_response_m_payload.h"



font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_font
    ) {
    font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(font_get_autocomplete_v2_response_m_payload_t));
    if (!font_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    font_get_autocomplete_v2_response_m_payload_local_var->a_obj_font = a_obj_font;

    return font_get_autocomplete_v2_response_m_payload_local_var;
}


void font_get_autocomplete_v2_response_m_payload_free(font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload) {
    if(NULL == font_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (font_get_autocomplete_v2_response_m_payload->a_obj_font) {
        list_ForEach(listEntry, font_get_autocomplete_v2_response_m_payload->a_obj_font) {
            font_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(font_get_autocomplete_v2_response_m_payload->a_obj_font);
        font_get_autocomplete_v2_response_m_payload->a_obj_font = NULL;
    }
    free(font_get_autocomplete_v2_response_m_payload);
}

cJSON *font_get_autocomplete_v2_response_m_payload_convertToJSON(font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // font_get_autocomplete_v2_response_m_payload->a_obj_font
    if(font_get_autocomplete_v2_response_m_payload->a_obj_font) {
    cJSON *a_obj_font = cJSON_AddArrayToObject(item, "a_objFont");
    if(a_obj_font == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_fontListEntry;
    if (font_get_autocomplete_v2_response_m_payload->a_obj_font) {
    list_ForEach(a_obj_fontListEntry, font_get_autocomplete_v2_response_m_payload->a_obj_font) {
    cJSON *itemLocal = font_autocomplete_element_response_convertToJSON(a_obj_fontListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_font, itemLocal);
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

font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *font_get_autocomplete_v2_response_m_payloadJSON){

    font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for font_get_autocomplete_v2_response_m_payload->a_obj_font
    list_t *a_obj_fontList = NULL;

    // font_get_autocomplete_v2_response_m_payload->a_obj_font
    cJSON *a_obj_font = cJSON_GetObjectItemCaseSensitive(font_get_autocomplete_v2_response_m_payloadJSON, "a_objFont");
    if (a_obj_font) { 
    cJSON *a_obj_font_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_font)){
        goto end; //nonprimitive container
    }

    a_obj_fontList = list_createList();

    cJSON_ArrayForEach(a_obj_font_local_nonprimitive,a_obj_font )
    {
        if(!cJSON_IsObject(a_obj_font_local_nonprimitive)){
            goto end;
        }
        font_autocomplete_element_response_t *a_obj_fontItem = font_autocomplete_element_response_parseFromJSON(a_obj_font_local_nonprimitive);

        list_addElement(a_obj_fontList, a_obj_fontItem);
    }
    }


    font_get_autocomplete_v2_response_m_payload_local_var = font_get_autocomplete_v2_response_m_payload_create (
        a_obj_font ? a_obj_fontList : NULL
        );

    return font_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_fontList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_fontList) {
            font_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_fontList);
        a_obj_fontList = NULL;
    }
    return NULL;

}
