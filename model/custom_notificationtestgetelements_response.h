/*
 * custom_notificationtestgetelements_response.h
 *
 * Element Object in the context of Notificationtest
 */

#ifndef _custom_notificationtestgetelements_response_H_
#define _custom_notificationtestgetelements_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_notificationtestgetelements_response_t custom_notificationtestgetelements_response_t;

#include "any_type.h"



typedef struct custom_notificationtestgetelements_response_t {
    int pki_notificationtest_id; //numeric
    char *s_notificationtest_function; // string
    list_t *a_s_variableobject_property; //primitive container
    list_t *a_obj_variableobject; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_notificationtestgetelements_response_t;

__attribute__((deprecated)) custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response_create(
    int pki_notificationtest_id,
    char *s_notificationtest_function,
    list_t *a_s_variableobject_property,
    list_t *a_obj_variableobject
);

void custom_notificationtestgetelements_response_free(custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response);

custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response_parseFromJSON(cJSON *custom_notificationtestgetelements_responseJSON);

cJSON *custom_notificationtestgetelements_response_convertToJSON(custom_notificationtestgetelements_response_t *custom_notificationtestgetelements_response);

#endif /* _custom_notificationtestgetelements_response_H_ */

