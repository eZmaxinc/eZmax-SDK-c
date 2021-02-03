#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_get_autocomplete_v1_response_m_payload.h"



common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload_create(
    char *group,
    char *id,
    char *option
    ) {
    common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload_local_var = malloc(sizeof(common_get_autocomplete_v1_response_m_payload_t));
    if (!common_get_autocomplete_v1_response_m_payload_local_var) {
        return NULL;
    }
    common_get_autocomplete_v1_response_m_payload_local_var->group = group;
    common_get_autocomplete_v1_response_m_payload_local_var->id = id;
    common_get_autocomplete_v1_response_m_payload_local_var->option = option;

    return common_get_autocomplete_v1_response_m_payload_local_var;
}


void common_get_autocomplete_v1_response_m_payload_free(common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload) {
    if(NULL == common_get_autocomplete_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (common_get_autocomplete_v1_response_m_payload->group) {
        free(common_get_autocomplete_v1_response_m_payload->group);
        common_get_autocomplete_v1_response_m_payload->group = NULL;
    }
    if (common_get_autocomplete_v1_response_m_payload->id) {
        free(common_get_autocomplete_v1_response_m_payload->id);
        common_get_autocomplete_v1_response_m_payload->id = NULL;
    }
    if (common_get_autocomplete_v1_response_m_payload->option) {
        free(common_get_autocomplete_v1_response_m_payload->option);
        common_get_autocomplete_v1_response_m_payload->option = NULL;
    }
    free(common_get_autocomplete_v1_response_m_payload);
}

cJSON *common_get_autocomplete_v1_response_m_payload_convertToJSON(common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // common_get_autocomplete_v1_response_m_payload->group
    if (!common_get_autocomplete_v1_response_m_payload->group) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "group", common_get_autocomplete_v1_response_m_payload->group) == NULL) {
    goto fail; //String
    }


    // common_get_autocomplete_v1_response_m_payload->id
    if (!common_get_autocomplete_v1_response_m_payload->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", common_get_autocomplete_v1_response_m_payload->id) == NULL) {
    goto fail; //String
    }


    // common_get_autocomplete_v1_response_m_payload->option
    if (!common_get_autocomplete_v1_response_m_payload->option) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "option", common_get_autocomplete_v1_response_m_payload->option) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload_parseFromJSON(cJSON *common_get_autocomplete_v1_response_m_payloadJSON){

    common_get_autocomplete_v1_response_m_payload_t *common_get_autocomplete_v1_response_m_payload_local_var = NULL;

    // common_get_autocomplete_v1_response_m_payload->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(common_get_autocomplete_v1_response_m_payloadJSON, "group");
    if (!group) {
        goto end;
    }

    
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }

    // common_get_autocomplete_v1_response_m_payload->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(common_get_autocomplete_v1_response_m_payloadJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // common_get_autocomplete_v1_response_m_payload->option
    cJSON *option = cJSON_GetObjectItemCaseSensitive(common_get_autocomplete_v1_response_m_payloadJSON, "option");
    if (!option) {
        goto end;
    }

    
    if(!cJSON_IsString(option))
    {
    goto end; //String
    }


    common_get_autocomplete_v1_response_m_payload_local_var = common_get_autocomplete_v1_response_m_payload_create (
        strdup(group->valuestring),
        strdup(id->valuestring),
        strdup(option->valuestring)
        );

    return common_get_autocomplete_v1_response_m_payload_local_var;
end:
    return NULL;

}
