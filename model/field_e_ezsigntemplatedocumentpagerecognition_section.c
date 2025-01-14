#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatedocumentpagerecognition_section.h"


char* field_e_ezsigntemplatedocumentpagerecognition_section_field_e_ezsigntemplatedocumentpagerecognition_section_ToString(ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e field_e_ezsigntemplatedocumentpagerecognition_section) {
    char *field_e_ezsigntemplatedocumentpagerecognition_sectionArray[] =  { "NULL", "FirstLine", "LastLine", "Page", "Region" };
    return field_e_ezsigntemplatedocumentpagerecognition_sectionArray[field_e_ezsigntemplatedocumentpagerecognition_section];
}

ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e field_e_ezsigntemplatedocumentpagerecognition_section_field_e_ezsigntemplatedocumentpagerecognition_section_FromString(char* field_e_ezsigntemplatedocumentpagerecognition_section) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatedocumentpagerecognition_sectionArray[] =  { "NULL", "FirstLine", "LastLine", "Page", "Region" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatedocumentpagerecognition_sectionArray) / sizeof(field_e_ezsigntemplatedocumentpagerecognition_sectionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatedocumentpagerecognition_section, field_e_ezsigntemplatedocumentpagerecognition_sectionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatedocumentpagerecognition_section_field_e_ezsigntemplatedocumentpagerecognition_section_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e field_e_ezsigntemplatedocumentpagerecognition_section) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatedocumentpagerecognition_section", field_e_ezsigntemplatedocumentpagerecognition_section_field_e_ezsigntemplatedocumentpagerecognition_section_ToString(field_e_ezsigntemplatedocumentpagerecognition_section)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e field_e_ezsigntemplatedocumentpagerecognition_section_field_e_ezsigntemplatedocumentpagerecognition_section_parseFromJSON(cJSON *field_e_ezsigntemplatedocumentpagerecognition_sectionJSON) {
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e *field_e_ezsigntemplatedocumentpagerecognition_section = NULL;
    ezmax_api_definition__full_field_e_ezsigntemplatedocumentpagerecognition_section__e field_e_ezsigntemplatedocumentpagerecognition_sectionVariable;
    cJSON *field_e_ezsigntemplatedocumentpagerecognition_sectionVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsigntemplatedocumentpagerecognition_sectionJSON, "field_e_ezsigntemplatedocumentpagerecognition_section");
    if(!cJSON_IsString(field_e_ezsigntemplatedocumentpagerecognition_sectionVar) || (field_e_ezsigntemplatedocumentpagerecognition_sectionVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsigntemplatedocumentpagerecognition_sectionVariable = field_e_ezsigntemplatedocumentpagerecognition_section_field_e_ezsigntemplatedocumentpagerecognition_section_FromString(field_e_ezsigntemplatedocumentpagerecognition_sectionVar->valuestring);
    return field_e_ezsigntemplatedocumentpagerecognition_sectionVariable;
end:
    return 0;
}
