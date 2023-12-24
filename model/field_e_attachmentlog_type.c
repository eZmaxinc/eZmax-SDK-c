#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_attachmentlog_type.h"


char* field_e_attachmentlog_type_field_e_attachmentlog_type_ToString(ezmax_api_definition__full_field_e_attachmentlog_type__e field_e_attachmentlog_type) {
    char *field_e_attachmentlog_typeArray[] =  { "NULL", "AutoValidation", "CopyFrom", "CopyTo", "CopyToEzsign", "CreateByEzsign", "Download", "Deleted", "Destroyed", "Email", "EmailCC", "EmailCCI", "Fax", "ImportedFromExternalSystem", "ImportedFromEZA", "ImportedFromFaltour", "ImportedFromLonewolf", "ImportedFromProspects", "Move", "OpenFromEmail", "Purged", "Reject", "Rename", "Restore", "Scanned", "SendToGED", "UnvalidatedBy", "Upload", "ValidatedBy", "VetinfoUpload" };
    return field_e_attachmentlog_typeArray[field_e_attachmentlog_type];
}

ezmax_api_definition__full_field_e_attachmentlog_type__e field_e_attachmentlog_type_field_e_attachmentlog_type_FromString(char* field_e_attachmentlog_type) {
    int stringToReturn = 0;
    char *field_e_attachmentlog_typeArray[] =  { "NULL", "AutoValidation", "CopyFrom", "CopyTo", "CopyToEzsign", "CreateByEzsign", "Download", "Deleted", "Destroyed", "Email", "EmailCC", "EmailCCI", "Fax", "ImportedFromExternalSystem", "ImportedFromEZA", "ImportedFromFaltour", "ImportedFromLonewolf", "ImportedFromProspects", "Move", "OpenFromEmail", "Purged", "Reject", "Rename", "Restore", "Scanned", "SendToGED", "UnvalidatedBy", "Upload", "ValidatedBy", "VetinfoUpload" };
    size_t sizeofArray = sizeof(field_e_attachmentlog_typeArray) / sizeof(field_e_attachmentlog_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_attachmentlog_type, field_e_attachmentlog_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_attachmentlog_type_field_e_attachmentlog_type_convertToJSON(ezmax_api_definition__full_field_e_attachmentlog_type__e field_e_attachmentlog_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_attachmentlog_type", field_e_attachmentlog_type_field_e_attachmentlog_type_ToString(field_e_attachmentlog_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_attachmentlog_type__e field_e_attachmentlog_type_field_e_attachmentlog_type_parseFromJSON(cJSON *field_e_attachmentlog_typeJSON) {
    ezmax_api_definition__full_field_e_attachmentlog_type__e *field_e_attachmentlog_type = NULL;
    ezmax_api_definition__full_field_e_attachmentlog_type__e field_e_attachmentlog_typeVariable;
    cJSON *field_e_attachmentlog_typeVar = cJSON_GetObjectItemCaseSensitive(field_e_attachmentlog_typeJSON, "field_e_attachmentlog_type");
    if(!cJSON_IsString(field_e_attachmentlog_typeVar) || (field_e_attachmentlog_typeVar->valuestring == NULL)){
        goto end;
    }
    field_e_attachmentlog_typeVariable = field_e_attachmentlog_type_field_e_attachmentlog_type_FromString(field_e_attachmentlog_typeVar->valuestring);
    return field_e_attachmentlog_typeVariable;
end:
    return 0;
}
