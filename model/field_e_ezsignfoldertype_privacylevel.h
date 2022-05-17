/*
 * field_e_ezsignfoldertype_privacylevel.h
 *
 * The Privacy level of the Ezsignfolder type.  * **User** is for personal folders use and cannot be shared * **Usergroup** is for shared folders and complex permission can be configured to control access
 */

#ifndef _field_e_ezsignfoldertype_privacylevel_H_
#define _field_e_ezsignfoldertype_privacylevel_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfoldertype_privacylevel_t field_e_ezsignfoldertype_privacylevel_t;


// Enum  for field_e_ezsignfoldertype_privacylevel

typedef enum { ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL = 0, ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__User, ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__Usergroup } ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e;

char* field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_FromString(char* field_e_ezsignfoldertype_privacylevel);

//cJSON *field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel);

//ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_parseFromJSON(cJSON *field_e_ezsignfoldertype_privacylevelJSON);

#endif /* _field_e_ezsignfoldertype_privacylevel_H_ */

