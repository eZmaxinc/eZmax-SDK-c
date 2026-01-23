#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignsignature_signaturepad.h"


char* field_e_ezsignsignature_signaturepad_field_e_ezsignsignature_signaturepad_ToString(ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad) {
    char *field_e_ezsignsignature_signaturepadArray[] =  { "NULL", "Topaz" };
    return field_e_ezsignsignature_signaturepadArray[field_e_ezsignsignature_signaturepad];
}

ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad_field_e_ezsignsignature_signaturepad_FromString(char* field_e_ezsignsignature_signaturepad) {
    int stringToReturn = 0;
    char *field_e_ezsignsignature_signaturepadArray[] =  { "NULL", "Topaz" };
    size_t sizeofArray = sizeof(field_e_ezsignsignature_signaturepadArray) / sizeof(field_e_ezsignsignature_signaturepadArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignsignature_signaturepad, field_e_ezsignsignature_signaturepadArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignsignature_signaturepad_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignsignature_signaturepad", field_e_ezsignsignature_signaturepad_field_e_ezsignsignature_signaturepad_ToString(field_e_ezsignsignature_signaturepad)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad_parseFromJSON(cJSON *field_e_ezsignsignature_signaturepadJSON) {
    if(!cJSON_IsString(field_e_ezsignsignature_signaturepadJSON) || (field_e_ezsignsignature_signaturepadJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignsignature_signaturepad_field_e_ezsignsignature_signaturepad_FromString(field_e_ezsignsignature_signaturepadJSON->valuestring);
}
