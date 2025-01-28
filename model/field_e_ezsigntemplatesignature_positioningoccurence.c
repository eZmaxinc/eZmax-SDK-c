#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatesignature_positioningoccurence.h"


char* field_e_ezsigntemplatesignature_positioningoccurence_field_e_ezsigntemplatesignature_positioningoccurence_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e field_e_ezsigntemplatesignature_positioningoccurence) {
    char *field_e_ezsigntemplatesignature_positioningoccurenceArray[] =  { "NULL", "All", "First", "Last" };
    return field_e_ezsigntemplatesignature_positioningoccurenceArray[field_e_ezsigntemplatesignature_positioningoccurence];
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e field_e_ezsigntemplatesignature_positioningoccurence_field_e_ezsigntemplatesignature_positioningoccurence_FromString(char* field_e_ezsigntemplatesignature_positioningoccurence) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatesignature_positioningoccurenceArray[] =  { "NULL", "All", "First", "Last" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatesignature_positioningoccurenceArray) / sizeof(field_e_ezsigntemplatesignature_positioningoccurenceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatesignature_positioningoccurence, field_e_ezsigntemplatesignature_positioningoccurenceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatesignature_positioningoccurence_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e field_e_ezsigntemplatesignature_positioningoccurence) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatesignature_positioningoccurence", field_e_ezsigntemplatesignature_positioningoccurence_field_e_ezsigntemplatesignature_positioningoccurence_ToString(field_e_ezsigntemplatesignature_positioningoccurence)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e field_e_ezsigntemplatesignature_positioningoccurence_parseFromJSON(cJSON *field_e_ezsigntemplatesignature_positioningoccurenceJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplatesignature_positioningoccurenceJSON) || (field_e_ezsigntemplatesignature_positioningoccurenceJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplatesignature_positioningoccurence_field_e_ezsigntemplatesignature_positioningoccurence_FromString(field_e_ezsigntemplatesignature_positioningoccurenceJSON->valuestring);
}
