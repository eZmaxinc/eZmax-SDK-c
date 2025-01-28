#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_get_communicationsenders_v1_response_m_payload.h"



static invoice_get_communicationsenders_v1_response_m_payload_t *invoice_get_communicationsenders_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationsenders
    ) {
    invoice_get_communicationsenders_v1_response_m_payload_t *invoice_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(invoice_get_communicationsenders_v1_response_m_payload_t));
    if (!invoice_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    invoice_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;

    invoice_get_communicationsenders_v1_response_m_payload_local_var->_library_owned = 1;
    return invoice_get_communicationsenders_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) invoice_get_communicationsenders_v1_response_m_payload_t *invoice_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    return invoice_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsenders
        );
}

void invoice_get_communicationsenders_v1_response_m_payload_free(invoice_get_communicationsenders_v1_response_m_payload_t *invoice_get_communicationsenders_v1_response_m_payload) {
    if(NULL == invoice_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    if(invoice_get_communicationsenders_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invoice_get_communicationsenders_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(invoice_get_communicationsenders_v1_response_m_payload);
}

cJSON *invoice_get_communicationsenders_v1_response_m_payload_convertToJSON(invoice_get_communicationsenders_v1_response_m_payload_t *invoice_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    cJSON *itemLocal = custom_communicationsender_response_convertToJSON(a_obj_communicationsendersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationsenders, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_get_communicationsenders_v1_response_m_payload_t *invoice_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *invoice_get_communicationsenders_v1_response_m_payloadJSON){

    invoice_get_communicationsenders_v1_response_m_payload_t *invoice_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // invoice_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(invoice_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
    if (cJSON_IsNull(a_obj_communicationsenders)) {
        a_obj_communicationsenders = NULL;
    }
    if (!a_obj_communicationsenders) {
        goto end;
    }

    
    cJSON *a_obj_communicationsenders_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationsenders)){
        goto end; //nonprimitive container
    }

    a_obj_communicationsendersList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationsenders_local_nonprimitive,a_obj_communicationsenders )
    {
        if(!cJSON_IsObject(a_obj_communicationsenders_local_nonprimitive)){
            goto end;
        }
        custom_communicationsender_response_t *a_obj_communicationsendersItem = custom_communicationsender_response_parseFromJSON(a_obj_communicationsenders_local_nonprimitive);

        list_addElement(a_obj_communicationsendersList, a_obj_communicationsendersItem);
    }


    invoice_get_communicationsenders_v1_response_m_payload_local_var = invoice_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsendersList
        );

    return invoice_get_communicationsenders_v1_response_m_payload_local_var;
end:
    if (a_obj_communicationsendersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationsendersList) {
            custom_communicationsender_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationsendersList);
        a_obj_communicationsendersList = NULL;
    }
    return NULL;

}
