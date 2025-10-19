#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignbulksend_ezsignformfieldorder.h"


char* field_e_ezsignbulksend_ezsignformfieldorder_field_e_ezsignbulksend_ezsignformfieldorder_ToString(ezmax_api_definition__full_field_e_ezsignbulksend_ezsignformfieldorder__e field_e_ezsignbulksend_ezsignformfieldorder) {
    char *field_e_ezsignbulksend_ezsignformfieldorderArray[] =  { "NULL", "Position", "Name" };
    return field_e_ezsignbulksend_ezsignformfieldorderArray[field_e_ezsignbulksend_ezsignformfieldorder];
}

ezmax_api_definition__full_field_e_ezsignbulksend_ezsignformfieldorder__e field_e_ezsignbulksend_ezsignformfieldorder_field_e_ezsignbulksend_ezsignformfieldorder_FromString(char* field_e_ezsignbulksend_ezsignformfieldorder) {
    int stringToReturn = 0;
    char *field_e_ezsignbulksend_ezsignformfieldorderArray[] =  { "NULL", "Position", "Name" };
    size_t sizeofArray = sizeof(field_e_ezsignbulksend_ezsignformfieldorderArray) / sizeof(field_e_ezsignbulksend_ezsignformfieldorderArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignbulksend_ezsignformfieldorder, field_e_ezsignbulksend_ezsignformfieldorderArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignbulksend_ezsignformfieldorder_convertToJSON(ezmax_api_definition__full_field_e_ezsignbulksend_ezsignformfieldorder__e field_e_ezsignbulksend_ezsignformfieldorder) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignbulksend_ezsignformfieldorder", field_e_ezsignbulksend_ezsignformfieldorder_field_e_ezsignbulksend_ezsignformfieldorder_ToString(field_e_ezsignbulksend_ezsignformfieldorder)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignbulksend_ezsignformfieldorder__e field_e_ezsignbulksend_ezsignformfieldorder_parseFromJSON(cJSON *field_e_ezsignbulksend_ezsignformfieldorderJSON) {
    if(!cJSON_IsString(field_e_ezsignbulksend_ezsignformfieldorderJSON) || (field_e_ezsignbulksend_ezsignformfieldorderJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignbulksend_ezsignformfieldorder_field_e_ezsignbulksend_ezsignformfieldorder_FromString(field_e_ezsignbulksend_ezsignformfieldorderJSON->valuestring);
}
