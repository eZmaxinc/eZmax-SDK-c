#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_branding_logointerface.h"


char* field_e_branding_logointerface_field_e_branding_logointerface_ToString(ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface) {
    char *field_e_branding_logointerfaceArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    return field_e_branding_logointerfaceArray[field_e_branding_logointerface];
}

ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface_field_e_branding_logointerface_FromString(char* field_e_branding_logointerface) {
    int stringToReturn = 0;
    char *field_e_branding_logointerfaceArray[] =  { "NULL", "Default", "JPEG", "PNG" };
    size_t sizeofArray = sizeof(field_e_branding_logointerfaceArray) / sizeof(field_e_branding_logointerfaceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_branding_logointerface, field_e_branding_logointerfaceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_branding_logointerface_field_e_branding_logointerface_convertToJSON(ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_branding_logointerface", field_e_branding_logointerface_field_e_branding_logointerface_ToString(field_e_branding_logointerface)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface_field_e_branding_logointerface_parseFromJSON(cJSON *field_e_branding_logointerfaceJSON) {
    ezmax_api_definition__full_field_e_branding_logointerface__e *field_e_branding_logointerface = NULL;
    ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerfaceVariable;
    cJSON *field_e_branding_logointerfaceVar = cJSON_GetObjectItemCaseSensitive(field_e_branding_logointerfaceJSON, "field_e_branding_logointerface");
    if(!cJSON_IsString(field_e_branding_logointerfaceVar) || (field_e_branding_logointerfaceVar->valuestring == NULL)){
        goto end;
    }
    field_e_branding_logointerfaceVariable = field_e_branding_logointerface_field_e_branding_logointerface_FromString(field_e_branding_logointerfaceVar->valuestring);
    return field_e_branding_logointerfaceVariable;
end:
    return 0;
}
