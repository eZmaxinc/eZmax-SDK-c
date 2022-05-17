/*
 * custom_notificationsubsectiongetnotificationtests_response.h
 *
 * A Notificationsubsection Object in the context of getNotificationtests
 */

#ifndef _custom_notificationsubsectiongetnotificationtests_response_H_
#define _custom_notificationsubsectiongetnotificationtests_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_notificationsubsectiongetnotificationtests_response_t custom_notificationsubsectiongetnotificationtests_response_t;

#include "custom_notificationsubsectiongetnotificationtests_response_all_of.h"
#include "custom_notificationtestgetnotificationtests_response.h"
#include "notificationsubsection_response.h"



typedef struct custom_notificationsubsectiongetnotificationtests_response_t {
    int pki_notificationsubsection_id; //numeric
    int fki_notificationsection_id; //numeric
    char *s_notificationsubsection_name_x; // string
    list_t *a_obj_notificationtest; //nonprimitive container

} custom_notificationsubsectiongetnotificationtests_response_t;

custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_create(
    int pki_notificationsubsection_id,
    int fki_notificationsection_id,
    char *s_notificationsubsection_name_x,
    list_t *a_obj_notificationtest
);

void custom_notificationsubsectiongetnotificationtests_response_free(custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response);

custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response_parseFromJSON(cJSON *custom_notificationsubsectiongetnotificationtests_responseJSON);

cJSON *custom_notificationsubsectiongetnotificationtests_response_convertToJSON(custom_notificationsubsectiongetnotificationtests_response_t *custom_notificationsubsectiongetnotificationtests_response);

#endif /* _custom_notificationsubsectiongetnotificationtests_response_H_ */

