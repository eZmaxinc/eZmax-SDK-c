#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatesignature_positioning.h"


char* field_e_ezsigntemplatesignature_positioning_field_e_ezsigntemplatesignature_positioning_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e field_e_ezsigntemplatesignature_positioning) {
    char *field_e_ezsigntemplatesignature_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    return field_e_ezsigntemplatesignature_positioningArray[field_e_ezsigntemplatesignature_positioning];
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e field_e_ezsigntemplatesignature_positioning_field_e_ezsigntemplatesignature_positioning_FromString(char* field_e_ezsigntemplatesignature_positioning) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatesignature_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatesignature_positioningArray) / sizeof(field_e_ezsigntemplatesignature_positioningArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatesignature_positioning, field_e_ezsigntemplatesignature_positioningArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatesignature_positioning_field_e_ezsigntemplatesignature_positioning_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e field_e_ezsigntemplatesignature_positioning) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatesignature_positioning", field_e_ezsigntemplatesignature_positioning_field_e_ezsigntemplatesignature_positioning_ToString(field_e_ezsigntemplatesignature_positioning)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e field_e_ezsigntemplatesignature_positioning_field_e_ezsigntemplatesignature_positioning_parseFromJSON(cJSON *field_e_ezsigntemplatesignature_positioningJSON) {
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e *field_e_ezsigntemplatesignature_positioning = NULL;
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e field_e_ezsigntemplatesignature_positioningVariable;
    cJSON *field_e_ezsigntemplatesignature_positioningVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsigntemplatesignature_positioningJSON, "field_e_ezsigntemplatesignature_positioning");
    if(!cJSON_IsString(field_e_ezsigntemplatesignature_positioningVar) || (field_e_ezsigntemplatesignature_positioningVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsigntemplatesignature_positioningVariable = field_e_ezsigntemplatesignature_positioning_field_e_ezsigntemplatesignature_positioning_FromString(field_e_ezsigntemplatesignature_positioningVar->valuestring);
    return field_e_ezsigntemplatesignature_positioningVariable;
end:
    return 0;
}
