/*
 * custom_notificationtestgetnotificationtests_response_all_of.h
 *
 * 
 */

#ifndef _custom_notificationtestgetnotificationtests_response_all_of_H_
#define _custom_notificationtestgetnotificationtests_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_notificationtestgetnotificationtests_response_all_of_t custom_notificationtestgetnotificationtests_response_all_of_t;

#include "field_e_notificationpreference_status.h"

// Enum  for custom_notificationtestgetnotificationtests_response_all_of

typedef enum  { ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__NULL = 0, ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__Show, ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__Hide, ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__Pin } ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__e;

char* custom_notificationtestgetnotificationtests_response_all_of_e_notificationpreference_status_ToString(ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__e e_notificationpreference_status);

ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__e custom_notificationtestgetnotificationtests_response_all_of_e_notificationpreference_status_FromString(char* e_notificationpreference_status);



typedef struct custom_notificationtestgetnotificationtests_response_all_of_t {
    field_e_notificationpreference_status_t *e_notificationpreference_status; // custom
    int i_notificationtest; //numeric

} custom_notificationtestgetnotificationtests_response_all_of_t;

custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of_create(
    field_e_notificationpreference_status_t *e_notificationpreference_status,
    int i_notificationtest
);

void custom_notificationtestgetnotificationtests_response_all_of_free(custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of);

custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of_parseFromJSON(cJSON *custom_notificationtestgetnotificationtests_response_all_ofJSON);

cJSON *custom_notificationtestgetnotificationtests_response_all_of_convertToJSON(custom_notificationtestgetnotificationtests_response_all_of_t *custom_notificationtestgetnotificationtests_response_all_of);

#endif /* _custom_notificationtestgetnotificationtests_response_all_of_H_ */

