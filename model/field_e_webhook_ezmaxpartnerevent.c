#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_webhook_ezmaxpartnerevent.h"


char* field_e_webhook_ezmaxpartnerevent_field_e_webhook_ezmaxpartnerevent_ToString(ezmax_api_definition__full_field_e_webhook_ezmaxpartnerevent__e field_e_webhook_ezmaxpartnerevent) {
    char *field_e_webhook_ezmaxpartnereventArray[] =  { "NULL", "ProductstageSubscribe", "ProductstageUnsubscribe" };
    return field_e_webhook_ezmaxpartnereventArray[field_e_webhook_ezmaxpartnerevent];
}

ezmax_api_definition__full_field_e_webhook_ezmaxpartnerevent__e field_e_webhook_ezmaxpartnerevent_field_e_webhook_ezmaxpartnerevent_FromString(char* field_e_webhook_ezmaxpartnerevent) {
    int stringToReturn = 0;
    char *field_e_webhook_ezmaxpartnereventArray[] =  { "NULL", "ProductstageSubscribe", "ProductstageUnsubscribe" };
    size_t sizeofArray = sizeof(field_e_webhook_ezmaxpartnereventArray) / sizeof(field_e_webhook_ezmaxpartnereventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_webhook_ezmaxpartnerevent, field_e_webhook_ezmaxpartnereventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_webhook_ezmaxpartnerevent_convertToJSON(ezmax_api_definition__full_field_e_webhook_ezmaxpartnerevent__e field_e_webhook_ezmaxpartnerevent) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_webhook_ezmaxpartnerevent", field_e_webhook_ezmaxpartnerevent_field_e_webhook_ezmaxpartnerevent_ToString(field_e_webhook_ezmaxpartnerevent)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_webhook_ezmaxpartnerevent__e field_e_webhook_ezmaxpartnerevent_parseFromJSON(cJSON *field_e_webhook_ezmaxpartnereventJSON) {
    if(!cJSON_IsString(field_e_webhook_ezmaxpartnereventJSON) || (field_e_webhook_ezmaxpartnereventJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_webhook_ezmaxpartnerevent_field_e_webhook_ezmaxpartnerevent_FromString(field_e_webhook_ezmaxpartnereventJSON->valuestring);
}
