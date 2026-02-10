#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateannotation_verticalalignment.h"


char* field_e_ezsigntemplateannotation_verticalalignment_field_e_ezsigntemplateannotation_verticalalignment_ToString(ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e field_e_ezsigntemplateannotation_verticalalignment) {
    char *field_e_ezsigntemplateannotation_verticalalignmentArray[] =  { "NULL", "Bottom", "Middle", "Top" };
    return field_e_ezsigntemplateannotation_verticalalignmentArray[field_e_ezsigntemplateannotation_verticalalignment];
}

ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e field_e_ezsigntemplateannotation_verticalalignment_field_e_ezsigntemplateannotation_verticalalignment_FromString(char* field_e_ezsigntemplateannotation_verticalalignment) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateannotation_verticalalignmentArray[] =  { "NULL", "Bottom", "Middle", "Top" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateannotation_verticalalignmentArray) / sizeof(field_e_ezsigntemplateannotation_verticalalignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateannotation_verticalalignment, field_e_ezsigntemplateannotation_verticalalignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateannotation_verticalalignment_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e field_e_ezsigntemplateannotation_verticalalignment) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateannotation_verticalalignment", field_e_ezsigntemplateannotation_verticalalignment_field_e_ezsigntemplateannotation_verticalalignment_ToString(field_e_ezsigntemplateannotation_verticalalignment)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateannotation_verticalalignment__e field_e_ezsigntemplateannotation_verticalalignment_parseFromJSON(cJSON *field_e_ezsigntemplateannotation_verticalalignmentJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplateannotation_verticalalignmentJSON) || (field_e_ezsigntemplateannotation_verticalalignmentJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplateannotation_verticalalignment_field_e_ezsigntemplateannotation_verticalalignment_FromString(field_e_ezsigntemplateannotation_verticalalignmentJSON->valuestring);
}
