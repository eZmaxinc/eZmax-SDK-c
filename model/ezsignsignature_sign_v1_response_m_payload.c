#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_sign_v1_response_m_payload.h"



ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload_create(
    char *dt_ezsignsignature_date_in_folder_timezone,
    custom_timezone_with_code_response_t *obj_timezone
    ) {
    ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignature_sign_v1_response_m_payload_t));
    if (!ezsignsignature_sign_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_sign_v1_response_m_payload_local_var->dt_ezsignsignature_date_in_folder_timezone = dt_ezsignsignature_date_in_folder_timezone;
    ezsignsignature_sign_v1_response_m_payload_local_var->obj_timezone = obj_timezone;

    return ezsignsignature_sign_v1_response_m_payload_local_var;
}


void ezsignsignature_sign_v1_response_m_payload_free(ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload) {
    if(NULL == ezsignsignature_sign_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_sign_v1_response_m_payload->dt_ezsignsignature_date_in_folder_timezone) {
        free(ezsignsignature_sign_v1_response_m_payload->dt_ezsignsignature_date_in_folder_timezone);
        ezsignsignature_sign_v1_response_m_payload->dt_ezsignsignature_date_in_folder_timezone = NULL;
    }
    if (ezsignsignature_sign_v1_response_m_payload->obj_timezone) {
        custom_timezone_with_code_response_free(ezsignsignature_sign_v1_response_m_payload->obj_timezone);
        ezsignsignature_sign_v1_response_m_payload->obj_timezone = NULL;
    }
    free(ezsignsignature_sign_v1_response_m_payload);
}

cJSON *ezsignsignature_sign_v1_response_m_payload_convertToJSON(ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_sign_v1_response_m_payload->dt_ezsignsignature_date_in_folder_timezone
    if (!ezsignsignature_sign_v1_response_m_payload->dt_ezsignsignature_date_in_folder_timezone) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsignsignatureDateInFolderTimezone", ezsignsignature_sign_v1_response_m_payload->dt_ezsignsignature_date_in_folder_timezone) == NULL) {
    goto fail; //String
    }


    // ezsignsignature_sign_v1_response_m_payload->obj_timezone
    if(ezsignsignature_sign_v1_response_m_payload->obj_timezone) {
    cJSON *obj_timezone_local_JSON = custom_timezone_with_code_response_convertToJSON(ezsignsignature_sign_v1_response_m_payload->obj_timezone);
    if(obj_timezone_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objTimezone", obj_timezone_local_JSON);
    if(item->child == NULL) {
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

ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignature_sign_v1_response_m_payloadJSON){

    ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignsignature_sign_v1_response_m_payload->obj_timezone
    custom_timezone_with_code_response_t *obj_timezone_local_nonprim = NULL;

    // ezsignsignature_sign_v1_response_m_payload->dt_ezsignsignature_date_in_folder_timezone
    cJSON *dt_ezsignsignature_date_in_folder_timezone = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_response_m_payloadJSON, "dtEzsignsignatureDateInFolderTimezone");
    if (!dt_ezsignsignature_date_in_folder_timezone) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsignsignature_date_in_folder_timezone))
    {
    goto end; //String
    }

    // ezsignsignature_sign_v1_response_m_payload->obj_timezone
    cJSON *obj_timezone = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_response_m_payloadJSON, "objTimezone");
    if (obj_timezone) { 
    obj_timezone_local_nonprim = custom_timezone_with_code_response_parseFromJSON(obj_timezone); //nonprimitive
    }


    ezsignsignature_sign_v1_response_m_payload_local_var = ezsignsignature_sign_v1_response_m_payload_create (
        strdup(dt_ezsignsignature_date_in_folder_timezone->valuestring),
        obj_timezone ? obj_timezone_local_nonprim : NULL
        );

    return ezsignsignature_sign_v1_response_m_payload_local_var;
end:
    if (obj_timezone_local_nonprim) {
        custom_timezone_with_code_response_free(obj_timezone_local_nonprim);
        obj_timezone_local_nonprim = NULL;
    }
    return NULL;

}
