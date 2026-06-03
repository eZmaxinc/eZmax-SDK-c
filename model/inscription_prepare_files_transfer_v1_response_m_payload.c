#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_prepare_files_transfer_v1_response_m_payload.h"



static inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload_create_internal(
    custom_attachment_prepare_files_transfer_response_t *a_obj_attachment
    ) {
    inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload_local_var = malloc(sizeof(inscription_prepare_files_transfer_v1_response_m_payload_t));
    if (!inscription_prepare_files_transfer_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscription_prepare_files_transfer_v1_response_m_payload_local_var, 0, sizeof(inscription_prepare_files_transfer_v1_response_m_payload_t));
    inscription_prepare_files_transfer_v1_response_m_payload_local_var->_library_owned = 1;
    inscription_prepare_files_transfer_v1_response_m_payload_local_var->a_obj_attachment = a_obj_attachment;
    return inscription_prepare_files_transfer_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload_create(
    custom_attachment_prepare_files_transfer_response_t *a_obj_attachment
    ) {
    inscription_prepare_files_transfer_v1_response_m_payload_t *result = inscription_prepare_files_transfer_v1_response_m_payload_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void inscription_prepare_files_transfer_v1_response_m_payload_free(inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload) {
    if(NULL == inscription_prepare_files_transfer_v1_response_m_payload){
        return ;
    }
    if(inscription_prepare_files_transfer_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_prepare_files_transfer_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment) {
        custom_attachment_prepare_files_transfer_response_free(inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment);
        inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment = NULL;
    }
    free(inscription_prepare_files_transfer_v1_response_m_payload);
}

cJSON *inscription_prepare_files_transfer_v1_response_m_payload_convertToJSON(inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment
    if (!inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment_local_JSON = custom_attachment_prepare_files_transfer_response_convertToJSON(inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment);
    if(a_obj_attachment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "a_objAttachment", a_obj_attachment_local_JSON);
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

inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload_parseFromJSON(cJSON *inscription_prepare_files_transfer_v1_response_m_payloadJSON){

    inscription_prepare_files_transfer_v1_response_m_payload_t *inscription_prepare_files_transfer_v1_response_m_payload_local_var = NULL;

    // define the local variable for inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment
    custom_attachment_prepare_files_transfer_response_t *a_obj_attachment_local_nonprim = NULL;

    // inscription_prepare_files_transfer_v1_response_m_payload->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(inscription_prepare_files_transfer_v1_response_m_payloadJSON, "a_objAttachment");
    if (cJSON_IsNull(a_obj_attachment)) {
        a_obj_attachment = NULL;
    }
    if (!a_obj_attachment) {
        goto end;
    }

    
    a_obj_attachment_local_nonprim = custom_attachment_prepare_files_transfer_response_parseFromJSON(a_obj_attachment); //nonprimitive



    inscription_prepare_files_transfer_v1_response_m_payload_local_var = inscription_prepare_files_transfer_v1_response_m_payload_create_internal (
        a_obj_attachment_local_nonprim
        );

    if (!inscription_prepare_files_transfer_v1_response_m_payload_local_var) {
        goto end;
    }

    return inscription_prepare_files_transfer_v1_response_m_payload_local_var;
end:
    if (a_obj_attachment_local_nonprim) {
        custom_attachment_prepare_files_transfer_response_free(a_obj_attachment_local_nonprim);
        a_obj_attachment_local_nonprim = NULL;
    }
    return NULL;

}
