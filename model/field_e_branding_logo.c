#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_branding_logo.h"


char* field_e_branding_logo_field_e_branding_logo_ToString(ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo) {
    char *field_e_branding_logoArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    return field_e_branding_logoArray[field_e_branding_logo];
}

ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo_field_e_branding_logo_FromString(char* field_e_branding_logo) {
    int stringToReturn = 0;
    char *field_e_branding_logoArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    size_t sizeofArray = sizeof(field_e_branding_logoArray) / sizeof(field_e_branding_logoArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_branding_logo, field_e_branding_logoArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_branding_logo_field_e_branding_logo_convertToJSON(ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_branding_logo", field_e_branding_logo_field_e_branding_logo_ToString(field_e_branding_logo)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo_field_e_branding_logo_parseFromJSON(cJSON *field_e_branding_logoJSON) {
    ezmax_api_definition__full_field_e_branding_logo__e *field_e_branding_logo = NULL;
    ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logoVariable;
    cJSON *field_e_branding_logoVar = cJSON_GetObjectItemCaseSensitive(field_e_branding_logoJSON, "field_e_branding_logo");
    if(!cJSON_IsString(field_e_branding_logoVar) || (field_e_branding_logoVar->valuestring == NULL)){
        goto end;
    }
    field_e_branding_logoVariable = field_e_branding_logo_field_e_branding_logo_FromString(field_e_branding_logoVar->valuestring);
    return field_e_branding_logoVariable;
end:
    return 0;
}
