#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_webhook_managementevent.h"


char* field_e_webhook_managementevent_field_e_webhook_managementevent_ToString(ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent) {
    char *field_e_webhook_managementeventArray[] =  { "NULL", "UserCreated" };
    return field_e_webhook_managementeventArray[field_e_webhook_managementevent];
}

ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent_field_e_webhook_managementevent_FromString(char* field_e_webhook_managementevent) {
    int stringToReturn = 0;
    char *field_e_webhook_managementeventArray[] =  { "NULL", "UserCreated" };
    size_t sizeofArray = sizeof(field_e_webhook_managementeventArray) / sizeof(field_e_webhook_managementeventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_webhook_managementevent, field_e_webhook_managementeventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_webhook_managementevent_field_e_webhook_managementevent_convertToJSON(ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_webhook_managementevent", field_e_webhook_managementevent_field_e_webhook_managementevent_ToString(field_e_webhook_managementevent)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent_field_e_webhook_managementevent_parseFromJSON(cJSON *field_e_webhook_managementeventJSON) {
    ezmax_api_definition__full_field_e_webhook_managementevent__e *field_e_webhook_managementevent = NULL;
    ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementeventVariable;
    cJSON *field_e_webhook_managementeventVar = cJSON_GetObjectItemCaseSensitive(field_e_webhook_managementeventJSON, "field_e_webhook_managementevent");
    if(!cJSON_IsString(field_e_webhook_managementeventVar) || (field_e_webhook_managementeventVar->valuestring == NULL)){
        goto end;
    }
    field_e_webhook_managementeventVariable = field_e_webhook_managementevent_field_e_webhook_managementevent_FromString(field_e_webhook_managementeventVar->valuestring);
    return field_e_webhook_managementeventVariable;
end:
    return 0;
}
