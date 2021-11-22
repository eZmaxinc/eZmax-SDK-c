#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_create_object_v1_response_all_of.h"



franchisereferalincome_create_object_v1_response_all_of_t *franchisereferalincome_create_object_v1_response_all_of_create(
    franchisereferalincome_create_object_v1_response_m_payload_t *m_payload
    ) {
    franchisereferalincome_create_object_v1_response_all_of_t *franchisereferalincome_create_object_v1_response_all_of_local_var = malloc(sizeof(franchisereferalincome_create_object_v1_response_all_of_t));
    if (!franchisereferalincome_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    franchisereferalincome_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return franchisereferalincome_create_object_v1_response_all_of_local_var;
}


void franchisereferalincome_create_object_v1_response_all_of_free(franchisereferalincome_create_object_v1_response_all_of_t *franchisereferalincome_create_object_v1_response_all_of) {
    if(NULL == franchisereferalincome_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_create_object_v1_response_all_of->m_payload) {
        franchisereferalincome_create_object_v1_response_m_payload_free(franchisereferalincome_create_object_v1_response_all_of->m_payload);
        franchisereferalincome_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(franchisereferalincome_create_object_v1_response_all_of);
}

cJSON *franchisereferalincome_create_object_v1_response_all_of_convertToJSON(franchisereferalincome_create_object_v1_response_all_of_t *franchisereferalincome_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_create_object_v1_response_all_of->m_payload
    if (!franchisereferalincome_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload_local_JSON = franchisereferalincome_create_object_v1_response_m_payload_convertToJSON(franchisereferalincome_create_object_v1_response_all_of->m_payload);
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

franchisereferalincome_create_object_v1_response_all_of_t *franchisereferalincome_create_object_v1_response_all_of_parseFromJSON(cJSON *franchisereferalincome_create_object_v1_response_all_ofJSON){

    franchisereferalincome_create_object_v1_response_all_of_t *franchisereferalincome_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for franchisereferalincome_create_object_v1_response_all_of->m_payload
    franchisereferalincome_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // franchisereferalincome_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = franchisereferalincome_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    franchisereferalincome_create_object_v1_response_all_of_local_var = franchisereferalincome_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return franchisereferalincome_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        franchisereferalincome_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
