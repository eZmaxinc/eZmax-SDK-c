/*
 * field_e_user_type_sspr.h
 *
 * The user type of the User for SSPR
 */

#ifndef _field_e_user_type_sspr_H_
#define _field_e_user_type_sspr_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_user_type_sspr_t field_e_user_type_sspr_t;


// Enum  for field_e_user_type_sspr

typedef enum { ezmax_api_definition_field_e_user_type_sspr__NULL = 0, ezmax_api_definition_field_e_user_type_sspr__EzsignUser, ezmax_api_definition_field_e_user_type_sspr__Native } ezmax_api_definition_field_e_user_type_sspr__e;

char* field_e_user_type_sspr_field_e_user_type_sspr_ToString(ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr);

ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr_field_e_user_type_sspr_FromString(char* field_e_user_type_sspr);

//cJSON *field_e_user_type_sspr_field_e_user_type_sspr_convertToJSON(ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr);

//ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr_field_e_user_type_sspr_parseFromJSON(cJSON *field_e_user_type_ssprJSON);

#endif /* _field_e_user_type_sspr_H_ */

