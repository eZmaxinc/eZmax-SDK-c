#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_pdfanoncompliantaction.h"


char* field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction) {
    char *field_e_ezsignfoldertype_pdfanoncompliantactionArray[] =  { "NULL", "Reject", "Convert" };
    return field_e_ezsignfoldertype_pdfanoncompliantactionArray[field_e_ezsignfoldertype_pdfanoncompliantaction];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_FromString(char* field_e_ezsignfoldertype_pdfanoncompliantaction) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_pdfanoncompliantactionArray[] =  { "NULL", "Reject", "Convert" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_pdfanoncompliantactionArray) / sizeof(field_e_ezsignfoldertype_pdfanoncompliantactionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_pdfanoncompliantaction, field_e_ezsignfoldertype_pdfanoncompliantactionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_pdfanoncompliantaction", field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_ToString(field_e_ezsignfoldertype_pdfanoncompliantaction)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_parseFromJSON(cJSON *field_e_ezsignfoldertype_pdfanoncompliantactionJSON) {
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e *field_e_ezsignfoldertype_pdfanoncompliantaction = NULL;
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantactionVariable;
    cJSON *field_e_ezsignfoldertype_pdfanoncompliantactionVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfoldertype_pdfanoncompliantactionJSON, "field_e_ezsignfoldertype_pdfanoncompliantaction");
    if(!cJSON_IsString(field_e_ezsignfoldertype_pdfanoncompliantactionVar) || (field_e_ezsignfoldertype_pdfanoncompliantactionVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfoldertype_pdfanoncompliantactionVariable = field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_FromString(field_e_ezsignfoldertype_pdfanoncompliantactionVar->valuestring);
    return field_e_ezsignfoldertype_pdfanoncompliantactionVariable;
end:
    return 0;
}
