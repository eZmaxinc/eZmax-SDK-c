#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_documentmerge.h"


char* field_e_ezsignfoldertype_documentmerge_field_e_ezsignfoldertype_documentmerge_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e field_e_ezsignfoldertype_documentmerge) {
    char *field_e_ezsignfoldertype_documentmergeArray[] =  { "NULL", "No", "YesWithWatermark", "Yes" };
    return field_e_ezsignfoldertype_documentmergeArray[field_e_ezsignfoldertype_documentmerge];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e field_e_ezsignfoldertype_documentmerge_field_e_ezsignfoldertype_documentmerge_FromString(char* field_e_ezsignfoldertype_documentmerge) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_documentmergeArray[] =  { "NULL", "No", "YesWithWatermark", "Yes" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_documentmergeArray) / sizeof(field_e_ezsignfoldertype_documentmergeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_documentmerge, field_e_ezsignfoldertype_documentmergeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_documentmerge_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e field_e_ezsignfoldertype_documentmerge) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_documentmerge", field_e_ezsignfoldertype_documentmerge_field_e_ezsignfoldertype_documentmerge_ToString(field_e_ezsignfoldertype_documentmerge)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e field_e_ezsignfoldertype_documentmerge_parseFromJSON(cJSON *field_e_ezsignfoldertype_documentmergeJSON) {
    if(!cJSON_IsString(field_e_ezsignfoldertype_documentmergeJSON) || (field_e_ezsignfoldertype_documentmergeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignfoldertype_documentmerge_field_e_ezsignfoldertype_documentmerge_FromString(field_e_ezsignfoldertype_documentmergeJSON->valuestring);
}
