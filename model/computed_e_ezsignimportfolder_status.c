#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "computed_e_ezsignimportfolder_status.h"


char* computed_e_ezsignimportfolder_status_computed_e_ezsignimportfolder_status_ToString(ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e computed_e_ezsignimportfolder_status) {
    char *computed_e_ezsignimportfolder_statusArray[] =  { "NULL", "Pending", "Complete" };
    return computed_e_ezsignimportfolder_statusArray[computed_e_ezsignimportfolder_status];
}

ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e computed_e_ezsignimportfolder_status_computed_e_ezsignimportfolder_status_FromString(char* computed_e_ezsignimportfolder_status) {
    int stringToReturn = 0;
    char *computed_e_ezsignimportfolder_statusArray[] =  { "NULL", "Pending", "Complete" };
    size_t sizeofArray = sizeof(computed_e_ezsignimportfolder_statusArray) / sizeof(computed_e_ezsignimportfolder_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(computed_e_ezsignimportfolder_status, computed_e_ezsignimportfolder_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *computed_e_ezsignimportfolder_status_convertToJSON(ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e computed_e_ezsignimportfolder_status) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "computed_e_ezsignimportfolder_status", computed_e_ezsignimportfolder_status_computed_e_ezsignimportfolder_status_ToString(computed_e_ezsignimportfolder_status)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e computed_e_ezsignimportfolder_status_parseFromJSON(cJSON *computed_e_ezsignimportfolder_statusJSON) {
    if(!cJSON_IsString(computed_e_ezsignimportfolder_statusJSON) || (computed_e_ezsignimportfolder_statusJSON->valuestring == NULL)) {
        return 0;
    }
    return computed_e_ezsignimportfolder_status_computed_e_ezsignimportfolder_status_FromString(computed_e_ezsignimportfolder_statusJSON->valuestring);
}
