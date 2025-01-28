#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatepublic_limittype.h"


char* field_e_ezsigntemplatepublic_limittype_field_e_ezsigntemplatepublic_limittype_ToString(ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e field_e_ezsigntemplatepublic_limittype) {
    char *field_e_ezsigntemplatepublic_limittypeArray[] =  { "NULL", "Hour", "Day", "Month", "Total" };
    return field_e_ezsigntemplatepublic_limittypeArray[field_e_ezsigntemplatepublic_limittype];
}

ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e field_e_ezsigntemplatepublic_limittype_field_e_ezsigntemplatepublic_limittype_FromString(char* field_e_ezsigntemplatepublic_limittype) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatepublic_limittypeArray[] =  { "NULL", "Hour", "Day", "Month", "Total" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatepublic_limittypeArray) / sizeof(field_e_ezsigntemplatepublic_limittypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatepublic_limittype, field_e_ezsigntemplatepublic_limittypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatepublic_limittype_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e field_e_ezsigntemplatepublic_limittype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatepublic_limittype", field_e_ezsigntemplatepublic_limittype_field_e_ezsigntemplatepublic_limittype_ToString(field_e_ezsigntemplatepublic_limittype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e field_e_ezsigntemplatepublic_limittype_parseFromJSON(cJSON *field_e_ezsigntemplatepublic_limittypeJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplatepublic_limittypeJSON) || (field_e_ezsigntemplatepublic_limittypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplatepublic_limittype_field_e_ezsigntemplatepublic_limittype_FromString(field_e_ezsigntemplatepublic_limittypeJSON->valuestring);
}
