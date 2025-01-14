#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "computed_e_ezsignfolder_access.h"


char* computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_ToString(ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access) {
    char *computed_e_ezsignfolder_accessArray[] =  { "NULL", "Signer", "Read", "Modify", "Full" };
    return computed_e_ezsignfolder_accessArray[computed_e_ezsignfolder_access];
}

ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_FromString(char* computed_e_ezsignfolder_access) {
    int stringToReturn = 0;
    char *computed_e_ezsignfolder_accessArray[] =  { "NULL", "Signer", "Read", "Modify", "Full" };
    size_t sizeofArray = sizeof(computed_e_ezsignfolder_accessArray) / sizeof(computed_e_ezsignfolder_accessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(computed_e_ezsignfolder_access, computed_e_ezsignfolder_accessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_convertToJSON(ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "computed_e_ezsignfolder_access", computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_ToString(computed_e_ezsignfolder_access)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_parseFromJSON(cJSON *computed_e_ezsignfolder_accessJSON) {
    ezmax_api_definition__full_computed_e_ezsignfolder_access__e *computed_e_ezsignfolder_access = NULL;
    ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_accessVariable;
    cJSON *computed_e_ezsignfolder_accessVar = cJSON_GetObjectItemCaseSensitive(computed_e_ezsignfolder_accessJSON, "computed_e_ezsignfolder_access");
    if(!cJSON_IsString(computed_e_ezsignfolder_accessVar) || (computed_e_ezsignfolder_accessVar->valuestring == NULL)){
        goto end;
    }
    computed_e_ezsignfolder_accessVariable = computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_FromString(computed_e_ezsignfolder_accessVar->valuestring);
    return computed_e_ezsignfolder_accessVariable;
end:
    return 0;
}
