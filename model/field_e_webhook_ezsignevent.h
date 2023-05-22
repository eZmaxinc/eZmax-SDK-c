/*
 * field_e_webhook_ezsignevent.h
 *
 * This Ezsign Event. This property will be set only if the Module is \&quot;Ezsign\&quot;
 */

#ifndef _field_e_webhook_ezsignevent_H_
#define _field_e_webhook_ezsignevent_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_webhook_ezsignevent_t field_e_webhook_ezsignevent_t;


// Enum  for field_e_webhook_ezsignevent

typedef enum { ezmax_api_definition__full_field_e_webhook_ezsignevent__NULL = 0, ezmax_api_definition__full_field_e_webhook_ezsignevent__DocumentCompleted, ezmax_api_definition__full_field_e_webhook_ezsignevent__EzsignsignerAcceptclause, ezmax_api_definition__full_field_e_webhook_ezsignevent__EzsignsignerConnect, ezmax_api_definition__full_field_e_webhook_ezsignevent__FolderCompleted } ezmax_api_definition__full_field_e_webhook_ezsignevent__e;

char* field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent);

ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_FromString(char* field_e_webhook_ezsignevent);

//cJSON *field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_convertToJSON(ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent);

//ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_parseFromJSON(cJSON *field_e_webhook_ezsigneventJSON);

#endif /* _field_e_webhook_ezsignevent_H_ */

