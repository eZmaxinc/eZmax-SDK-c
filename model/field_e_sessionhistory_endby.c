#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_sessionhistory_endby.h"


char* field_e_sessionhistory_endby_field_e_sessionhistory_endby_ToString(ezmax_api_definition__full_field_e_sessionhistory_endby__e field_e_sessionhistory_endby) {
    char *field_e_sessionhistory_endbyArray[] =  { "NULL", "Decryption", "Hack", "Expired", "Hijack", "DoubleLogon", "Garbage", "Logoff", "BadAuth", "Locked", "Inactive", "InvalidUser", "BadUserType", "BadIP" };
    return field_e_sessionhistory_endbyArray[field_e_sessionhistory_endby];
}

ezmax_api_definition__full_field_e_sessionhistory_endby__e field_e_sessionhistory_endby_field_e_sessionhistory_endby_FromString(char* field_e_sessionhistory_endby) {
    int stringToReturn = 0;
    char *field_e_sessionhistory_endbyArray[] =  { "NULL", "Decryption", "Hack", "Expired", "Hijack", "DoubleLogon", "Garbage", "Logoff", "BadAuth", "Locked", "Inactive", "InvalidUser", "BadUserType", "BadIP" };
    size_t sizeofArray = sizeof(field_e_sessionhistory_endbyArray) / sizeof(field_e_sessionhistory_endbyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_sessionhistory_endby, field_e_sessionhistory_endbyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_sessionhistory_endby_field_e_sessionhistory_endby_convertToJSON(ezmax_api_definition__full_field_e_sessionhistory_endby__e field_e_sessionhistory_endby) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_sessionhistory_endby", field_e_sessionhistory_endby_field_e_sessionhistory_endby_ToString(field_e_sessionhistory_endby)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_sessionhistory_endby__e field_e_sessionhistory_endby_field_e_sessionhistory_endby_parseFromJSON(cJSON *field_e_sessionhistory_endbyJSON) {
    ezmax_api_definition__full_field_e_sessionhistory_endby__e *field_e_sessionhistory_endby = NULL;
    ezmax_api_definition__full_field_e_sessionhistory_endby__e field_e_sessionhistory_endbyVariable;
    cJSON *field_e_sessionhistory_endbyVar = cJSON_GetObjectItemCaseSensitive(field_e_sessionhistory_endbyJSON, "field_e_sessionhistory_endby");
    if(!cJSON_IsString(field_e_sessionhistory_endbyVar) || (field_e_sessionhistory_endbyVar->valuestring == NULL)){
        goto end;
    }
    field_e_sessionhistory_endbyVariable = field_e_sessionhistory_endby_field_e_sessionhistory_endby_FromString(field_e_sessionhistory_endbyVar->valuestring);
    return field_e_sessionhistory_endbyVariable;
end:
    return 0;
}
