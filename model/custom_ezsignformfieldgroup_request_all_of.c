#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignformfieldgroup_request_all_of.h"



custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of_create(
    int pki_ezsignformfieldgroup_id,
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
    ) {
    custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of_local_var = malloc(sizeof(custom_ezsignformfieldgroup_request_all_of_t));
    if (!custom_ezsignformfieldgroup_request_all_of_local_var) {
        return NULL;
    }
    custom_ezsignformfieldgroup_request_all_of_local_var->pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    custom_ezsignformfieldgroup_request_all_of_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    custom_ezsignformfieldgroup_request_all_of_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;

    return custom_ezsignformfieldgroup_request_all_of_local_var;
}


void custom_ezsignformfieldgroup_request_all_of_free(custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of) {
    if(NULL == custom_ezsignformfieldgroup_request_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignformfieldgroup_request_all_of->s_ezsignformfieldgroup_label) {
        free(custom_ezsignformfieldgroup_request_all_of->s_ezsignformfieldgroup_label);
        custom_ezsignformfieldgroup_request_all_of->s_ezsignformfieldgroup_label = NULL;
    }
    if (custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield) {
        list_ForEach(listEntry, custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield) {
            custom_ezsignformfield_request_free(listEntry->data);
        }
        list_freeList(custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield);
        custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield = NULL;
    }
    free(custom_ezsignformfieldgroup_request_all_of);
}

cJSON *custom_ezsignformfieldgroup_request_all_of_convertToJSON(custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignformfieldgroup_request_all_of->pki_ezsignformfieldgroup_id
    if(custom_ezsignformfieldgroup_request_all_of->pki_ezsignformfieldgroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupID", custom_ezsignformfieldgroup_request_all_of->pki_ezsignformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignformfieldgroup_request_all_of->s_ezsignformfieldgroup_label
    if(custom_ezsignformfieldgroup_request_all_of->s_ezsignformfieldgroup_label) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", custom_ezsignformfieldgroup_request_all_of->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield
    if (!custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield) {
    cJSON *itemLocal = custom_ezsignformfield_request_convertToJSON(a_obj_ezsignformfieldListEntry->data);
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

custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of_parseFromJSON(cJSON *custom_ezsignformfieldgroup_request_all_ofJSON){

    custom_ezsignformfieldgroup_request_all_of_t *custom_ezsignformfieldgroup_request_all_of_local_var = NULL;

    // define the local list for custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield
    list_t *a_obj_ezsignformfieldList = NULL;

    // custom_ezsignformfieldgroup_request_all_of->pki_ezsignformfieldgroup_id
    cJSON *pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_request_all_ofJSON, "pkiEzsignformfieldgroupID");
    if (pki_ezsignformfieldgroup_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfieldgroup_id))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignformfieldgroup_request_all_of->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_request_all_ofJSON, "sEzsignformfieldgroupLabel");
    if (s_ezsignformfieldgroup_label) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_label) && !cJSON_IsNull(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }
    }

    // custom_ezsignformfieldgroup_request_all_of->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfieldgroup_request_all_ofJSON, "a_objEzsignformfield");
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
        custom_ezsignformfield_request_t *a_obj_ezsignformfieldItem = custom_ezsignformfield_request_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }


    custom_ezsignformfieldgroup_request_all_of_local_var = custom_ezsignformfieldgroup_request_all_of_create (
        pki_ezsignformfieldgroup_id ? pki_ezsignformfieldgroup_id->valuedouble : 0,
        s_ezsignformfieldgroup_label && !cJSON_IsNull(s_ezsignformfieldgroup_label) ? strdup(s_ezsignformfieldgroup_label->valuestring) : NULL,
        a_obj_ezsignformfieldList
        );

    return custom_ezsignformfieldgroup_request_all_of_local_var;
end:
    if (a_obj_ezsignformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldList) {
            custom_ezsignformfield_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldList);
        a_obj_ezsignformfieldList = NULL;
    }
    return NULL;

}
