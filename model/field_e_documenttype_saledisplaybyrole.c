#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_documenttype_saledisplaybyrole.h"


char* field_e_documenttype_saledisplaybyrole_field_e_documenttype_saledisplaybyrole_ToString(ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e field_e_documenttype_saledisplaybyrole) {
    char *field_e_documenttype_saledisplaybyroleArray[] =  { "NULL", "InscriptorSeller", "Inscriptor", "Seller" };
    return field_e_documenttype_saledisplaybyroleArray[field_e_documenttype_saledisplaybyrole];
}

ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e field_e_documenttype_saledisplaybyrole_field_e_documenttype_saledisplaybyrole_FromString(char* field_e_documenttype_saledisplaybyrole) {
    int stringToReturn = 0;
    char *field_e_documenttype_saledisplaybyroleArray[] =  { "NULL", "InscriptorSeller", "Inscriptor", "Seller" };
    size_t sizeofArray = sizeof(field_e_documenttype_saledisplaybyroleArray) / sizeof(field_e_documenttype_saledisplaybyroleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_documenttype_saledisplaybyrole, field_e_documenttype_saledisplaybyroleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_documenttype_saledisplaybyrole_convertToJSON(ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e field_e_documenttype_saledisplaybyrole) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_documenttype_saledisplaybyrole", field_e_documenttype_saledisplaybyrole_field_e_documenttype_saledisplaybyrole_ToString(field_e_documenttype_saledisplaybyrole)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e field_e_documenttype_saledisplaybyrole_parseFromJSON(cJSON *field_e_documenttype_saledisplaybyroleJSON) {
    if(!cJSON_IsString(field_e_documenttype_saledisplaybyroleJSON) || (field_e_documenttype_saledisplaybyroleJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_documenttype_saledisplaybyrole_field_e_documenttype_saledisplaybyrole_FromString(field_e_documenttype_saledisplaybyroleJSON->valuestring);
}
