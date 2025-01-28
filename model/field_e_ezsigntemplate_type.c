#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplate_type.h"


char* field_e_ezsigntemplate_type_field_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type) {
    char *field_e_ezsigntemplate_typeArray[] =  { "NULL", "User", "Usergroup", "Company", "Ezsignfoldertype" };
    return field_e_ezsigntemplate_typeArray[field_e_ezsigntemplate_type];
}

ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type_field_e_ezsigntemplate_type_FromString(char* field_e_ezsigntemplate_type) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplate_typeArray[] =  { "NULL", "User", "Usergroup", "Company", "Ezsignfoldertype" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplate_typeArray) / sizeof(field_e_ezsigntemplate_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplate_type, field_e_ezsigntemplate_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplate_type_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplate_type", field_e_ezsigntemplate_type_field_e_ezsigntemplate_type_ToString(field_e_ezsigntemplate_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type_parseFromJSON(cJSON *field_e_ezsigntemplate_typeJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplate_typeJSON) || (field_e_ezsigntemplate_typeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplate_type_field_e_ezsigntemplate_type_FromString(field_e_ezsigntemplate_typeJSON->valuestring);
}
