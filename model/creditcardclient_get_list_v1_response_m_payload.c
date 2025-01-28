#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_get_list_v1_response_m_payload.h"



static creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_creditcardclient
    ) {
    creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload_local_var = malloc(sizeof(creditcardclient_get_list_v1_response_m_payload_t));
    if (!creditcardclient_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    creditcardclient_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    creditcardclient_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    creditcardclient_get_list_v1_response_m_payload_local_var->a_obj_creditcardclient = a_obj_creditcardclient;

    creditcardclient_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return creditcardclient_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_creditcardclient
    ) {
    return creditcardclient_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_creditcardclient
        );
}

void creditcardclient_get_list_v1_response_m_payload_free(creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload) {
    if(NULL == creditcardclient_get_list_v1_response_m_payload){
        return ;
    }
    if(creditcardclient_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardclient_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient) {
        list_ForEach(listEntry, creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient) {
            creditcardclient_list_element_free(listEntry->data);
        }
        list_freeList(creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient);
        creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient = NULL;
    }
    free(creditcardclient_get_list_v1_response_m_payload);
}

cJSON *creditcardclient_get_list_v1_response_m_payload_convertToJSON(creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_get_list_v1_response_m_payload->i_row_returned
    if (!creditcardclient_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", creditcardclient_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_get_list_v1_response_m_payload->i_row_filtered
    if (!creditcardclient_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", creditcardclient_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient
    if (!creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient) {
        goto fail;
    }
    cJSON *a_obj_creditcardclient = cJSON_AddArrayToObject(item, "a_objCreditcardclient");
    if(a_obj_creditcardclient == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_creditcardclientListEntry;
    if (creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient) {
    list_ForEach(a_obj_creditcardclientListEntry, creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient) {
    cJSON *itemLocal = creditcardclient_list_element_convertToJSON(a_obj_creditcardclientListEntry->data);
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

creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload_parseFromJSON(cJSON *creditcardclient_get_list_v1_response_m_payloadJSON){

    creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient
    list_t *a_obj_creditcardclientList = NULL;

    // creditcardclient_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(creditcardclient_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (cJSON_IsNull(i_row_returned)) {
        i_row_returned = NULL;
    }
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // creditcardclient_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(creditcardclient_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (cJSON_IsNull(i_row_filtered)) {
        i_row_filtered = NULL;
    }
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // creditcardclient_get_list_v1_response_m_payload->a_obj_creditcardclient
    cJSON *a_obj_creditcardclient = cJSON_GetObjectItemCaseSensitive(creditcardclient_get_list_v1_response_m_payloadJSON, "a_objCreditcardclient");
    if (cJSON_IsNull(a_obj_creditcardclient)) {
        a_obj_creditcardclient = NULL;
    }
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
        creditcardclient_list_element_t *a_obj_creditcardclientItem = creditcardclient_list_element_parseFromJSON(a_obj_creditcardclient_local_nonprimitive);

        list_addElement(a_obj_creditcardclientList, a_obj_creditcardclientItem);
    }


    creditcardclient_get_list_v1_response_m_payload_local_var = creditcardclient_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_creditcardclientList
        );

    return creditcardclient_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_creditcardclientList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_creditcardclientList) {
            creditcardclient_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_creditcardclientList);
        a_obj_creditcardclientList = NULL;
    }
    return NULL;

}
