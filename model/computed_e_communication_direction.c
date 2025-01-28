#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "computed_e_communication_direction.h"


char* computed_e_communication_direction_computed_e_communication_direction_ToString(ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction) {
    char *computed_e_communication_directionArray[] =  { "NULL", "Outbound", "Inbound" };
    return computed_e_communication_directionArray[computed_e_communication_direction];
}

ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction_computed_e_communication_direction_FromString(char* computed_e_communication_direction) {
    int stringToReturn = 0;
    char *computed_e_communication_directionArray[] =  { "NULL", "Outbound", "Inbound" };
    size_t sizeofArray = sizeof(computed_e_communication_directionArray) / sizeof(computed_e_communication_directionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(computed_e_communication_direction, computed_e_communication_directionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *computed_e_communication_direction_convertToJSON(ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "computed_e_communication_direction", computed_e_communication_direction_computed_e_communication_direction_ToString(computed_e_communication_direction)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction_parseFromJSON(cJSON *computed_e_communication_directionJSON) {
    if(!cJSON_IsString(computed_e_communication_directionJSON) || (computed_e_communication_directionJSON->valuestring == NULL)) {
        return 0;
    }
    return computed_e_communication_direction_computed_e_communication_direction_FromString(computed_e_communication_directionJSON->valuestring);
}
