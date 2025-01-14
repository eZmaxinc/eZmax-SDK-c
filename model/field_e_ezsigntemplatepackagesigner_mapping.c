#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatepackagesigner_mapping.h"


char* field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_ToString(ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping) {
    char *field_e_ezsigntemplatepackagesigner_mappingArray[] =  { "NULL", "Manual", "Creator", "User", "Usergroup" };
    return field_e_ezsigntemplatepackagesigner_mappingArray[field_e_ezsigntemplatepackagesigner_mapping];
}

ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_FromString(char* field_e_ezsigntemplatepackagesigner_mapping) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatepackagesigner_mappingArray[] =  { "NULL", "Manual", "Creator", "User", "Usergroup" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatepackagesigner_mappingArray) / sizeof(field_e_ezsigntemplatepackagesigner_mappingArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatepackagesigner_mapping, field_e_ezsigntemplatepackagesigner_mappingArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatepackagesigner_mapping", field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_ToString(field_e_ezsigntemplatepackagesigner_mapping)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_parseFromJSON(cJSON *field_e_ezsigntemplatepackagesigner_mappingJSON) {
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e *field_e_ezsigntemplatepackagesigner_mapping = NULL;
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mappingVariable;
    cJSON *field_e_ezsigntemplatepackagesigner_mappingVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsigntemplatepackagesigner_mappingJSON, "field_e_ezsigntemplatepackagesigner_mapping");
    if(!cJSON_IsString(field_e_ezsigntemplatepackagesigner_mappingVar) || (field_e_ezsigntemplatepackagesigner_mappingVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsigntemplatepackagesigner_mappingVariable = field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_FromString(field_e_ezsigntemplatepackagesigner_mappingVar->valuestring);
    return field_e_ezsigntemplatepackagesigner_mappingVariable;
end:
    return 0;
}
