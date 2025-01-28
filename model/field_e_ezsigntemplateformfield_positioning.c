#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateformfield_positioning.h"


char* field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_ToString(ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning) {
    char *field_e_ezsigntemplateformfield_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    return field_e_ezsigntemplateformfield_positioningArray[field_e_ezsigntemplateformfield_positioning];
}

ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_FromString(char* field_e_ezsigntemplateformfield_positioning) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateformfield_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateformfield_positioningArray) / sizeof(field_e_ezsigntemplateformfield_positioningArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateformfield_positioning, field_e_ezsigntemplateformfield_positioningArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateformfield_positioning_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateformfield_positioning", field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_ToString(field_e_ezsigntemplateformfield_positioning)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning_parseFromJSON(cJSON *field_e_ezsigntemplateformfield_positioningJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplateformfield_positioningJSON) || (field_e_ezsigntemplateformfield_positioningJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_FromString(field_e_ezsigntemplateformfield_positioningJSON->valuestring);
}
