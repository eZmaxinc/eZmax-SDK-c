/*
 * field_e_webhook_managementevent.h
 *
 * This Management Event. This property will be set only if the Module is \&quot;Management\&quot;.
 */

#ifndef _field_e_webhook_managementevent_H_
#define _field_e_webhook_managementevent_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_webhook_managementevent_t field_e_webhook_managementevent_t;


// Enum  for field_e_webhook_managementevent

typedef enum { ezmax_api_definition__full_field_e_webhook_managementevent__NULL = 0, ezmax_api_definition__full_field_e_webhook_managementevent__UserCreated, ezmax_api_definition__full_field_e_webhook_managementevent__UserstagedCreated } ezmax_api_definition__full_field_e_webhook_managementevent__e;

char* field_e_webhook_managementevent_field_e_webhook_managementevent_ToString(ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent);

ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent_field_e_webhook_managementevent_FromString(char* field_e_webhook_managementevent);

//cJSON *field_e_webhook_managementevent_field_e_webhook_managementevent_convertToJSON(ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent);

//ezmax_api_definition__full_field_e_webhook_managementevent__e field_e_webhook_managementevent_field_e_webhook_managementevent_parseFromJSON(cJSON *field_e_webhook_managementeventJSON);

#endif /* _field_e_webhook_managementevent_H_ */

