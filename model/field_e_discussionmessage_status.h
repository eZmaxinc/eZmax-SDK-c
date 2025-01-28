/*
 * field_e_discussionmessage_status.h
 *
 * The status of the Discussionmessage
 */

#ifndef _field_e_discussionmessage_status_H_
#define _field_e_discussionmessage_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_discussionmessage_status_t field_e_discussionmessage_status_t;


// Enum  for field_e_discussionmessage_status

typedef enum { ezmax_api_definition__full_field_e_discussionmessage_status__NULL = 0, ezmax_api_definition__full_field_e_discussionmessage_status___New, ezmax_api_definition__full_field_e_discussionmessage_status__Edited, ezmax_api_definition__full_field_e_discussionmessage_status__Deleted } ezmax_api_definition__full_field_e_discussionmessage_status__e;

char* field_e_discussionmessage_status_field_e_discussionmessage_status_ToString(ezmax_api_definition__full_field_e_discussionmessage_status__e field_e_discussionmessage_status);

ezmax_api_definition__full_field_e_discussionmessage_status__e field_e_discussionmessage_status_field_e_discussionmessage_status_FromString(char* field_e_discussionmessage_status);

cJSON *field_e_discussionmessage_status_convertToJSON(ezmax_api_definition__full_field_e_discussionmessage_status__e field_e_discussionmessage_status);

ezmax_api_definition__full_field_e_discussionmessage_status__e field_e_discussionmessage_status_parseFromJSON(cJSON *field_e_discussionmessage_statusJSON);

#endif /* _field_e_discussionmessage_status_H_ */

