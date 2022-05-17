#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_notificationtestgetnotificationtests_response_all_of.h"


char* e_notificationpreference_statuscustom_notificationtestgetnotificationtests_response_all_of_ToString(ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__e e_notificationpreference_status) {
    char* e_notificationpreference_statusArray[] =  { "NULL", "Show", "Hide", "Pin" };
	return e_notificationpreference_statusArray[e_notificationpreference_status];
}

ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__e e_notificationpreference_statuscustom_notificationtestgetnotificationtests_response_all_of_FromString(char* e_notificationpreference_status){
    int stringToReturn = 0;
    char *e_notificationpreference_statusArray[] =  { "NULL", "Show", "Hide", "Pin" };
    size_t sizeofArray = sizeof(e_notificationpreference_statusArray) / sizeof(e_notificationpreference_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_notificationpreference_status, e_notificationpreference_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of_create(
    field_e_notificationpreference_status_t *e_notificationpreference_status,
    int i_notificationtest
    ) {
    custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of_local_var = malloc(sizeof(custom_notificationtestgetnotificationtests_response_all_of_t));
    if (!custom_notificationtestgetnotificationtests_response_all_of_local_var) {
        return NULL;
    }
    custom_notificationtestgetnotificationtests_response_all_of_local_var->e_notificationpreference_status = e_notificationpreference_status;
    custom_notificationtestgetnotificationtests_response_all_of_local_var->i_notificationtest = i_notificationtest;

    return custom_notificationtestgetnotificationtests_response_all_of_local_var;
}


void custom_notificationtestgetnotificationtests_response_all_of_free(custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of) {
    if(NULL == custom_notificationtestgetnotificationtests_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status) {
        field_e_notificationpreference_status_free(custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status);
        custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status = NULL;
    }
    free(custom_notificationtestgetnotificationtests_response_all_of);
}

cJSON *custom_notificationtestgetnotificationtests_response_all_of_convertToJSON(custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status
    if (ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__NULL == custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status) {
        goto fail;
    }
    cJSON *e_notificationpreference_status_local_JSON = field_e_notificationpreference_status_convertToJSON(custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status);
    if(e_notificationpreference_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eNotificationpreferenceStatus", e_notificationpreference_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_notificationtestgetnotificationtests_response_all_of->i_notificationtest
    if (!custom_notificationtestgetnotificationtests_response_all_of->i_notificationtest) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iNotificationtest", custom_notificationtestgetnotificationtests_response_all_of->i_notificationtest) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of_parseFromJSON(cJSON *custom_notificationtestgetnotificationtests_response_all_ofJSON){

    custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of_local_var = NULL;

    // define the local variable for custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status
    field_e_notificationpreference_status_t *e_notificationpreference_status_local_nonprim = NULL;

    // custom_notificationtestgetnotificationtests_response_all_of->e_notificationpreference_status
    cJSON *e_notificationpreference_status = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_response_all_ofJSON, "eNotificationpreferenceStatus");
    if (!e_notificationpreference_status) {
        goto end;
    }

    
    e_notificationpreference_status_local_nonprim = field_e_notificationpreference_status_parseFromJSON(e_notificationpreference_status); //custom

    // custom_notificationtestgetnotificationtests_response_all_of->i_notificationtest
    cJSON *i_notificationtest = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_response_all_ofJSON, "iNotificationtest");
    if (!i_notificationtest) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_notificationtest))
    {
    goto end; //Numeric
    }


    custom_notificationtestgetnotificationtests_response_all_of_local_var = custom_notificationtestgetnotificationtests_response_all_of_create (
        e_notificationpreference_status_local_nonprim,
        i_notificationtest->valuedouble
        );

    return custom_notificationtestgetnotificationtests_response_all_of_local_var;
end:
    if (e_notificationpreference_status_local_nonprim) {
        field_e_notificationpreference_status_free(e_notificationpreference_status_local_nonprim);
        e_notificationpreference_status_local_nonprim = NULL;
    }
    return NULL;

}
