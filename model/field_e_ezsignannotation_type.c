#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignannotation_type.h"


char* field_e_ezsignannotation_type_field_e_ezsignannotation_type_ToString(ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type) {
    char *field_e_ezsignannotation_typeArray[] =  { "NULL", "StrikethroughBlock", "StrikethroughLine", "Text" };
    return field_e_ezsignannotation_typeArray[field_e_ezsignannotation_type];
}

ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type_field_e_ezsignannotation_type_FromString(char* field_e_ezsignannotation_type) {
    int stringToReturn = 0;
    char *field_e_ezsignannotation_typeArray[] =  { "NULL", "StrikethroughBlock", "StrikethroughLine", "Text" };
    size_t sizeofArray = sizeof(field_e_ezsignannotation_typeArray) / sizeof(field_e_ezsignannotation_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignannotation_type, field_e_ezsignannotation_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignannotation_type_field_e_ezsignannotation_type_convertToJSON(ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignannotation_type", field_e_ezsignannotation_type_field_e_ezsignannotation_type_ToString(field_e_ezsignannotation_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type_field_e_ezsignannotation_type_parseFromJSON(cJSON *field_e_ezsignannotation_typeJSON) {
    ezmax_api_definition__full_field_e_ezsignannotation_type__e *field_e_ezsignannotation_type = NULL;
    ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_typeVariable;
    cJSON *field_e_ezsignannotation_typeVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignannotation_typeJSON, "field_e_ezsignannotation_type");
    if(!cJSON_IsString(field_e_ezsignannotation_typeVar) || (field_e_ezsignannotation_typeVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignannotation_typeVariable = field_e_ezsignannotation_type_field_e_ezsignannotation_type_FromString(field_e_ezsignannotation_typeVar->valuestring);
    return field_e_ezsignannotation_typeVariable;
end:
    return 0;
}
