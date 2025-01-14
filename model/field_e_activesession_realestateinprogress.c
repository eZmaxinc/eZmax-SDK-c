#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_activesession_realestateinprogress.h"


char* field_e_activesession_realestateinprogress_field_e_activesession_realestateinprogress_ToString(ezmax_api_definition__full_field_e_activesession_realestateinprogress__e field_e_activesession_realestateinprogress) {
    char *field_e_activesession_realestateinprogressArray[] =  { "NULL", "No", "Read", "Modify", "Create" };
    return field_e_activesession_realestateinprogressArray[field_e_activesession_realestateinprogress];
}

ezmax_api_definition__full_field_e_activesession_realestateinprogress__e field_e_activesession_realestateinprogress_field_e_activesession_realestateinprogress_FromString(char* field_e_activesession_realestateinprogress) {
    int stringToReturn = 0;
    char *field_e_activesession_realestateinprogressArray[] =  { "NULL", "No", "Read", "Modify", "Create" };
    size_t sizeofArray = sizeof(field_e_activesession_realestateinprogressArray) / sizeof(field_e_activesession_realestateinprogressArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_activesession_realestateinprogress, field_e_activesession_realestateinprogressArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_activesession_realestateinprogress_field_e_activesession_realestateinprogress_convertToJSON(ezmax_api_definition__full_field_e_activesession_realestateinprogress__e field_e_activesession_realestateinprogress) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_activesession_realestateinprogress", field_e_activesession_realestateinprogress_field_e_activesession_realestateinprogress_ToString(field_e_activesession_realestateinprogress)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_activesession_realestateinprogress__e field_e_activesession_realestateinprogress_field_e_activesession_realestateinprogress_parseFromJSON(cJSON *field_e_activesession_realestateinprogressJSON) {
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e *field_e_activesession_realestateinprogress = NULL;
    ezmax_api_definition__full_field_e_activesession_realestateinprogress__e field_e_activesession_realestateinprogressVariable;
    cJSON *field_e_activesession_realestateinprogressVar = cJSON_GetObjectItemCaseSensitive(field_e_activesession_realestateinprogressJSON, "field_e_activesession_realestateinprogress");
    if(!cJSON_IsString(field_e_activesession_realestateinprogressVar) || (field_e_activesession_realestateinprogressVar->valuestring == NULL)){
        goto end;
    }
    field_e_activesession_realestateinprogressVariable = field_e_activesession_realestateinprogress_field_e_activesession_realestateinprogress_FromString(field_e_activesession_realestateinprogressVar->valuestring);
    return field_e_activesession_realestateinprogressVariable;
end:
    return 0;
}
