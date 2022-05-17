#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_forms_data_v1_response_m_payload.h"



ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_create(
    custom_forms_data_folder_response_t *obj_forms_data_folder
    ) {
    ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_forms_data_v1_response_m_payload_t));
    if (!ezsignfolder_get_forms_data_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_forms_data_v1_response_m_payload_local_var->obj_forms_data_folder = obj_forms_data_folder;

    return ezsignfolder_get_forms_data_v1_response_m_payload_local_var;
}


void ezsignfolder_get_forms_data_v1_response_m_payload_free(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_forms_data_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder) {
        custom_forms_data_folder_response_free(ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder);
        ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder = NULL;
    }
    free(ezsignfolder_get_forms_data_v1_response_m_payload);
}

cJSON *ezsignfolder_get_forms_data_v1_response_m_payload_convertToJSON(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder
    if (!ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder) {
        goto fail;
    }
    cJSON *obj_forms_data_folder_local_JSON = custom_forms_data_folder_response_convertToJSON(ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder);
    if(obj_forms_data_folder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objFormsDataFolder", obj_forms_data_folder_local_JSON);
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

ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_forms_data_v1_response_m_payloadJSON){

    ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder
    custom_forms_data_folder_response_t *obj_forms_data_folder_local_nonprim = NULL;

    // ezsignfolder_get_forms_data_v1_response_m_payload->obj_forms_data_folder
    cJSON *obj_forms_data_folder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_forms_data_v1_response_m_payloadJSON, "objFormsDataFolder");
    if (!obj_forms_data_folder) {
        goto end;
    }

    
    obj_forms_data_folder_local_nonprim = custom_forms_data_folder_response_parseFromJSON(obj_forms_data_folder); //nonprimitive


    ezsignfolder_get_forms_data_v1_response_m_payload_local_var = ezsignfolder_get_forms_data_v1_response_m_payload_create (
        obj_forms_data_folder_local_nonprim
        );

    return ezsignfolder_get_forms_data_v1_response_m_payload_local_var;
end:
    if (obj_forms_data_folder_local_nonprim) {
        custom_forms_data_folder_response_free(obj_forms_data_folder_local_nonprim);
        obj_forms_data_folder_local_nonprim = NULL;
    }
    return NULL;

}
