#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_signeraccess.h"


char* field_e_ezsignfoldertype_signeraccess_field_e_ezsignfoldertype_signeraccess_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e field_e_ezsignfoldertype_signeraccess) {
    char *field_e_ezsignfoldertype_signeraccessArray[] =  { "NULL", "No", "SignerDocuments", "AllDocuments" };
    return field_e_ezsignfoldertype_signeraccessArray[field_e_ezsignfoldertype_signeraccess];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e field_e_ezsignfoldertype_signeraccess_field_e_ezsignfoldertype_signeraccess_FromString(char* field_e_ezsignfoldertype_signeraccess) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_signeraccessArray[] =  { "NULL", "No", "SignerDocuments", "AllDocuments" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_signeraccessArray) / sizeof(field_e_ezsignfoldertype_signeraccessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_signeraccess, field_e_ezsignfoldertype_signeraccessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_signeraccess_field_e_ezsignfoldertype_signeraccess_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e field_e_ezsignfoldertype_signeraccess) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_signeraccess", field_e_ezsignfoldertype_signeraccess_field_e_ezsignfoldertype_signeraccess_ToString(field_e_ezsignfoldertype_signeraccess)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e field_e_ezsignfoldertype_signeraccess_field_e_ezsignfoldertype_signeraccess_parseFromJSON(cJSON *field_e_ezsignfoldertype_signeraccessJSON) {
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e *field_e_ezsignfoldertype_signeraccess = NULL;
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e field_e_ezsignfoldertype_signeraccessVariable;
    cJSON *field_e_ezsignfoldertype_signeraccessVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfoldertype_signeraccessJSON, "field_e_ezsignfoldertype_signeraccess");
    if(!cJSON_IsString(field_e_ezsignfoldertype_signeraccessVar) || (field_e_ezsignfoldertype_signeraccessVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfoldertype_signeraccessVariable = field_e_ezsignfoldertype_signeraccess_field_e_ezsignfoldertype_signeraccess_FromString(field_e_ezsignfoldertype_signeraccessVar->valuestring);
    return field_e_ezsignfoldertype_signeraccessVariable;
end:
    return 0;
}
