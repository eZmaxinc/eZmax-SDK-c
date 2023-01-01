/*
 * communication_response_compound_all_of.h
 *
 * 
 */

#ifndef _communication_response_compound_all_of_H_
#define _communication_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_response_compound_all_of_t communication_response_compound_all_of_t;

#include "communicationattachment_response_compound.h"
#include "communicationexternalimage_response_compound.h"
#include "communicationexternalrecipient_response_compound.h"
#include "communicationimage_response_compound.h"
#include "communicationrecipient_response_compound.h"



typedef struct communication_response_compound_all_of_t {
    list_t *a_obj_communicationattachment; //nonprimitive container
    list_t *a_obj_communicationrecipient; //nonprimitive container
    list_t *a_obj_communicationexternalrecipient; //nonprimitive container
    list_t *a_obj_communicationimage; //nonprimitive container
    list_t *a_obj_communicationexternalimage; //nonprimitive container

} communication_response_compound_all_of_t;

communication_response_compound_all_of_t *communication_response_compound_all_of_create(
    list_t *a_obj_communicationattachment,
    list_t *a_obj_communicationrecipient,
    list_t *a_obj_communicationexternalrecipient,
    list_t *a_obj_communicationimage,
    list_t *a_obj_communicationexternalimage
);

void communication_response_compound_all_of_free(communication_response_compound_all_of_t *communication_response_compound_all_of);

communication_response_compound_all_of_t *communication_response_compound_all_of_parseFromJSON(cJSON *communication_response_compound_all_ofJSON);

cJSON *communication_response_compound_all_of_convertToJSON(communication_response_compound_all_of_t *communication_response_compound_all_of);

#endif /* _communication_response_compound_all_of_H_ */

