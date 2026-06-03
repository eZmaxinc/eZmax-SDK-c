#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_signaturedatedisplay.h"


char* field_e_ezsignfoldertype_signaturedatedisplay_field_e_ezsignfoldertype_signaturedatedisplay_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__e field_e_ezsignfoldertype_signaturedatedisplay) {
    char *field_e_ezsignfoldertype_signaturedatedisplayArray[] =  { "NULL", "Default", "Hidden", "Custom" };
    return field_e_ezsignfoldertype_signaturedatedisplayArray[field_e_ezsignfoldertype_signaturedatedisplay];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__e field_e_ezsignfoldertype_signaturedatedisplay_field_e_ezsignfoldertype_signaturedatedisplay_FromString(char* field_e_ezsignfoldertype_signaturedatedisplay) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_signaturedatedisplayArray[] =  { "NULL", "Default", "Hidden", "Custom" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_signaturedatedisplayArray) / sizeof(field_e_ezsignfoldertype_signaturedatedisplayArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_signaturedatedisplay, field_e_ezsignfoldertype_signaturedatedisplayArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_signaturedatedisplay_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__e field_e_ezsignfoldertype_signaturedatedisplay) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_signaturedatedisplay", field_e_ezsignfoldertype_signaturedatedisplay_field_e_ezsignfoldertype_signaturedatedisplay_ToString(field_e_ezsignfoldertype_signaturedatedisplay)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__e field_e_ezsignfoldertype_signaturedatedisplay_parseFromJSON(cJSON *field_e_ezsignfoldertype_signaturedatedisplayJSON) {
    if(!cJSON_IsString(field_e_ezsignfoldertype_signaturedatedisplayJSON) || (field_e_ezsignfoldertype_signaturedatedisplayJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignfoldertype_signaturedatedisplay_field_e_ezsignfoldertype_signaturedatedisplay_FromString(field_e_ezsignfoldertype_signaturedatedisplayJSON->valuestring);
}
