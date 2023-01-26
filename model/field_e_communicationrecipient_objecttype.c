#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_communicationrecipient_objecttype.h"


char* field_e_communicationrecipient_objecttype_field_e_communicationrecipient_objecttype_ToString(ezmax_api_definition__full_field_e_communicationrecipient_objecttype__e field_e_communicationrecipient_objecttype) {
    char *field_e_communicationrecipient_objecttypeArray[] =  { "NULL", "Agent", "Agentincorporation", "Assistant", "Broker", "Contact", "Customer", "Employee", "Externalbroker", "Ezcomagent", "Ezcomcompany", "Ezsignsigner", "Franchiseoffice", "Notary", "Rewardmember", "Supplier", "User" };
    return field_e_communicationrecipient_objecttypeArray[field_e_communicationrecipient_objecttype];
}

ezmax_api_definition__full_field_e_communicationrecipient_objecttype__e field_e_communicationrecipient_objecttype_field_e_communicationrecipient_objecttype_FromString(char* field_e_communicationrecipient_objecttype) {
    int stringToReturn = 0;
    char *field_e_communicationrecipient_objecttypeArray[] =  { "NULL", "Agent", "Agentincorporation", "Assistant", "Broker", "Contact", "Customer", "Employee", "Externalbroker", "Ezcomagent", "Ezcomcompany", "Ezsignsigner", "Franchiseoffice", "Notary", "Rewardmember", "Supplier", "User" };
    size_t sizeofArray = sizeof(field_e_communicationrecipient_objecttypeArray) / sizeof(field_e_communicationrecipient_objecttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_communicationrecipient_objecttype, field_e_communicationrecipient_objecttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_communicationrecipient_objecttype_field_e_communicationrecipient_objecttype_convertToJSON(ezmax_api_definition__full_field_e_communicationrecipient_objecttype__e field_e_communicationrecipient_objecttype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_communicationrecipient_objecttype", field_e_communicationrecipient_objecttype_field_e_communicationrecipient_objecttype_ToString(field_e_communicationrecipient_objecttype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_communicationrecipient_objecttype__e field_e_communicationrecipient_objecttype_field_e_communicationrecipient_objecttype_parseFromJSON(cJSON *field_e_communicationrecipient_objecttypeJSON) {
    ezmax_api_definition__full_field_e_communicationrecipient_objecttype__e *field_e_communicationrecipient_objecttype = NULL;
    ezmax_api_definition__full_field_e_communicationrecipient_objecttype__e field_e_communicationrecipient_objecttypeVariable;
    cJSON *field_e_communicationrecipient_objecttypeVar = cJSON_GetObjectItemCaseSensitive(field_e_communicationrecipient_objecttypeJSON, "field_e_communicationrecipient_objecttype");
    if(!cJSON_IsString(field_e_communicationrecipient_objecttypeVar) || (field_e_communicationrecipient_objecttypeVar->valuestring == NULL)){
        goto end;
    }
    field_e_communicationrecipient_objecttypeVariable = field_e_communicationrecipient_objecttype_field_e_communicationrecipient_objecttype_FromString(field_e_communicationrecipient_objecttypeVar->valuestring);
    return field_e_communicationrecipient_objecttypeVariable;
end:
    return 0;
}
