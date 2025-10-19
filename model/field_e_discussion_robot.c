#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_discussion_robot.h"


char* field_e_discussion_robot_field_e_discussion_robot_ToString(ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot) {
    char *field_e_discussion_robotArray[] =  { "NULL", "Advanced", "Normal", "Support" };
    return field_e_discussion_robotArray[field_e_discussion_robot];
}

ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot_field_e_discussion_robot_FromString(char* field_e_discussion_robot) {
    int stringToReturn = 0;
    char *field_e_discussion_robotArray[] =  { "NULL", "Advanced", "Normal", "Support" };
    size_t sizeofArray = sizeof(field_e_discussion_robotArray) / sizeof(field_e_discussion_robotArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_discussion_robot, field_e_discussion_robotArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_discussion_robot_convertToJSON(ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_discussion_robot", field_e_discussion_robot_field_e_discussion_robot_ToString(field_e_discussion_robot)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot_parseFromJSON(cJSON *field_e_discussion_robotJSON) {
    if(!cJSON_IsString(field_e_discussion_robotJSON) || (field_e_discussion_robotJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_discussion_robot_field_e_discussion_robot_FromString(field_e_discussion_robotJSON->valuestring);
}
