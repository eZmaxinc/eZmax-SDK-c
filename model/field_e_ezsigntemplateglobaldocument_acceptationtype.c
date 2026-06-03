#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateglobaldocument_acceptationtype.h"


char* field_e_ezsigntemplateglobaldocument_acceptationtype_field_e_ezsigntemplateglobaldocument_acceptationtype_ToString(ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__e field_e_ezsigntemplateglobaldocument_acceptationtype) {
    char *field_e_ezsigntemplateglobaldocument_acceptationtypeArray[] =  { "NULL", "Blank", "Acception", "AcceptionCPCheckbox", "AcceptionCPCheckboxEnhancement" };
    return field_e_ezsigntemplateglobaldocument_acceptationtypeArray[field_e_ezsigntemplateglobaldocument_acceptationtype];
}

ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__e field_e_ezsigntemplateglobaldocument_acceptationtype_field_e_ezsigntemplateglobaldocument_acceptationtype_FromString(char* field_e_ezsigntemplateglobaldocument_acceptationtype) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateglobaldocument_acceptationtypeArray[] =  { "NULL", "Blank", "Acception", "AcceptionCPCheckbox", "AcceptionCPCheckboxEnhancement" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateglobaldocument_acceptationtypeArray) / sizeof(field_e_ezsigntemplateglobaldocument_acceptationtypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateglobaldocument_acceptationtype, field_e_ezsigntemplateglobaldocument_acceptationtypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateglobaldocument_acceptationtype_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__e field_e_ezsigntemplateglobaldocument_acceptationtype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateglobaldocument_acceptationtype", field_e_ezsigntemplateglobaldocument_acceptationtype_field_e_ezsigntemplateglobaldocument_acceptationtype_ToString(field_e_ezsigntemplateglobaldocument_acceptationtype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateglobaldocument_acceptationtype__e field_e_ezsigntemplateglobaldocument_acceptationtype_parseFromJSON(cJSON *field_e_ezsigntemplateglobaldocument_acceptationtypeJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplateglobaldocument_acceptationtypeJSON) || (field_e_ezsigntemplateglobaldocument_acceptationtypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplateglobaldocument_acceptationtype_field_e_ezsigntemplateglobaldocument_acceptationtype_FromString(field_e_ezsigntemplateglobaldocument_acceptationtypeJSON->valuestring);
}
