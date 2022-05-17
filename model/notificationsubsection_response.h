/*
 * notificationsubsection_response.h
 *
 * A Notificationsubsection Object
 */

#ifndef _notificationsubsection_response_H_
#define _notificationsubsection_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationsubsection_response_t notificationsubsection_response_t;




typedef struct notificationsubsection_response_t {
    int pki_notificationsubsection_id; //numeric
    int fki_notificationsection_id; //numeric
    char *s_notificationsubsection_name_x; // string

} notificationsubsection_response_t;

notificationsubsection_response_t *notificationsubsection_response_create(
    int pki_notificationsubsection_id,
    int fki_notificationsection_id,
    char *s_notificationsubsection_name_x
);

void notificationsubsection_response_free(notificationsubsection_response_t *notificationsubsection_response);

notificationsubsection_response_t *notificationsubsection_response_parseFromJSON(cJSON *notificationsubsection_responseJSON);

cJSON *notificationsubsection_response_convertToJSON(notificationsubsection_response_t *notificationsubsection_response);

#endif /* _notificationsubsection_response_H_ */

