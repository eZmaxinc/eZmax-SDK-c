#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfolder_messageorder.h"


char* field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_ToString(ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder) {
    char *field_e_ezsignfolder_messageorderArray[] =  { "NULL", "GlobalFirst", "PrivateFirst" };
    return field_e_ezsignfolder_messageorderArray[field_e_ezsignfolder_messageorder];
}

ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_FromString(char* field_e_ezsignfolder_messageorder) {
    int stringToReturn = 0;
    char *field_e_ezsignfolder_messageorderArray[] =  { "NULL", "GlobalFirst", "PrivateFirst" };
    size_t sizeofArray = sizeof(field_e_ezsignfolder_messageorderArray) / sizeof(field_e_ezsignfolder_messageorderArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfolder_messageorder, field_e_ezsignfolder_messageorderArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfolder_messageorder", field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_ToString(field_e_ezsignfolder_messageorder)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_parseFromJSON(cJSON *field_e_ezsignfolder_messageorderJSON) {
    ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e *field_e_ezsignfolder_messageorder = NULL;
    ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorderVariable;
    cJSON *field_e_ezsignfolder_messageorderVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfolder_messageorderJSON, "field_e_ezsignfolder_messageorder");
    if(!cJSON_IsString(field_e_ezsignfolder_messageorderVar) || (field_e_ezsignfolder_messageorderVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfolder_messageorderVariable = field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_FromString(field_e_ezsignfolder_messageorderVar->valuestring);
    return field_e_ezsignfolder_messageorderVariable;
end:
    return 0;
}
