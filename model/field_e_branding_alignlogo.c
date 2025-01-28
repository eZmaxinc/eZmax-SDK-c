#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_branding_alignlogo.h"


char* field_e_branding_alignlogo_field_e_branding_alignlogo_ToString(ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo) {
    char *field_e_branding_alignlogoArray[] =  { "NULL", "Center", "Left", "Right" };
    return field_e_branding_alignlogoArray[field_e_branding_alignlogo];
}

ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo_field_e_branding_alignlogo_FromString(char* field_e_branding_alignlogo) {
    int stringToReturn = 0;
    char *field_e_branding_alignlogoArray[] =  { "NULL", "Center", "Left", "Right" };
    size_t sizeofArray = sizeof(field_e_branding_alignlogoArray) / sizeof(field_e_branding_alignlogoArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_branding_alignlogo, field_e_branding_alignlogoArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_branding_alignlogo_convertToJSON(ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_branding_alignlogo", field_e_branding_alignlogo_field_e_branding_alignlogo_ToString(field_e_branding_alignlogo)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo_parseFromJSON(cJSON *field_e_branding_alignlogoJSON) {
    if(!cJSON_IsString(field_e_branding_alignlogoJSON) || (field_e_branding_alignlogoJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_branding_alignlogo_field_e_branding_alignlogo_FromString(field_e_branding_alignlogoJSON->valuestring);
}
