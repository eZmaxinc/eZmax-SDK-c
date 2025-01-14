#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfolder_documentdependency.h"


char* field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_ToString(ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency) {
    char *field_e_ezsignfolder_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    return field_e_ezsignfolder_documentdependencyArray[field_e_ezsignfolder_documentdependency];
}

ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_FromString(char* field_e_ezsignfolder_documentdependency) {
    int stringToReturn = 0;
    char *field_e_ezsignfolder_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    size_t sizeofArray = sizeof(field_e_ezsignfolder_documentdependencyArray) / sizeof(field_e_ezsignfolder_documentdependencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfolder_documentdependency, field_e_ezsignfolder_documentdependencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfolder_documentdependency", field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_ToString(field_e_ezsignfolder_documentdependency)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_parseFromJSON(cJSON *field_e_ezsignfolder_documentdependencyJSON) {
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e *field_e_ezsignfolder_documentdependency = NULL;
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependencyVariable;
    cJSON *field_e_ezsignfolder_documentdependencyVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfolder_documentdependencyJSON, "field_e_ezsignfolder_documentdependency");
    if(!cJSON_IsString(field_e_ezsignfolder_documentdependencyVar) || (field_e_ezsignfolder_documentdependencyVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfolder_documentdependencyVariable = field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_FromString(field_e_ezsignfolder_documentdependencyVar->valuestring);
    return field_e_ezsignfolder_documentdependencyVariable;
end:
    return 0;
}
