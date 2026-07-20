#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_webhook_realestateevent.h"


char* field_e_webhook_realestateevent_field_e_webhook_realestateevent_ToString(ezmax_api_definition__full_field_e_webhook_realestateevent__e field_e_webhook_realestateevent) {
    char *field_e_webhook_realestateeventArray[] =  { "NULL", "InscriptionCreated", "InscriptionModified", "InscriptionnotauthenticatedCreated", "InscriptionnotauthenticatedModified" };
    return field_e_webhook_realestateeventArray[field_e_webhook_realestateevent];
}

ezmax_api_definition__full_field_e_webhook_realestateevent__e field_e_webhook_realestateevent_field_e_webhook_realestateevent_FromString(char* field_e_webhook_realestateevent) {
    int stringToReturn = 0;
    char *field_e_webhook_realestateeventArray[] =  { "NULL", "InscriptionCreated", "InscriptionModified", "InscriptionnotauthenticatedCreated", "InscriptionnotauthenticatedModified" };
    size_t sizeofArray = sizeof(field_e_webhook_realestateeventArray) / sizeof(field_e_webhook_realestateeventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_webhook_realestateevent, field_e_webhook_realestateeventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_webhook_realestateevent_convertToJSON(ezmax_api_definition__full_field_e_webhook_realestateevent__e field_e_webhook_realestateevent) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_webhook_realestateevent", field_e_webhook_realestateevent_field_e_webhook_realestateevent_ToString(field_e_webhook_realestateevent)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_webhook_realestateevent__e field_e_webhook_realestateevent_parseFromJSON(cJSON *field_e_webhook_realestateeventJSON) {
    if(!cJSON_IsString(field_e_webhook_realestateeventJSON) || (field_e_webhook_realestateeventJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_webhook_realestateevent_field_e_webhook_realestateevent_FromString(field_e_webhook_realestateeventJSON->valuestring);
}
