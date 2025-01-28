#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignsignature_tooltipposition.h"


char* field_e_ezsignsignature_tooltipposition_field_e_ezsignsignature_tooltipposition_ToString(ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e field_e_ezsignsignature_tooltipposition) {
    char *field_e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    return field_e_ezsignsignature_tooltippositionArray[field_e_ezsignsignature_tooltipposition];
}

ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e field_e_ezsignsignature_tooltipposition_field_e_ezsignsignature_tooltipposition_FromString(char* field_e_ezsignsignature_tooltipposition) {
    int stringToReturn = 0;
    char *field_e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(field_e_ezsignsignature_tooltippositionArray) / sizeof(field_e_ezsignsignature_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignsignature_tooltipposition, field_e_ezsignsignature_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignsignature_tooltipposition_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e field_e_ezsignsignature_tooltipposition) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignsignature_tooltipposition", field_e_ezsignsignature_tooltipposition_field_e_ezsignsignature_tooltipposition_ToString(field_e_ezsignsignature_tooltipposition)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e field_e_ezsignsignature_tooltipposition_parseFromJSON(cJSON *field_e_ezsignsignature_tooltippositionJSON) {
    if(!cJSON_IsString(field_e_ezsignsignature_tooltippositionJSON) || (field_e_ezsignsignature_tooltippositionJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignsignature_tooltipposition_field_e_ezsignsignature_tooltipposition_FromString(field_e_ezsignsignature_tooltippositionJSON->valuestring);
}
