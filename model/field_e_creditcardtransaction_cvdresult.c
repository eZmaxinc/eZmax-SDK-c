#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_creditcardtransaction_cvdresult.h"


char* field_e_creditcardtransaction_cvdresult_field_e_creditcardtransaction_cvdresult_ToString(ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult) {
    char *field_e_creditcardtransaction_cvdresultArray[] =  { "NULL", "Match", "NoMatch", "NotVerified" };
    return field_e_creditcardtransaction_cvdresultArray[field_e_creditcardtransaction_cvdresult];
}

ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult_field_e_creditcardtransaction_cvdresult_FromString(char* field_e_creditcardtransaction_cvdresult) {
    int stringToReturn = 0;
    char *field_e_creditcardtransaction_cvdresultArray[] =  { "NULL", "Match", "NoMatch", "NotVerified" };
    size_t sizeofArray = sizeof(field_e_creditcardtransaction_cvdresultArray) / sizeof(field_e_creditcardtransaction_cvdresultArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_creditcardtransaction_cvdresult, field_e_creditcardtransaction_cvdresultArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_creditcardtransaction_cvdresult_convertToJSON(ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_creditcardtransaction_cvdresult", field_e_creditcardtransaction_cvdresult_field_e_creditcardtransaction_cvdresult_ToString(field_e_creditcardtransaction_cvdresult)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult_parseFromJSON(cJSON *field_e_creditcardtransaction_cvdresultJSON) {
    if(!cJSON_IsString(field_e_creditcardtransaction_cvdresultJSON) || (field_e_creditcardtransaction_cvdresultJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_creditcardtransaction_cvdresult_field_e_creditcardtransaction_cvdresult_FromString(field_e_creditcardtransaction_cvdresultJSON->valuestring);
}
