#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "versionhistory_get_object_v2_response_all_of.h"



versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of_create(
    versionhistory_get_object_v2_response_m_payload_t *m_payload
    ) {
    versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of_local_var = malloc(sizeof(versionhistory_get_object_v2_response_all_of_t));
    if (!versionhistory_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    versionhistory_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return versionhistory_get_object_v2_response_all_of_local_var;
}


void versionhistory_get_object_v2_response_all_of_free(versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of) {
    if(NULL == versionhistory_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (versionhistory_get_object_v2_response_all_of->m_payload) {
        versionhistory_get_object_v2_response_m_payload_free(versionhistory_get_object_v2_response_all_of->m_payload);
        versionhistory_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(versionhistory_get_object_v2_response_all_of);
}

cJSON *versionhistory_get_object_v2_response_all_of_convertToJSON(versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // versionhistory_get_object_v2_response_all_of->m_payload
    if (!versionhistory_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = versionhistory_get_object_v2_response_m_payload_convertToJSON(versionhistory_get_object_v2_response_all_of->m_payload);
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

versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of_parseFromJSON(cJSON *versionhistory_get_object_v2_response_all_ofJSON){

    versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for versionhistory_get_object_v2_response_all_of->m_payload
    versionhistory_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // versionhistory_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(versionhistory_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = versionhistory_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    versionhistory_get_object_v2_response_all_of_local_var = versionhistory_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return versionhistory_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        versionhistory_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
