/*
 * field_pks_ezmaxclient_os.h
 *
 * The OS of the system running the application
 */

#ifndef _field_pks_ezmaxclient_os_H_
#define _field_pks_ezmaxclient_os_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_pks_ezmaxclient_os_t field_pks_ezmaxclient_os_t;


// Enum  for field_pks_ezmaxclient_os

typedef enum { ezmax_api_definition__full_field_pks_ezmaxclient_os__NULL = 0, ezmax_api_definition__full_field_pks_ezmaxclient_os__iOS, ezmax_api_definition__full_field_pks_ezmaxclient_os__iPadOS, ezmax_api_definition__full_field_pks_ezmaxclient_os__macOS, ezmax_api_definition__full_field_pks_ezmaxclient_os__Windows } ezmax_api_definition__full_field_pks_ezmaxclient_os__e;

char* field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_ToString(ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os);

ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_FromString(char* field_pks_ezmaxclient_os);

//cJSON *field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_convertToJSON(ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os);

//ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_parseFromJSON(cJSON *field_pks_ezmaxclient_osJSON);

#endif /* _field_pks_ezmaxclient_os_H_ */

