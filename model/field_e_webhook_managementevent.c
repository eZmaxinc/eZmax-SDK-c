#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_webhook_managementevent.h"


char* field_e_webhook_managementevent_field_e_webhook_managementevent_ToString(ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent) {
    char *field_e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    return field_e_webhook_managementeventArray[field_e_webhook_managementevent];
}

ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent_field_e_webhook_managementevent_FromString(char* field_e_webhook_managementevent) {
    int stringToReturn = 0;
    char *field_e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    size_t sizeofArray = sizeof(field_e_webhook_managementeventArray) / sizeof(field_e_webhook_managementeventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_webhook_managementevent, field_e_webhook_managementeventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_webhook_managementevent_convertToJSON(ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_webhook_managementevent", field_e_webhook_managementevent_field_e_webhook_managementevent_ToString(field_e_webhook_managementevent)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent_parseFromJSON(cJSON *field_e_webhook_managementeventJSON) {
    if(!cJSON_IsString(field_e_webhook_managementeventJSON) || (field_e_webhook_managementeventJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_webhook_managementevent_field_e_webhook_managementevent_FromString(field_e_webhook_managementeventJSON->valuestring);
}
