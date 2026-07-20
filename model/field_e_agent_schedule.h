/*
 * field_e_agent_schedule.h
 *
 * Agent schedule type.
 */

#ifndef _field_e_agent_schedule_H_
#define _field_e_agent_schedule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_agent_schedule_t field_e_agent_schedule_t;


// Enum  for field_e_agent_schedule

typedef enum { ezmax_api_definition__full_field_e_agent_schedule__NULL = 0, ezmax_api_definition__full_field_e_agent_schedule__Full_time, ezmax_api_definition__full_field_e_agent_schedule__Part_time } ezmax_api_definition__full_field_e_agent_schedule__e;

char* field_e_agent_schedule_field_e_agent_schedule_ToString(ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule);

ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule_field_e_agent_schedule_FromString(char* field_e_agent_schedule);

cJSON *field_e_agent_schedule_convertToJSON(ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule);

ezmax_api_definition__full_field_e_agent_schedule__e field_e_agent_schedule_parseFromJSON(cJSON *field_e_agent_scheduleJSON);

#endif /* _field_e_agent_schedule_H_ */

