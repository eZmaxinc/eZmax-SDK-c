#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_creditcardtransaction_avsresult.h"


char* field_e_creditcardtransaction_avsresult_field_e_creditcardtransaction_avsresult_ToString(ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e field_e_creditcardtransaction_avsresult) {
    char *field_e_creditcardtransaction_avsresultArray[] =  { "NULL", "Match", "NoMatch", "PartialMatch", "NotImplemented", "NotVerified" };
    return field_e_creditcardtransaction_avsresultArray[field_e_creditcardtransaction_avsresult];
}

ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e field_e_creditcardtransaction_avsresult_field_e_creditcardtransaction_avsresult_FromString(char* field_e_creditcardtransaction_avsresult) {
    int stringToReturn = 0;
    char *field_e_creditcardtransaction_avsresultArray[] =  { "NULL", "Match", "NoMatch", "PartialMatch", "NotImplemented", "NotVerified" };
    size_t sizeofArray = sizeof(field_e_creditcardtransaction_avsresultArray) / sizeof(field_e_creditcardtransaction_avsresultArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_creditcardtransaction_avsresult, field_e_creditcardtransaction_avsresultArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_creditcardtransaction_avsresult_field_e_creditcardtransaction_avsresult_convertToJSON(ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e field_e_creditcardtransaction_avsresult) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_creditcardtransaction_avsresult", field_e_creditcardtransaction_avsresult_field_e_creditcardtransaction_avsresult_ToString(field_e_creditcardtransaction_avsresult)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e field_e_creditcardtransaction_avsresult_field_e_creditcardtransaction_avsresult_parseFromJSON(cJSON *field_e_creditcardtransaction_avsresultJSON) {
    ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e *field_e_creditcardtransaction_avsresult = NULL;
    ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e field_e_creditcardtransaction_avsresultVariable;
    cJSON *field_e_creditcardtransaction_avsresultVar = cJSON_GetObjectItemCaseSensitive(field_e_creditcardtransaction_avsresultJSON, "field_e_creditcardtransaction_avsresult");
    if(!cJSON_IsString(field_e_creditcardtransaction_avsresultVar) || (field_e_creditcardtransaction_avsresultVar->valuestring == NULL)){
        goto end;
    }
    field_e_creditcardtransaction_avsresultVariable = field_e_creditcardtransaction_avsresult_field_e_creditcardtransaction_avsresult_FromString(field_e_creditcardtransaction_avsresultVar->valuestring);
    return field_e_creditcardtransaction_avsresultVariable;
end:
    return 0;
}
