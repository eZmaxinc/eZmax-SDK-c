#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsigndocument_get_ezsignformfieldgroups_response.h"



static custom_ezsigndocument_get_ezsignformfieldgroups_response_t *custom_ezsigndocument_get_ezsignformfieldgroups_response_create_internal(
    int *pki_ezsigndocument_id,
    char *s_ezsigndocument_name,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    custom_ezsigndocument_get_ezsignformfieldgroups_response_t *custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var = malloc(sizeof(custom_ezsigndocument_get_ezsignformfieldgroups_response_t));
    if (!custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var) {
        return NULL;
    }
    memset(custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var, 0, sizeof(custom_ezsigndocument_get_ezsignformfieldgroups_response_t));
    custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var->_library_owned = 1;
    custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    return custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var;
}

__attribute__((deprecated)) custom_ezsigndocument_get_ezsignformfieldgroups_response_t *custom_ezsigndocument_get_ezsignformfieldgroups_response_create(
    int *pki_ezsigndocument_id,
    char *s_ezsigndocument_name,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    int *pki_ezsigndocument_id_copy = NULL;
    if (pki_ezsigndocument_id) {
        pki_ezsigndocument_id_copy = malloc(sizeof(int));
        if (pki_ezsigndocument_id_copy) *pki_ezsigndocument_id_copy = *pki_ezsigndocument_id;
    }
    custom_ezsigndocument_get_ezsignformfieldgroups_response_t *result = custom_ezsigndocument_get_ezsignformfieldgroups_response_create_internal (
        pki_ezsigndocument_id_copy,
        s_ezsigndocument_name,
        a_obj_ezsignformfieldgroup
        );
    if (!result) {
        free(pki_ezsigndocument_id_copy);
    }
    return result;
}

void custom_ezsigndocument_get_ezsignformfieldgroups_response_free(custom_ezsigndocument_get_ezsignformfieldgroups_response_t *custom_ezsigndocument_get_ezsignformfieldgroups_response) {
    if(NULL == custom_ezsigndocument_get_ezsignformfieldgroups_response){
        return ;
    }
    if(custom_ezsigndocument_get_ezsignformfieldgroups_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsigndocument_get_ezsignformfieldgroups_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id) {
        free(custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id);
        custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id = NULL;
    }
    if (custom_ezsigndocument_get_ezsignformfieldgroups_response->s_ezsigndocument_name) {
        free(custom_ezsigndocument_get_ezsignformfieldgroups_response->s_ezsigndocument_name);
        custom_ezsigndocument_get_ezsignformfieldgroups_response->s_ezsigndocument_name = NULL;
    }
    if (custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup) {
            ezsignformfieldgroup_response_compound_free(listEntry->data);
        }
        list_freeList(custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup);
        custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup = NULL;
    }
    free(custom_ezsigndocument_get_ezsignformfieldgroups_response);
}

cJSON *custom_ezsigndocument_get_ezsignformfieldgroups_response_convertToJSON(custom_ezsigndocument_get_ezsignformfieldgroups_response_t *custom_ezsigndocument_get_ezsignformfieldgroups_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id
    if (!custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", *custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsigndocument_get_ezsignformfieldgroups_response->s_ezsigndocument_name
    if (!custom_ezsigndocument_get_ezsignformfieldgroups_response->s_ezsigndocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", custom_ezsigndocument_get_ezsignformfieldgroups_response->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup
    if (!custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup) {
    cJSON *itemLocal = ezsignformfieldgroup_response_compound_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsigndocument_get_ezsignformfieldgroups_response_t *custom_ezsigndocument_get_ezsignformfieldgroups_response_parseFromJSON(cJSON *custom_ezsigndocument_get_ezsignformfieldgroups_responseJSON){

    custom_ezsigndocument_get_ezsignformfieldgroups_response_t *custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var = NULL;

    // define the local variable for custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id
    int *pki_ezsigndocument_id_local_var = NULL;

    char *s_ezsigndocument_name_local_str = NULL;

    // define the local list for custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // custom_ezsigndocument_get_ezsignformfieldgroups_response->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_get_ezsignformfieldgroups_responseJSON, "pkiEzsigndocumentID");
    if (cJSON_IsNull(pki_ezsigndocument_id)) {
        pki_ezsigndocument_id = NULL;
    }
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    pki_ezsigndocument_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigndocument_id_local_var)
    {
        goto end;
    }
    *pki_ezsigndocument_id_local_var = pki_ezsigndocument_id->valuedouble;

    // custom_ezsigndocument_get_ezsignformfieldgroups_response->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_get_ezsignformfieldgroups_responseJSON, "sEzsigndocumentName");
    if (cJSON_IsNull(s_ezsigndocument_name)) {
        s_ezsigndocument_name = NULL;
    }
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // custom_ezsigndocument_get_ezsignformfieldgroups_response->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(custom_ezsigndocument_get_ezsignformfieldgroups_responseJSON, "a_objEzsignformfieldgroup");
    if (cJSON_IsNull(a_obj_ezsignformfieldgroup)) {
        a_obj_ezsignformfieldgroup = NULL;
    }
    if (!a_obj_ezsignformfieldgroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfieldgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroup_local_nonprimitive,a_obj_ezsignformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroup_local_nonprimitive)){
            goto end;
        }
        ezsignformfieldgroup_response_compound_t *a_obj_ezsignformfieldgroupItem = ezsignformfieldgroup_response_compound_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }


    if (s_ezsigndocument_name && !cJSON_IsNull(s_ezsigndocument_name)) s_ezsigndocument_name_local_str = strdup(s_ezsigndocument_name->valuestring);

    custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var = custom_ezsigndocument_get_ezsignformfieldgroups_response_create_internal (
        pki_ezsigndocument_id_local_var,
        s_ezsigndocument_name_local_str,
        a_obj_ezsignformfieldgroupList
        );

    if (!custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var) {
        goto end;
    }

    return custom_ezsigndocument_get_ezsignformfieldgroups_response_local_var;
end:
    if (pki_ezsigndocument_id_local_var) {
        free(pki_ezsigndocument_id_local_var);
        pki_ezsigndocument_id_local_var = NULL;
    }
    if (s_ezsigndocument_name_local_str) {
        free(s_ezsigndocument_name_local_str);
        s_ezsigndocument_name_local_str = NULL;
    }
    if (a_obj_ezsignformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupList) {
            ezsignformfieldgroup_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupList);
        a_obj_ezsignformfieldgroupList = NULL;
    }
    return NULL;

}
