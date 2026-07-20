#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_agent_schedule.h"


char* field_e_agent_schedule_field_e_agent_schedule_ToString(ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule) {
    char *field_e_agent_scheduleArray[] =  { "NULL", "Full-time", "Part-time" };
    return field_e_agent_scheduleArray[field_e_agent_schedule];
}

ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule_field_e_agent_schedule_FromString(char* field_e_agent_schedule) {
    int stringToReturn = 0;
    char *field_e_agent_scheduleArray[] =  { "NULL", "Full-time", "Part-time" };
    size_t sizeofArray = sizeof(field_e_agent_scheduleArray) / sizeof(field_e_agent_scheduleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_agent_schedule, field_e_agent_scheduleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_agent_schedule_convertToJSON(ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_agent_schedule", field_e_agent_schedule_field_e_agent_schedule_ToString(field_e_agent_schedule)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule_parseFromJSON(cJSON *field_e_agent_scheduleJSON) {
    if(!cJSON_IsString(field_e_agent_scheduleJSON) || (field_e_agent_scheduleJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_agent_schedule_field_e_agent_schedule_FromString(field_e_agent_scheduleJSON->valuestring);
}
