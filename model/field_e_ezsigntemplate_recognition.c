#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplate_recognition.h"


char* field_e_ezsigntemplate_recognition_field_e_ezsigntemplate_recognition_ToString(ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition) {
    char *field_e_ezsigntemplate_recognitionArray[] =  { "NULL", "No", "Filename", "Content" };
    return field_e_ezsigntemplate_recognitionArray[field_e_ezsigntemplate_recognition];
}

ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition_field_e_ezsigntemplate_recognition_FromString(char* field_e_ezsigntemplate_recognition) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplate_recognitionArray[] =  { "NULL", "No", "Filename", "Content" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplate_recognitionArray) / sizeof(field_e_ezsigntemplate_recognitionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplate_recognition, field_e_ezsigntemplate_recognitionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplate_recognition_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplate_recognition", field_e_ezsigntemplate_recognition_field_e_ezsigntemplate_recognition_ToString(field_e_ezsigntemplate_recognition)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplate_recognition__e field_e_ezsigntemplate_recognition_parseFromJSON(cJSON *field_e_ezsigntemplate_recognitionJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplate_recognitionJSON) || (field_e_ezsigntemplate_recognitionJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplate_recognition_field_e_ezsigntemplate_recognition_FromString(field_e_ezsigntemplate_recognitionJSON->valuestring);
}
