/*
 * custom_communicationrecipientsgroup_response.h
 *
 * Generic CommunicationrecipientsGroup Response
 */

#ifndef _custom_communicationrecipientsgroup_response_H_
#define _custom_communicationrecipientsgroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_communicationrecipientsgroup_response_t custom_communicationrecipientsgroup_response_t;

#include "custom_communicationrecipientsrecipient_response.h"



typedef struct custom_communicationrecipientsgroup_response_t {
    char *s_communicationrecipientsgroup_label; // string
    list_t *a_obj_communicationrecipientsrecipient; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_communicationrecipientsgroup_response_t;

__attribute__((deprecated)) custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response_create(
    char *s_communicationrecipientsgroup_label,
    list_t *a_obj_communicationrecipientsrecipient
);

void custom_communicationrecipientsgroup_response_free(custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response);

custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response_parseFromJSON(cJSON *custom_communicationrecipientsgroup_responseJSON);

cJSON *custom_communicationrecipientsgroup_response_convertToJSON(custom_communicationrecipientsgroup_response_t *custom_communicationrecipientsgroup_response);

#endif /* _custom_communicationrecipientsgroup_response_H_ */

