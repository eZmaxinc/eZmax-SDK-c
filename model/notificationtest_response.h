/*
 * notificationtest_response.h
 *
 * A Notificationtest Object
 */

#ifndef _notificationtest_response_H_
#define _notificationtest_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notificationtest_response_t notificationtest_response_t;

#include "multilingual_notificationtest_name.h"



typedef struct notificationtest_response_t {
    int pki_notificationtest_id; //numeric
    struct multilingual_notificationtest_name_t *obj_notificationtest_name; //model
    int fki_notificationsubsection_id; //numeric
    char *s_notificationtest_function; // string
    char *s_notificationtest_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} notificationtest_response_t;

__attribute__((deprecated)) notificationtest_response_t *notificationtest_response_create(
    int pki_notificationtest_id,
    multilingual_notificationtest_name_t *obj_notificationtest_name,
    int fki_notificationsubsection_id,
    char *s_notificationtest_function,
    char *s_notificationtest_name_x
);

void notificationtest_response_free(notificationtest_response_t *notificationtest_response);

notificationtest_response_t *notificationtest_response_parseFromJSON(cJSON *notificationtest_responseJSON);

cJSON *notificationtest_response_convertToJSON(notificationtest_response_t *notificationtest_response);

#endif /* _notificationtest_response_H_ */

