#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfolder_source.h"


char* field_e_ezsignfolder_source_field_e_ezsignfolder_source_ToString(ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source) {
    char *field_e_ezsignfolder_sourceArray[] =  { "NULL", "Normal", "Ezsignbulksend", "Ezsigntemplatepublic" };
    return field_e_ezsignfolder_sourceArray[field_e_ezsignfolder_source];
}

ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source_field_e_ezsignfolder_source_FromString(char* field_e_ezsignfolder_source) {
    int stringToReturn = 0;
    char *field_e_ezsignfolder_sourceArray[] =  { "NULL", "Normal", "Ezsignbulksend", "Ezsigntemplatepublic" };
    size_t sizeofArray = sizeof(field_e_ezsignfolder_sourceArray) / sizeof(field_e_ezsignfolder_sourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfolder_source, field_e_ezsignfolder_sourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfolder_source_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfolder_source", field_e_ezsignfolder_source_field_e_ezsignfolder_source_ToString(field_e_ezsignfolder_source)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source_parseFromJSON(cJSON *field_e_ezsignfolder_sourceJSON) {
    if(!cJSON_IsString(field_e_ezsignfolder_sourceJSON) || (field_e_ezsignfolder_sourceJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignfolder_source_field_e_ezsignfolder_source_FromString(field_e_ezsignfolder_sourceJSON->valuestring);
}
