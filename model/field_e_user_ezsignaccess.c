#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_user_ezsignaccess.h"


char* field_e_user_ezsignaccess_field_e_user_ezsignaccess_ToString(ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess) {
    char *field_e_user_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    return field_e_user_ezsignaccessArray[field_e_user_ezsignaccess];
}

ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess_field_e_user_ezsignaccess_FromString(char* field_e_user_ezsignaccess) {
    int stringToReturn = 0;
    char *field_e_user_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    size_t sizeofArray = sizeof(field_e_user_ezsignaccessArray) / sizeof(field_e_user_ezsignaccessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_user_ezsignaccess, field_e_user_ezsignaccessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_user_ezsignaccess_convertToJSON(ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_user_ezsignaccess", field_e_user_ezsignaccess_field_e_user_ezsignaccess_ToString(field_e_user_ezsignaccess)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess_parseFromJSON(cJSON *field_e_user_ezsignaccessJSON) {
    if(!cJSON_IsString(field_e_user_ezsignaccessJSON) || (field_e_user_ezsignaccessJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_user_ezsignaccess_field_e_user_ezsignaccess_FromString(field_e_user_ezsignaccessJSON->valuestring);
}
