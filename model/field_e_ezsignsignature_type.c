#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignsignature_type.h"


char* field_e_ezsignsignature_type_field_e_ezsignsignature_type_ToString(ezmax_api_definition__full_field_e_ezsignsignature_type__e field_e_ezsignsignature_type) {
    char *field_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation" };
    return field_e_ezsignsignature_typeArray[field_e_ezsignsignature_type];
}

ezmax_api_definition__full_field_e_ezsignsignature_type__e field_e_ezsignsignature_type_field_e_ezsignsignature_type_FromString(char* field_e_ezsignsignature_type) {
    int stringToReturn = 0;
    char *field_e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "NameReason", "Attachments", "AttachmentsConfirmation", "FieldText", "FieldTextarea", "Consultation" };
    size_t sizeofArray = sizeof(field_e_ezsignsignature_typeArray) / sizeof(field_e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignsignature_type, field_e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignsignature_type_field_e_ezsignsignature_type_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_type__e field_e_ezsignsignature_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignsignature_type", field_e_ezsignsignature_type_field_e_ezsignsignature_type_ToString(field_e_ezsignsignature_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignsignature_type__e field_e_ezsignsignature_type_field_e_ezsignsignature_type_parseFromJSON(cJSON *field_e_ezsignsignature_typeJSON) {
    ezmax_api_definition__full_field_e_ezsignsignature_type__e *field_e_ezsignsignature_type = NULL;
    ezmax_api_definition__full_field_e_ezsignsignature_type__e field_e_ezsignsignature_typeVariable;
    cJSON *field_e_ezsignsignature_typeVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignsignature_typeJSON, "field_e_ezsignsignature_type");
    if(!cJSON_IsString(field_e_ezsignsignature_typeVar) || (field_e_ezsignsignature_typeVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignsignature_typeVariable = field_e_ezsignsignature_type_field_e_ezsignsignature_type_FromString(field_e_ezsignsignature_typeVar->valuestring);
    return field_e_ezsignsignature_typeVariable;
end:
    return 0;
}
