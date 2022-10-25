#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "department_get_autocomplete_v2_response_m_payload.h"



department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_department
    ) {
    department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(department_get_autocomplete_v2_response_m_payload_t));
    if (!department_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    department_get_autocomplete_v2_response_m_payload_local_var->a_obj_department = a_obj_department;

    return department_get_autocomplete_v2_response_m_payload_local_var;
}


void department_get_autocomplete_v2_response_m_payload_free(department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload) {
    if(NULL == department_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (department_get_autocomplete_v2_response_m_payload->a_obj_department) {
        list_ForEach(listEntry, department_get_autocomplete_v2_response_m_payload->a_obj_department) {
            department_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(department_get_autocomplete_v2_response_m_payload->a_obj_department);
        department_get_autocomplete_v2_response_m_payload->a_obj_department = NULL;
    }
    free(department_get_autocomplete_v2_response_m_payload);
}

cJSON *department_get_autocomplete_v2_response_m_payload_convertToJSON(department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // department_get_autocomplete_v2_response_m_payload->a_obj_department
    if (!department_get_autocomplete_v2_response_m_payload->a_obj_department) {
        goto fail;
    }
    cJSON *a_obj_department = cJSON_AddArrayToObject(item, "a_objDepartment");
    if(a_obj_department == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_departmentListEntry;
    if (department_get_autocomplete_v2_response_m_payload->a_obj_department) {
    list_ForEach(a_obj_departmentListEntry, department_get_autocomplete_v2_response_m_payload->a_obj_department) {
    cJSON *itemLocal = department_autocomplete_element_response_convertToJSON(a_obj_departmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_department, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *department_get_autocomplete_v2_response_m_payloadJSON){

    department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for department_get_autocomplete_v2_response_m_payload->a_obj_department
    list_t *a_obj_departmentList = NULL;

    // department_get_autocomplete_v2_response_m_payload->a_obj_department
    cJSON *a_obj_department = cJSON_GetObjectItemCaseSensitive(department_get_autocomplete_v2_response_m_payloadJSON, "a_objDepartment");
    if (!a_obj_department) {
        goto end;
    }

    
    cJSON *a_obj_department_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_department)){
        goto end; //nonprimitive container
    }

    a_obj_departmentList = list_createList();

    cJSON_ArrayForEach(a_obj_department_local_nonprimitive,a_obj_department )
    {
        if(!cJSON_IsObject(a_obj_department_local_nonprimitive)){
            goto end;
        }
        department_autocomplete_element_response_t *a_obj_departmentItem = department_autocomplete_element_response_parseFromJSON(a_obj_department_local_nonprimitive);

        list_addElement(a_obj_departmentList, a_obj_departmentItem);
    }


    department_get_autocomplete_v2_response_m_payload_local_var = department_get_autocomplete_v2_response_m_payload_create (
        a_obj_departmentList
        );

    return department_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_departmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_departmentList) {
            department_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_departmentList);
        a_obj_departmentList = NULL;
    }
    return NULL;

}
