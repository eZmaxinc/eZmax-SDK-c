#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_activesession_usertype.h"


char* field_e_activesession_usertype_field_e_activesession_usertype_ToString(ezmax_api_definition__full_field_e_activesession_usertype__e field_e_activesession_usertype) {
    char *field_e_activesession_usertypeArray[] =  { "NULL", "AgentBroker", "Assistant", "EzsignSigner", "EzsignUser", "Normal" };
    return field_e_activesession_usertypeArray[field_e_activesession_usertype];
}

ezmax_api_definition__full_field_e_activesession_usertype__e field_e_activesession_usertype_field_e_activesession_usertype_FromString(char* field_e_activesession_usertype) {
    int stringToReturn = 0;
    char *field_e_activesession_usertypeArray[] =  { "NULL", "AgentBroker", "Assistant", "EzsignSigner", "EzsignUser", "Normal" };
    size_t sizeofArray = sizeof(field_e_activesession_usertypeArray) / sizeof(field_e_activesession_usertypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_activesession_usertype, field_e_activesession_usertypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_activesession_usertype_convertToJSON(ezmax_api_definition__full_field_e_activesession_usertype__e field_e_activesession_usertype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_activesession_usertype", field_e_activesession_usertype_field_e_activesession_usertype_ToString(field_e_activesession_usertype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_activesession_usertype__e field_e_activesession_usertype_parseFromJSON(cJSON *field_e_activesession_usertypeJSON) {
    if(!cJSON_IsString(field_e_activesession_usertypeJSON) || (field_e_activesession_usertypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_activesession_usertype_field_e_activesession_usertype_FromString(field_e_activesession_usertypeJSON->valuestring);
}
