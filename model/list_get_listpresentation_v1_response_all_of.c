#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list_get_listpresentation_v1_response_all_of.h"



list_get_listpresentation_v1_response_all_of_t *list_get_listpresentation_v1_response_all_of_create(
    list_get_listpresentation_v1_response_m_payload_t *m_payload
    ) {
    list_get_listpresentation_v1_response_all_of_t *list_get_listpresentation_v1_response_all_of_local_var = malloc(sizeof(list_get_listpresentation_v1_response_all_of_t));
    if (!list_get_listpresentation_v1_response_all_of_local_var) {
        return NULL;
    }
    list_get_listpresentation_v1_response_all_of_local_var->m_payload = m_payload;

    return list_get_listpresentation_v1_response_all_of_local_var;
}


void list_get_listpresentation_v1_response_all_of_free(list_get_listpresentation_v1_response_all_of_t *list_get_listpresentation_v1_response_all_of) {
    if(NULL == list_get_listpresentation_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (list_get_listpresentation_v1_response_all_of->m_payload) {
        list_get_listpresentation_v1_response_m_payload_free(list_get_listpresentation_v1_response_all_of->m_payload);
        list_get_listpresentation_v1_response_all_of->m_payload = NULL;
    }
    free(list_get_listpresentation_v1_response_all_of);
}

cJSON *list_get_listpresentation_v1_response_all_of_convertToJSON(list_get_listpresentation_v1_response_all_of_t *list_get_listpresentation_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // list_get_listpresentation_v1_response_all_of->m_payload
    if (!list_get_listpresentation_v1_response_all_of->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload_local_JSON = list_get_listpresentation_v1_response_m_payload_convertToJSON(list_get_listpresentation_v1_response_all_of->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

list_get_listpresentation_v1_response_all_of_t *list_get_listpresentation_v1_response_all_of_parseFromJSON(cJSON *list_get_listpresentation_v1_response_all_ofJSON){

    list_get_listpresentation_v1_response_all_of_t *list_get_listpresentation_v1_response_all_of_local_var = NULL;

    // list_get_listpresentation_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(list_get_listpresentation_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    list_get_listpresentation_v1_response_m_payload_t *m_payload_local_nonprim = NULL;
    
    m_payload_local_nonprim = list_get_listpresentation_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    list_get_listpresentation_v1_response_all_of_local_var = list_get_listpresentation_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return list_get_listpresentation_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        list_get_listpresentation_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
