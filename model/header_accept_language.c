#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header_accept_language.h"


char* header_accept_language_header_accept_language_ToString(ezmax_api_definition__full_header_accept_language__e header_accept_language) {
    char *header_accept_languageArray[] =  { "NULL", "*", "en", "fr" };
    return header_accept_languageArray[header_accept_language];
}

ezmax_api_definition__full_header_accept_language__e header_accept_language_header_accept_language_FromString(char* header_accept_language) {
    int stringToReturn = 0;
    char *header_accept_languageArray[] =  { "NULL", "*", "en", "fr" };
    size_t sizeofArray = sizeof(header_accept_languageArray) / sizeof(header_accept_languageArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(header_accept_language, header_accept_languageArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *header_accept_language_convertToJSON(ezmax_api_definition__full_header_accept_language__e header_accept_language) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "header_accept_language", header_accept_language_header_accept_language_ToString(header_accept_language)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_header_accept_language__e header_accept_language_parseFromJSON(cJSON *header_accept_languageJSON) {
    if(!cJSON_IsString(header_accept_languageJSON) || (header_accept_languageJSON->valuestring == NULL)) {
        return 0;
    }
    return header_accept_language_header_accept_language_FromString(header_accept_languageJSON->valuestring);
}
