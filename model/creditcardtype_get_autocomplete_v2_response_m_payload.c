#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardtype_get_autocomplete_v2_response_m_payload.h"



creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_creditcardtype
    ) {
    creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(creditcardtype_get_autocomplete_v2_response_m_payload_t));
    if (!creditcardtype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    creditcardtype_get_autocomplete_v2_response_m_payload_local_var->a_obj_creditcardtype = a_obj_creditcardtype;

    return creditcardtype_get_autocomplete_v2_response_m_payload_local_var;
}


void creditcardtype_get_autocomplete_v2_response_m_payload_free(creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload) {
    if(NULL == creditcardtype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype) {
        list_ForEach(listEntry, creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype) {
            creditcardtype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype);
        creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype = NULL;
    }
    free(creditcardtype_get_autocomplete_v2_response_m_payload);
}

cJSON *creditcardtype_get_autocomplete_v2_response_m_payload_convertToJSON(creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype
    if (!creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype) {
        goto fail;
    }
    cJSON *a_obj_creditcardtype = cJSON_AddArrayToObject(item, "a_objCreditcardtype");
    if(a_obj_creditcardtype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_creditcardtypeListEntry;
    if (creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype) {
    list_ForEach(a_obj_creditcardtypeListEntry, creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype) {
    cJSON *itemLocal = creditcardtype_autocomplete_element_response_convertToJSON(a_obj_creditcardtypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_creditcardtype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *creditcardtype_get_autocomplete_v2_response_m_payloadJSON){

    creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype
    list_t *a_obj_creditcardtypeList = NULL;

    // creditcardtype_get_autocomplete_v2_response_m_payload->a_obj_creditcardtype
    cJSON *a_obj_creditcardtype = cJSON_GetObjectItemCaseSensitive(creditcardtype_get_autocomplete_v2_response_m_payloadJSON, "a_objCreditcardtype");
    if (!a_obj_creditcardtype) {
        goto end;
    }

    
    cJSON *a_obj_creditcardtype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_creditcardtype)){
        goto end; //nonprimitive container
    }

    a_obj_creditcardtypeList = list_createList();

    cJSON_ArrayForEach(a_obj_creditcardtype_local_nonprimitive,a_obj_creditcardtype )
    {
        if(!cJSON_IsObject(a_obj_creditcardtype_local_nonprimitive)){
            goto end;
        }
        creditcardtype_autocomplete_element_response_t *a_obj_creditcardtypeItem = creditcardtype_autocomplete_element_response_parseFromJSON(a_obj_creditcardtype_local_nonprimitive);

        list_addElement(a_obj_creditcardtypeList, a_obj_creditcardtypeItem);
    }


    creditcardtype_get_autocomplete_v2_response_m_payload_local_var = creditcardtype_get_autocomplete_v2_response_m_payload_create (
        a_obj_creditcardtypeList
        );

    return creditcardtype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_creditcardtypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_creditcardtypeList) {
            creditcardtype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_creditcardtypeList);
        a_obj_creditcardtypeList = NULL;
    }
    return NULL;

}
