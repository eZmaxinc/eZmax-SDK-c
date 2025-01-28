/*
 * custom_discussionconfiguration_response.h
 *
 * A Custom Discussionconfiguration Object
 */

#ifndef _custom_discussionconfiguration_response_H_
#define _custom_discussionconfiguration_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_discussionconfiguration_response_t custom_discussionconfiguration_response_t;




typedef struct custom_discussionconfiguration_response_t {
    int b_discussionconfiguration_completehistorywhenadded; //boolean
    int b_discussionconfiguration_createallowed; //boolean
    int b_discussionconfiguration_deleteallowed; //boolean
    int b_discussionconfiguration_deletediscussionmessageallowed; //boolean
    int b_discussionconfiguration_editdiscussionmessageallowed; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_discussionconfiguration_response_t;

__attribute__((deprecated)) custom_discussionconfiguration_response_t *custom_discussionconfiguration_response_create(
    int b_discussionconfiguration_completehistorywhenadded,
    int b_discussionconfiguration_createallowed,
    int b_discussionconfiguration_deleteallowed,
    int b_discussionconfiguration_deletediscussionmessageallowed,
    int b_discussionconfiguration_editdiscussionmessageallowed
);

void custom_discussionconfiguration_response_free(custom_discussionconfiguration_response_t *custom_discussionconfiguration_response);

custom_discussionconfiguration_response_t *custom_discussionconfiguration_response_parseFromJSON(cJSON *custom_discussionconfiguration_responseJSON);

cJSON *custom_discussionconfiguration_response_convertToJSON(custom_discussionconfiguration_response_t *custom_discussionconfiguration_response);

#endif /* _custom_discussionconfiguration_response_H_ */

