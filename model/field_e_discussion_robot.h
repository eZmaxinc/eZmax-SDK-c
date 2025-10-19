/*
 * field_e_discussion_robot.h
 *
 * The Robot used for the Discussion.
 */

#ifndef _field_e_discussion_robot_H_
#define _field_e_discussion_robot_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_discussion_robot_t field_e_discussion_robot_t;


// Enum  for field_e_discussion_robot

typedef enum { ezmax_api_definition__full_field_e_discussion_robot__NULL = 0, ezmax_api_definition__full_field_e_discussion_robot__Advanced, ezmax_api_definition__full_field_e_discussion_robot__Normal, ezmax_api_definition__full_field_e_discussion_robot__Support } ezmax_api_definition__full_field_e_discussion_robot__e;

char* field_e_discussion_robot_field_e_discussion_robot_ToString(ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot);

ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot_field_e_discussion_robot_FromString(char* field_e_discussion_robot);

cJSON *field_e_discussion_robot_convertToJSON(ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot);

ezmax_api_definition__full_field_e_discussion_robot__e field_e_discussion_robot_parseFromJSON(cJSON *field_e_discussion_robotJSON);

#endif /* _field_e_discussion_robot_H_ */

