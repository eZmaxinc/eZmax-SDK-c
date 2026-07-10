#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_et_inscriptionnotauthenticated_mortgagetype.h"


char* field_et_inscriptionnotauthenticated_mortgagetype_field_et_inscriptionnotauthenticated_mortgagetype_ToString(ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__e field_et_inscriptionnotauthenticated_mortgagetype) {
    char *field_et_inscriptionnotauthenticated_mortgagetypeArray[] =  { "NULL", "", "Cash", "Assumption", "WithoutAgent", "Institution", "Agent", "Broker" };
    return field_et_inscriptionnotauthenticated_mortgagetypeArray[field_et_inscriptionnotauthenticated_mortgagetype];
}

ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__e field_et_inscriptionnotauthenticated_mortgagetype_field_et_inscriptionnotauthenticated_mortgagetype_FromString(char* field_et_inscriptionnotauthenticated_mortgagetype) {
    int stringToReturn = 0;
    char *field_et_inscriptionnotauthenticated_mortgagetypeArray[] =  { "NULL", "", "Cash", "Assumption", "WithoutAgent", "Institution", "Agent", "Broker" };
    size_t sizeofArray = sizeof(field_et_inscriptionnotauthenticated_mortgagetypeArray) / sizeof(field_et_inscriptionnotauthenticated_mortgagetypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_et_inscriptionnotauthenticated_mortgagetype, field_et_inscriptionnotauthenticated_mortgagetypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_et_inscriptionnotauthenticated_mortgagetype_convertToJSON(ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__e field_et_inscriptionnotauthenticated_mortgagetype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_et_inscriptionnotauthenticated_mortgagetype", field_et_inscriptionnotauthenticated_mortgagetype_field_et_inscriptionnotauthenticated_mortgagetype_ToString(field_et_inscriptionnotauthenticated_mortgagetype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__e field_et_inscriptionnotauthenticated_mortgagetype_parseFromJSON(cJSON *field_et_inscriptionnotauthenticated_mortgagetypeJSON) {
    if(!cJSON_IsString(field_et_inscriptionnotauthenticated_mortgagetypeJSON) || (field_et_inscriptionnotauthenticated_mortgagetypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_et_inscriptionnotauthenticated_mortgagetype_field_et_inscriptionnotauthenticated_mortgagetype_FromString(field_et_inscriptionnotauthenticated_mortgagetypeJSON->valuestring);
}
