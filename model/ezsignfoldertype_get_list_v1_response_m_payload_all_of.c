#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_get_list_v1_response_m_payload_all_of.h"



ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsignfoldertype
    ) {
    ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(ezsignfoldertype_get_list_v1_response_m_payload_all_of_t));
    if (!ezsignfoldertype_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    ezsignfoldertype_get_list_v1_response_m_payload_all_of_local_var->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;

    return ezsignfoldertype_get_list_v1_response_m_payload_all_of_local_var;
}


void ezsignfoldertype_get_list_v1_response_m_payload_all_of_free(ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of) {
    if(NULL == ezsignfoldertype_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype) {
        list_ForEach(listEntry, ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype) {
            ezsignfoldertype_list_element_free(listEntry->data);
        }
        list_free(ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype);
        ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype = NULL;
    }
    free(ezsignfoldertype_get_list_v1_response_m_payload_all_of);
}

cJSON *ezsignfoldertype_get_list_v1_response_m_payload_all_of_convertToJSON(ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype
    if (!ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignfoldertype = cJSON_AddArrayToObject(item, "a_objEzsignfoldertype");
    if(a_obj_ezsignfoldertype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertypeListEntry;
    if (ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype) {
    list_ForEach(a_obj_ezsignfoldertypeListEntry, ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype) {
    cJSON *itemLocal = ezsignfoldertype_list_element_convertToJSON(a_obj_ezsignfoldertypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldertype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsignfoldertype_get_list_v1_response_m_payload_all_ofJSON){

    ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // ezsignfoldertype_get_list_v1_response_m_payload_all_of->a_obj_ezsignfoldertype
    cJSON *a_obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_list_v1_response_m_payload_all_ofJSON, "a_objEzsignfoldertype");
    if (!a_obj_ezsignfoldertype) {
        goto end;
    }

    list_t *a_obj_ezsignfoldertypeList;
    
    cJSON *a_obj_ezsignfoldertype_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignfoldertype)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldertypeList = list_create();

    cJSON_ArrayForEach(a_obj_ezsignfoldertype_local_nonprimitive,a_obj_ezsignfoldertype )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldertype_local_nonprimitive)){
            goto end;
        }
        ezsignfoldertype_list_element_t *a_obj_ezsignfoldertypeItem = ezsignfoldertype_list_element_parseFromJSON(a_obj_ezsignfoldertype_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertypeList, a_obj_ezsignfoldertypeItem);
    }


    ezsignfoldertype_get_list_v1_response_m_payload_all_of_local_var = ezsignfoldertype_get_list_v1_response_m_payload_all_of_create (
        a_obj_ezsignfoldertypeList
        );

    return ezsignfoldertype_get_list_v1_response_m_payload_all_of_local_var;
end:
    return NULL;

}