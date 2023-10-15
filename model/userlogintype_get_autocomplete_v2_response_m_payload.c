#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userlogintype_get_autocomplete_v2_response_m_payload.h"



userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_userlogintype
    ) {
    userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(userlogintype_get_autocomplete_v2_response_m_payload_t));
    if (!userlogintype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    userlogintype_get_autocomplete_v2_response_m_payload_local_var->a_obj_userlogintype = a_obj_userlogintype;

    return userlogintype_get_autocomplete_v2_response_m_payload_local_var;
}


void userlogintype_get_autocomplete_v2_response_m_payload_free(userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload) {
    if(NULL == userlogintype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype) {
        list_ForEach(listEntry, userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype) {
            userlogintype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype);
        userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype = NULL;
    }
    free(userlogintype_get_autocomplete_v2_response_m_payload);
}

cJSON *userlogintype_get_autocomplete_v2_response_m_payload_convertToJSON(userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype
    if (!userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype) {
        goto fail;
    }
    cJSON *a_obj_userlogintype = cJSON_AddArrayToObject(item, "a_objUserlogintype");
    if(a_obj_userlogintype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_userlogintypeListEntry;
    if (userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype) {
    list_ForEach(a_obj_userlogintypeListEntry, userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype) {
    cJSON *itemLocal = userlogintype_autocomplete_element_response_convertToJSON(a_obj_userlogintypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_userlogintype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *userlogintype_get_autocomplete_v2_response_m_payloadJSON){

    userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype
    list_t *a_obj_userlogintypeList = NULL;

    // userlogintype_get_autocomplete_v2_response_m_payload->a_obj_userlogintype
    cJSON *a_obj_userlogintype = cJSON_GetObjectItemCaseSensitive(userlogintype_get_autocomplete_v2_response_m_payloadJSON, "a_objUserlogintype");
    if (!a_obj_userlogintype) {
        goto end;
    }

    
    cJSON *a_obj_userlogintype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_userlogintype)){
        goto end; //nonprimitive container
    }

    a_obj_userlogintypeList = list_createList();

    cJSON_ArrayForEach(a_obj_userlogintype_local_nonprimitive,a_obj_userlogintype )
    {
        if(!cJSON_IsObject(a_obj_userlogintype_local_nonprimitive)){
            goto end;
        }
        userlogintype_autocomplete_element_response_t *a_obj_userlogintypeItem = userlogintype_autocomplete_element_response_parseFromJSON(a_obj_userlogintype_local_nonprimitive);

        list_addElement(a_obj_userlogintypeList, a_obj_userlogintypeItem);
    }


    userlogintype_get_autocomplete_v2_response_m_payload_local_var = userlogintype_get_autocomplete_v2_response_m_payload_create (
        a_obj_userlogintypeList
        );

    return userlogintype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_userlogintypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_userlogintypeList) {
            userlogintype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_userlogintypeList);
        a_obj_userlogintypeList = NULL;
    }
    return NULL;

}
