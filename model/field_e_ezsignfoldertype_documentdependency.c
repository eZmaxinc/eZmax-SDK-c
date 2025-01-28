#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_documentdependency.h"


char* field_e_ezsignfoldertype_documentdependency_field_e_ezsignfoldertype_documentdependency_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e field_e_ezsignfoldertype_documentdependency) {
    char *field_e_ezsignfoldertype_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    return field_e_ezsignfoldertype_documentdependencyArray[field_e_ezsignfoldertype_documentdependency];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e field_e_ezsignfoldertype_documentdependency_field_e_ezsignfoldertype_documentdependency_FromString(char* field_e_ezsignfoldertype_documentdependency) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_documentdependencyArray) / sizeof(field_e_ezsignfoldertype_documentdependencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_documentdependency, field_e_ezsignfoldertype_documentdependencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_documentdependency_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e field_e_ezsignfoldertype_documentdependency) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_documentdependency", field_e_ezsignfoldertype_documentdependency_field_e_ezsignfoldertype_documentdependency_ToString(field_e_ezsignfoldertype_documentdependency)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e field_e_ezsignfoldertype_documentdependency_parseFromJSON(cJSON *field_e_ezsignfoldertype_documentdependencyJSON) {
    if(!cJSON_IsString(field_e_ezsignfoldertype_documentdependencyJSON) || (field_e_ezsignfoldertype_documentdependencyJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignfoldertype_documentdependency_field_e_ezsignfoldertype_documentdependency_FromString(field_e_ezsignfoldertype_documentdependencyJSON->valuestring);
}
