/*
 * computed_e_communication_direction.h
 *
 * The direction of the Communication
 */

#ifndef _computed_e_communication_direction_H_
#define _computed_e_communication_direction_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct computed_e_communication_direction_t computed_e_communication_direction_t;


// Enum  for computed_e_communication_direction

typedef enum { ezmax_api_definition__full_computed_e_communication_direction__NULL = 0, ezmax_api_definition__full_computed_e_communication_direction__Outbound, ezmax_api_definition__full_computed_e_communication_direction__Inbound } ezmax_api_definition__full_computed_e_communication_direction__e;

char* computed_e_communication_direction_computed_e_communication_direction_ToString(ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction);

ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction_computed_e_communication_direction_FromString(char* computed_e_communication_direction);

//cJSON *computed_e_communication_direction_computed_e_communication_direction_convertToJSON(ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction);

//ezmax_api_definition__full_computed_e_communication_direction__e computed_e_communication_direction_computed_e_communication_direction_parseFromJSON(cJSON *computed_e_communication_directionJSON);

#endif /* _computed_e_communication_direction_H_ */
