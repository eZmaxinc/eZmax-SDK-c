#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_get_report_v1_response_m_payload.h"



common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload_create(
    common_reportgroup_t *obj_reportgroup
    ) {
    common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload_local_var = malloc(sizeof(common_get_report_v1_response_m_payload_t));
    if (!common_get_report_v1_response_m_payload_local_var) {
        return NULL;
    }
    common_get_report_v1_response_m_payload_local_var->obj_reportgroup = obj_reportgroup;

    return common_get_report_v1_response_m_payload_local_var;
}


void common_get_report_v1_response_m_payload_free(common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload) {
    if(NULL == common_get_report_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (common_get_report_v1_response_m_payload->obj_reportgroup) {
        common_reportgroup_free(common_get_report_v1_response_m_payload->obj_reportgroup);
        common_get_report_v1_response_m_payload->obj_reportgroup = NULL;
    }
    free(common_get_report_v1_response_m_payload);
}

cJSON *common_get_report_v1_response_m_payload_convertToJSON(common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // common_get_report_v1_response_m_payload->obj_reportgroup
    if (!common_get_report_v1_response_m_payload->obj_reportgroup) {
        goto fail;
    }
    cJSON *obj_reportgroup_local_JSON = common_reportgroup_convertToJSON(common_get_report_v1_response_m_payload->obj_reportgroup);
    if(obj_reportgroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportgroup", obj_reportgroup_local_JSON);
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

common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload_parseFromJSON(cJSON *common_get_report_v1_response_m_payloadJSON){

    common_get_report_v1_response_m_payload_t *common_get_report_v1_response_m_payload_local_var = NULL;

    // define the local variable for common_get_report_v1_response_m_payload->obj_reportgroup
    common_reportgroup_t *obj_reportgroup_local_nonprim = NULL;

    // common_get_report_v1_response_m_payload->obj_reportgroup
    cJSON *obj_reportgroup = cJSON_GetObjectItemCaseSensitive(common_get_report_v1_response_m_payloadJSON, "objReportgroup");
    if (!obj_reportgroup) {
        goto end;
    }

    
    obj_reportgroup_local_nonprim = common_reportgroup_parseFromJSON(obj_reportgroup); //nonprimitive


    common_get_report_v1_response_m_payload_local_var = common_get_report_v1_response_m_payload_create (
        obj_reportgroup_local_nonprim
        );

    return common_get_report_v1_response_m_payload_local_var;
end:
    if (obj_reportgroup_local_nonprim) {
        common_reportgroup_free(obj_reportgroup_local_nonprim);
        obj_reportgroup_local_nonprim = NULL;
    }
    return NULL;

}
