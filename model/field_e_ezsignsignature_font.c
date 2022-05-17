#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignsignature_font.h"


char* field_e_ezsignsignature_font_field_e_ezsignsignature_font_ToString(ezmax_api_definition__full_field_e_ezsignsignature_font__e field_e_ezsignsignature_font) {
    char *field_e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    return field_e_ezsignsignature_fontArray[field_e_ezsignsignature_font];
}

ezmax_api_definition__full_field_e_ezsignsignature_font__e field_e_ezsignsignature_font_field_e_ezsignsignature_font_FromString(char* field_e_ezsignsignature_font) {
    int stringToReturn = 0;
    char *field_e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    size_t sizeofArray = sizeof(field_e_ezsignsignature_fontArray) / sizeof(field_e_ezsignsignature_fontArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignsignature_font, field_e_ezsignsignature_fontArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignsignature_font_field_e_ezsignsignature_font_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_font__e field_e_ezsignsignature_font) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignsignature_font", field_e_ezsignsignature_font_field_e_ezsignsignature_font_ToString(field_e_ezsignsignature_font)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignsignature_font__e field_e_ezsignsignature_font_field_e_ezsignsignature_font_parseFromJSON(cJSON *field_e_ezsignsignature_fontJSON) {
    ezmax_api_definition__full_field_e_ezsignsignature_font__e *field_e_ezsignsignature_font = NULL;
    ezmax_api_definition__full_field_e_ezsignsignature_font__e field_e_ezsignsignature_fontVariable;
    cJSON *field_e_ezsignsignature_fontVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignsignature_fontJSON, "field_e_ezsignsignature_font");
    if(!cJSON_IsString(field_e_ezsignsignature_fontVar) || (field_e_ezsignsignature_fontVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignsignature_fontVariable = field_e_ezsignsignature_font_field_e_ezsignsignature_font_FromString(field_e_ezsignsignature_fontVar->valuestring);
    return field_e_ezsignsignature_fontVariable;
end:
    return 0;
}
