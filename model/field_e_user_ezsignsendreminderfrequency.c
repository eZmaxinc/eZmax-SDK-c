#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_user_ezsignsendreminderfrequency.h"


char* field_e_user_ezsignsendreminderfrequency_field_e_user_ezsignsendreminderfrequency_ToString(ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e field_e_user_ezsignsendreminderfrequency) {
    char *field_e_user_ezsignsendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    return field_e_user_ezsignsendreminderfrequencyArray[field_e_user_ezsignsendreminderfrequency];
}

ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e field_e_user_ezsignsendreminderfrequency_field_e_user_ezsignsendreminderfrequency_FromString(char* field_e_user_ezsignsendreminderfrequency) {
    int stringToReturn = 0;
    char *field_e_user_ezsignsendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    size_t sizeofArray = sizeof(field_e_user_ezsignsendreminderfrequencyArray) / sizeof(field_e_user_ezsignsendreminderfrequencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_user_ezsignsendreminderfrequency, field_e_user_ezsignsendreminderfrequencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_user_ezsignsendreminderfrequency_convertToJSON(ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e field_e_user_ezsignsendreminderfrequency) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_user_ezsignsendreminderfrequency", field_e_user_ezsignsendreminderfrequency_field_e_user_ezsignsendreminderfrequency_ToString(field_e_user_ezsignsendreminderfrequency)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e field_e_user_ezsignsendreminderfrequency_parseFromJSON(cJSON *field_e_user_ezsignsendreminderfrequencyJSON) {
    if(!cJSON_IsString(field_e_user_ezsignsendreminderfrequencyJSON) || (field_e_user_ezsignsendreminderfrequencyJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_user_ezsignsendreminderfrequency_field_e_user_ezsignsendreminderfrequency_FromString(field_e_user_ezsignsendreminderfrequencyJSON->valuestring);
}
