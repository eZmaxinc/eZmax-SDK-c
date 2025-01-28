#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_ezsignformfieldgroup_response.h"



static custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_create_internal(
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
    ) {
    custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_local_var = malloc(sizeof(custom_form_data_ezsignformfieldgroup_response_t));
    if (!custom_form_data_ezsignformfieldgroup_response_local_var) {
        return NULL;
    }
    custom_form_data_ezsignformfieldgroup_response_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    custom_form_data_ezsignformfieldgroup_response_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;

    custom_form_data_ezsignformfieldgroup_response_local_var->_library_owned = 1;
    return custom_form_data_ezsignformfieldgroup_response_local_var;
}

__attribute__((deprecated)) custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_create(
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
    ) {
    return custom_form_data_ezsignformfieldgroup_response_create_internal (
        s_ezsignformfieldgroup_label,
        a_obj_ezsignformfield
        );
}

void custom_form_data_ezsignformfieldgroup_response_free(custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response) {
    if(NULL == custom_form_data_ezsignformfieldgroup_response){
        return ;
    }
    if(custom_form_data_ezsignformfieldgroup_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_form_data_ezsignformfieldgroup_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) {
        free(custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label);
        custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label = NULL;
    }
    if (custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield) {
        list_ForEach(listEntry, custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield) {
            custom_form_data_ezsignformfield_response_free(listEntry->data);
        }
        list_freeList(custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield);
        custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield = NULL;
    }
    free(custom_form_data_ezsignformfieldgroup_response);
}

cJSON *custom_form_data_ezsignformfieldgroup_response_convertToJSON(custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label
    if (!custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield
    if (!custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield) {
    cJSON *itemLocal = custom_form_data_ezsignformfield_response_convertToJSON(a_obj_ezsignformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfield, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_parseFromJSON(cJSON *custom_form_data_ezsignformfieldgroup_responseJSON){

    custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_local_var = NULL;

    // define the local list for custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield
    list_t *a_obj_ezsignformfieldList = NULL;

    // custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfieldgroup_responseJSON, "sEzsignformfieldgroupLabel");
    if (cJSON_IsNull(s_ezsignformfieldgroup_label)) {
        s_ezsignformfieldgroup_label = NULL;
    }
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfieldgroup_responseJSON, "a_objEzsignformfield");
    if (cJSON_IsNull(a_obj_ezsignformfield)) {
        a_obj_ezsignformfield = NULL;
    }
    if (!a_obj_ezsignformfield) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfield_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfield_local_nonprimitive,a_obj_ezsignformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfield_local_nonprimitive)){
            goto end;
        }
        custom_form_data_ezsignformfield_response_t *a_obj_ezsignformfieldItem = custom_form_data_ezsignformfield_response_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }


    custom_form_data_ezsignformfieldgroup_response_local_var = custom_form_data_ezsignformfieldgroup_response_create_internal (
        strdup(s_ezsignformfieldgroup_label->valuestring),
        a_obj_ezsignformfieldList
        );

    return custom_form_data_ezsignformfieldgroup_response_local_var;
end:
    if (a_obj_ezsignformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldList) {
            custom_form_data_ezsignformfield_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldList);
        a_obj_ezsignformfieldList = NULL;
    }
    return NULL;

}
