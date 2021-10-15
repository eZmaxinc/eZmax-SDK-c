/*
 * field_e_ezsignfolder_step.h
 *
 * The signature step of the Ezsignfolder.
 */

#ifndef _field_e_ezsignfolder_step_H_
#define _field_e_ezsignfolder_step_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfolder_step_t field_e_ezsignfolder_step_t;


// Enum  for field_e_ezsignfolder_step

typedef enum { ezmax_api_definition_field_e_ezsignfolder_step__NULL = 0, ezmax_api_definition_field_e_ezsignfolder_step__Unsent, ezmax_api_definition_field_e_ezsignfolder_step__Sent, ezmax_api_definition_field_e_ezsignfolder_step__PartiallySigned, ezmax_api_definition_field_e_ezsignfolder_step__Expired, ezmax_api_definition_field_e_ezsignfolder_step__Completed, ezmax_api_definition_field_e_ezsignfolder_step__Archived } ezmax_api_definition_field_e_ezsignfolder_step__e;

char* field_e_ezsignfolder_step_field_e_ezsignfolder_step_ToString(ezmax_api_definition_field_e_ezsignfolder_step__e field_e_ezsignfolder_step);

ezmax_api_definition_field_e_ezsignfolder_step__e field_e_ezsignfolder_step_field_e_ezsignfolder_step_FromString(char* field_e_ezsignfolder_step);

//cJSON *field_e_ezsignfolder_step_field_e_ezsignfolder_step_convertToJSON(ezmax_api_definition_field_e_ezsignfolder_step__e field_e_ezsignfolder_step);

//ezmax_api_definition_field_e_ezsignfolder_step__e field_e_ezsignfolder_step_field_e_ezsignfolder_step_parseFromJSON(cJSON *field_e_ezsignfolder_stepJSON);

#endif /* _field_e_ezsignfolder_step_H_ */

