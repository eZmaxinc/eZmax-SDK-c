#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "emailtype_get_autocomplete_v2_response_m_payload.h"



emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_emailtype
    ) {
    emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(emailtype_get_autocomplete_v2_response_m_payload_t));
    if (!emailtype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    emailtype_get_autocomplete_v2_response_m_payload_local_var->a_obj_emailtype = a_obj_emailtype;

    return emailtype_get_autocomplete_v2_response_m_payload_local_var;
}


void emailtype_get_autocomplete_v2_response_m_payload_free(emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload) {
    if(NULL == emailtype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype) {
        list_ForEach(listEntry, emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype) {
            emailtype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype);
        emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype = NULL;
    }
    free(emailtype_get_autocomplete_v2_response_m_payload);
}

cJSON *emailtype_get_autocomplete_v2_response_m_payload_convertToJSON(emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype
    if(emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype) {
    cJSON *a_obj_emailtype = cJSON_AddArrayToObject(item, "a_objEmailtype");
    if(a_obj_emailtype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_emailtypeListEntry;
    if (emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype) {
    list_ForEach(a_obj_emailtypeListEntry, emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype) {
    cJSON *itemLocal = emailtype_autocomplete_element_response_convertToJSON(a_obj_emailtypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_emailtype, itemLocal);
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

emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *emailtype_get_autocomplete_v2_response_m_payloadJSON){

    emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype
    list_t *a_obj_emailtypeList = NULL;

    // emailtype_get_autocomplete_v2_response_m_payload->a_obj_emailtype
    cJSON *a_obj_emailtype = cJSON_GetObjectItemCaseSensitive(emailtype_get_autocomplete_v2_response_m_payloadJSON, "a_objEmailtype");
    if (a_obj_emailtype) { 
    cJSON *a_obj_emailtype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_emailtype)){
        goto end; //nonprimitive container
    }

    a_obj_emailtypeList = list_createList();

    cJSON_ArrayForEach(a_obj_emailtype_local_nonprimitive,a_obj_emailtype )
    {
        if(!cJSON_IsObject(a_obj_emailtype_local_nonprimitive)){
            goto end;
        }
        emailtype_autocomplete_element_response_t *a_obj_emailtypeItem = emailtype_autocomplete_element_response_parseFromJSON(a_obj_emailtype_local_nonprimitive);

        list_addElement(a_obj_emailtypeList, a_obj_emailtypeItem);
    }
    }


    emailtype_get_autocomplete_v2_response_m_payload_local_var = emailtype_get_autocomplete_v2_response_m_payload_create (
        a_obj_emailtype ? a_obj_emailtypeList : NULL
        );

    return emailtype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_emailtypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_emailtypeList) {
            emailtype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_emailtypeList);
        a_obj_emailtypeList = NULL;
    }
    return NULL;

}
