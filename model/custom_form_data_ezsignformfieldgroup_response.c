#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_ezsignformfieldgroup_response.h"



custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_create(
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
    ) {
    custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response_local_var = malloc(sizeof(custom_form_data_ezsignformfieldgroup_response_t));
    if (!custom_form_data_ezsignformfieldgroup_response_local_var) {
        return NULL;
    }
    custom_form_data_ezsignformfieldgroup_response_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    custom_form_data_ezsignformfieldgroup_response_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;

    return custom_form_data_ezsignformfieldgroup_response_local_var;
}


void custom_form_data_ezsignformfieldgroup_response_free(custom_form_data_ezsignformfieldgroup_response_t *custom_form_data_ezsignformfieldgroup_response) {
    if(NULL == custom_form_data_ezsignformfieldgroup_response){
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

    // custom_form_data_ezsignformfieldgroup_response->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfieldgroup_responseJSON, "sEzsignformfieldgroupLabel");
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // custom_form_data_ezsignformfieldgroup_response->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfieldgroup_responseJSON, "a_objEzsignformfield");
    if (!a_obj_ezsignformfield) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldList;
    
    cJSON *a_obj_ezsignformfield_local_nonprimitive;
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


    custom_form_data_ezsignformfieldgroup_response_local_var = custom_form_data_ezsignformfieldgroup_response_create (
        strdup(s_ezsignformfieldgroup_label->valuestring),
        a_obj_ezsignformfieldList
        );

    return custom_form_data_ezsignformfieldgroup_response_local_var;
end:
    return NULL;

}
