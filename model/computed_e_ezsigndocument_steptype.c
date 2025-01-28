#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "computed_e_ezsigndocument_steptype.h"


char* computed_e_ezsigndocument_steptype_computed_e_ezsigndocument_steptype_ToString(ezmax_api_definition__full_computed_e_ezsigndocument_steptype__e computed_e_ezsigndocument_steptype) {
    char *computed_e_ezsigndocument_steptypeArray[] =  { "NULL", "Form", "Sign", "None" };
    return computed_e_ezsigndocument_steptypeArray[computed_e_ezsigndocument_steptype];
}

ezmax_api_definition__full_computed_e_ezsigndocument_steptype__e computed_e_ezsigndocument_steptype_computed_e_ezsigndocument_steptype_FromString(char* computed_e_ezsigndocument_steptype) {
    int stringToReturn = 0;
    char *computed_e_ezsigndocument_steptypeArray[] =  { "NULL", "Form", "Sign", "None" };
    size_t sizeofArray = sizeof(computed_e_ezsigndocument_steptypeArray) / sizeof(computed_e_ezsigndocument_steptypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(computed_e_ezsigndocument_steptype, computed_e_ezsigndocument_steptypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *computed_e_ezsigndocument_steptype_convertToJSON(ezmax_api_definition__full_computed_e_ezsigndocument_steptype__e computed_e_ezsigndocument_steptype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "computed_e_ezsigndocument_steptype", computed_e_ezsigndocument_steptype_computed_e_ezsigndocument_steptype_ToString(computed_e_ezsigndocument_steptype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_computed_e_ezsigndocument_steptype__e computed_e_ezsigndocument_steptype_parseFromJSON(cJSON *computed_e_ezsigndocument_steptypeJSON) {
    if(!cJSON_IsString(computed_e_ezsigndocument_steptypeJSON) || (computed_e_ezsigndocument_steptypeJSON->valuestring == NULL)) {
        return 0;
    }
    return computed_e_ezsigndocument_steptype_computed_e_ezsigndocument_steptype_FromString(computed_e_ezsigndocument_steptypeJSON->valuestring);
}
