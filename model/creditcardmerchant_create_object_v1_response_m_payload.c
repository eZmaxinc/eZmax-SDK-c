#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_create_object_v1_response_m_payload.h"



static creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_creditcardmerchant_id
    ) {
    creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload_local_var = malloc(sizeof(creditcardmerchant_create_object_v1_response_m_payload_t));
    if (!creditcardmerchant_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    creditcardmerchant_create_object_v1_response_m_payload_local_var->a_pki_creditcardmerchant_id = a_pki_creditcardmerchant_id;

    creditcardmerchant_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return creditcardmerchant_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload_create(
    list_t *a_pki_creditcardmerchant_id
    ) {
    return creditcardmerchant_create_object_v1_response_m_payload_create_internal (
        a_pki_creditcardmerchant_id
        );
}

void creditcardmerchant_create_object_v1_response_m_payload_free(creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload) {
    if(NULL == creditcardmerchant_create_object_v1_response_m_payload){
        return ;
    }
    if(creditcardmerchant_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id) {
        list_ForEach(listEntry, creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id) {
            free(listEntry->data);
        }
        list_freeList(creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id);
        creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id = NULL;
    }
    free(creditcardmerchant_create_object_v1_response_m_payload);
}

cJSON *creditcardmerchant_create_object_v1_response_m_payload_convertToJSON(creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id
    if (!creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id) {
        goto fail;
    }
    cJSON *a_pki_creditcardmerchant_id = cJSON_AddArrayToObject(item, "a_pkiCreditcardmerchantID");
    if(a_pki_creditcardmerchant_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_creditcardmerchant_idListEntry;
    list_ForEach(a_pki_creditcardmerchant_idListEntry, creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id) {
    if(cJSON_AddNumberToObject(a_pki_creditcardmerchant_id, "", *(double *)a_pki_creditcardmerchant_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload_parseFromJSON(cJSON *creditcardmerchant_create_object_v1_response_m_payloadJSON){

    creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id
    list_t *a_pki_creditcardmerchant_idList = NULL;

    // creditcardmerchant_create_object_v1_response_m_payload->a_pki_creditcardmerchant_id
    cJSON *a_pki_creditcardmerchant_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_create_object_v1_response_m_payloadJSON, "a_pkiCreditcardmerchantID");
    if (cJSON_IsNull(a_pki_creditcardmerchant_id)) {
        a_pki_creditcardmerchant_id = NULL;
    }
    if (!a_pki_creditcardmerchant_id) {
        goto end;
    }

    
    cJSON *a_pki_creditcardmerchant_id_local = NULL;
    if(!cJSON_IsArray(a_pki_creditcardmerchant_id)) {
        goto end;//primitive container
    }
    a_pki_creditcardmerchant_idList = list_createList();

    cJSON_ArrayForEach(a_pki_creditcardmerchant_id_local, a_pki_creditcardmerchant_id)
    {
        if(!cJSON_IsNumber(a_pki_creditcardmerchant_id_local))
        {
            goto end;
        }
        double *a_pki_creditcardmerchant_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_creditcardmerchant_id_local_value)
        {
            goto end;
        }
        *a_pki_creditcardmerchant_id_local_value = a_pki_creditcardmerchant_id_local->valuedouble;
        list_addElement(a_pki_creditcardmerchant_idList , a_pki_creditcardmerchant_id_local_value);
    }


    creditcardmerchant_create_object_v1_response_m_payload_local_var = creditcardmerchant_create_object_v1_response_m_payload_create_internal (
        a_pki_creditcardmerchant_idList
        );

    return creditcardmerchant_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_creditcardmerchant_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_creditcardmerchant_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_creditcardmerchant_idList);
        a_pki_creditcardmerchant_idList = NULL;
    }
    return NULL;

}
