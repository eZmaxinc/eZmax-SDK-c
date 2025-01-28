#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_activesession_weekdaystart.h"


char* field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_ToString(ezmax_api_definition__full_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart) {
    char *field_e_activesession_weekdaystartArray[] =  { "NULL", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return field_e_activesession_weekdaystartArray[field_e_activesession_weekdaystart];
}

ezmax_api_definition__full_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_FromString(char* field_e_activesession_weekdaystart) {
    int stringToReturn = 0;
    char *field_e_activesession_weekdaystartArray[] =  { "NULL", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    size_t sizeofArray = sizeof(field_e_activesession_weekdaystartArray) / sizeof(field_e_activesession_weekdaystartArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_activesession_weekdaystart, field_e_activesession_weekdaystartArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_activesession_weekdaystart_convertToJSON(ezmax_api_definition__full_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_activesession_weekdaystart", field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_ToString(field_e_activesession_weekdaystart)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart_parseFromJSON(cJSON *field_e_activesession_weekdaystartJSON) {
    if(!cJSON_IsString(field_e_activesession_weekdaystartJSON) || (field_e_activesession_weekdaystartJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_FromString(field_e_activesession_weekdaystartJSON->valuestring);
}
