#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldersignerassociation_role.h"


char* field_e_ezsignfoldersignerassociation_role_field_e_ezsignfoldersignerassociation_role_ToString(ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role) {
    char *field_e_ezsignfoldersignerassociation_roleArray[] =  { "NULL", "CC", "Signer", "SignerAndCC" };
    return field_e_ezsignfoldersignerassociation_roleArray[field_e_ezsignfoldersignerassociation_role];
}

ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role_field_e_ezsignfoldersignerassociation_role_FromString(char* field_e_ezsignfoldersignerassociation_role) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldersignerassociation_roleArray[] =  { "NULL", "CC", "Signer", "SignerAndCC" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldersignerassociation_roleArray) / sizeof(field_e_ezsignfoldersignerassociation_roleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldersignerassociation_role, field_e_ezsignfoldersignerassociation_roleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldersignerassociation_role_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldersignerassociation_role", field_e_ezsignfoldersignerassociation_role_field_e_ezsignfoldersignerassociation_role_ToString(field_e_ezsignfoldersignerassociation_role)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role_parseFromJSON(cJSON *field_e_ezsignfoldersignerassociation_roleJSON) {
    if(!cJSON_IsString(field_e_ezsignfoldersignerassociation_roleJSON) || (field_e_ezsignfoldersignerassociation_roleJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignfoldersignerassociation_role_field_e_ezsignfoldersignerassociation_role_FromString(field_e_ezsignfoldersignerassociation_roleJSON->valuestring);
}
