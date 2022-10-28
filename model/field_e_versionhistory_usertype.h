/*
 * field_e_versionhistory_usertype.h
 *
 * The Usertype by which the Versionhistory should be visible
 */

#ifndef _field_e_versionhistory_usertype_H_
#define _field_e_versionhistory_usertype_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_versionhistory_usertype_t field_e_versionhistory_usertype_t;


// Enum  for field_e_versionhistory_usertype

typedef enum { ezmax_api_definition__full_field_e_versionhistory_usertype__NULL = 0, ezmax_api_definition__full_field_e_versionhistory_usertype__, ezmax_api_definition__full_field_e_versionhistory_usertype__AgentBroker, ezmax_api_definition__full_field_e_versionhistory_usertype__EzsignUser, ezmax_api_definition__full_field_e_versionhistory_usertype__Normal } ezmax_api_definition__full_field_e_versionhistory_usertype__e;

char* field_e_versionhistory_usertype_field_e_versionhistory_usertype_ToString(ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype);

ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype_field_e_versionhistory_usertype_FromString(char* field_e_versionhistory_usertype);

//cJSON *field_e_versionhistory_usertype_field_e_versionhistory_usertype_convertToJSON(ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype);

//ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype_field_e_versionhistory_usertype_parseFromJSON(cJSON *field_e_versionhistory_usertypeJSON);

#endif /* _field_e_versionhistory_usertype_H_ */
