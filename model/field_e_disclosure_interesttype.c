#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_disclosure_interesttype.h"


char* field_e_disclosure_interesttype_field_e_disclosure_interesttype_ToString(ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype) {
    char *field_e_disclosure_interesttypeArray[] =  { "NULL", "Direct", "Indirect" };
    return field_e_disclosure_interesttypeArray[field_e_disclosure_interesttype];
}

ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype_field_e_disclosure_interesttype_FromString(char* field_e_disclosure_interesttype) {
    int stringToReturn = 0;
    char *field_e_disclosure_interesttypeArray[] =  { "NULL", "Direct", "Indirect" };
    size_t sizeofArray = sizeof(field_e_disclosure_interesttypeArray) / sizeof(field_e_disclosure_interesttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_disclosure_interesttype, field_e_disclosure_interesttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_disclosure_interesttype_convertToJSON(ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_disclosure_interesttype", field_e_disclosure_interesttype_field_e_disclosure_interesttype_ToString(field_e_disclosure_interesttype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype_parseFromJSON(cJSON *field_e_disclosure_interesttypeJSON) {
    if(!cJSON_IsString(field_e_disclosure_interesttypeJSON) || (field_e_disclosure_interesttypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_disclosure_interesttype_field_e_disclosure_interesttype_FromString(field_e_disclosure_interesttypeJSON->valuestring);
}
