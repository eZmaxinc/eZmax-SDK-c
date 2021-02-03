#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfolder_sendreminderfrequency.h"


char* field_e_ezsignfolder_sendreminderfrequency_field_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition_field_e_ezsignfolder_sendreminderfrequency__e field_e_ezsignfolder_sendreminderfrequency) {
    char *field_e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    return field_e_ezsignfolder_sendreminderfrequencyArray[field_e_ezsignfolder_sendreminderfrequency];
}

ezmax_api_definition_field_e_ezsignfolder_sendreminderfrequency__e field_e_ezsignfolder_sendreminderfrequency_field_e_ezsignfolder_sendreminderfrequency_FromString(char* field_e_ezsignfolder_sendreminderfrequency) {
    int stringToReturn = 0;
    char *field_e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    size_t sizeofArray = sizeof(field_e_ezsignfolder_sendreminderfrequencyArray) / sizeof(field_e_ezsignfolder_sendreminderfrequencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfolder_sendreminderfrequency, field_e_ezsignfolder_sendreminderfrequencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfolder_sendreminderfrequency_field_e_ezsignfolder_sendreminderfrequency_convertToJSON(ezmax_api_definition_field_e_ezsignfolder_sendreminderfrequency__e field_e_ezsignfolder_sendreminderfrequency) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfolder_sendreminderfrequency", field_e_ezsignfolder_sendreminderfrequency_field_e_ezsignfolder_sendreminderfrequency_ToString(field_e_ezsignfolder_sendreminderfrequency)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition_field_e_ezsignfolder_sendreminderfrequency__e field_e_ezsignfolder_sendreminderfrequency_field_e_ezsignfolder_sendreminderfrequency_parseFromJSON(cJSON *field_e_ezsignfolder_sendreminderfrequencyJSON) {
    ezmax_api_definition_field_e_ezsignfolder_sendreminderfrequency__e *field_e_ezsignfolder_sendreminderfrequency = NULL;
    ezmax_api_definition_field_e_ezsignfolder_sendreminderfrequency__e field_e_ezsignfolder_sendreminderfrequencyVariable;
    cJSON *field_e_ezsignfolder_sendreminderfrequencyVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfolder_sendreminderfrequencyJSON, "field_e_ezsignfolder_sendreminderfrequency");
    if(!cJSON_IsString(field_e_ezsignfolder_sendreminderfrequencyVar) || (field_e_ezsignfolder_sendreminderfrequencyVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfolder_sendreminderfrequencyVariable = field_e_ezsignfolder_sendreminderfrequency_field_e_ezsignfolder_sendreminderfrequency_FromString(field_e_ezsignfolder_sendreminderfrequencyVar->valuestring);
    return field_e_ezsignfolder_sendreminderfrequencyVariable;
end:
    return 0;
}
