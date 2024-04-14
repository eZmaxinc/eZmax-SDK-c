#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_get_autocomplete_v2_response_m_payload.h"



creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_creditcardclient
    ) {
    creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(creditcardclient_get_autocomplete_v2_response_m_payload_t));
    if (!creditcardclient_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    creditcardclient_get_autocomplete_v2_response_m_payload_local_var->a_obj_creditcardclient = a_obj_creditcardclient;

    return creditcardclient_get_autocomplete_v2_response_m_payload_local_var;
}


void creditcardclient_get_autocomplete_v2_response_m_payload_free(creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload) {
    if(NULL == creditcardclient_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient) {
        list_ForEach(listEntry, creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient) {
            creditcardclient_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient);
        creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient = NULL;
    }
    free(creditcardclient_get_autocomplete_v2_response_m_payload);
}

cJSON *creditcardclient_get_autocomplete_v2_response_m_payload_convertToJSON(creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient
    if (!creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient) {
        goto fail;
    }
    cJSON *a_obj_creditcardclient = cJSON_AddArrayToObject(item, "a_objCreditcardclient");
    if(a_obj_creditcardclient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_creditcardclientListEntry;
    if (creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient) {
    list_ForEach(a_obj_creditcardclientListEntry, creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient) {
    cJSON *itemLocal = creditcardclient_autocomplete_element_response_convertToJSON(a_obj_creditcardclientListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_creditcardclient, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *creditcardclient_get_autocomplete_v2_response_m_payloadJSON){

    creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient
    list_t *a_obj_creditcardclientList = NULL;

    // creditcardclient_get_autocomplete_v2_response_m_payload->a_obj_creditcardclient
    cJSON *a_obj_creditcardclient = cJSON_GetObjectItemCaseSensitive(creditcardclient_get_autocomplete_v2_response_m_payloadJSON, "a_objCreditcardclient");
    if (!a_obj_creditcardclient) {
        goto end;
    }

    
    cJSON *a_obj_creditcardclient_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_creditcardclient)){
        goto end; //nonprimitive container
    }

    a_obj_creditcardclientList = list_createList();

    cJSON_ArrayForEach(a_obj_creditcardclient_local_nonprimitive,a_obj_creditcardclient )
    {
        if(!cJSON_IsObject(a_obj_creditcardclient_local_nonprimitive)){
            goto end;
        }
        creditcardclient_autocomplete_element_response_t *a_obj_creditcardclientItem = creditcardclient_autocomplete_element_response_parseFromJSON(a_obj_creditcardclient_local_nonprimitive);

        list_addElement(a_obj_creditcardclientList, a_obj_creditcardclientItem);
    }


    creditcardclient_get_autocomplete_v2_response_m_payload_local_var = creditcardclient_get_autocomplete_v2_response_m_payload_create (
        a_obj_creditcardclientList
        );

    return creditcardclient_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_creditcardclientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_creditcardclientList) {
            creditcardclient_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_creditcardclientList);
        a_obj_creditcardclientList = NULL;
    }
    return NULL;

}
