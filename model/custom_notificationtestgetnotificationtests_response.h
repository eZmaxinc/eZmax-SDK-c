/*
 * custom_notificationtestgetnotificationtests_response.h
 *
 * A Notificationtest Object in the context of getNotificationtests
 */

#ifndef _custom_notificationtestgetnotificationtests_response_H_
#define _custom_notificationtestgetnotificationtests_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_notificationtestgetnotificationtests_response_t custom_notificationtestgetnotificationtests_response_t;

#include "field_e_notificationpreference_status.h"
#include "multilingual_notificationtest_name.h"



typedef struct custom_notificationtestgetnotificationtests_response_t {
    int pki_notificationtest_id; //numeric
    struct multilingual_notificationtest_name_t *obj_notificationtest_name; //model
    int fki_notificationsubsection_id; //numeric
    char *s_notificationtest_function; // string
    char *s_notificationtest_name_x; // string
    ezmax_api_definition__full_field_e_notificationpreference_status__e e_notificationpreference_status; //referenced enum
    int i_notificationtest; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} custom_notificationtestgetnotificationtests_response_t;

__attribute__((deprecated)) custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response_create(
    int pki_notificationtest_id,
    multilingual_notificationtest_name_t *obj_notificationtest_name,
    int fki_notificationsubsection_id,
    char *s_notificationtest_function,
    char *s_notificationtest_name_x,
    ezmax_api_definition__full_field_e_notificationpreference_status__e e_notificationpreference_status,
    int i_notificationtest
);

void custom_notificationtestgetnotificationtests_response_free(custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response);

custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response_parseFromJSON(cJSON *custom_notificationtestgetnotificationtests_responseJSON);

cJSON *custom_notificationtestgetnotificationtests_response_convertToJSON(custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response);

#endif /* _custom_notificationtestgetnotificationtests_response_H_ */

