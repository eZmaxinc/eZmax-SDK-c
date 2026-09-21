#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_get_list_v1_response_m_payload.h"



static invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_invoice
    ) {
    invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload_local_var = malloc(sizeof(invoice_get_list_v1_response_m_payload_t));
    if (!invoice_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(invoice_get_list_v1_response_m_payload_local_var, 0, sizeof(invoice_get_list_v1_response_m_payload_t));
    invoice_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    invoice_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    invoice_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    invoice_get_list_v1_response_m_payload_local_var->a_obj_invoice = a_obj_invoice;
    return invoice_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_invoice
    ) {
    int *i_row_returned_copy = NULL;
    if (i_row_returned) {
        i_row_returned_copy = malloc(sizeof(int));
        if (i_row_returned_copy) *i_row_returned_copy = *i_row_returned;
    }
    int *i_row_filtered_copy = NULL;
    if (i_row_filtered) {
        i_row_filtered_copy = malloc(sizeof(int));
        if (i_row_filtered_copy) *i_row_filtered_copy = *i_row_filtered;
    }
    invoice_get_list_v1_response_m_payload_t *result = invoice_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_invoice
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void invoice_get_list_v1_response_m_payload_free(invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload) {
    if(NULL == invoice_get_list_v1_response_m_payload){
        return ;
    }
    if(invoice_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invoice_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_get_list_v1_response_m_payload->i_row_returned) {
        free(invoice_get_list_v1_response_m_payload->i_row_returned);
        invoice_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (invoice_get_list_v1_response_m_payload->i_row_filtered) {
        free(invoice_get_list_v1_response_m_payload->i_row_filtered);
        invoice_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (invoice_get_list_v1_response_m_payload->a_obj_invoice) {
        list_ForEach(listEntry, invoice_get_list_v1_response_m_payload->a_obj_invoice) {
            invoice_list_element_free(listEntry->data);
        }
        list_freeList(invoice_get_list_v1_response_m_payload->a_obj_invoice);
        invoice_get_list_v1_response_m_payload->a_obj_invoice = NULL;
    }
    free(invoice_get_list_v1_response_m_payload);
}

cJSON *invoice_get_list_v1_response_m_payload_convertToJSON(invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // invoice_get_list_v1_response_m_payload->i_row_returned
    if (!invoice_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *invoice_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // invoice_get_list_v1_response_m_payload->i_row_filtered
    if (!invoice_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *invoice_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // invoice_get_list_v1_response_m_payload->a_obj_invoice
    if (!invoice_get_list_v1_response_m_payload->a_obj_invoice) {
        goto fail;
    }
    cJSON *a_obj_invoice = cJSON_AddArrayToObject(item, "a_objInvoice");
    if(a_obj_invoice == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_invoiceListEntry;
    if (invoice_get_list_v1_response_m_payload->a_obj_invoice) {
    list_ForEach(a_obj_invoiceListEntry, invoice_get_list_v1_response_m_payload->a_obj_invoice) {
    cJSON *itemLocal = invoice_list_element_convertToJSON(a_obj_invoiceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_invoice, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload_parseFromJSON(cJSON *invoice_get_list_v1_response_m_payloadJSON){

    invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for invoice_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for invoice_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for invoice_get_list_v1_response_m_payload->a_obj_invoice
    list_t *a_obj_invoiceList = NULL;

    // invoice_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(invoice_get_list_v1_response_m_payloadJSON, "iRowReturned");
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
    i_row_returned_local_var = malloc(sizeof(int));
    if(!i_row_returned_local_var)
    {
        goto end;
    }
    *i_row_returned_local_var = i_row_returned->valuedouble;

    // invoice_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(invoice_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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
    i_row_filtered_local_var = malloc(sizeof(int));
    if(!i_row_filtered_local_var)
    {
        goto end;
    }
    *i_row_filtered_local_var = i_row_filtered->valuedouble;

    // invoice_get_list_v1_response_m_payload->a_obj_invoice
    cJSON *a_obj_invoice = cJSON_GetObjectItemCaseSensitive(invoice_get_list_v1_response_m_payloadJSON, "a_objInvoice");
    if (cJSON_IsNull(a_obj_invoice)) {
        a_obj_invoice = NULL;
    }
    if (!a_obj_invoice) {
        goto end;
    }

    
    cJSON *a_obj_invoice_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_invoice)){
        goto end; //nonprimitive container
    }

    a_obj_invoiceList = list_createList();

    cJSON_ArrayForEach(a_obj_invoice_local_nonprimitive,a_obj_invoice )
    {
        if(!cJSON_IsObject(a_obj_invoice_local_nonprimitive)){
            goto end;
        }
        invoice_list_element_t *a_obj_invoiceItem = invoice_list_element_parseFromJSON(a_obj_invoice_local_nonprimitive);

        list_addElement(a_obj_invoiceList, a_obj_invoiceItem);
    }



    invoice_get_list_v1_response_m_payload_local_var = invoice_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_invoiceList
        );

    if (!invoice_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return invoice_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_invoiceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_invoiceList) {
            invoice_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_invoiceList);
        a_obj_invoiceList = NULL;
    }
    return NULL;

}
