#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/field_pks_ezmaxclient_os.h"
#include "../model/global_ezmaxclient_version_v1_response.h"

// Enum  for GlobalEzmaxclientAPI_globalEzmaxclientVersionV1
typedef enum  { ezmax_api_definition__full_globalEzmaxclientVersionV1__NULL = 0, ezmax_api_definition__full_globalEzmaxclientVersionV1__iOS, ezmax_api_definition__full_globalEzmaxclientVersionV1__iPadOS, ezmax_api_definition__full_globalEzmaxclientVersionV1__macOS, ezmax_api_definition__full_globalEzmaxclientVersionV1__Windows } ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e;


// Retrieve the latest version of the Ezmaxclient
//
// Retrieve the latest version of the Ezmaxclient that is available on the store.
//
global_ezmaxclient_version_v1_response_t*
GlobalEzmaxclientAPI_globalEzmaxclientVersionV1(apiClient_t *apiClient, field_pks_ezmaxclient_os_e pksEzmaxclientOs);


